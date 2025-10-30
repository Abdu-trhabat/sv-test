// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// Copyright (C) 2023 Intel Corporation
// SPDX-FileCopyrightText: 2025 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

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

 * @file abst_exception.c

 * @brief FV modeling for exception

 */



#include "fv_utils.h"

#include "fv_env.h"



bool_t fv_exception_tracker_gp;

bool_t fv_exception_tracker_ve;



void tdxfv_abst_exception_init() {

    fv_exception_tracker_gp = false;

    fv_exception_tracker_ve = false;

}



void tdxfv_abst_exception_insert_gp() {

    fv_exception_tracker_gp = true;

}



void tdxfv_abst_exception_insert_ve() {

    fv_exception_tracker_ve = true;

}

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

 * @file abst_vcpu.c

 * @brief FV modeling for vcpu scope metadata, derived from vcpu_scope_metadata.json

 */



#include "fv_utils.h"

#include "fv_env.h"



uint64_t fv_vcpu_cr2;

uint64_t fv_vcpu_dr0;

uint64_t fv_vcpu_dr1;

uint64_t fv_vcpu_dr2;

uint64_t fv_vcpu_dr3;

uint64_t fv_vcpu_dr6;



void tdxfv_abst_vcpu_init() {

    fv_vcpu_cr2 = TDXFV_NONDET_uint64t();

    fv_vcpu_dr0 = TDXFV_NONDET_uint64t();

    fv_vcpu_dr1 = TDXFV_NONDET_uint64t();

    fv_vcpu_dr2 = TDXFV_NONDET_uint64t();

    fv_vcpu_dr3 = TDXFV_NONDET_uint64t();

    fv_vcpu_dr6 = TDXFV_NONDET_uint64t();

}



#define VCPU_METADATA_ACCESS(target) \

    uint64_t tdxfv_abst_vcpu_read_##target() {\

        return fv_vcpu_##target;\

    }\

    void tdxfv_abst_vcpu_write_##target(uint64_t value) {\

        fv_vcpu_##target = value;\

    }



VCPU_METADATA_ACCESS(cr2);

VCPU_METADATA_ACCESS(dr0);

VCPU_METADATA_ACCESS(dr1);

VCPU_METADATA_ACCESS(dr2);

VCPU_METADATA_ACCESS(dr3);

VCPU_METADATA_ACCESS(dr6);



#if 0 // access permission is for direct host VMM / guest TD, not SEAM program

#define VCPU_METADATA_READ(target, host_is_allowed, guest_is_allowed) \

    uint64_t tdxfv_abst_vcpu_read_##target() {\

        if ((fv_is_called_by_host && host_is_allowed) || (fv_is_called_by_guest && guest_is_allowed)) {\

            return fv_vcpu_##target;\

        } else {\

            TDXFV_ASSERT(false);\

            return 0;\

        }\

    }



#define VCPU_METADATA_WRITE(target, host_is_allowed, guest_is_allowed) \

    void tdxfv_abst_vcpu_write_##target(uint64_t value) {\

        if ((fv_is_called_by_host && host_is_allowed) || (fv_is_called_by_guest && guest_is_allowed)) {\

            fv_vcpu_##target = value;\

        } else {\

            TDXFV_ASSERT(false);\

        }\

    }



VCPU_METADATA_READ(cr2, true, false);

VCPU_METADATA_WRITE(cr2, true, false);

VCPU_METADATA_READ(dr0, true, false);

VCPU_METADATA_WRITE(dr0, true, false);

VCPU_METADATA_READ(dr1, true, false);

VCPU_METADATA_WRITE(dr1, true, false);

VCPU_METADATA_READ(dr2, true, false);

VCPU_METADATA_WRITE(dr2, true, false);

VCPU_METADATA_READ(dr3, true, false);

VCPU_METADATA_WRITE(dr3, true, false);

VCPU_METADATA_READ(dr6, true, false);

VCPU_METADATA_WRITE(dr6, true, false);

#endif

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

 * @file fixtures.c

 * @brief Formal verification fixtures

 */



#include "accessors/data_accessors.h"

#include "data_structures/loader_data.h"



#include "fv_utils.h"

#include "fv_env.h"

#include "fv_nondets.h"

#include "invariants/loader_data_invariants.h"

#include "invariants/misc_invariants.h"

#include "invariants/pamt_manager_invariants.h"

#include "invariants/td_control_structures_invariants.h"

#include "invariants/tdx_api_defs_invariants.h"

#include "invariants/tdx_global_data_invariants.h"

#include "invariants/tdx_local_data_invariants.h"

#include "invariants/tdx_tdvps_invariants.h"



void fv_setup_module_state() {



    // TDX state variables

    global_data_fv_ptr = TDXFV_malloc(sizeof(tdx_module_global_t));

    TDXFV_NONDET_struct_tdx_module_global_t(global_data_fv_ptr);



    local_data_fv_ptr = TDXFV_malloc(sizeof(tdx_module_local_t));

    TDXFV_NONDET_struct_tdx_module_local_t(local_data_fv_ptr);



    sysinfo_table_fv_ptr = TDXFV_malloc(sizeof(sysinfo_table_t));

    TDXFV_NONDET_struct_sysinfo_table_t(sysinfo_table_fv_ptr);



    pamt_entry_t* tdr_pamt_entry_ptr = TDXFV_malloc(sizeof(pamt_entry_t));

    TDXFV_NONDET_struct_pamt_entry_t(tdr_pamt_entry_ptr);



    pamt_entry_t* tdvpr_pamt_entry_ptr = TDXFV_malloc(sizeof(pamt_entry_t));

    TDXFV_NONDET_struct_pamt_entry_t(tdvpr_pamt_entry_ptr);



    // Constraints

    TDXFV_ASSUME(fv_invariant_tdx_module_global_t(global_data_fv_ptr));

    TDXFV_ASSUME(fv_invariant_tdx_module_local_t(local_data_fv_ptr));

    TDXFV_ASSUME(fv_invariant_sysinfo_table_t(sysinfo_table_fv_ptr));

    TDXFV_ASSUME(fv_invariant_pamt_entry_t(tdr_pamt_entry_ptr));

    TDXFV_ASSUME(fv_invariant_pamt_entry_t(tdvpr_pamt_entry_ptr));

    TDXFV_ASSUME_EQ_PTR(local_data_fv_ptr->vp_ctx.tdr_pamt_entry, tdr_pamt_entry_ptr);

    TDXFV_ASSUME_EQ_PTR(local_data_fv_ptr->vp_ctx.tdvpr_pamt_entry, tdvpr_pamt_entry_ptr);

    TDXFV_ASSUME(fv_invariant_misc());



    // Shadow variables

    TDXFV_NONDET_struct_gprs_state_t(&shadow_vmm_regs_precall);

    TDXFV_NONDET_struct_gprs_state_t(&shadow_td_regs_precall);

    TDXFV_NONDET_struct_gprs_state_t(&shadow_guest_gpr_state_precall);



    tdxfv_abst_exception_init();

    tdxfv_abst_msr_init();

    tdxfv_abst_vcpu_init();



    fv_is_called_by_host = TDXFV_NONDET_bool();

    fv_is_called_by_guest = TDXFV_NONDET_bool();



    shadow_vmm_regs_precall = local_data_fv_ptr->vmm_regs;

    shadow_td_regs_precall= local_data_fv_ptr->td_regs;

}



void fv_teardown_module_state() {

    pamt_entry_t* tdr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdr_pamt_entry;

    pamt_entry_t* tdvpr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdvpr_pamt_entry;



    free(tdr_pamt_entry_ptr);

    free(tdvpr_pamt_entry_ptr);

    free(sysinfo_table_fv_ptr);

    free(local_data_fv_ptr);

    free(global_data_fv_ptr);

}



void fv_teardown_with_check_module_state() {

    pamt_entry_t* tdr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdr_pamt_entry;

    pamt_entry_t* tdvpr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdvpr_pamt_entry;



    TDXFV_ASSERT(fv_invariant_tdx_module_global_t(global_data_fv_ptr));

    TDXFV_ASSERT(fv_invariant_tdx_module_local_t(local_data_fv_ptr));

    TDXFV_ASSERT(fv_invariant_sysinfo_table_t(sysinfo_table_fv_ptr));

    TDXFV_ASSERT(fv_invariant_pamt_entry_t(tdr_pamt_entry_ptr));

    TDXFV_ASSERT(fv_invariant_pamt_entry_t(tdvpr_pamt_entry_ptr));

    TDXFV_ASSERT(fv_invariant_misc());



    free(tdr_pamt_entry_ptr);

    free(tdvpr_pamt_entry_ptr);

    free(sysinfo_table_fv_ptr);

    free(local_data_fv_ptr);

    free(global_data_fv_ptr);

}



void fv_setup_tdr() {

    tdr_fv_ptr = TDXFV_malloc(sizeof(tdr_t));

    TDXFV_NONDET_struct_tdr_t(tdr_fv_ptr);

    TDXFV_ASSUME(fv_invariant_tdr_t(tdr_fv_ptr));

    TDXFV_ASSUME_EQ_PTR(local_data_fv_ptr->vp_ctx.tdr, tdr_fv_ptr);

}



void fv_teardown_tdr() {

    free(tdr_fv_ptr);

}



void fv_teardown_with_check_tdr() {

    TDXFV_ASSERT(fv_invariant_tdr_t(tdr_fv_ptr));

    free(tdr_fv_ptr);

}



void fv_setup_tdcs() {

    tdcs_fv_ptr = TDXFV_malloc(sizeof(tdcs_t));

    TDXFV_NONDET_struct_tdcs_t(tdcs_fv_ptr);

    TDXFV_ASSUME(fv_invariant_tdcs_t(tdcs_fv_ptr));

    TDXFV_ASSUME_EQ_PTR(local_data_fv_ptr->vp_ctx.tdcs, tdcs_fv_ptr);

}



void fv_teardown_tdcs() {

    free(tdcs_fv_ptr);

}



void fv_teardown_with_check_tdcs() {

    TDXFV_ASSERT(fv_invariant_tdcs_t(tdcs_fv_ptr));

    free(tdcs_fv_ptr);

}



void fv_setup_tdvps() {

    tdvps_fv_ptr = TDXFV_malloc(sizeof(tdvps_t));

    TDXFV_NONDET_struct_tdvps_t(tdvps_fv_ptr);

    TDXFV_ASSUME(fv_invariant_tdvps_t(tdvps_fv_ptr));

    TDXFV_ASSUME_EQ_PTR(local_data_fv_ptr->vp_ctx.tdvps, tdvps_fv_ptr);



    shadow_guest_gpr_state_precall = tdvps_fv_ptr->guest_state.gpr_state;

}



void fv_teardown_tdvps() {

    free(tdvps_fv_ptr);

}



void fv_teardown_with_check_tdvps() {

    TDXFV_ASSERT(fv_invariant_tdvps_t(tdvps_fv_ptr));

    free(tdvps_fv_ptr);

}



void fv_setup_tdmr_info() {

    bool_t all_tdmr_info_entries_are_valid = true;

    for (int i = 0; i < MAX_TDMRS; i++) {

        all_tdmr_info_entries_are_valid &= fv_invariant_tdmr_info_entry_t(&global_data_fv_ptr->tdmr_info_copy[i]);

    }



    bool_t all_tdmr_sorted_and_non_overlapping = true;

    for (int i = 1; i < MAX_TDMRS; i++) {

        all_tdmr_sorted_and_non_overlapping &= (

            global_data_fv_ptr->tdmr_info_copy[i-1].tdmr_base + global_data_fv_ptr->tdmr_info_copy[i-1].tdmr_size <= global_data_fv_ptr->tdmr_info_copy[i].tdmr_base

        );

    }



    // XXX allocate tdmr regions



    TDXFV_ASSUME(

        all_tdmr_info_entries_are_valid &&

        all_tdmr_sorted_and_non_overlapping

    );

}



void fv_teardown_tdmr_info() {

    bool_t all_tdmr_info_entries_are_valid = true;

    for (int i = 0; i < MAX_TDMRS; i++) {

        all_tdmr_info_entries_are_valid &= fv_invariant_tdmr_info_entry_t(&global_data_fv_ptr->tdmr_info_copy[i]);

    }



    bool_t all_tdmr_sorted_and_non_overlapping = true;

    for (int i = 1; i < MAX_TDMRS; i++) {

        all_tdmr_sorted_and_non_overlapping &= (

            global_data_fv_ptr->tdmr_info_copy[i-1].tdmr_base + global_data_fv_ptr->tdmr_info_copy[i-1].tdmr_size <= global_data_fv_ptr->tdmr_info_copy[i].tdmr_base

        );

    }



    // XXX free tdmr regions

}



void fv_teardown_with_check_tdmr_info() {

    bool_t all_tdmr_info_entries_are_valid = true;

    for (int i = 0; i < MAX_TDMRS; i++) {

        all_tdmr_info_entries_are_valid &= fv_invariant_tdmr_info_entry_t(&global_data_fv_ptr->tdmr_info_copy[i]);

    }



    bool_t all_tdmr_sorted_and_non_overlapping = true;

    for (int i = 1; i < MAX_TDMRS; i++) {

        all_tdmr_sorted_and_non_overlapping &= (

            global_data_fv_ptr->tdmr_info_copy[i-1].tdmr_base + global_data_fv_ptr->tdmr_info_copy[i-1].tdmr_size <= global_data_fv_ptr->tdmr_info_copy[i].tdmr_base

        );

    }



    TDXFV_ASSERT(

        all_tdmr_info_entries_are_valid &&

        all_tdmr_sorted_and_non_overlapping

    );



    // XXX free tdmr regions

}

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

 * @file initialization.c

 * @brief Initialization and definition of FV setup global variables

 */



#include "accessors/data_accessors.h"

#include "data_structures/loader_data.h"



#include "fv_utils.h"

#include "fv_env.h"

#include "fv_nondets.h"



//

// TDX state variables

//



tdx_module_local_t* local_data_fv_ptr;

tdx_module_global_t* global_data_fv_ptr;

sysinfo_table_t* sysinfo_table_fv_ptr;



tdr_t* tdr_fv_ptr;

tdcs_t* tdcs_fv_ptr;

tdvps_t* tdvps_fv_ptr;



//

// Shadow variables

//



gprs_state_t shadow_td_regs_precall;

gprs_state_t shadow_vmm_regs_precall;

gprs_state_t shadow_guest_gpr_state_precall;



bool_t fv_is_called_by_host;

bool_t fv_is_called_by_guest;



//

// Initialization methods

//



void init_vmm_dispatcher() {

    fv_is_called_by_host = true;

    fv_is_called_by_guest = false;



    // selected conditions from tdx_vmm_dispatcher

    tdx_module_local_t* local_data = get_local_data();

    tdx_module_global_t* global_data = get_global_data();

    tdx_leaf_and_version_t leaf_opcode;

    leaf_opcode.raw = local_data->vmm_regs.rax;



    bool_t lp_is_busy = local_data->lp_is_busy == true;



    bool_t leaf_opcode_reserved_is_valid = (

        (leaf_opcode.reserved0 == 0) &&

        (leaf_opcode.reserved1 == 0)

    );



    bool_t leaf_opcode_with_multi_versions = (

        (leaf_opcode.version == 0) ||

        (leaf_opcode.leaf == TDH_MEM_PAGE_PROMOTE_LEAF) ||

        (leaf_opcode.leaf == TDH_MEM_SEPT_ADD_LEAF) ||

        (leaf_opcode.leaf == TDH_MEM_SEPT_REMOVE_LEAF) ||

        (leaf_opcode.leaf == TDH_MNG_RD_LEAF) ||

        (leaf_opcode.leaf == TDH_VP_RD_LEAF) ||

        (leaf_opcode.leaf == TDH_VP_INIT_LEAF)

    );



    bool_t module_in_shutdown_state = (

        (global_data->global_state.sys_state != SYS_SHUTDOWN) ||

        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF)

    );



    bool_t module_not_in_ready_state = (

        (global_data->global_state.sys_state == SYS_READY) ||

        (leaf_opcode.leaf == TDH_SYS_INFO_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_RD_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_RDALL_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_INIT_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_LP_INIT_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_CONFIG_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_KEY_CONFIG_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF) ||

        (leaf_opcode.leaf == TDH_SYS_UPDATE_LEAF)

    );



    TDXFV_ASSUME(

        lp_is_busy &&

        leaf_opcode_reserved_is_valid &&

        leaf_opcode_with_multi_versions &&

        module_in_shutdown_state &&

        module_not_in_ready_state

    );

}



void init_tdcall() {

    fv_is_called_by_host = false;

    fv_is_called_by_guest = true;



    // Selected conditions from td dispatcher

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    bool_t valid_vm_id = (

        tdx_local_data_ptr->vp_ctx.tdvps->management.curr_vm == tdx_local_data_ptr->current_td_vm_id

    );



    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;

    bool_t save_td_gpr_state = (

        tdvps_ptr->guest_state.gpr_state.rax == tdx_local_data_ptr->td_regs.rax &&

        tdvps_ptr->guest_state.gpr_state.rcx == tdx_local_data_ptr->td_regs.rcx &&

        tdvps_ptr->guest_state.gpr_state.rdx == tdx_local_data_ptr->td_regs.rdx &&

        tdvps_ptr->guest_state.gpr_state.rbx == tdx_local_data_ptr->td_regs.rbx &&

        tdvps_ptr->guest_state.gpr_state.rbp == tdx_local_data_ptr->td_regs.rbp &&

        tdvps_ptr->guest_state.gpr_state.rsi == tdx_local_data_ptr->td_regs.rsi &&

        tdvps_ptr->guest_state.gpr_state.rdi == tdx_local_data_ptr->td_regs.rdi &&

        tdvps_ptr->guest_state.gpr_state.r8  == tdx_local_data_ptr->td_regs.r8 &&

        tdvps_ptr->guest_state.gpr_state.r9  == tdx_local_data_ptr->td_regs.r9 &&

        tdvps_ptr->guest_state.gpr_state.r10 == tdx_local_data_ptr->td_regs.r10 &&

        tdvps_ptr->guest_state.gpr_state.r11 == tdx_local_data_ptr->td_regs.r11 &&

        tdvps_ptr->guest_state.gpr_state.r12 == tdx_local_data_ptr->td_regs.r12 &&

        tdvps_ptr->guest_state.gpr_state.r13 == tdx_local_data_ptr->td_regs.r13 &&

        tdvps_ptr->guest_state.gpr_state.r14 == tdx_local_data_ptr->td_regs.r14 &&

        tdvps_ptr->guest_state.gpr_state.r15 == tdx_local_data_ptr->td_regs.r15

    );



    // Selected conditions from tdcall

    tdx_leaf_and_version_t leaf_opcode;

    leaf_opcode.raw = tdx_local_data_ptr->td_regs.rax;



    bool_t leaf_opcode_reserved_is_valid = (

        (leaf_opcode.reserved0 == 0) &&

        (leaf_opcode.reserved1 == 0)

    );



    bool_t leaf_opcode_with_multi_versions = (

        (leaf_opcode.version == 0) ||

        (leaf_opcode.leaf == TDG_VM_RD_LEAF)

    );



    TDXFV_ASSUME(

        valid_vm_id &&

        save_td_gpr_state &&

        leaf_opcode_reserved_is_valid &&

        leaf_opcode_with_multi_versions

    );

}



void init_handoff_data_region()

{

    //  1. Allocate handoff data region based on the symbolic value of #handoff pages in global module

    //  Size: (#handoff pages + 1) * TDX page size in bytes (4 KB)

    tdx_module_global_t *global_data = get_global_data();

    size_t data_rgn_size = (global_data->num_handoff_pages + 1) * TDX_PAGE_SIZE_IN_BYTES;

    // Although data_rgn_size is symbolic because # of handoff pages is symbolic, KLEE will pick one concrete value for malloc

    void *data_rgn_base = TDXFV_malloc(data_rgn_size);

    // Make the content in the data region symbolic (for KLEE, it picks a fixed size)

    TDXFV_NONDET_array_1D_unsigned_char(data_rgn_base, data_rgn_size);



    // 2. Constrain the metadata in sysinfo_table using assume

    sysinfo_table_t *sysinfo_table = get_sysinfo_table();

    TDXFV_ASSUME_EQ_PTR(sysinfo_table->data_rgn_base, (uint64_t)(data_rgn_base));

    TDXFV_ASSUME(sysinfo_table->data_rgn_size == (uint64_t)(data_rgn_size));



    // 3. Constrain the header of the handoff data using assume

    handoff_data_header_t *handoff_data_header = (handoff_data_header_t *)sysinfo_table->data_rgn_base;

    TDXFV_ASSUME(handoff_data_header->size == sysinfo_table->data_rgn_size - sizeof(handoff_data_header_t));

}



void free_handoff_data_region()

{

    sysinfo_table_t *sysinfo_table = get_sysinfo_table();

    free((void *)(sysinfo_table->data_rgn_base));

}



// TDH.MEM.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : No

//   TDMR  : Yes

void init_tdh_mem_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdmr_info();

#endif

    init_vmm_dispatcher();

}



void close_tdh_mem_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdmr_info();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdh_mem_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.MR.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : No

//   TDMR  : No (except TDH.MR.EXTEND)

void init_tdh_mr_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

#endif

    init_vmm_dispatcher();

}



void close_tdh_mr_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdh_mr_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.VP.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : Yes

//   TDMR  : No

void init_tdh_vp_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

#endif

    init_vmm_dispatcher();

}



void close_tdh_vp_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdh_vp_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.MNG.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : No

//   TDMR  : No

void init_tdh_mng_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

#endif

    init_vmm_dispatcher();

}



void close_tdh_mng_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdh_mng_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.PHYMEM.*

//   TDR   : No

//   TDCS  : No

//   TDVPS : No

//   TDMR  : No (except TDH.PHYMEM.PAGE.RDMD, TDH.PHYMEM.PAGE.RECLAIM)

void init_tdh_phymem_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

#endif

    init_vmm_dispatcher();

}



void close_tdh_phymem_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

#endif

    fv_teardown_module_state();

}



void close_tdh_phymem_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

#endif

    fv_teardown_with_check_module_state();

}



void init_tdh_phymem_reclaim() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdmr_info();

#endif

    init_vmm_dispatcher();

}



void close_tdh_phymem_reclaim() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdmr_info();

#endif

    fv_teardown_module_state();

}



void close_tdh_phymem_reclaim_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdmr_info();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.SYS.*

//   TDR   : No

//   TDCS  : No

//   TDVPS : No

//   TDMR  : No (except TDH.SYS.CONFIG, TDH.SYS.TDMR.INIT)

void init_tdh_sys_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

#endif

    init_vmm_dispatcher();

}



void close_tdh_sys_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

#endif

    fv_teardown_module_state();

}



void close_tdh_sys_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

#endif

    fv_teardown_with_check_module_state();

}



void init_tdh_sys_config() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdmr_info();

#endif

    init_vmm_dispatcher();

}



void close_tdh_sys_config() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdmr_info();

#endif

    fv_teardown_module_state();

}



void close_tdh_sys_config_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdmr_info();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.SERVTD.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : No

//   TDMR  : No

void init_tdh_servtd_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

#endif

    init_vmm_dispatcher();

}



void close_tdh_servtd_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdh_servtd_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.EXPORT.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : No (except TDH.EXPORT.STATE.VP)

//   TDMR  : No

void init_tdh_export_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

#endif

    init_vmm_dispatcher();

}



void close_tdh_export_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdh_export_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDH.IMPORT.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : No (except TDH.IMPORT.STATE.VP)

//   TDMR  : No

void init_tdh_import_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

#endif

    init_vmm_dispatcher();

}



void close_tdh_import_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdh_import_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDG.VP.*

//   TDR   : No

//   TDCS  : Yes

//   TDVPS : Yes

//   TDMR  : No

void init_tdg_vp_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

#endif

    init_tdcall();

}



void close_tdg_vp_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdg_vp_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDG.MR.*

//   TDR   : No

//   TDCS  : No (except TDG.MR.REPORT, TDG.MR.RTMR.EXTEND, TDG.MR.KEY.GET)

//   TDVPS : No (TBD)

//   TDMR  : No

void init_tdg_mr_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdvps();

#endif

    init_tdcall();

}



void close_tdg_mr_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdvps();

#endif

    fv_teardown_module_state();

}



void close_tdg_mr_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdvps();

#endif

    fv_teardown_with_check_module_state();

}



void init_tdg_mr_report() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

#endif

    init_tdcall();

}



void close_tdg_mr_report() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#endif

    fv_teardown_module_state();

}



void close_tdg_mr_report_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#endif

    fv_teardown_with_check_module_state();

}



// TDG.MEM.PAGE.*

//   TDR   : No

//   TDCS  : No

//   TDVPS : No (TBD)

//   TDMR  : Yes

void init_tdg_mem_page_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#endif

    init_tdcall();

}



void close_tdg_mem_page_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

#endif

    fv_teardown_module_state();

}



void close_tdg_mem_page_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

#endif

    fv_teardown_with_check_module_state();

}



// TDG.VM.*

//   TDR   : No

//   TDCS  : Yes

//   TDVPS : No (TBD)

//   TDMR  : No

void init_tdg_vm_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdcs();

    fv_setup_tdvps();

#endif

    init_tdcall();

}



void close_tdg_vm_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdvps();

    fv_teardown_tdcs();

#endif

    fv_teardown_module_state();

}



void close_tdg_vm_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

#endif

    fv_teardown_with_check_module_state();

}



// TDG.SYS.*

//   TDR   : No

//   TDCS  : No

//   TDVPS : No (TBD)

//   TDMR  : No

void init_tdg_sys_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdvps();

#endif

    init_tdcall();

}



void close_tdg_sys_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdvps();

#endif

    fv_teardown_module_state();

}



void close_tdg_sys_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdvps();

#endif

    fv_teardown_with_check_module_state();

}



// TDG.SERVTD.*

//   TDR   : Yes

//   TDCS  : Yes

//   TDVPS : No (TBD)

//   TDMR  : No

void init_tdg_servtd_xxx() {

    fv_setup_module_state();

#ifdef TDXFV_EAGER_INIT

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

    fv_setup_tdmr_info();

#else

    fv_setup_tdr();

    fv_setup_tdcs();

    fv_setup_tdvps();

#endif

    init_tdcall();

}



void close_tdg_servtd_xxx() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_tdmr_info();

    fv_teardown_tdvps();

    fv_teardown_tdcs();

    fv_teardown_tdr();

#else

    fv_teardown_tdvps();

    fv_teardown_tdcs();

#endif

    fv_teardown_module_state();

}



void close_tdg_servtd_xxx_with_check() {

#ifdef TDXFV_EAGER_INIT

    fv_teardown_with_check_tdmr_info();

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

    fv_teardown_with_check_tdr();

#else

    fv_teardown_with_check_tdvps();

    fv_teardown_with_check_tdcs();

#endif

    fv_teardown_with_check_module_state();

}

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

 *  This File is Automatically generated by the TDX xls extract tool

 *  Spreadsheet Format Version - '7'

 **/



#include "auto_gen/cpuid_configurations.h"



// Lookup table first MAX_NUM_CPUID_CONFIG entries will be in the same order as in cpuid_configurable table



const cpuid_lookup_t cpuid_lookup[MAX_NUM_CPUID_LOOKUP] = {

 [10] = { .leaf_subleaf = {.leaf = 0x0, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_mask = { .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .verify_value = { .ebx = 0x756e6547, .ecx = 0x6c65746e, .edx = 0x49656e69 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed1 = { .eax = 0x23 },

  .fixed0_or_dynamic = { .eax = 0xffffffdc },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [0] = { .leaf_subleaf = {.leaf = 0x1, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_mask = { .ebx = 0xff00, .ecx = 0x47faa217, .edx = 0x1fa9fbff },

  .verify_value = { .ebx = 0x800, .ecx = 0x47faa217, .edx = 0x1fa9fbff },

  .verify_same = { .eax = 0xf000c000, .ebx = 0xffff, .ecx = 0xf7ffff9f, .edx = 0xffffffff },

  .fixed1 = { .ecx = 0x80000000, .edx = 0x200 },

  .fixed0_or_dynamic = { .eax = 0xf000c000, .ebx = 0xff0000ff, .ecx = 0x8010060, .edx = 0x40120400 },

  .config_index = 0

  },

 [11] = { .leaf_subleaf = {.leaf = 0x3, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [1] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x0},

  .valid_entry = true,

  .verify_mask = { .ebx = 0xfff },

  .verify_value = { .ebx = 0x3f },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0x4 },

  .config_index = 1

  },

 [2] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x1},

  .valid_entry = true,

  .verify_mask = { .ebx = 0xfff },

  .verify_value = { .ebx = 0x3f },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0x4 },

  .config_index = 2

  },

 [3] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x2},

  .valid_entry = true,

  .verify_mask = { .ebx = 0xfff },

  .verify_value = { .ebx = 0x3f },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0x4 },

  .config_index = 3

  },

 [4] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x3},

  .valid_entry = true,

  .verify_mask = { .eax = 0xe0, .ebx = 0xfff, .edx = 0x1 },

  .verify_value = { .eax = 0x60, .ebx = 0x3f, .edx = 0x0 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0xfffffff8 },

  .config_index = 4

  },

 [12] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x4},

  .valid_entry = true,

  .verify_mask = { .eax = 0x1f },

  .verify_value = { .eax = 0x0 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [63] = { .leaf_subleaf = {.leaf = 0x5, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xffff0000, .ebx = 0xffff0000, .ecx = 0xfffffffc },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [13] = { .leaf_subleaf = {.leaf = 0x6, .subleaf = 0xffffffff},

  .valid_entry = true,

  .faulting = true,

  .verify_mask = { .eax = 0x800000 },

  .verify_value = { .eax = 0x0 },

  .verify_same = { .eax = 0x800000 },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [5] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x0},

  .valid_entry = true,

  .verify_mask = { .eax = 0xffffffff, .ebx = 0x219424c3, .ecx = 0x99000000, .edx = 0xfc082600 },

  .verify_value = { .eax = 0x2, .ebx = 0x219424c3, .ecx = 0x99000000, .edx = 0xfc080400 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xfffffffb, .ecx = 0xbfc1ff6f, .edx = 0xffebffff },

  .fixed0_or_dynamic = { .ebx = 0x404006, .ecx = 0x643e8010, .edx = 0x2298c3 },

  .config_index = 5

  },

 [6] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x1},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xfbffe28f, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xfffffbcf },

  .config_index = 6

  },

 [14] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x2},

  .valid_entry = true,

  .verify_mask = { .edx = 0x17 },

  .verify_value = { .edx = 0x17 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffc0 },

  .config_index = 10

  },

 [15] = { .leaf_subleaf = {.leaf = 0x8, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [7] = { .leaf_subleaf = {.leaf = 0xa, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_mask = { .eax = 0xff00, .ecx = 0xfffffff0, .edx = 0x8000 },

  .verify_value = { .eax = 0x800, .ecx = 0x0, .edx = 0x8000 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffff6000 },

  .config_index = 7

  },

 [64] = { .leaf_subleaf = {.leaf = 0xb, .subleaf = 0x0},

  .valid_entry = true,

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [65] = { .leaf_subleaf = {.leaf = 0xb, .subleaf = 0x1},

  .valid_entry = true,

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [66] = { .leaf_subleaf = {.leaf = 0xb, .subleaf = 0x2},

  .valid_entry = true,

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0, .edx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [16] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x0},

  .valid_entry = true,

  .verify_mask = { .eax = 0x3 },

  .verify_value = { .eax = 0x3 },

  .verify_same = { .eax = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xfff9fd18, .ebx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [17] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x1},

  .valid_entry = true,

  .verify_mask = { .eax = 0xf, .ecx = 0x1800 },

  .verify_value = { .eax = 0xf, .ecx = 0x1800 },

  .verify_same = { .eax = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffffffff, .ecx = 0xffff26ff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [18] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x2},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [19] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x3},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [20] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x4},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [21] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x5},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [22] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x6},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [23] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x7},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [24] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x8},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [25] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x9},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [26] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xa},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [27] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xb},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [28] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xc},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [29] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xd},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [30] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xe},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [31] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xf},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [32] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x10},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [33] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x11},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [34] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x12},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [35] = { .leaf_subleaf = {.leaf = 0xe, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [36] = { .leaf_subleaf = {.leaf = 0x11, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [37] = { .leaf_subleaf = {.leaf = 0x12, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [38] = { .leaf_subleaf = {.leaf = 0x13, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [39] = { .leaf_subleaf = {.leaf = 0x14, .subleaf = 0x0},

  .valid_entry = true,

  .verify_mask = { .eax = 0xffffffff },

  .verify_value = { .eax = 0x1 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .ebx = 0xfffffe00, .ecx = 0x7ffffff0, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [40] = { .leaf_subleaf = {.leaf = 0x14, .subleaf = 0x1},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xfff8, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [41] = { .leaf_subleaf = {.leaf = 0x15, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed1 = { .eax = 0x1, .ecx = 0x17d7840 },

  .fixed0_or_dynamic = { .eax = 0xfffffffe, .ecx = 0xfe8287bf, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [42] = { .leaf_subleaf = {.leaf = 0x19, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xfffffffe, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xfffffff8, .ebx = 0xffffffeb, .ecx = 0xfffffffd, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [67] = { .leaf_subleaf = {.leaf = 0x1a, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [8] = { .leaf_subleaf = {.leaf = 0x1c, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = 8

  },

 [43] = { .leaf_subleaf = {.leaf = 0x1d, .subleaf = 0x0},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [44] = { .leaf_subleaf = {.leaf = 0x1d, .subleaf = 0x1},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [45] = { .leaf_subleaf = {.leaf = 0x1e, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [46] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x0},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = 12

  },

 [47] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x1},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = 13

  },

 [48] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x2},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = 14

  },

 [49] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x3},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = 15

  },

 [50] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x4},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = 16

  },

 [51] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x5},

  .valid_entry = true,

  .verify_mask = { .ecx = 0xff00 },

  .verify_value = { .ecx = 0x0 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },

  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },

  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },

  .config_index = 17

  },

 [52] = { .leaf_subleaf = {.leaf = 0x20, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [53] = { .leaf_subleaf = {.leaf = 0x21, .subleaf = 0x0},

  .valid_entry = true,

  .fixed1 = { .eax = 0x0, .ebx = 0x65746e49, .ecx = 0x20202020, .edx = 0x5844546c },

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0x9a8b91b6, .ecx = 0xdfdfdfdf, .edx = 0xa7bbab93 },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [58] = { .leaf_subleaf = {.leaf = 0x22, .subleaf = 0xffffffff},

  .valid_entry = true,

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [59] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x0},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xfffffff0, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = 11

  },

 [60] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x1},

  .valid_entry = true,

  .verify_mask = { .eax = 0xffffff00, .ebx = 0xfffffff0 },

  .verify_value = { .eax = 0x0, .ebx = 0x0 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [61] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x2},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [62] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x3},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [54] = { .leaf_subleaf = {.leaf = 0x80000000, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed1 = { .eax = 0x80000008 },

  .fixed0_or_dynamic = { .eax = 0x7ffffff7, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [55] = { .leaf_subleaf = {.leaf = 0x80000001, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_mask = { .ecx = 0x121, .edx = 0x2c100800 },

  .verify_value = { .ecx = 0x121, .edx = 0x2c100800 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xfffffede, .edx = 0xd3efffff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [56] = { .leaf_subleaf = {.leaf = 0x80000006, .subleaf = 0xffffffff},

  .valid_entry = true,

  .faulting = true,

  .verify_mask = { .ecx = 0xff },

  .verify_value = { .ecx = 0x40 },

  .verify_same = { .ecx = 0xff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [57] = { .leaf_subleaf = {.leaf = 0x80000007, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_mask = { .edx = 0x100 },

  .verify_value = { .edx = 0x100 },

  .verify_same = { .edx = 0x100 },

  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xfffffeff },

  .config_index = CPUID_CONFIG_NULL_IDX

  },

 [9] = { .leaf_subleaf = {.leaf = 0x80000008, .subleaf = 0xffffffff},

  .valid_entry = true,

  .verify_mask = { .eax = 0xff, .ebx = 0x200 },

  .verify_value = { .eax = 0x34, .ebx = 0x200 },

  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .fixed0_or_dynamic = { .eax = 0xffff0000, .ebx = 0xfffffdff, .ecx = 0xffffffff, .edx = 0xffffffff },

  .config_index = 9

  }

};



const cpuid_configurable_t cpuid_configurable[MAX_NUM_CPUID_CONFIG] = {

 [0] = { .leaf_subleaf = {.leaf = 0x1, .subleaf = 0xffffffff},

  .valid_entry = true,

  .config_direct = { .eax = 0xfff3fff, .ebx = 0xff0000 },

  .allow_direct = { .ecx = 0x31044d88, .edx = 0xb8440000 },

  .lookup_index = 0

  },

 [1] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x0},

  .valid_entry = true,

  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0xfffffffb },

  .lookup_index = 1

  },

 [2] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x1},

  .valid_entry = true,

  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0xfffffffb },

  .lookup_index = 2

  },

 [3] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x2},

  .valid_entry = true,

  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0xfffffffb },

  .lookup_index = 3

  },

 [4] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x3},

  .valid_entry = true,

  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0x7 },

  .lookup_index = 4

  },

 [5] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x0},

  .valid_entry = true,

  .allow_direct = { .ebx = 0xdc2b9b18, .ecx = 0x2417f65, .edx = 0x5411c },

  .lookup_index = 5

  },

 [6] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x1},

  .valid_entry = true,

  .allow_direct = { .eax = 0x4001d30, .edx = 0x430 },

  .lookup_index = 6

  },

 [10] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x2},

  .valid_entry = true,

  .allow_direct = { .edx = 0x28 },

  .lookup_index = 14

  },

 [7] = { .leaf_subleaf = {.leaf = 0xa, .subleaf = 0xffffffff},

  .valid_entry = true,

  .lookup_index = 7

  },

 [8] = { .leaf_subleaf = {.leaf = 0x1c, .subleaf = 0xffffffff},

  .valid_entry = true,

  .allow_direct = { .eax = 0xff },

  .lookup_index = 8

  },

 [12] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x0},

  .valid_entry = true,

  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },

  .lookup_index = 46

  },

 [13] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x1},

  .valid_entry = true,

  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },

  .lookup_index = 47

  },

 [14] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x2},

  .valid_entry = true,

  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },

  .lookup_index = 48

  },

 [15] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x3},

  .valid_entry = true,

  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },

  .lookup_index = 49

  },

 [16] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x4},

  .valid_entry = true,

  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },

  .lookup_index = 50

  },

 [17] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x5},

  .valid_entry = true,

  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },

  .lookup_index = 51

  },

 [11] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x0},

  .valid_entry = true,

  .allow_direct = { .eax = 0xf },

  .lookup_index = 59

  },

 [9] = { .leaf_subleaf = {.leaf = 0x80000008, .subleaf = 0xffffffff},

  .valid_entry = true,

  .allow_direct = { .ebx = 0x200 },

  .lookup_index = 9

  }

};



const cpuid_config_return_values_t xfam_mask_0x1_0xffffffff[XCR0_MAX_VALID_BIT + 1] = {



    [2]={ .ecx = 0x30001000  } ,



};



const cpuid_config_return_values_t xfam_mask_0x7_0x0[XCR0_MAX_VALID_BIT + 1] = {



    [2]={ .ebx = 0x20 , .ecx = 0x600  } ,

    [5]={ .ebx = 0xdc230000 , .ecx = 0x5842 , .edx = 0x80010c  } ,

    [6]={ .ebx = 0xdc230000 , .ecx = 0x5842 , .edx = 0x80010c  } ,

    [7]={ .ebx = 0xdc230000 , .ecx = 0x5842 , .edx = 0x80010c  } ,

    [8]={ .ebx = 0x2000000  } ,

    [9]={ .ecx = 0x8  } ,

    [11]={ .ecx = 0x80 , .edx = 0x100000  } ,

    [12]={ .ecx = 0x80 , .edx = 0x100000  } ,

    [14]={ .edx = 0x20  } ,

    [15]={ .edx = 0x80000  } ,

    [17]={ .edx = 0x3400000  } ,

    [18]={ .edx = 0x3400000  } ,



};



const cpuid_config_return_values_t xfam_mask_0x7_0x1[XCR0_MAX_VALID_BIT + 1] = {



    [2]={ .eax = 0x10 , .edx = 0x430  } ,

    [5]={ .eax = 0x20  } ,

    [6]={ .eax = 0x20  } ,

    [7]={ .eax = 0x20  } ,



};



const cpuid_config_return_values_t xfam_mask_0xd_0x0[XCR0_MAX_VALID_BIT + 1] = {



    [2]={ .eax = 0x4  } ,

    [5]={ .eax = 0xe0  } ,

    [6]={ .eax = 0xe0  } ,

    [7]={ .eax = 0xe0  } ,

    [9]={ .eax = 0x200  } ,

    [17]={ .eax = 0x60000  } ,

    [18]={ .eax = 0x60000  } ,



};



const cpuid_config_return_values_t xfam_mask_0xd_0x1[XCR0_MAX_VALID_BIT + 1] = {



    [8]={ .ecx = 0x100  } ,

    [11]={ .ecx = 0x1800  } ,

    [12]={ .ecx = 0x1800  } ,

    [14]={ .ecx = 0x4000  } ,

    [15]={ .ecx = 0x8000  } ,



};





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

 *  This File is Automatically generated by the TDX xls extract tool

 *  Spreadsheet Format Version - '2'

 **/



#include "auto_gen/global_sys_fields_lookup.h"





const md_lookup_t global_sys_lookup[MAX_NUM_GLOBAL_SYS_LOOKUP] = {

 {

   // NUM_PKGS // 0

   .field_id =  { .raw  = 0x0000000200000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // PKG_FMS // 1

   .field_id =  { .raw  = 0x0000000200000001 },

   .num_of_fields = 8, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // VENDOR_ID // 2

   .field_id =  { .raw  = 0x0800000200000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // BUILD_DATE // 3

   .field_id =  { .raw  = 0x8800000200000001 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // BUILD_NUM // 4

   .field_id =  { .raw  = 0x8800000100000002 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // MINOR_VERSION // 5

   .field_id =  { .raw  = 0x0800000100000003 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // MAJOR_VERSION // 6

   .field_id =  { .raw  = 0x0800000100000004 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // UPDATE_VERSION // 7

   .field_id =  { .raw  = 0x0800000100000005 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // INTERNAL_VERSION // 8

   .field_id =  { .raw  = 0x0800000100000006 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // MODULE_HV // 9

   .field_id =  { .raw  = 0x8900000100000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIN_UPDATE_HV // 10

   .field_id =  { .raw  = 0x8900000100000001 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NO_DOWNGRADE // 11

   .field_id =  { .raw  = 0x8900000000000002 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_HANDOFF_PAGES // 12

   .field_id =  { .raw  = 0x8900000100000003 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // HANDOFF_DATA_VALID // 13

   .field_id =  { .raw  = 0x8900000000000004 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // HANDOFF_DATA_HV // 14

   .field_id =  { .raw  = 0x8900000100000005 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // HANDOFF_DATA_SIZE // 15

   .field_id =  { .raw  = 0x8900000200000006 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // SYS_ATTRIBUTES // 16

   .field_id =  { .raw  = 0x0A00000200000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // NUM_TDX_FEATURES // 17

   .field_id =  { .raw  = 0x0A00000000000001 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // TDX_FEATURES0 // 18

   .field_id =  { .raw  = 0x0A00000300000008 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_CBO 

 },

 {

   // NUM_CMRS // 19

   .field_id =  { .raw  = 0x9000000100000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // CMR_BASE // 20

   .field_id =  { .raw  = 0x9000000300000080 },

   .num_of_fields = 32, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // CMR_SIZE // 21

   .field_id =  { .raw  = 0x9000000300000100 },

   .num_of_fields = 32, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MAX_TDMRS // 22

   .field_id =  { .raw  = 0x9100000100000008 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MAX_RESERVED_PER_TDMR // 23

   .field_id =  { .raw  = 0x9100000100000009 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // PAMT_4K_ENTRY_SIZE // 24

   .field_id =  { .raw  = 0x9100000100000010 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // PAMT_2M_ENTRY_SIZE // 25

   .field_id =  { .raw  = 0x9100000100000011 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // PAMT_1G_ENTRY_SIZE // 26

   .field_id =  { .raw  = 0x9100000100000012 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TDR_BASE_SIZE // 27

   .field_id =  { .raw  = 0x9800000100000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TDCS_BASE_SIZE // 28

   .field_id =  { .raw  = 0x9800000100000100 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TDCS_SIZE_PER_L2_VM // 29

   .field_id =  { .raw  = 0x9800000100000101 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TDVPS_BASE_SIZE // 30

   .field_id =  { .raw  = 0x9800000100000200 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TDVPS_SIZE_PER_L2_VM // 31

   .field_id =  { .raw  = 0x9800000100000201 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // ATTRIBUTES_FIXED0 // 32

   .field_id =  { .raw  = 0x1900000300000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // ATTRIBUTES_FIXED1 // 33

   .field_id =  { .raw  = 0x1900000300000001 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // XFAM_FIXED0 // 34

   .field_id =  { .raw  = 0x1900000300000002 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // XFAM_FIXED1 // 35

   .field_id =  { .raw  = 0x1900000300000003 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_CPUID_CONFIG // 36

   .field_id =  { .raw  = 0x9900000100000004 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // CONFIG_FLAGS_FIXED0 // 37

   .field_id =  { .raw  = 0x9900000300000006 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // CONFIG_FLAGS_FIXED1 // 38

   .field_id =  { .raw  = 0x9900000300000007 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MAX_VCPUS_PER_TD // 39

   .field_id =  { .raw  = 0x9900000100000008 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // CPUID_CONFIG_LEAVES // 40

   .field_id =  { .raw  = 0x9900000300000400 },

   .num_of_fields = 32, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // CPUID_CONFIG_VALUES // 41

   .field_id =  { .raw  = 0x9900000300000500 },

   .num_of_fields = 32, .num_of_elem = 2,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // IA32_ARCH_CAPABILITIES_CONFIG_MASK // 42

   .field_id =  { .raw  = 0x9900000300000600 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_ALLOWED_FMS // 43

   .field_id =  { .raw  = 0x9900000100000800 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_DISALLOWED_FMS // 44

   .field_id =  { .raw  = 0x9900000100000801 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // ALLOWED_FMS // 45

   .field_id =  { .raw  = 0x9900000300000810 },

   .num_of_fields = 64, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // DISALLOWED_FMS // 46

   .field_id =  { .raw  = 0x9900000300000850 },

   .num_of_fields = 64, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_ATTRIBUTES // 47

   .field_id =  { .raw  = 0xA000000300000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIN_EXPORT_VERSION // 48

   .field_id =  { .raw  = 0x2000000100000001 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MAX_EXPORT_VERSION // 49

   .field_id =  { .raw  = 0x2000000100000002 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIN_IMPORT_VERSION // 50

   .field_id =  { .raw  = 0x2000000100000003 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MAX_IMPORT_VERSION // 51

   .field_id =  { .raw  = 0x2000000100000004 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MAX_MIGS // 52

   .field_id =  { .raw  = 0xA000000100000010 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_IMMUTABLE_STATE_PAGES // 53

   .field_id =  { .raw  = 0xA000000000000020 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_TD_STATE_PAGES // 54

   .field_id =  { .raw  = 0xA000000000000021 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_VP_STATE_PAGES // 55

   .field_id =  { .raw  = 0xA000000000000022 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MAX_SERV_TDS // 56

   .field_id =  { .raw  = 0xA100000100000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // SERVTD_ATTR_FIXED0 // 57

   .field_id =  { .raw  = 0xA100000300000001 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // SERVTD_ATTR_FIXED1 // 58

   .field_id =  { .raw  = 0xA100000300000002 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // GUEST_L2_GPA_ATTR_MASK // 59

   .field_id =  { .raw  = 0xA200000100000000 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // VM_CTLS_FIXED0 // 60

   .field_id =  { .raw  = 0xA200000300000001 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // VM_CTLS_FIXED1 // 61

   .field_id =  { .raw  = 0xA200000300000002 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // VPCU_L2_CTLS_FIXED0 // 62

   .field_id =  { .raw  = 0xA200000300000003 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // VCPU_L2_CTLS_FIXED1 // 63

   .field_id =  { .raw  = 0xA200000300000004 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // VPCU_L2_DEBUG_CTLS_FIXED0 // 64

   .field_id =  { .raw  = 0xA200000300000005 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // VCPU_L2_DEBUG_CTLS_FIXED1 // 65

   .field_id =  { .raw  = 0xA200000300000006 },

   .num_of_fields = 1, .num_of_elem = 1,

   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 }

};



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

 *  This File is Automatically generated by the TDX xls extract tool

 *  Spreadsheet Format Version - '25'

 **/



#include "auto_gen/td_l2_vmcs_fields_lookup.h"





const md_lookup_t td_l2_vmcs_lookup[MAX_NUM_TD_L2_VMCS_LOOKUP] = {

 {

   // VPID // 0

   .field_id =  { .raw  = 0x0024000100000000 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Posted-interrupt notification vector // 1

   .field_id =  { .raw  = 0x0024000100000002 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // EPTP index // 2

   .field_id =  { .raw  = 0x0024000100000004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // HLAT prefix size // 3

   .field_id =  { .raw  = 0x0024000100000006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest ES selector // 4

   .field_id =  { .raw  = 0x0024000100000800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS selector // 5

   .field_id =  { .raw  = 0x0024000100000802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS selector // 6

   .field_id =  { .raw  = 0x0024000100000804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS selector // 7

   .field_id =  { .raw  = 0x0024000100000806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS selector // 8

   .field_id =  { .raw  = 0x0024000100000808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS selector // 9

   .field_id =  { .raw  = 0x002400010000080A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR selector // 10

   .field_id =  { .raw  = 0x002400010000080C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR selector // 11

   .field_id =  { .raw  = 0x002400010000080E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest Interrupt Status // 12

   .field_id =  { .raw  = 0x0024000100000810 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // PML Index // 13

   .field_id =  { .raw  = 0x0024000100000812 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest UINV // 14

   .field_id =  { .raw  = 0x0024000100000814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O-Bitmap Address n // 15

   .field_id =  { .raw  = 0x0024000300002000 },

   .num_of_fields = 2, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // MSR-Bitmap Address // 16

   .field_id =  { .raw  = 0x0024000300002004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-store address // 17

   .field_id =  { .raw  = 0x0024000300002006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-load address // 18

   .field_id =  { .raw  = 0x0024000300002008 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry MSR-load address // 19

   .field_id =  { .raw  = 0x002400030000200A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Executive-VMCS Pointer // 20

   .field_id =  { .raw  = 0x002400030000200C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // PML address // 21

   .field_id =  { .raw  = 0x002400030000200E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709547520ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Time-Stamp Counter Offset // 22

   .field_id =  { .raw  = 0x0024000300002010 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Virtual-APIC address // 23

   .field_id =  { .raw  = 0x0024000300002012 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x6 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (18446744073709547520ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // APIC-access address // 24

   .field_id =  { .raw  = 0x0024000300002014 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Posted-interrupt descriptor address // 25

   .field_id =  { .raw  = 0x0024000300002016 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-Function Controls // 26

   .field_id =  { .raw  = 0x0024000300002018 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // EPTP // 27

   .field_id =  { .raw  = 0x002400030000201A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (128ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (128ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (128ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // EOI-exit bitmap n // 28

   .field_id =  { .raw  = 0x002400030000201C },

   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // EPTP-list address // 29

   .field_id =  { .raw  = 0x0024000300002024 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMREAD-bitmap address // 30

   .field_id =  { .raw  = 0x0024000300002026 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMWRITE-bitmap address // 31

   .field_id =  { .raw  = 0x0024000300002028 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Virtualization-exception information address // 32

   .field_id =  { .raw  = 0x002400030000202A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x6 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // XSS-Exiting Bitmap // 33

   .field_id =  { .raw  = 0x002400030000202C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // ENCLS-Exiting Bitmap // 34

   .field_id =  { .raw  = 0x002400030000202E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Time-Stamp Counter Multiplier // 35

   .field_id =  { .raw  = 0x0024000300002032 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Tertiary Processor-Based VM-Exection Controls // 36

   .field_id =  { .raw  = 0x0024000300002034 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (14ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (14ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // ENCLV-Exiting Bitmap // 37

   .field_id =  { .raw  = 0x0024000300002036 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // low PASID directory address // 38

   .field_id =  { .raw  = 0x0024000300002038 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // high PASID directory address // 39

   .field_id =  { .raw  = 0x002400030000203A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Shared EPTP // 40

   .field_id =  { .raw  = 0x002400030000203C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },

   .prod_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // PCONFIG-Exiting Bitmap // 41

   .field_id =  { .raw  = 0x002400030000203E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // HLAT pointer // 42

   .field_id =  { .raw  = 0x0024000300002040 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x6 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4503599627366424ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (4503599627366424ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (4503599627366424ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SPEC_CTRL mask // 43

   .field_id =  { .raw  = 0x002400030000204A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SPEC_CTRL shadow // 44

   .field_id =  { .raw  = 0x002400030000204C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest-physical Address // 45

   .field_id =  { .raw  = 0x0024000300002400 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMCS Link Pointer // 46

   .field_id =  { .raw  = 0x0024000300002800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_DEBUGCTL // 47

   .field_id =  { .raw  = 0x0024000300002802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (18446744073709543423ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (18446744073709543423ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // IA32_PAT // 48

   .field_id =  { .raw  = 0x0024000300002804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_EFER // 49

   .field_id =  { .raw  = 0x0024000300002806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (1281ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1281ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_PERF_GLOBAL_CTRL // 50

   .field_id =  { .raw  = 0x0024000300002808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // PDPTEn // 51

   .field_id =  { .raw  = 0x002400030000280A },

   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x6 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_RTIT_CTL // 52

   .field_id =  { .raw  = 0x0024000300002814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_LBR_CTL // 53

   .field_id =  { .raw  = 0x0024000300002816 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_GUEST_PKRS // 54

   .field_id =  { .raw  = 0x0024000300002818 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Pin-Based VM-Exection Controls // 55

   .field_id =  { .raw  = 0x0024000200004000 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Primary Processor-Based VM-Exection Controls // 56

   .field_id =  { .raw  = 0x0024000200004002 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (1771674116ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (1222220292ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (1224317444ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // Exception Bitmap // 57

   .field_id =  { .raw  = 0x0024000200004004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Page-fault error-code mask // 58

   .field_id =  { .raw  = 0x0024000200004006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Page-fault error-code match // 59

   .field_id =  { .raw  = 0x0024000200004008 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR3-Target Count // 60

   .field_id =  { .raw  = 0x002400020000400A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-Exit Controls // 61

   .field_id =  { .raw  = 0x002400020000400C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-store count // 62

   .field_id =  { .raw  = 0x002400020000400E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-load count // 63

   .field_id =  { .raw  = 0x0024000200004010 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-Entry Controls // 64

   .field_id =  { .raw  = 0x0024000200004012 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (512ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (512ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry MSR-load count // 65

   .field_id =  { .raw  = 0x0024000200004014 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry interruption information // 66

   .field_id =  { .raw  = 0x0024000200004016 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry exception error code // 67

   .field_id =  { .raw  = 0x0024000200004018 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry instruction length // 68

   .field_id =  { .raw  = 0x002400020000401A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // TPR threshold // 69

   .field_id =  { .raw  = 0x002400020000401C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Secondary Processor-Based VM-Exection Controls // 70

   .field_id =  { .raw  = 0x002400020000401E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (3221225472ULL & 0xFFFFFFFFULL), .prod_wr_mask = (3221225472ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (3222473732ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (206650892ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (206651148ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // PLE_GAP // 71

   .field_id =  { .raw  = 0x0024000200004020 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // PLE_Window // 72

   .field_id =  { .raw  = 0x0024000200004022 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // Instruction Timeout Control // 73

   .field_id =  { .raw  = 0x0024000200004024 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // TD HKID // 74

   .field_id =  { .raw  = 0x0024000200004026 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-instruction error // 75

   .field_id =  { .raw  = 0x0024000200004400 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Exit reason // 76

   .field_id =  { .raw  = 0x0024000200004402 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit interruption information // 77

   .field_id =  { .raw  = 0x0024000200004404 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit interruption error code // 78

   .field_id =  { .raw  = 0x0024000200004406 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IDT-vectoring information // 79

   .field_id =  { .raw  = 0x0024000200004408 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IDT-vectoring error code // 80

   .field_id =  { .raw  = 0x002400020000440A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit instruction length // 81

   .field_id =  { .raw  = 0x002400020000440C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit instruction information // 82

   .field_id =  { .raw  = 0x002400020000440E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest ES limit // 83

   .field_id =  { .raw  = 0x0024000200004800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS limit // 84

   .field_id =  { .raw  = 0x0024000200004802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS limit // 85

   .field_id =  { .raw  = 0x0024000200004804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS limit // 86

   .field_id =  { .raw  = 0x0024000200004806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS limit // 87

   .field_id =  { .raw  = 0x0024000200004808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS limit // 88

   .field_id =  { .raw  = 0x002400020000480A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR limit // 89

   .field_id =  { .raw  = 0x002400020000480C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR limit // 90

   .field_id =  { .raw  = 0x002400020000480E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GDTR limit // 91

   .field_id =  { .raw  = 0x0024000200004810 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest IDTR limit // 92

   .field_id =  { .raw  = 0x0024000200004812 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest ES access rights // 93

   .field_id =  { .raw  = 0x0024000200004814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS access rights // 94

   .field_id =  { .raw  = 0x0024000200004816 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS access rights // 95

   .field_id =  { .raw  = 0x0024000200004818 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS access rights // 96

   .field_id =  { .raw  = 0x002400020000481A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS access rights // 97

   .field_id =  { .raw  = 0x002400020000481C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS access rights // 98

   .field_id =  { .raw  = 0x002400020000481E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR access rights // 99

   .field_id =  { .raw  = 0x0024000200004820 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR access rights // 100

   .field_id =  { .raw  = 0x0024000200004822 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Interruptibility State // 101

   .field_id =  { .raw  = 0x0024000200004824 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Activity State // 102

   .field_id =  { .raw  = 0x0024000200004826 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SMBASE // 103

   .field_id =  { .raw  = 0x0024000200004828 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SYSENTER_CS // 104

   .field_id =  { .raw  = 0x002400020000482A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMX-Preemption Timer Value // 105

   .field_id =  { .raw  = 0x002400020000482E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR0 Guest/Host Mask // 106

   .field_id =  { .raw  = 0x0024000300006000 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // CR4 Guest/Host Mask // 107

   .field_id =  { .raw  = 0x0024000300006002 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // CR0 Read Shadow // 108

   .field_id =  { .raw  = 0x0024000300006004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // CR4 Read Shadow // 109

   .field_id =  { .raw  = 0x0024000300006006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // CR3-Target Values // 110

   .field_id =  { .raw  = 0x0024000300006008 },

   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Exit qualification // 111

   .field_id =  { .raw  = 0x0024000300006400 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RCX // 112

   .field_id =  { .raw  = 0x0024000300006402 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RSI // 113

   .field_id =  { .raw  = 0x0024000300006404 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RDI // 114

   .field_id =  { .raw  = 0x0024000300006406 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RIP // 115

   .field_id =  { .raw  = 0x0024000300006408 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest-Linear Address // 116

   .field_id =  { .raw  = 0x002400030000640A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CR0 // 117

   .field_id =  { .raw  = 0x0024000300006800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (2147811359ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (2147811359ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (2147811391ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // Guest CR3 // 118

   .field_id =  { .raw  = 0x0024000300006802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // Guest CR4 // 119

   .field_id =  { .raw  = 0x0024000300006804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (469704639ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (469704639ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (469704639ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // Guest ES base // 120

   .field_id =  { .raw  = 0x0024000300006806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS base // 121

   .field_id =  { .raw  = 0x0024000300006808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS base // 122

   .field_id =  { .raw  = 0x002400030000680A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS base // 123

   .field_id =  { .raw  = 0x002400030000680C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS base // 124

   .field_id =  { .raw  = 0x002400030000680E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS base // 125

   .field_id =  { .raw  = 0x0024000300006810 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR base // 126

   .field_id =  { .raw  = 0x0024000300006812 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR base // 127

   .field_id =  { .raw  = 0x0024000300006814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GDTR base // 128

   .field_id =  { .raw  = 0x0024000300006816 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest IDTR base // 129

   .field_id =  { .raw  = 0x0024000300006818 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DR7 // 130

   .field_id =  { .raw  = 0x002400030000681A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest RSP // 131

   .field_id =  { .raw  = 0x002400030000681C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest RIP // 132

   .field_id =  { .raw  = 0x002400030000681E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest RFLAGS // 133

   .field_id =  { .raw  = 0x0024000300006820 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Pending Debug Exceptions // 134

   .field_id =  { .raw  = 0x0024000300006822 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SYSENTER_ESP // 135

   .field_id =  { .raw  = 0x0024000300006824 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SYSENTER_EIP // 136

   .field_id =  { .raw  = 0x0024000300006826 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // GUEST_IA32_S_CET // 137

   .field_id =  { .raw  = 0x0024000300006828 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // GUEST_SSP // 138

   .field_id =  { .raw  = 0x002400030000682A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // GUEST_IA32_INTERRUPT_SSP_TABLE_ADDR // 139

   .field_id =  { .raw  = 0x002400030000682C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Host GS Base // 140

   .field_id =  { .raw  = 0x0024000300006C08 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Host RSP // 141

   .field_id =  { .raw  = 0x0024000300006C14 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Host RIP // 142

   .field_id =  { .raw  = 0x0024000300006C16 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // HOST_SSP // 143

   .field_id =  { .raw  = 0x0024000300006C1A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 }

};



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

 *  This File is Automatically generated by the TDX xls extract tool

 *  Spreadsheet Format Version - '26'

 **/



#include "auto_gen/td_vmcs_fields_lookup.h"





const md_lookup_t td_vmcs_lookup[MAX_NUM_TD_VMCS_LOOKUP] = {

 {

   // VPID // 0

   .field_id =  { .raw  = 0x0024000100000000 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Posted-interrupt notification vector // 1

   .field_id =  { .raw  = 0x0024000100000002 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // EPTP index // 2

   .field_id =  { .raw  = 0x0024000100000004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // HLAT prefix size // 3

   .field_id =  { .raw  = 0x0024000100000006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest ES selector // 4

   .field_id =  { .raw  = 0x0024000100000800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS selector // 5

   .field_id =  { .raw  = 0x0024000100000802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS selector // 6

   .field_id =  { .raw  = 0x0024000100000804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS selector // 7

   .field_id =  { .raw  = 0x0024000100000806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS selector // 8

   .field_id =  { .raw  = 0x0024000100000808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS selector // 9

   .field_id =  { .raw  = 0x002400010000080A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR selector // 10

   .field_id =  { .raw  = 0x002400010000080C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR selector // 11

   .field_id =  { .raw  = 0x002400010000080E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest Interrupt Status // 12

   .field_id =  { .raw  = 0x0024000100000810 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // PML Index // 13

   .field_id =  { .raw  = 0x0024000100000812 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest UINV // 14

   .field_id =  { .raw  = 0x0024000100000814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O-Bitmap Address n // 15

   .field_id =  { .raw  = 0x0024000300002000 },

   .num_of_fields = 2, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // MSR-Bitmap Address // 16

   .field_id =  { .raw  = 0x0024000300002004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-store address // 17

   .field_id =  { .raw  = 0x0024000300002006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-load address // 18

   .field_id =  { .raw  = 0x0024000300002008 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry MSR-load address // 19

   .field_id =  { .raw  = 0x002400030000200A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Executive-VMCS Pointer // 20

   .field_id =  { .raw  = 0x002400030000200C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // PML address // 21

   .field_id =  { .raw  = 0x002400030000200E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709547520ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Time-Stamp Counter Offset // 22

   .field_id =  { .raw  = 0x0024000300002010 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Virtual-APIC address // 23

   .field_id =  { .raw  = 0x0024000300002012 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // APIC-access address // 24

   .field_id =  { .raw  = 0x0024000300002014 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Posted-interrupt descriptor address // 25

   .field_id =  { .raw  = 0x0024000300002016 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (18446744073709551552ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709551552ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // VM-Function Controls // 26

   .field_id =  { .raw  = 0x0024000300002018 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // EPTP // 27

   .field_id =  { .raw  = 0x002400030000201A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // EOI-exit bitmap n // 28

   .field_id =  { .raw  = 0x002400030000201C },

   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // EPTP-list address // 29

   .field_id =  { .raw  = 0x0024000300002024 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMREAD-bitmap address // 30

   .field_id =  { .raw  = 0x0024000300002026 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMWRITE-bitmap address // 31

   .field_id =  { .raw  = 0x0024000300002028 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Virtualization-exception information address // 32

   .field_id =  { .raw  = 0x002400030000202A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // XSS-Exiting Bitmap // 33

   .field_id =  { .raw  = 0x002400030000202C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // ENCLS-Exiting Bitmap // 34

   .field_id =  { .raw  = 0x002400030000202E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Time-Stamp Counter Multiplier // 35

   .field_id =  { .raw  = 0x0024000300002032 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Tertiary Processor-Based VM-Exection Controls // 36

   .field_id =  { .raw  = 0x0024000300002034 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // ENCLV-Exiting Bitmap // 37

   .field_id =  { .raw  = 0x0024000300002036 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // low PASID directory address // 38

   .field_id =  { .raw  = 0x0024000300002038 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // high PASID directory address // 39

   .field_id =  { .raw  = 0x002400030000203A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Shared EPTP // 40

   .field_id =  { .raw  = 0x002400030000203C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },

   .prod_rd_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // PCONFIG-Exiting Bitmap // 41

   .field_id =  { .raw  = 0x002400030000203E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // HLAT pointer // 42

   .field_id =  { .raw  = 0x0024000300002040 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SPEC_CTRL mask // 43

   .field_id =  { .raw  = 0x002400030000204A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SPEC_CTRL shadow // 44

   .field_id =  { .raw  = 0x002400030000204C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest-physical Address // 45

   .field_id =  { .raw  = 0x0024000300002400 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMCS Link Pointer // 46

   .field_id =  { .raw  = 0x0024000300002800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_DEBUGCTL // 47

   .field_id =  { .raw  = 0x0024000300002802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (18446744073709543423ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // IA32_PAT // 48

   .field_id =  { .raw  = 0x0024000300002804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_EFER // 49

   .field_id =  { .raw  = 0x0024000300002806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_PERF_GLOBAL_CTRL // 50

   .field_id =  { .raw  = 0x0024000300002808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // PDPTEn // 51

   .field_id =  { .raw  = 0x002400030000280A },

   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x6 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_RTIT_CTL // 52

   .field_id =  { .raw  = 0x0024000300002814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_LBR_CTL // 53

   .field_id =  { .raw  = 0x0024000300002816 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_GUEST_PKRS // 54

   .field_id =  { .raw  = 0x0024000300002818 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Pin-Based VM-Exection Controls // 55

   .field_id =  { .raw  = 0x0024000200004000 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (128ULL & 0xFFFFFFFFULL), .prod_wr_mask = (128ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (128ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // Primary Processor-Based VM-Exection Controls // 56

   .field_id =  { .raw  = 0x0024000200004002 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (1771674116ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Exception Bitmap // 57

   .field_id =  { .raw  = 0x0024000200004004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Page-fault error-code mask // 58

   .field_id =  { .raw  = 0x0024000200004006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Page-fault error-code match // 59

   .field_id =  { .raw  = 0x0024000200004008 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR3-Target Count // 60

   .field_id =  { .raw  = 0x002400020000400A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-Exit Controls // 61

   .field_id =  { .raw  = 0x002400020000400C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-store count // 62

   .field_id =  { .raw  = 0x002400020000400E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit MSR-load count // 63

   .field_id =  { .raw  = 0x0024000200004010 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-Entry Controls // 64

   .field_id =  { .raw  = 0x0024000200004012 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (512ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry MSR-load count // 65

   .field_id =  { .raw  = 0x0024000200004014 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry interruption information // 66

   .field_id =  { .raw  = 0x0024000200004016 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry exception error code // 67

   .field_id =  { .raw  = 0x0024000200004018 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-entry instruction length // 68

   .field_id =  { .raw  = 0x002400020000401A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // TPR threshold // 69

   .field_id =  { .raw  = 0x002400020000401C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Secondary Processor-Based VM-Exection Controls // 70

   .field_id =  { .raw  = 0x002400020000401E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (3221225472ULL & 0xFFFFFFFFULL), .prod_wr_mask = (3221225472ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (3222473732ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // PLE_GAP // 71

   .field_id =  { .raw  = 0x0024000200004020 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // PLE_Window // 72

   .field_id =  { .raw  = 0x0024000200004022 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Instruction Timeout Control // 73

   .field_id =  { .raw  = 0x0024000200004024 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // TD HKID // 74

   .field_id =  { .raw  = 0x0024000200004026 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-instruction error // 75

   .field_id =  { .raw  = 0x0024000200004400 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Exit reason // 76

   .field_id =  { .raw  = 0x0024000200004402 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit interruption information // 77

   .field_id =  { .raw  = 0x0024000200004404 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit interruption error code // 78

   .field_id =  { .raw  = 0x0024000200004406 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IDT-vectoring information // 79

   .field_id =  { .raw  = 0x0024000200004408 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IDT-vectoring error code // 80

   .field_id =  { .raw  = 0x002400020000440A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit instruction length // 81

   .field_id =  { .raw  = 0x002400020000440C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VM-exit instruction information // 82

   .field_id =  { .raw  = 0x002400020000440E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest ES limit // 83

   .field_id =  { .raw  = 0x0024000200004800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS limit // 84

   .field_id =  { .raw  = 0x0024000200004802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS limit // 85

   .field_id =  { .raw  = 0x0024000200004804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS limit // 86

   .field_id =  { .raw  = 0x0024000200004806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS limit // 87

   .field_id =  { .raw  = 0x0024000200004808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS limit // 88

   .field_id =  { .raw  = 0x002400020000480A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR limit // 89

   .field_id =  { .raw  = 0x002400020000480C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR limit // 90

   .field_id =  { .raw  = 0x002400020000480E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GDTR limit // 91

   .field_id =  { .raw  = 0x0024000200004810 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest IDTR limit // 92

   .field_id =  { .raw  = 0x0024000200004812 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest ES access rights // 93

   .field_id =  { .raw  = 0x0024000200004814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS access rights // 94

   .field_id =  { .raw  = 0x0024000200004816 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS access rights // 95

   .field_id =  { .raw  = 0x0024000200004818 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS access rights // 96

   .field_id =  { .raw  = 0x002400020000481A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS access rights // 97

   .field_id =  { .raw  = 0x002400020000481C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS access rights // 98

   .field_id =  { .raw  = 0x002400020000481E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR access rights // 99

   .field_id =  { .raw  = 0x0024000200004820 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR access rights // 100

   .field_id =  { .raw  = 0x0024000200004822 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Interruptibility State // 101

   .field_id =  { .raw  = 0x0024000200004824 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Activity State // 102

   .field_id =  { .raw  = 0x0024000200004826 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SMBASE // 103

   .field_id =  { .raw  = 0x0024000200004828 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SYSENTER_CS // 104

   .field_id =  { .raw  = 0x002400020000482A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // VMX-Preemption Timer Value // 105

   .field_id =  { .raw  = 0x002400020000482E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR0 Guest/Host Mask // 106

   .field_id =  { .raw  = 0x0024000300006000 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938846ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR4 Guest/Host Mask // 107

   .field_id =  { .raw  = 0x0024000300006002 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709526975ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR0 Read Shadow // 108

   .field_id =  { .raw  = 0x0024000300006004 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709551582ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR4 Read Shadow // 109

   .field_id =  { .raw  = 0x0024000300006006 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709551551ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // CR3-Target Values // 110

   .field_id =  { .raw  = 0x0024000300006008 },

   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Exit qualification // 111

   .field_id =  { .raw  = 0x0024000300006400 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RCX // 112

   .field_id =  { .raw  = 0x0024000300006402 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RSI // 113

   .field_id =  { .raw  = 0x0024000300006404 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RDI // 114

   .field_id =  { .raw  = 0x0024000300006406 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // I/O RIP // 115

   .field_id =  { .raw  = 0x0024000300006408 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest-Linear Address // 116

   .field_id =  { .raw  = 0x002400030000640A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_NONE,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CR0 // 117

   .field_id =  { .raw  = 0x0024000300006800 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // Guest CR3 // 118

   .field_id =  { .raw  = 0x0024000300006802 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = true 

 },

 {

   // Guest CR4 // 119

   .field_id =  { .raw  = 0x0024000300006804 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_IESME,

   .special_rd_handling = true,

   .special_wr_handling = true 

 },

 {

   // Guest ES base // 120

   .field_id =  { .raw  = 0x0024000300006806 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest CS base // 121

   .field_id =  { .raw  = 0x0024000300006808 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest SS base // 122

   .field_id =  { .raw  = 0x002400030000680A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DS base // 123

   .field_id =  { .raw  = 0x002400030000680C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest FS base // 124

   .field_id =  { .raw  = 0x002400030000680E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GS base // 125

   .field_id =  { .raw  = 0x0024000300006810 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest LDTR base // 126

   .field_id =  { .raw  = 0x0024000300006812 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest TR base // 127

   .field_id =  { .raw  = 0x0024000300006814 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest GDTR base // 128

   .field_id =  { .raw  = 0x0024000300006816 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest IDTR base // 129

   .field_id =  { .raw  = 0x0024000300006818 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest DR7 // 130

   .field_id =  { .raw  = 0x002400030000681A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest RSP // 131

   .field_id =  { .raw  = 0x002400030000681C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest RIP // 132

   .field_id =  { .raw  = 0x002400030000681E },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Guest RFLAGS // 133

   .field_id =  { .raw  = 0x0024000300006820 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Pending Debug Exceptions // 134

   .field_id =  { .raw  = 0x0024000300006822 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SYSENTER_ESP // 135

   .field_id =  { .raw  = 0x0024000300006824 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // IA32_SYSENTER_EIP // 136

   .field_id =  { .raw  = 0x0024000300006826 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // GUEST_IA32_S_CET // 137

   .field_id =  { .raw  = 0x0024000300006828 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // GUEST_SSP // 138

   .field_id =  { .raw  = 0x002400030000682A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // GUEST_IA32_INTERRUPT_SSP_TABLE_ADDR // 139

   .field_id =  { .raw  = 0x002400030000682C },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_ME, .mig_import = MIG_ME,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Host GS Base // 140

   .field_id =  { .raw  = 0x0024000300006C08 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Host RSP // 141

   .field_id =  { .raw  = 0x0024000300006C14 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // Host RIP // 142

   .field_id =  { .raw  = 0x0024000300006C16 },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 },

 {

   // HOST_SSP // 143

   .field_id =  { .raw  = 0x0024000300006C1A },

   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .mig_export = MIG_NONE, .mig_import = MIG_IES,

   .special_rd_handling = false,

   .special_wr_handling = false 

 }

};



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

 *  This File is Automatically generated by the TDX xls extract tool

 *  Spreadsheet Format Version - '25'

 **/



#include "auto_gen/tdr_tdcs_fields_lookup.h"





const md_lookup_t tdr_tdcs_lookup[MAX_NUM_TDR_TDCS_LOOKUP] = {

 {

   // FATAL // 0

   .field_id =  { .raw  = 0x8010000000000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .migtd_rd_mask = (0ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_TDCX // 1

   .field_id =  { .raw  = 0x8010000200000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0004, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // CHLDCNT // 2

   .field_id =  { .raw  = 0x8010000300000004 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0008, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // LIFECYCLE_STATE // 3

   .field_id =  { .raw  = 0x8010000200000005 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0010, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TDCX_PA // 4

   .field_id =  { .raw  = 0x8010000300000010 }, 

   .num_of_fields = 9, .num_of_elem = 1, .offset = 0x0018, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TD_UUID // 5

   .field_id =  { .raw  = 0x8010000300000020 }, 

   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0060, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // HKID // 6

   .field_id =  { .raw  = 0x8110000100000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0100, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // PKG_CONFIG_BITMAP // 7

   .field_id =  { .raw  = 0x8110000300000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0108, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // HANDOFF_VERSION // 8

   .field_id =  { .raw  = 0x8210000100000000 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0140, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // SEAMDB_INDEX // 9

   .field_id =  { .raw  = 0x8210000300000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0148, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // SEAMDB_NONCE // 10

   .field_id =  { .raw  = 0x8210000300000002 }, 

   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0150, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_VCPUS // 11

   .field_id =  { .raw  = 0x9010000200000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // NUM_ASSOC_VCPUS // 12

   .field_id =  { .raw  = 0x9010000200000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0004, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IBS 

 },

 {

   // OP_STATE // 13

   .field_id =  { .raw  = 0x9010000200000004 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0008, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_L2_VMS // 14

   .field_id =  { .raw  = 0x9010000100000005 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0010, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // ATTRIBUTES // 15

   .field_id =  { .raw  = 0x1110000300000000 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0080, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // XFAM // 16

   .field_id =  { .raw  = 0x1110000300000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0088, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // MAX_VCPUS // 17

   .field_id =  { .raw  = 0x1110000200000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0090, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // GPAW // 18

   .field_id =  { .raw  = 0x1110000000000003 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0094, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // EPTP // 19

   .field_id =  { .raw  = 0x1110000300000004 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0098, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // TSC_OFFSET // 20

   .field_id =  { .raw  = 0x111000030000000A }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00A8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IE 

 },

 {

   // TSC_MULTIPLIER // 21

   .field_id =  { .raw  = 0x111000030000000B }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00B0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IE 

 },

 {

   // TSC_FREQUENCY // 22

   .field_id =  { .raw  = 0x111000010000000C }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00B8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_TSC // 23

   .field_id =  { .raw  = 0x111000030000000D }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00BA, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // NUM_CPUID_VALUES // 24

   .field_id =  { .raw  = 0x911000010000000E }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00BA, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_CB 

 },

 {

   // XBUFF_SIZE // 25

   .field_id =  { .raw  = 0x911000020000000F }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00DC, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_IBS 

 },

 {

   // NOTIFY_ENABLES // 26

   .field_id =  { .raw  = 0x9110000300000010 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00E0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // HP_LOCK_TIMEOUT // 27

   .field_id =  { .raw  = 0x9110000300000011 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00E8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // VM_CTLS // 28

   .field_id =  { .raw  = 0x9110000300000012 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x00F0, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // CONFIG_FLAGS // 29

   .field_id =  { .raw  = 0x9110000300000016 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0118, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MBO 

 },

 {

   // TD_CTLS // 30

   .field_id =  { .raw  = 0x9110000300000017 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0120, .attributes = { .raw = 0x10 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_MEO 

 },

 {

   // TOPOLOGY_ENUM_CONFIGURED // 31

   .field_id =  { .raw  = 0x9110000000000019 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x012C, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MBO 

 },

 {

   // CPUID_VALID // 32

   .field_id =  { .raw  = 0x9110000000000080 }, 

   .num_of_fields = 80, .num_of_elem = 1, .offset = 0x0134, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .migtd_rd_mask = (0ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // XBUFF_OFFSETS // 33

   .field_id =  { .raw  = 0x9110000200000800 }, 

   .num_of_fields = 19, .num_of_elem = 1, .offset = 0x0190, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IBS 

 },

 {

   // TD_EPOCH // 34

   .field_id =  { .raw  = 0x9210000300000000 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0200, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IBS 

 },

 {

   // REFCOUNT // 35

   .field_id =  { .raw  = 0x9210000100000001 }, 

   .num_of_fields = 2, .num_of_elem = 1, .offset = 0x0208, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IBS 

 },

 {

   // MRTD // 36

   .field_id =  { .raw  = 0x1310000300000000 }, 

   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x0240, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // MRCONFIGID // 37

   .field_id =  { .raw  = 0x1310000300000010 }, 

   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x0270, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // MROWNER // 38

   .field_id =  { .raw  = 0x1310000300000018 }, 

   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x02A0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // MROWNERCONFIG // 39

   .field_id =  { .raw  = 0x1310000300000020 }, 

   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x02D0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // RTMR // 40

   .field_id =  { .raw  = 0x1310000300000040 }, 

   .num_of_fields = 4, .num_of_elem = 6, .offset = 0x0300, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // CPUID_VALUES // 41

   .field_id =  { .raw  = 0x9410000300000000 }, 

   .num_of_fields = 80, .num_of_elem = 2, .offset = 0x0800, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MBO 

 },

 {

   // VIRTUAL_IA32_ARCH_CAPABILITIES // 42

   .field_id =  { .raw  = 0x961000030000010A }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0778, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_BASIC // 43

   .field_id =  { .raw  = 0x9610000300000480 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0700, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_MISC // 44

   .field_id =  { .raw  = 0x9610000300000485 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0708, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_CR0_FIXED0 // 45

   .field_id =  { .raw  = 0x9610000300000486 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0710, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_CR0_FIXED1 // 46

   .field_id =  { .raw  = 0x9610000300000487 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0718, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_CR4_FIXED0 // 47

   .field_id =  { .raw  = 0x9610000300000488 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0720, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_CR4_FIXED1 // 48

   .field_id =  { .raw  = 0x9610000300000489 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0728, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_PROCBASED_CTLS2 // 49

   .field_id =  { .raw  = 0x961000030000048B }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0730, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_EPT_VPID_CAP // 50

   .field_id =  { .raw  = 0x961000030000048C }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0738, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_TRUE_PINBASED_CTLS // 51

   .field_id =  { .raw  = 0x961000030000048D }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0740, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_TRUE_PROCBASED_CTLS // 52

   .field_id =  { .raw  = 0x961000030000048E }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0748, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_TRUE_EXIT_CTLS // 53

   .field_id =  { .raw  = 0x961000030000048F }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0750, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_TRUE_ENTRY_CTLS // 54

   .field_id =  { .raw  = 0x9610000300000490 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0758, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_VMFUNC // 55

   .field_id =  { .raw  = 0x9610000300000491 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0760, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_PROCBASED_CTLS3 // 56

   .field_id =  { .raw  = 0x9610000300000492 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0768, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // VIRTUAL_IA32_VMX_EXIT_CTLS2 // 57

   .field_id =  { .raw  = 0x9610000300000493 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0770, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // MIG_DEC_KEY_SET // 58

   .field_id =  { .raw  = 0x9810000000000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0580, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .migtd_rd_mask = (0ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // EXPORT_COUNT // 59

   .field_id =  { .raw  = 0x9810000200000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0584, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MB 

 },

 {

   // IMPORT_COUNT // 60

   .field_id =  { .raw  = 0x9810000200000003 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0588, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // MIG_EPOCH // 61

   .field_id =  { .raw  = 0x9810000200000004 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x058C, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // BW_EPOCH // 62

   .field_id =  { .raw  = 0x9810000300000005 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0590, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // TOTAL_MB_COUNT // 63

   .field_id =  { .raw  = 0x9810000300000006 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0598, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_DEC_KEY // 64

   .field_id =  { .raw  = 0x9810000300000010 }, 

   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x05A0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_DEC_WORKING_KEY // 65

   .field_id =  { .raw  = 0x9810000300000014 }, 

   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x05C0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_ENC_KEY // 66

   .field_id =  { .raw  = 0x9810000300000018 }, 

   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x05E0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_ENC_WORKING_KEY // 67

   .field_id =  { .raw  = 0x981000030000001C }, 

   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0600, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_VERSION // 68

   .field_id =  { .raw  = 0x9810000100000020 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0620, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (-1ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_WORKING_VERSION // 69

   .field_id =  { .raw  = 0x9810000100000021 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0622, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // DIRTY_COUNT // 70

   .field_id =  { .raw  = 0x9810000300000030 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0628, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // MIG_COUNT // 71

   .field_id =  { .raw  = 0x9810000300000031 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0630, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_MIGS // 72

   .field_id =  { .raw  = 0x9810000100000032 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0638, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NUM_MIGRATED_VCPUS // 73

   .field_id =  { .raw  = 0x9810000200000034 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x063C, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IBS 

 },

 {

   // PRE_IMPORT_UUID // 74

   .field_id =  { .raw  = 0x9810000300000040 }, 

   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0640, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // SERVTD_HASH // 75

   .field_id =  { .raw  = 0x9910000300000000 }, 

   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x0D00, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_IBS 

 },

 {

   // SERVTD_NUM // 76

   .field_id =  { .raw  = 0x9910000100000006 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0D30, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_MB, .mig_import = MIG_CB 

 },

 {

   // SERVTD_BINDINGS_TABLE // 77

   .field_id =  { .raw  = 0x9910000300000080 }, 

   .num_of_fields = 1, .num_of_elem = 16, .offset = 0x0D90, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_NONE 

 },

 {

   // MIGSC_LINKS // 78

   .field_id =  { .raw  = 0x9A10000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x5000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // X2APIC_IDS // 79

   .field_id =  { .raw  = 0x9C10000200000000 }, 

   .num_of_fields = 576, .num_of_elem = 1, .offset = 0x1100, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_MB, .mig_import = MIG_MBO 

 },

 {

   // MSR_BITMAPS // 80

   .field_id =  { .raw  = 0x2010000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x2000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IBS 

 },

 {

   // SEPT_ROOT // 81

   .field_id =  { .raw  = 0x2110000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x3000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IBS 

 },

 {

   // L2_SEPT_ROOT_1 // 82

   .field_id =  { .raw  = 0x2510000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x6000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // L2_SEPT_ROOT_2 // 83

   .field_id =  { .raw  = 0x2910000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x7000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // L2_SEPT_ROOT_3 // 84

   .field_id =  { .raw  = 0x2D10000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x8000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 }

};



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

 *  This File is Automatically generated by the TDX xls extract tool

 *  Spreadsheet Format Version - '27'

 **/



#include "auto_gen/tdvps_fields_lookup.h"





const md_lookup_t tdvps_lookup[MAX_NUM_TDVPS_LOOKUP] = {

 {

   // VAPIC // 0

   .field_id =  { .raw  = 0x0120000300000000 }, 

   .num_of_fields = 128, .num_of_elem = 1, .offset = 0x2000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // EXIT_REASON // 1

   .field_id =  { .raw  = 0x0220000200000000 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // VALID // 2

   .field_id =  { .raw  = 0x0220000200000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0004, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // EXIT_QUALIFICATION // 3

   .field_id =  { .raw  = 0x0220000300000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0008, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // GLA // 4

   .field_id =  { .raw  = 0x0220000300000003 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0010, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // GPA // 5

   .field_id =  { .raw  = 0x0220000300000004 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0018, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // EPTP_INDEX // 6

   .field_id =  { .raw  = 0x0220000100000005 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0020, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // INSTRUCTION_LENGTH // 7

   .field_id =  { .raw  = 0x8220000200000010 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0024, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // INSTRUCTION_INFORMATION // 8

   .field_id =  { .raw  = 0x8220000200000011 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0028, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RAX // 9

   .field_id =  { .raw  = 0x1020000300000000 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0980, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RCX // 10

   .field_id =  { .raw  = 0x1020000300000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0988, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RDX // 11

   .field_id =  { .raw  = 0x1020000300000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0990, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RBX // 12

   .field_id =  { .raw  = 0x1020000300000003 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0998, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RSP_PLACEHOLDER // 13

   .field_id =  { .raw  = 0x1020000300000004 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09A0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RBP // 14

   .field_id =  { .raw  = 0x1020000300000005 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09A8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RSI // 15

   .field_id =  { .raw  = 0x1020000300000006 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09B0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // RDI // 16

   .field_id =  { .raw  = 0x1020000300000007 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09B8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R8 // 17

   .field_id =  { .raw  = 0x1020000300000008 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09C0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R9 // 18

   .field_id =  { .raw  = 0x1020000300000009 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09C8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R10 // 19

   .field_id =  { .raw  = 0x102000030000000A }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09D0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R11 // 20

   .field_id =  { .raw  = 0x102000030000000B }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09D8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R12 // 21

   .field_id =  { .raw  = 0x102000030000000C }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09E0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R13 // 22

   .field_id =  { .raw  = 0x102000030000000D }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09E8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R14 // 23

   .field_id =  { .raw  = 0x102000030000000E }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09F0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // R15 // 24

   .field_id =  { .raw  = 0x102000030000000F }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09F8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // DR0 // 25

   .field_id =  { .raw  = 0x1120000300000000 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A00, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // DR1 // 26

   .field_id =  { .raw  = 0x1120000300000001 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A08, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // DR2 // 27

   .field_id =  { .raw  = 0x1120000300000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A10, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // DR3 // 28

   .field_id =  { .raw  = 0x1120000300000003 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A18, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // DR6 // 29

   .field_id =  { .raw  = 0x1120000300000006 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A20, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4294967295ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // XCR0 // 30

   .field_id =  { .raw  = 0x1120000300000020 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A28, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // CR2 // 31

   .field_id =  { .raw  = 0x1120000300000028 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A30, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // VCPU_STATE_DETAILS // 32

   .field_id =  { .raw  = 0x9120000300000100 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A78, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // XBUFF // 33

   .field_id =  { .raw  = 0x1220000300000000 }, 

   .num_of_fields = 1536, .num_of_elem = 1, .offset = 0x3000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_SPEC_CTRL // 34

   .field_id =  { .raw  = 0x1320000300000048 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A80, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_UMWAIT_CONTROL // 35

   .field_id =  { .raw  = 0x13200003000000E1 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A88, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_TSX_CTRL // 36

   .field_id =  { .raw  = 0x1320000300000122 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A90, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_PERFEVTSELx // 37

   .field_id =  { .raw  = 0x1320000300000186 }, 

   .num_of_fields = 8, .num_of_elem = 1, .offset = 0x0A98, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // MSR_OFFCORE_RSPx // 38

   .field_id =  { .raw  = 0x13200003000001A6 }, 

   .num_of_fields = 2, .num_of_elem = 1, .offset = 0x0AD8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_XFD // 39

   .field_id =  { .raw  = 0x13200003000001C4 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0AE8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_XFD_ERR // 40

   .field_id =  { .raw  = 0x13200003000001C5 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0AF0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_FIXED_CTRx // 41

   .field_id =  { .raw  = 0x1320000300000309 }, 

   .num_of_fields = 7, .num_of_elem = 1, .offset = 0x0AF8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_PERF_METRICS // 42

   .field_id =  { .raw  = 0x1320000300000329 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B30, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_FIXED_CTR_CTRL // 43

   .field_id =  { .raw  = 0x132000030000038D }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B38, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_PERF_GLOBAL_STATUS // 44

   .field_id =  { .raw  = 0x132000030000038E }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B40, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_PEBS_ENABLE // 45

   .field_id =  { .raw  = 0x13200003000003F1 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B48, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // MSR_PEBS_DATA_CFG // 46

   .field_id =  { .raw  = 0x13200003000003F2 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B50, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // MSR_PEBS_LD_LAT // 47

   .field_id =  { .raw  = 0x13200003000003F6 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B58, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // MSR_PEBS_FRONTEND // 48

   .field_id =  { .raw  = 0x13200003000003F7 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B60, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_A_PMCx // 49

   .field_id =  { .raw  = 0x13200003000004C1 }, 

   .num_of_fields = 8, .num_of_elem = 1, .offset = 0x0B68, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_DS_AREA // 50

   .field_id =  { .raw  = 0x1320000300000600 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0BA8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_XSS // 51

   .field_id =  { .raw  = 0x1320000300000DA0 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C70, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_LBR_DEPTH // 52

   .field_id =  { .raw  = 0x13200003000014CF }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C78, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_UARCH_MISC_CTL // 53

   .field_id =  { .raw  = 0x1320000300001B01 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C80, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_STAR // 54

   .field_id =  { .raw  = 0x1320000300002081 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C88, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_LSTAR // 55

   .field_id =  { .raw  = 0x1320000300002082 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C90, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_FMASK // 56

   .field_id =  { .raw  = 0x1320000300002084 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C98, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_KERNEL_GS_BASE // 57

   .field_id =  { .raw  = 0x1320000300002102 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0CA0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // IA32_TSC_AUX // 58

   .field_id =  { .raw  = 0x1320000300002103 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0CA8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // VCPU_STATE // 59

   .field_id =  { .raw  = 0xA020000000000000 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0100, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // VCPU_INDEX // 60

   .field_id =  { .raw  = 0xA020000200000002 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0102, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // NUM_TDVPS_PAGES // 61

   .field_id =  { .raw  = 0xA020000000000003 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0107, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // ASSOC_LPID // 62

   .field_id =  { .raw  = 0xA020000200000004 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01C8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // VCPU_EPOCH // 63

   .field_id =  { .raw  = 0xA020000300000006 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01D0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // CPUID_SUPERVISOR_VE // 64

   .field_id =  { .raw  = 0xA020000000000007 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01D8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (-1ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // CPUID_USER_VE // 65

   .field_id =  { .raw  = 0xA020000000000008 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01D9, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (-1ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // LAST_EXIT_TSC // 66

   .field_id =  { .raw  = 0xA02000030000000A }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01E0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // PEND_NMI // 67

   .field_id =  { .raw  = 0x202000000000000B }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01E8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (-1ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (-1ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // XFAM // 68

   .field_id =  { .raw  = 0x202000030000000C }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01F0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_IES 

 },

 {

   // LAST_EPF_GPA_LIST_IDX // 69

   .field_id =  { .raw  = 0xA02000000000000D }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01F8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // POSSIBLY_EPF_STEPPING // 70

   .field_id =  { .raw  = 0xA02000000000000E }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01F9, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // LAST_TD_EXIT // 71

   .field_id =  { .raw  = 0xA02000000000000F }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0101, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // TDVPS_PAGE_PA // 72

   .field_id =  { .raw  = 0xA020000300000010 }, 

   .num_of_fields = 15, .num_of_elem = 1, .offset = 0x0108, .attributes = { .raw = 0x5 },

   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // HP_LOCK_BUSY_START // 73

   .field_id =  { .raw  = 0xA020000300000030 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0200, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // HP_LOCK_BUSY // 74

   .field_id =  { .raw  = 0xA020000000000031 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0208, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // LAST_SEAMDB_INDEX // 75

   .field_id =  { .raw  = 0xA020000300000032 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x020E, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // NMI_UNBLOCKING_DUE_TO_IRET // 76

   .field_id =  { .raw  = 0xA020000000000040 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01E9, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // CURR_VM // 77

   .field_id =  { .raw  = 0xA020000100000041 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0216, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // L2_EXIT_HOST_ROUTING // 78

   .field_id =  { .raw  = 0xA020000000000042 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0218, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // VM_LAUNCHED // 79

   .field_id =  { .raw  = 0xA020000000000044 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x021A, .attributes = { .raw = 0x30 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // LP_DEPENDENT_HPA_UPDATED // 80

   .field_id =  { .raw  = 0xA020000000000048 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x021E, .attributes = { .raw = 0x30 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // MODULE_DEPENDENT_FIELDS_UPDATED // 81

   .field_id =  { .raw  = 0xA02000000000004C }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0222, .attributes = { .raw = 0x30 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_CTLS // 82

   .field_id =  { .raw  = 0xA020000300000050 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0228, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // L2_DEBUG_CTLS // 83

   .field_id =  { .raw  = 0xA020000300000054 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0248, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (7ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (7ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // TSC_DEADLINE // 84

   .field_id =  { .raw  = 0xA020000300000058 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0268, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = true,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // SHADOW_TSC_DEADLINE // 85

   .field_id =  { .raw  = 0xA02000030000005C }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0288, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // BASE_L2_CR0_GUEST_HOST_MASK // 86

   .field_id =  { .raw  = 0xA020000300000080 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02A8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938847ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // BASE_L2_CR0_READ_SHADOW // 87

   .field_id =  { .raw  = 0xA020000300000081 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02B0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938847ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // BASE_L2_CR4_GUEST_HOST_MASK // 88

   .field_id =  { .raw  = 0xA020000300000082 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02B8, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709526975ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // BASE_L2_CR4_READ_SHADOW // 89

   .field_id =  { .raw  = 0xA020000300000083 }, 

   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02C0, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938847ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_CR0_GUEST_HOST_MASK // 90

   .field_id =  { .raw  = 0xA020000300000084 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x02C8, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_CR0_READ_SHADOW // 91

   .field_id =  { .raw  = 0xA020000300000088 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x02E8, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_CR4_GUEST_HOST_MASK // 92

   .field_id =  { .raw  = 0xA02000030000008C }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0308, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_CR4_READ_SHADOW // 93

   .field_id =  { .raw  = 0xA020000300000090 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0328, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_INSTRUCTION_TIMEOUT_CONTROL // 94

   .field_id =  { .raw  = 0xA020000200000094 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0348, .attributes = { .raw = 0x30 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_PID_HPA // 95

   .field_id =  { .raw  = 0xA020000300000098 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0358, .attributes = { .raw = 0x19 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_PINBASED_EXEC_CTLS // 96

   .field_id =  { .raw  = 0xA02000020000009C }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0378, .attributes = { .raw = 0x10 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_PLE_GAP // 97

   .field_id =  { .raw  = 0xA0200002000000A4 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0388, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_PLE_WINDOW // 98

   .field_id =  { .raw  = 0xA0200002000000A8 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0398, .attributes = { .raw = 0x20 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_POSTED_INT_NOTIFICATION_VECTOR // 99

   .field_id =  { .raw  = 0xA0200001000000AC }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03A8, .attributes = { .raw = 0x10 },

   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),

   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_PROCBASED_EXEC_CTLS2 // 100

   .field_id =  { .raw  = 0xA0200002000000B0 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03B0, .attributes = { .raw = 0x30 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // SHADOW_SHARED_EPTP // 101

   .field_id =  { .raw  = 0xA0200003000000B4 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03C0, .attributes = { .raw = 0x39 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_ENTER_GUEST_STATE_GPA // 102

   .field_id =  { .raw  = 0xA020000300000100 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03E0, .attributes = { .raw = 0x26 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_ENTER_GUEST_STATE_HPA // 103

   .field_id =  { .raw  = 0xA020000300000104 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0400, .attributes = { .raw = 0x25 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // VE_INFO_GPA // 104

   .field_id =  { .raw  = 0xA020000300000108 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0420, .attributes = { .raw = 0x26 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // VE_INFO_HPA // 105

   .field_id =  { .raw  = 0xA02000030000010C }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0440, .attributes = { .raw = 0x25 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_VAPIC_GPA // 106

   .field_id =  { .raw  = 0xA020000300000110 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0460, .attributes = { .raw = 0x26 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_VAPIC_HPA // 107

   .field_id =  { .raw  = 0xA020000300000114 }, 

   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0480, .attributes = { .raw = 0x25 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // CPUID_CONTROL // 108

   .field_id =  { .raw  = 0xA120000000000000 }, 

   .num_of_fields = 128, .num_of_elem = 1, .offset = 0x0900, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (3ULL & 0xFFULL),

   .export_mask = (-1ULL & 0xFFULL), .import_mask = (3ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_ME, .mig_import = MIG_ME 

 },

 {

   // LAST_EPF_GPA_LIST // 109

   .field_id =  { .raw  = 0xA220000300000200 }, 

   .num_of_fields = 32, .num_of_elem = 1, .offset = 0x0700, .attributes = { .raw = 0x6 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = false, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_VMCS_1 // 110

   .field_id =  { .raw  = 0x2420000000000000 }, 

   .num_of_fields = 4096, .num_of_elem = 1, .offset = 0x6000,

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (0ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false 

 },

 {

   // L2_MSR_BITMAPS_1 // 111

   .field_id =  { .raw  = 0x2520000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x7000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // L2_SHADOW_MSR_BITMAPS_1 // 112

   .field_id =  { .raw  = 0xA620000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x8000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_VMCS_2 // 113

   .field_id =  { .raw  = 0x2C20000000000000 }, 

   .num_of_fields = 4096, .num_of_elem = 1, .offset = 0x9000,

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (0ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false 

 },

 {

   // L2_MSR_BITMAPS_2 // 114

   .field_id =  { .raw  = 0x2D20000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xA000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // L2_SHADOW_MSR_BITMAPS_2 // 115

   .field_id =  { .raw  = 0xAE20000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xB000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 },

 {

   // L2_VMCS_3 // 116

   .field_id =  { .raw  = 0x3420000000000000 }, 

   .num_of_fields = 4096, .num_of_elem = 1, .offset = 0xC000,

   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),

   .dbg_rd_mask = (0ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),

   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),

   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),

   .special_rd_handling = false, .special_wr_handling = false 

 },

 {

   // L2_MSR_BITMAPS_3 // 117

   .field_id =  { .raw  = 0x3520000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xD000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = true,

   .mig_export = MIG_NONE, .mig_import = MIG_NONE 

 },

 {

   // L2_SHADOW_MSR_BITMAPS_3 // 118

   .field_id =  { .raw  = 0xB620000300000000 }, 

   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xE000, .attributes = { .raw = 0x0 },

   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),

   .special_rd_handling = true, .special_wr_handling = false,

   .mig_export = MIG_NONE, .mig_import = MIG_IES 

 }

};



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

 * @file cpuid_fms.c

 * @brief Allowed CPUID definitions

 */



#include "cpuid_fms.h"

#include "accessors/data_accessors.h"



const fms_info_t allowed_fms[TOTAL_KNOWN_FMS] = {



        { .raw = (CWF_NATIVE_FMS    | CWF_LATEST_STEPPING) },

        { .raw = (GNR_D_NATIVE_FMS  | GNR_D_LATEST_STEPPING) },

        { .raw = (GNR_SP_NATIVE_FMS | GNR_SP_LATEST_STEPPING) },

        { .raw = (SRF_NATIVE_FMS    | SRF_LATEST_STEPPING) },

        { .raw = (EMR_NATIVE_FMS    | EMR_LATEST_STEPPING) },

        { .raw = (SPR_NATIVE_FMS    | SPR_LATEST_STEPPING) },



};



// Currently empty

const fms_info_t disallowed_fms[TOTAL_KNOWN_FMS] = { 0 };



static bool_t are_equal_family_and_model(fms_info_t fms_config1, fms_info_t fms_config2)

{

    return ((fms_config1.raw & ~CPUID_S_MASK) == (fms_config2.raw & ~CPUID_S_MASK));

}



static uint16_t find_table_start(void)

{

    fms_info_t platform_fms = get_global_data()->platform_fms;



    for (uint16_t i = 0; i < TOTAL_KNOWN_FMS; i++)

    {

        if (are_equal_family_and_model(platform_fms, allowed_fms[i]))

        {

            return i;

        }

    }



    // Should never happen

    FATAL_ERROR();



    return 0;

}



fms_info_t get_allowed_fms(uint16_t index)

{

    fms_info_t platform_fms = get_global_data()->platform_fms;



    if (index == 0)

    {

        return platform_fms;

    }



    uint16_t table_start = find_table_start();



    if ((table_start + index) >= TOTAL_KNOWN_FMS)

    {

        fms_info_t zero_fms = { .raw = 0 };

        return zero_fms;

    }



    lfence();



    return allowed_fms[table_start + index];

}



uint16_t get_num_allowed_fms(void)

{

    uint16_t table_start = find_table_start();



    return (TOTAL_KNOWN_FMS - table_start);

}



bool_t check_fms_config(fms_info_t fms_config)

{

    fms_info_t platform_fms = get_global_data()->platform_fms;



    if (are_equal_family_and_model(platform_fms, fms_config) &&

        (fms_config.stepping_id > platform_fms.stepping_id))

    {

        return false;

    }



    uint16_t table_start = find_table_start();



    bool_t family_model_found = false;



    for (uint16_t i = table_start; i < TOTAL_KNOWN_FMS; i++)

    {

        if (are_equal_family_and_model(fms_config, allowed_fms[i]))

        {

            family_model_found = true;



            if (fms_config.stepping_id > allowed_fms[i].stepping_id)

            {

                return false;

            }

        }

    }



    return family_model_found;

}

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

 * @file error_reporting.c

 * @brief Runtime error reporting features for TDX module

 */



#include "tdx_basic_defs.h"

#include "tdx_basic_types.h"

#include "accessors/ia32_accessors.h"

#include "accessors/data_accessors.h"

#include "error_reporting.h"



void tdx_report_error_and_halt(uint32_t source_id, uint32_t code)

{

    uint64_t error_code = ERROR_CODE(source_id, code);

    TDX_ERROR("Error 0x%llx reported by the TDX Module\n", error_code);

    TDX_ERROR("Module shutdown initiated - UD2 expected\n");



    UNUSED(error_code);



    tdx_arch_fatal_error();

}



void tdx_arch_fatal_error( void )

{

#ifdef DEBUGFEATURE_TDX_DBG_TRACE

    TDX_ERROR("!!!!!!!!!!!!!!!!!! - Module critical error - UD2 - !!!!!!!!!!!!!!!!!!\n");

    TDX_ERROR("!!!!!!!!!!!!!!!!!!         - LAST MESSAGE -        !!!!!!!!!!!!!!!!!!\n");

    debug_control_t* p_ctl = &(get_global_data()->debug_control);

    dump_print_buffer_to_vmm_memory(p_ctl->emergency_buffer, 0);

#endif



    ia32_ud2();

}







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

 * @file helpers.c

 * @brief Common TDX API flow helper functions

 */



#include "helpers.h"

#include "x86_defs/mktme.h"

#include "x86_defs/vmcs_defs.h"

#include "tdx_api_defs.h"

#include "auto_gen/cpuid_configurations.h"

#include "auto_gen/msr_config_lookup.h"



#include "accessors/ia32_accessors.h"

#include "accessors/vt_accessors.h"

#include "memory_handlers/keyhole_manager.h"

#include "memory_handlers/sept_manager.h"

#include "data_structures/td_vmcs_init.h"

#include "td_transitions/td_exit.h"

#include "td_dispatcher/tdx_td_dispatcher.h"

#include "td_dispatcher/vm_exits/td_vmexit.h"

#include "virt_msr_helpers.h"



#include "fv_utils.h"

#ifdef TDXFV_NO_ASM

#include "string.h"

#endif



api_error_code_e program_mktme_keys(uint16_t hkid)

{

	mktme_key_program_t mktme_key_program;

	api_error_code_e    return_val = UNINITIALIZE_ERROR;

	uint64_t            pconfig_return_code;



	basic_memset_to_zero(&mktme_key_program, sizeof(mktme_key_program_t));



	// set the command, hkid as keyid and encryption algorithm

	mktme_key_program.keyid_ctrl.command = MKTME_KEYID_SET_KEY_RANDOM;

    mktme_key_program.keyid = hkid;



    if (get_sysinfo_table()->mcheck_fields.tdx_without_integrity)

    {

        if (get_global_data()->plt_common_config.ia32_tme_activate.algs_aes_xts_256)

        {

            mktme_key_program.keyid_ctrl.enc_algo = AES_XTS_256;

        }

        else

        {

            mktme_key_program.keyid_ctrl.enc_algo = AES_XTS_128;

        }

    }

    else

    {

        if (get_global_data()->plt_common_config.ia32_tme_activate.algs_aes_xts_256_with_integrity)

        {

            mktme_key_program.keyid_ctrl.enc_algo = AES_XTS_256_WITH_INTEGRITY;

        }

        else

        {

            mktme_key_program.keyid_ctrl.enc_algo = AES_XTS_128_WITH_INTEGRITY;

        }

    }



	// Execute the PCONFIG instruction with the updated struct and return

	pconfig_return_code = ia32_mktme_key_program(&mktme_key_program);



    if (pconfig_return_code != MKTME_PROG_SUCCESS)

    {

        TDX_ERROR("pconfig_return_code = %llx\n", pconfig_return_code);

        if (pconfig_return_code == MKTME_DEVICE_BUSY)

        {

            return_val = api_error_with_operand_id(TDX_OPERAND_BUSY, OPERAND_ID_KET);

            TDX_ERROR("Failed to program an MKTME key due to lock on KET\n");

            goto EXIT;

        }

        else if (pconfig_return_code == MKTME_ENTROPY_ERROR)

        {

            return_val = TDX_KEY_GENERATION_FAILED;

            TDX_ERROR("Failed to generate a key for the MKTME engine\n");

            goto EXIT;

        }

        else

        {

            // unexpected - FATAL ERROR

            FATAL_ERROR();

        }

    }



    return_val = TDX_SUCCESS;

EXIT:

    return return_val;

}



void basic_memset(uint64_t dst, uint64_t dst_bytes, uint8_t val, uint64_t nbytes)

{

    tdx_sanity_check (dst_bytes >= nbytes, SCEC_HELPERS_SOURCE, 2);



#ifdef TDXFV_NO_ASM

    // TDXFV_ABST_LBL: std / std

    memset((void*)dst, val, nbytes);

    #if 0

    for (int i = 0; i < nbytes; i++) {

        *((char*)dst + i) = val;

    }

    #endif

#else

    _ASM_VOLATILE_ ("cld\n"

                    "rep; stosb;"

                    :

                    :"c"(nbytes), "a"(val), "D"(dst)

                    :"memory", "cc");

#endif

}



void basic_memset_to_zero(void * dst, uint64_t nbytes)

{

    basic_memset((uint64_t)dst, nbytes, 0, nbytes);

}



void cache_aligned_copy_direct(uint64_t src, uint64_t dst, uint64_t size)

{

    uint64_t i = 0;



    tdx_debug_assert(!((src % MOVDIR64_CHUNK_SIZE) || (dst % MOVDIR64_CHUNK_SIZE) ||

                       (size % MOVDIR64_CHUNK_SIZE)));



    //To convert from size in bytes to cacheline steps (64bytes), shift by 6:

    //1 << 6 = 64;  64 >> 6 = 1

    for (i = 0; i < (size >> 6 ); i++)

    {

        movdir64b((void *)(src + (i << 6)), dst + (i << 6));

    }

    mfence();

}



api_error_code_e non_shared_hpa_metadata_check_and_lock(

        pa_t hpa,

        lock_type_t lock_type,

        page_type_t expected_pt,

        pamt_block_t* pamt_block,

        pamt_entry_t** pamt_entry,

        page_size_t*   leaf_size,

        bool_t walk_to_leaf_size,

        bool_t is_guest

        )

{

    // 1) Check that the operand’s HPA is within a TDMR (Trust Domain Memory Range) which is covered by a PAMT.

    if (!pamt_get_block(hpa, pamt_block))

    {

        TDX_ERROR("pamt_get_block error hpa = 0x%llx\n", hpa.raw);

        return TDX_OPERAND_ADDR_RANGE_ERROR;

    }



    pamt_entry_t* pamt_entry_lp;

    page_size_t requested_leaf_size = *leaf_size;



    // 2) Find the PAMT entry for the page and verify that its metadata is as expected.

    api_error_code_e errc = pamt_walk(hpa, *pamt_block, lock_type, leaf_size,

                                      walk_to_leaf_size, is_guest, &pamt_entry_lp);



    if (errc != TDX_SUCCESS)

    {

        TDX_ERROR("pamt_walk error\n");

        return errc;

    }



    if (walk_to_leaf_size && (requested_leaf_size != *leaf_size))

    {

        TDX_ERROR("PAMT entry level = %d , Expected level = %d\n", *leaf_size, requested_leaf_size);

        pamt_unwalk(hpa, *pamt_block, pamt_entry_lp, lock_type, *leaf_size);

        return TDX_PAGE_METADATA_INCORRECT;

    }



    if (pamt_entry_lp->pt != expected_pt)

    {

        TDX_ERROR("pamt_entry_lp->pt = %d , expected_pt = %d\n", pamt_entry_lp->pt, expected_pt);

        pamt_unwalk(hpa, *pamt_block, pamt_entry_lp, lock_type, *leaf_size);

        return TDX_PAGE_METADATA_INCORRECT;

    }



    *pamt_entry = pamt_entry_lp;



    return TDX_SUCCESS;

}



pa_t assign_hkid_to_hpa(tdr_t* tdr_p, pa_t hpa)

{

    uint16_t hkid;



    // 1) If the target page is TDR (given TDR pointer is NULL), then use the TDX-SEAM global private HKID.



    if (tdr_p == NULL)

    {

        hkid = get_global_data()->hkid;

    }

    // 2) Else, read the HKID value associated with the TD from the TDR page.

    else

    {

        hkid = tdr_p->key_management_fields.hkid;

    }



    return set_hkid_to_pa(hpa, hkid);

}



api_error_code_e shared_hpa_check(pa_t hpa, uint64_t size)

{

    // 1) Check that no bits above MAX_PA are set



    if (!is_pa_smaller_than_max_pa(hpa.raw))

    {

        return TDX_OPERAND_INVALID;

    }



    // 2) Check that the provided HPA is outside SEAMRR.



    uint64_t seamrr_base = get_global_data()->seamrr_base;

    uint64_t seamrr_size = get_global_data()->seamrr_size;



    // SEAMRR and HPA+page ranges are not expected cause integer overflow

    // SEAMRR base and size are both 32 bits,

    // HPA is checked to be smaller than MAX_PA in above check

    // If there's still somehow an unexpected overflow, ot will be caught by the check inside is_overlap()

    if (is_overlap(get_addr_from_pa(hpa), size, seamrr_base, seamrr_size))

    {

        return TDX_OPERAND_INVALID;

    }



    // 3) Check that HKID bits in the HPA are in the range configured for shared HKIDs (0 to MAX_MKTME_HKIDS – 1).



    if ((uint64_t)get_hkid_from_pa(hpa) >= get_global_data()->private_hkid_min)

    {

        return TDX_OPERAND_INVALID;

    }



    return TDX_SUCCESS;

}



api_error_code_e shared_hpa_check_with_pwr_2_alignment(pa_t hpa, uint64_t size)

{

    if (!is_addr_aligned_pwr_of_2(hpa.raw, size))

    {

        return TDX_OPERAND_INVALID;

    }



    return shared_hpa_check(hpa, size);

}



api_error_code_e hpa_check_with_pwr_2_alignment(pa_t hpa, uint64_t size)

{

    // 1) Check  page alignment

    if (!is_addr_aligned_pwr_of_2(hpa.raw, size))

    {

        return TDX_OPERAND_INVALID;

    }



    // 2) Check that No HKID bits are set

    if (get_hkid_from_pa(hpa) != 0)

    {

        return TDX_OPERAND_INVALID;

    }



    // 3) Check that no bits above MAX_PA are set

    if (!is_pa_smaller_than_max_pa(hpa.raw))

    {

        return TDX_OPERAND_INVALID;

    }



    return TDX_SUCCESS;

}



api_error_type check_lock_and_map_explicit_private_4k_hpa(

        pa_t hpa,

        uint64_t operand_id,

        tdr_t* tdr_p,

        mapping_type_t mapping_type,

        lock_type_t lock_type,

        page_type_t expected_pt,

        pamt_block_t* pamt_block,

        pamt_entry_t** pamt_entry,

        bool_t* is_locked,

        void**         la

        )

{

    api_error_type errc;



    errc = check_and_lock_explicit_4k_private_hpa( hpa, operand_id,

             lock_type, expected_pt, pamt_block, pamt_entry, is_locked);

    if (errc != TDX_SUCCESS)

    {

        return errc;

    }



    pa_t hpa_with_hkid = assign_hkid_to_hpa(tdr_p, hpa);



    *la = map_pa((void*)hpa_with_hkid.full_pa, mapping_type);



    return TDX_SUCCESS;

}



api_error_type check_lock_and_map_explicit_tdr(

        pa_t tdr_hpa,

        uint64_t operand_id,

        mapping_type_t mapping_type,

        lock_type_t lock_type,

        page_type_t expected_pt,

        pamt_block_t* pamt_block,

        pamt_entry_t** pamt_entry,

        bool_t* is_locked,

        tdr_t** tdr_p

        )

{

    return check_lock_and_map_explicit_private_4k_hpa(tdr_hpa, operand_id, NULL, mapping_type,

            lock_type, expected_pt, pamt_block, pamt_entry, is_locked, (void**)tdr_p);

}



api_error_type othertd_check_lock_and_map_explicit_tdr(

        pa_t tdr_hpa,

        uint64_t operand_id,

        mapping_type_t mapping_type,

        lock_type_t lock_type,

        page_type_t expected_pt,

        pamt_block_t* pamt_block,

        pamt_entry_t** pamt_entry,

        bool_t* is_locked,

        tdr_t** tdr_p

        )

{

    api_error_type errc;

    page_size_t leaf_size = PT_4KB;



    errc = hpa_check_with_pwr_2_alignment(tdr_hpa, _4KB);

    if (errc != TDX_SUCCESS)

    {

        return api_error_with_operand_id(TDX_OPERAND_INVALID, operand_id);

    }



    errc = non_shared_hpa_metadata_check_and_lock(tdr_hpa, lock_type,

            expected_pt, pamt_block, pamt_entry, &leaf_size, true, true);



    if (errc != TDX_SUCCESS)

    {

        return api_error_with_operand_id(errc, operand_id);

    }



    *is_locked = true;



    pa_t hpa_with_hkid = assign_hkid_to_hpa(NULL, tdr_hpa);



    *tdr_p = map_pa((void*)hpa_with_hkid.full_pa, mapping_type);



    return TDX_SUCCESS;

}



api_error_type check_and_lock_explicit_private_hpa(

        pa_t hpa,

        uint64_t operand_id,

        uint64_t alignment,

        lock_type_t lock_type,

        page_type_t expected_pt,

        pamt_block_t* pamt_block,

        pamt_entry_t** pamt_entry,

        page_size_t* leaf_size,

        bool_t walk_to_leaf_size,

        bool_t* is_locked

        )

{

    api_error_code_e errc;



    errc = hpa_check_with_pwr_2_alignment(hpa, alignment);

    if (errc != TDX_SUCCESS)

    {

        return api_error_with_operand_id(TDX_OPERAND_INVALID, operand_id);

    }



    errc = non_shared_hpa_metadata_check_and_lock(hpa, lock_type,

            expected_pt, pamt_block, pamt_entry, leaf_size, walk_to_leaf_size, false);



    if (errc != TDX_SUCCESS)

    {

        return api_error_with_operand_id(errc, operand_id);

    }



    *is_locked = true;



    return TDX_SUCCESS;

}





api_error_type check_and_lock_explicit_4k_private_hpa(

        pa_t hpa,

        uint64_t operand_id,

        lock_type_t lock_type,

        page_type_t expected_pt,

        pamt_block_t* pamt_block,

        pamt_entry_t** pamt_entry,

        bool_t* is_locked

        )

{

    api_error_type errc;



    page_size_t leaf_size = PT_4KB;



    errc = check_and_lock_explicit_private_hpa(hpa, operand_id, _4KB, lock_type,

              expected_pt, pamt_block, pamt_entry, &leaf_size, true, is_locked);



    if (errc != TDX_SUCCESS)

    {

        return errc;

    }



    return TDX_SUCCESS;

}



api_error_type check_and_lock_free_range_hpa(

        pa_t hpa,

        uint64_t operand_id,

        lock_type_t lock_type,

        page_size_t range_size,

        pamt_block_t* pamt_block,

        pamt_entry_t** pamt_entry,

        bool_t* is_locked

        )

{

    tdx_debug_assert(range_size != PT_1GB);

    tdx_debug_assert(lock_type == TDX_LOCK_EXCLUSIVE);



    api_error_type errc;

    page_size_t pamt_level = range_size;

    uint64_t alignment = (range_size == PT_2MB) ? _2MB : _4KB;



    errc = check_and_lock_explicit_private_hpa(hpa, operand_id, alignment, lock_type, PT_NDA,

                                               pamt_block, pamt_entry, &pamt_level, true, is_locked);



    if (errc != TDX_SUCCESS)

    {

        return errc;

    }



    // Verify 2MB HPA range is entirely free.

    if ((range_size == PT_2MB) && !pamt_is_2mb_range_free(hpa, pamt_block))

    {

        TDX_ERROR("PAMT level (%d) is not as expected (%d) or the 2MB range isn't free\n", pamt_level, range_size);

        pamt_unwalk(hpa, *pamt_block, *pamt_entry, lock_type, pamt_level);

        *is_locked = false;

        return api_error_with_operand_id(TDX_PAGE_METADATA_INCORRECT, operand_id);

    }



    return TDX_SUCCESS;

}





api_error_type lock_and_map_implicit_tdr(

        pa_t tdr_pa,

        uint64_t operand_id,

        mapping_type_t mapping_type,

        lock_type_t lock_type,

        pamt_entry_t** pamt_entry,

        bool_t* is_locked,

        tdr_t** tdr_p

        )

{

    api_error_code_e errc = pamt_implicit_get_and_lock(tdr_pa, PT_4KB, lock_type, pamt_entry);



    if (errc != TDX_SUCCESS)

    {

        TDX_ERROR("get_implicit_page_pamt_and_lock error\n");

        return api_error_with_operand_id(errc, operand_id);

    }



    *is_locked = true;



    uint16_t hkid = get_global_data()->hkid;

    tdr_pa = set_hkid_to_pa(tdr_pa, hkid);



    uint64_t tdr_addr = tdr_pa.full_pa;



    *tdr_p = map_continuous_pages(&tdr_addr, 1, mapping_type, STATIC_KEYHOLE_IDX_TDR);



    return TDX_SUCCESS;

}



tdcs_t* map_implicit_tdcs(

        tdr_t* tdr_p,

        mapping_type_t mapping_type,

        bool_t other_td

        )

{

    return map_continuous_pages(tdr_p->management_fields.tdcx_pa, (uint16_t)tdr_p->management_fields.num_tdcx,

                                mapping_type,

                                other_td ? STATIC_KEYHOLE_IDX_OTHERTD_TDCS : STATIC_KEYHOLE_IDX_TDCS);

}



static api_error_type check_td_in_correct_build_state(tdr_t *tdr_p)

{

    if (tdr_p->management_fields.fatal)

    {

        TDX_ERROR("TD is in fatal state\n");

        return api_error_fatal(TDX_TD_FATAL);

    }



    if (tdr_p->management_fields.lifecycle_state != TD_KEYS_CONFIGURED)

    {

        TDX_ERROR("TD key are not configured\n");

        return TDX_TD_KEYS_NOT_CONFIGURED;

    }



    if (tdr_p->management_fields.num_tdcx < MIN_NUM_TDCS_PAGES)

    {

        TDX_ERROR("TDCS minimal num of pages %d is not allocated\n", MIN_NUM_TDCS_PAGES);

        return TDX_TDCS_NOT_ALLOCATED;

    }



    return TDX_SUCCESS;

}



static api_error_type check_any_td_state_map_tdcs_and_lock(

        tdr_t* tdr_p,

        mapping_type_t mapping_type,

        lock_type_t op_state_lock_type,

        bool_t map_migsc_links,

        uint32_t current_leaf,

        bool_t other_td,

        bool_t guest_side_flow,

        tdcs_t** tdcs_p

        )

{

    UNUSED(map_migsc_links);

    api_error_code_e errc = UNINITIALIZE_ERROR;



    *tdcs_p = NULL;



    errc = check_td_in_correct_build_state(tdr_p);



    if (errc != TDX_SUCCESS)

    {

        TDX_ERROR("TD is in incorrect build state\n");

        return errc;

    }



    // Map the TDCS structure and check the state

    tdcs_t* tmp_tdcs_p = map_implicit_tdcs(tdr_p, mapping_type, other_td);



    if (op_state_lock_type != TDX_LOCK_NO_LOCK)

    {

        if ((errc = acquire_sharex_lock_hp(&(tmp_tdcs_p->management_fields.op_state_lock),

                                     op_state_lock_type, guest_side_flow)) != TDX_SUCCESS)

        {

            free_la(tmp_tdcs_p);

            TDX_ERROR("Could not lock TDCS OP state lock\n");

            return api_error_with_operand_id(errc, OPERAND_ID_OP_STATE);

        }

    }



    bool_t is_allowed = false;



    IF_COMMON (!guest_side_flow)

    {

        seamcall_leaf_opcode_t seamcall_leaf = (seamcall_leaf_opcode_t)current_leaf;

        is_allowed = op_state_is_seamcall_allowed(seamcall_leaf, tmp_tdcs_p->management_fields.op_state, other_td);

    }

    else

    {

        tdcall_leaf_opcode_t tdcall_leaf = (tdcall_leaf_opcode_t)current_leaf;

        is_allowed = op_state_is_tdcall_allowed(tdcall_leaf, tmp_tdcs_p->management_fields.op_state, other_td);

    }



    if (!is_allowed)

    {

        if (op_state_lock_type != TDX_LOCK_NO_LOCK)

        {

            release_sharex_lock_hp(&(tmp_tdcs_p->management_fields.op_state_lock), op_state_lock_type);

        }

        free_la(tmp_tdcs_p);

        TDX_ERROR("TDCS OP state is not allowed on this SEAMCALL leaf\n");

        return TDX_OP_STATE_INCORRECT;

    }



    *tdcs_p = tmp_tdcs_p;



    return TDX_SUCCESS;

}



api_error_type check_state_map_tdcs_and_lock(

        tdr_t* tdr_p,

        mapping_type_t mapping_type,

        lock_type_t op_state_lock_type,

        bool_t map_migsc_links,

        seamcall_leaf_opcode_t current_leaf,

        tdcs_t** tdcs_p

        )

{

    return check_any_td_state_map_tdcs_and_lock(tdr_p, mapping_type, op_state_lock_type,

                                                map_migsc_links, (uint32_t)current_leaf, false, false, tdcs_p);

}



api_error_type othertd_check_state_map_tdcs_and_lock(

        tdr_t* tdr_p,

        mapping_type_t mapping_type,

        lock_type_t op_state_lock_type,

        bool_t map_migsc_links,

        uint32_t current_leaf,

        bool_t guest_side_flow,

        tdcs_t** tdcs_p

        )

{

    return check_any_td_state_map_tdcs_and_lock(tdr_p, mapping_type, op_state_lock_type,

                                                map_migsc_links, current_leaf, true, guest_side_flow, tdcs_p);

}



tdvps_t* map_tdvps(

        pa_t tdvpr_pa,

        uint16_t hkid,

        uint16_t num_l2_vms,

        mapping_type_t mapping_type

        )

{

    tdvpr_pa.raw = set_hkid_to_pa(tdvpr_pa, hkid).raw;

    tdvps_t* tdvpr_lp = map_continuous_pages(&tdvpr_pa.raw, 1, mapping_type, STATIC_KEYHOLE_IDX_TDVPS);



    if ((uint32_t)tdvpr_lp->management.num_tdvps_pages < (uint32_t)(MIN_TDVPS_PAGES + (num_l2_vms * TDVPS_PAGES_PER_L2_VM)))

    {

        TDX_ERROR("Num of TDCX pages (%d) is incorrect\n", tdvpr_lp->management.num_tdvps_pages);

        free_la(tdvpr_lp);

        return NULL;

    }



    uint16_t num_of_tdvps_pages = MIN_TDVPS_PAGES + (TDVPS_PAGES_PER_L2_VM * num_l2_vms);



    // First TDVX PA is actually the PA of the TDVPR itself, since we already mapped it, it can be skipped

    (void)map_continuous_pages(&tdvpr_lp->management.tdvps_pa[1], num_of_tdvps_pages - 1, mapping_type,

                         STATIC_KEYHOLE_IDX_TDVPS + 1);



    return tdvpr_lp;

}



bool_t check_gpa_validity(

        pa_t gpa,

        bool_t gpaw,

        bool_t check_is_private

        )

{

    uint16_t gpa_width = gpaw ? 52 : 48;

    bool_t gpa_shared_bit = get_gpa_shared_bit(gpa.raw, gpaw);



    if (check_is_private && (gpa_shared_bit == true))

    {

        return false;

    }



    // Bits higher then MAX_PA except shared bit must be zero (bits above SHARED bit must be zero)

    if ((gpa.raw & ~BITS(MAX_PA-1,0)) != 0)

    {

        return false;

    }



    // When a TD is operating with GPAW 48, the CPU will treat bits 51:48 of every paging-structure

    // entry as reserved and will generate reserved-bit page fault upon encountering such an entry.

    if (!gpaw && (gpa.raw & BITS(MAX_PA-1, gpa_width)))

    {

        return false;

    }



    return true;

}



bool_t verify_page_info_input(page_info_api_input_t gpa_page_info, ept_level_t min_level, ept_level_t max_level)

{

    // Verify that GPA mapping input reserved fields equal zero

    if (!is_reserved_zero_in_mappings(gpa_page_info))

    {

        TDX_ERROR("Reserved fields in GPA mappings are not zero\n");

        return false;

    }



    // Verify mapping level input is valid

    if (!((gpa_page_info.level >= min_level) && (gpa_page_info.level <= max_level)))

    {

        TDX_ERROR("Input GPA level (=%d) is not valid\n", gpa_page_info.level);

        return false;

    }



    // Check the page GPA is page aligned

    if (!is_gpa_aligned(gpa_page_info))

    {

        TDX_ERROR("Page GPA 0x%llx is not page aligned\n", gpa_page_info.raw);

        return false;

    }



    return true;

}



typedef enum sept_walk_type_e

{

    SEPT_WALK_TO_LEVEL,

    SEPT_WALK_TO_LEAF,

    SEPT_WALK_TO_LEAF_LEVEL

} sept_walk_type_t;



static api_error_type lock_sept_check_and_walk_internal(

        tdcs_t* tdcs_p,

        uint64_t operand_id,

        pa_t gpa,

        uint16_t hkid,

        lock_type_t lock_type,

        bool_t check_validity,

        sept_walk_type_t walk_type,

        ia32e_sept_t** sept_entry_ptr,

        ept_level_t* level,

        ia32e_sept_t* cached_sept_entry,

        bool_t* is_sept_locked

        )

{

    bool_t gpaw = tdcs_p->executions_ctl_fields.gpaw;



    *is_sept_locked = false;



    if (check_validity && !check_gpa_validity(gpa, gpaw, PRIVATE_ONLY))

    {

        return api_error_with_operand_id(TDX_OPERAND_INVALID, operand_id);

    }



    ia32e_eptp_t septp = tdcs_p->executions_ctl_fields.eptp;



    if (lock_type != TDX_LOCK_NO_LOCK)

    {

        if (acquire_sharex_lock(&tdcs_p->executions_ctl_fields.secure_ept_lock, lock_type) != LOCK_RET_SUCCESS)

        {

            return api_error_with_operand_id(TDX_OPERAND_BUSY, OPERAND_ID_SEPT_TREE);

        }

    }



    ept_level_t requested_level = *level;

    *sept_entry_ptr = secure_ept_walk(septp, gpa, hkid, level, cached_sept_entry, false);



    if (// When we walk to leaf we check that the final entry is a valid, existing leaf

        ((walk_type == SEPT_WALK_TO_LEAF) &&

        (!is_secure_ept_leaf_entry(cached_sept_entry) || !cached_sept_entry->rwx)) ||

        // When we walk to level, we just check that we reached requested level

        ((walk_type == SEPT_WALK_TO_LEVEL) && (*level != requested_level)) ||

        // When we walk to leaf-level, check that we reached an actual leaf

        ((walk_type == SEPT_WALK_TO_LEAF_LEVEL) && !is_secure_ept_leaf_entry(cached_sept_entry))

       )

    {

        if (lock_type != TDX_LOCK_NO_LOCK)

        {

            release_sharex_lock(&tdcs_p->executions_ctl_fields.secure_ept_lock, lock_type);

        }



        free_la(*sept_entry_ptr);

        *sept_entry_ptr = NULL;

        return api_error_with_operand_id(TDX_EPT_WALK_FAILED, operand_id);

    }



    if (lock_type != TDX_LOCK_NO_LOCK)

    {

        *is_sept_locked = true;

    }



    return TDX_SUCCESS;

}



api_error_type lock_sept_check_and_walk_private_gpa(

        tdcs_t* tdcs_p,

        uint64_t operand_id,

        pa_t gpa,

        uint16_t hkid,

        lock_type_t lock_type,

        ia32e_sept_t** sept_entry_ptr,

        ept_level_t* level,

        ia32e_sept_t* cached_sept_entry,

        bool_t* is_sept_locked

        )

{

    tdx_debug_assert(lock_type != TDX_LOCK_NO_LOCK);



    return lock_sept_check_and_walk_internal(tdcs_p, operand_id, gpa, hkid,

                                             lock_type,          // Lock the SEPT tree

                                             true,               // Check private GPA validity

                                             SEPT_WALK_TO_LEVEL, // Walk to requested level

                                             sept_entry_ptr, level, cached_sept_entry, is_sept_locked);

}



api_error_type check_and_walk_private_gpa_to_leaf(

        tdcs_t* tdcs_p,

        uint64_t operand_id,

        pa_t gpa,

        uint16_t hkid,

        ia32e_sept_t** sept_entry_ptr,

        ept_level_t* level,

        ia32e_sept_t* cached_sept_entry

        )

{

    bool_t is_sept_locked;

    *level = LVL_PT;



    // Don't lock SEPT, heck private GPA validity and walk to any leaf

    return lock_sept_check_and_walk_internal(tdcs_p, operand_id, gpa, hkid,

                                             TDX_LOCK_NO_LOCK,  // Do not lock SEPT tree

                                             true,              // Check private GPA validity

                                             SEPT_WALK_TO_LEAF, // Walk to any leaf

                                             sept_entry_ptr, level, cached_sept_entry, &is_sept_locked);

}



api_error_type walk_private_gpa(

        tdcs_t* tdcs_p,

        pa_t gpa,

        uint16_t hkid,

        ia32e_sept_t** sept_entry_ptr,

        ept_level_t* level,

        ia32e_sept_t* cached_sept_entry

        )

{

    bool_t is_sept_locked;



    // Do not check private GPA validity and walk to requested level

    return lock_sept_check_and_walk_internal(tdcs_p, 0, gpa, hkid,

                                             TDX_LOCK_NO_LOCK,   // Do not lock SEPT tree

                                             false,              // Do not check private GPA validity

                                             SEPT_WALK_TO_LEVEL, // Walk to requested level

                                             sept_entry_ptr, level, cached_sept_entry, &is_sept_locked);

}



static void inject_ve_and_return_to_td(tdvps_t* tdvps_p, pa_t gpa, vmx_exit_qualification_t exit_qual)

{

    tdx_inject_ve(VMEXIT_REASON_EPT_VIOLATION, exit_qual.raw, tdvps_p, gpa.raw, 0);

    bus_lock_exit();

    check_pending_voe_on_debug_td_return();

    tdx_return_to_td(true, false, &tdvps_p->guest_state.gpr_state);

}



api_error_code_e check_walk_and_map_guest_side_gpa(

        tdcs_t* tdcs_p,

        tdvps_t* tdvps_p,

        pa_t gpa,

        uint16_t hkid,

        mapping_type_t mapping_type,

        bool_t check_gpa_is_private,

        void ** la

        )

{

    ia32e_eptp_t eptp;

    ia32e_ept_t ept_entry_copy = {.raw = 0};

    ept_walk_result_t walk_result;

    access_rights_t accumulated_rwx;



    bool_t gpaw = tdcs_p->executions_ctl_fields.gpaw;

    vmx_exit_qualification_t exit_qual;



    pa_t page_hpa;



    bool_t shared_bit = get_gpa_shared_bit(gpa.raw, gpaw);



    access_rights_t access_rights = { .raw = 0 };



    access_rights.r = 1;

    access_rights.w = (mapping_type == TDX_RANGE_RW) ? 1 : 0;

    access_rights.x = (uint8_t)0;



    exit_qual.raw = (uint64_t)access_rights.raw;



    if (!check_gpa_validity(gpa, gpaw, check_gpa_is_private))

    {

        return TDX_OPERAND_INVALID;

    }



    if (shared_bit)

    {

        // read the shared EPT from the TD VMCS

        ia32_vmread(VMX_GUEST_SHARED_EPT_POINTER_FULL_ENCODE, &eptp.raw);

        eptp.fields.enable_ad_bits = tdcs_p->executions_ctl_fields.eptp.fields.enable_ad_bits;

        eptp.fields.enable_sss_control = tdcs_p->executions_ctl_fields.eptp.fields.enable_sss_control;

        eptp.fields.ept_ps_mt = tdcs_p->executions_ctl_fields.eptp.fields.ept_ps_mt;

        eptp.fields.ept_pwl = tdcs_p->executions_ctl_fields.eptp.fields.ept_pwl;

    }

    else

    {

        eptp.raw = tdcs_p->executions_ctl_fields.eptp.raw;

    }



    walk_result = gpa_translate(eptp, gpa, !shared_bit, hkid, access_rights,

                                &page_hpa, &ept_entry_copy, &accumulated_rwx);



    exit_qual.ept_violation.data_read      = access_rights.r & ~accumulated_rwx.r;

    exit_qual.ept_violation.data_write     = access_rights.w & ~accumulated_rwx.w;

    exit_qual.ept_violation.insn_fetch     = access_rights.x & ~accumulated_rwx.x;

    exit_qual.ept_violation.gpa_readable   = accumulated_rwx.r;

    exit_qual.ept_violation.gpa_writeable  = accumulated_rwx.w;

    exit_qual.ept_violation.gpa_executable = accumulated_rwx.x;



    vmx_ext_exit_qual_t ext_exit_qual = { .raw = 0 };

    vm_vmexit_exit_reason_t vm_exit_reason = { .raw = 0 };

    vm_exit_reason.basic_reason = VMEXIT_REASON_EPT_VIOLATION;



    IF_RARE (!shared_bit && (walk_result != EPT_WALK_SUCCESS))

    {

        ia32e_sept_t sept_copy = { .raw = ept_entry_copy.raw };



        if (sept_state_is_any_pending_and_guest_acceptable(sept_copy))

        {

            // This is a pending page waiting for acceptable by the TD

            if (tdcs_p->executions_ctl_fields.td_ctls.pending_ve_disable)

            {

                // The TD is configured to TD exit on access to a PENDING page

                ext_exit_qual.type = VMX_EEQ_PENDING_EPT_VIOLATION;

                tdx_ept_violation_exit_to_vmm(gpa, vm_exit_reason, exit_qual.raw, ext_exit_qual.raw);

            }

            else

            {

                // The TD is configured to throw a #VE on access to a PENDING page

                inject_ve_and_return_to_td(tdvps_p, gpa, exit_qual);

            }

        }

        else

        {

            // This is not a PENDING page, do an EPT Violation TD exit

            tdx_ept_violation_exit_to_vmm(gpa, vm_exit_reason, exit_qual.raw, 0);

        }

    }



    IF_RARE (walk_result == EPT_WALK_MISCONFIGURATION)

    {

        tdx_ept_misconfig_exit_to_vmm(gpa);

    }

    else IF_RARE (walk_result == EPT_WALK_VIOLATION)

    {

        tdx_ept_violation_exit_to_vmm(gpa, vm_exit_reason, exit_qual.raw, ext_exit_qual.raw);

    }

    else IF_RARE (walk_result == EPT_WALK_CONVERTIBLE_VIOLATION)

    {

        inject_ve_and_return_to_td(tdvps_p, gpa, exit_qual);

    }



    // Else - success



    if (shared_bit)

    {

        if (ept_entry_copy.fields_4k.mt != MT_WB)

        {

            *la = map_pa_non_wb(page_hpa.raw_void, mapping_type);

        }

        else

        {

            *la = map_pa(page_hpa.raw_void, mapping_type);

        }

    }

    else

    {

        *la = map_pa_with_hkid(page_hpa.raw_void, hkid, mapping_type);

    }



    return TDX_SUCCESS;

}



api_error_code_e associate_vcpu(tdvps_t * tdvps_ptr,

                                tdcs_t * tdcs_ptr,

                                bool_t* new_association)

{

    uint32_t         prev_assoc_lpid;  // Previous associated LPID

    uint32_t         curr_lp_id = get_local_data()->lp_info.lp_id;



    /**

     *  Atomically check that this VCPU is not associated with any LP, and

     *  associate it with the current LP.  The VCPU may already be associated

     *  with the current LP, but if it's associated with another LP this is

     *  an error.

     */

    prev_assoc_lpid = _lock_cmpxchg_32b(VCPU_NO_LP, // Expected value: no lp

                                        curr_lp_id,  // New Value

                                        &tdvps_ptr->management.assoc_lpid); // Target

    if ((prev_assoc_lpid != VCPU_NO_LP) && (prev_assoc_lpid != curr_lp_id))

    {

        return TDX_VCPU_ASSOCIATED;

    }



    // Association succeeded.  VCPU state must be VCPU_READY_*



    // Set ACTIVE_VMCS to -1 to indicate the need for VMPTRLD

    get_local_data()->vp_ctx.active_vmcs = ACTIVE_VMCS_NONE;



    uint64_t seamdb_index = get_global_data()->seamdb_index;

    if (tdvps_ptr->management.last_seamdb_index != seamdb_index)

    {

        // The TDX module has been updated since the last time this VCPU was associated.

        // The VCPU remains associated with the current LP.

        clear_module_host_state_flags(tdvps_ptr);

        clear_lp_host_state_flags(tdvps_ptr);

        tdvps_ptr->management.last_seamdb_index = seamdb_index;

    }



    // If this is a new association, update TD VMCS

    if (prev_assoc_lpid == VCPU_NO_LP)

    {

        // The current VCPU is associated with a new LP



        clear_lp_host_state_flags(tdvps_ptr);



        // Atomically increment the number of associated VCPUs

        (void)_lock_xadd_32b(&(tdcs_ptr->management_fields.num_assoc_vcpus), 1);



        *new_association = true;

    }

    else

    {

        *new_association = false;

    }



    return TDX_SUCCESS;

}



api_error_code_e check_and_associate_vcpu(tdvps_t * tdvps_ptr,

                                          tdcs_t * tdcs_ptr,

                                          bool_t* new_association,

                                          bool_t allow_disabled)

{

    uint8_t curr_vcpu_state = tdvps_ptr->management.state;



    /**

     *  Check the VCPU state to make sure it has been initialized and is not

     *  being torn down.  This may race with state changes if the VCPU is

     *  associated with another LP.  In this case the subsequent association

     *  below will fail

     */

    if (!((curr_vcpu_state == VCPU_READY) ||

          ((curr_vcpu_state == VCPU_DISABLED) && allow_disabled)))

    {

        return TDX_VCPU_STATE_INCORRECT;

    }



    return associate_vcpu(tdvps_ptr, tdcs_ptr, new_association);

}



void associate_vcpu_initial(tdvps_t * tdvps_ptr,

                            tdcs_t * tdcs_ptr)

{

    uint32_t         curr_lp_id = get_local_data()->lp_info.lp_id;



    tdvps_ptr->management.last_seamdb_index = get_global_data()->seamdb_index;



    tdvps_ptr->management.assoc_lpid = curr_lp_id;



    // Set ACTIVE_VMCS to -1 to indicate the need for VMPTRLD

    get_local_data()->vp_ctx.active_vmcs = ACTIVE_VMCS_NONE;



    clear_module_host_state_flags(tdvps_ptr);

    clear_lp_host_state_flags(tdvps_ptr);



    // Atomically increment the number of associated VCPUs

    (void)_lock_xadd_32b(&(tdcs_ptr->management_fields.num_assoc_vcpus), 1);

}



void init_tdvps_fields(tdcs_t * tdcs_ptr, tdvps_t * tdvps_ptr)

{

    tdx_module_global_t* tdx_global_data_ptr = get_global_data();



    tdvps_ptr->management.shadow_pid_hpa = NULL_PA;

    tdvps_ptr->management.shadow_pinbased_exec_ctls = tdx_global_data_ptr->td_vmcs_values.pinbased_ctls;

    tdvps_ptr->management.shadow_posted_int_notification_vector = POSTED_INTERRUPT_NOTFICATION_VECTOR_INIT;

    tdvps_ptr->management.shadow_procbased_exec_ctls2[0] = tdx_global_data_ptr->td_vmcs_values.procbased_ctls2;

    for(uint32_t indx = 0; indx <= tdcs_ptr->management_fields.num_l2_vms ; indx++)

    {

        if (indx > 0)

        {

            tdvps_ptr->management.shadow_procbased_exec_ctls2[indx] = tdx_global_data_ptr->l2_vmcs_values.procbased_ctls2; 

        }

        tdvps_ptr->management.shadow_shared_eptp[indx] = NULL_PA;

        tdvps_ptr->management.l2_enter_guest_state_gpa[indx] = NULL_PA;

        tdvps_ptr->management.l2_enter_guest_state_hpa[indx] = NULL_PA;

        tdvps_ptr->management.l2_vapic_gpa[indx] = NULL_PA;

        tdvps_ptr->management.l2_vapic_hpa[indx] = NULL_PA;

        tdvps_ptr->management.tsc_deadline[indx] = ~(0ULL);

    }



    // Base L2 CR0 Guest-Host mask:

    // The following bits are set to 1, indicating they are owned by the Intel TDX module:

    // NE (5), NW (29), CD (30)

    // Any bit set to 1 in IA32_VMX_CR0_FIXED0 except for PE (0) and PG(31) which are set to 0

    // Any bit set to 0 in IA32_VMX_CR0_FIXED1

    // Bits known to the Intel TDX module as reserved (bits 63-32, 28-19, 17 and 15-6)

    // All other bits are cleared to 0, indicating they are owned by the guest TD.

    uint64_t bitmap = 0;

    uint64_t ia32_vmx_cr0_fixed0 = get_global_data()->plt_common_config.ia32_vmx_cr0_fixed0.raw;

    uint64_t ia32_vmx_cr0_fixed1 = get_global_data()->plt_common_config.ia32_vmx_cr0_fixed1.raw;



    bitmap = (ia32_vmx_cr0_fixed0 | (~ia32_vmx_cr0_fixed1)) & (~BIT(31)) & (~BIT(0));

    bitmap = bitmap | BIT(5) | BIT(29) | BIT(30) |

             BITS(63,32) | BITS(28,19) | BIT(17) | BITS(15,6);



    tdvps_ptr->management.base_l2_cr0_guest_host_mask = bitmap;



    // Base L2 CR0 Read shadow

    // The following bits are set to 1:

    // NE (5)

    // Any bit set to 1 in IA32_VMX_CR0_FIXED0 except for PE (0) and PG(31) which are set to 0

    // All other bits are cleared to 0.

    bitmap = ia32_vmx_cr0_fixed0 & (~BIT(31)) & (~BIT(0));

    bitmap = bitmap | BIT(5);



    tdvps_ptr->management.base_l2_cr0_read_shadow = bitmap;



    // BASE_L2_CR4_GUEST_HOST_MASK = ~calc_base_l2_cr4_write_mask()

    tdvps_ptr->management.base_l2_cr4_guest_host_mask = ~(calc_base_l2_cr4_write_mask(tdcs_ptr).raw);



    uint64_t ia32_vmx_cr4_fixed0 = get_global_data()->plt_common_config.ia32_vmx_cr4_fixed0.raw;



    // Base L2 CR4 Read shadow

    // Bit MCE (6) is set to 1.

    // Bit VMXE (13) is set to 1.

    // Any other bit whose value is set to 1 in IA32_VMX_CR4_FIXED0

    // All other bits are cleared to 0.

    bitmap = (ia32_vmx_cr4_fixed0 | BIT(6) | BIT(13));



    tdvps_ptr->management.base_l2_cr4_read_shadow = bitmap;



    // Initial value of IA32_SPEC_CTRL can be calculated by calculate_real_ia32_spec_ctrl(tdcs_p, 0)

    tdvps_ptr->guest_msr_state.ia32_spec_ctrl = calculate_real_ia32_spec_ctrl(tdcs_ptr, 0);

}



uint32_t get_cpuid_lookup_entry(uint32_t leaf, uint32_t subleaf)

{

    for (uint32_t i = 0; i < MAX_NUM_CPUID_LOOKUP; i++)

    {

        if (cpuid_lookup[i].leaf_subleaf.leaf == leaf &&

            (cpuid_lookup[i].leaf_subleaf.subleaf == CPUID_SUBLEAF_NA ||

             cpuid_lookup[i].leaf_subleaf.subleaf == subleaf))

        {

            return i;

        }

    }

    return CPUID_LOOKUP_IDX_NA;

}



uint32_t get_guest_td_cpl(void)

{

    uint64_t ss_arbyte;



    ia32_vmread(VMX_GUEST_SS_ARBYTE_ENCODE, &ss_arbyte);



    seg_arbyte_t arbyte = { .raw = (uint32_t)ss_arbyte };



    return arbyte.dpl;

}



void inject_pf(uint64_t gla, pfec_t pfec)

{

    uint16_t curr_vm = get_local_data()->vp_ctx.tdvps->management.curr_vm;



    if (curr_vm != 0)

    {

        // Before we inject a #PF, reinject IDT vectoring events that happened during VM exit, if any.

        reinject_idt_vectoring_event_if_any();

    }



    vmx_entry_inter_info_t entry_info;



    //  Read the VM entry interruption information to see if there's already an event pending

    //  to be injected.

    //  Note that this field is always invalid following a VM exit.  However, it may have been

    //  set during the VM exit handling flow. At the beginning of the flow, we checked if the

    //  VM exit happened during event delivery via IDT, and may have already set up VOE. The

    //  following checks take care of such cases.

    ia32_vmread(VMX_VM_ENTRY_INTR_INFO_ENCODE, &entry_info.raw);



    //  Write the GLA directly into CR2.

    //  Since TDX-SEAM does not handle #PF itself, CR2 value will remain intact

    //  until the upcoming VM entry.

    //  Note that this is done even if we later mutate into a #DF, to emulate

    //  the CPU's #PF behavior.

    ia32_load_cr2(gla);



    //  First, check if there's already a #DF waiting to be injected.  If so, we now have a

    //  triple-fault case.  In this case we do a TD exit and disable the VCPU.

    if ((entry_info.valid) &&

        (entry_info.interruption_type == VMEXIT_INTER_INFO_TYPE_HARDWARE_EXCEPTION) &&

        (entry_info.vector == E_DF))

    {

        vm_vmexit_exit_reason_t vm_exit_reason = { .raw = 0 };

        vm_exit_reason.basic_reason = VMEXIT_REASON_TRIPLE_FAULT;



        // For L1, we do a TD exit and disable the VCPU.  For L2, we let the L1 VMM handle this.

        if (curr_vm == 0)

        {

            async_tdexit_to_vmm(TDX_NON_RECOVERABLE_VCPU, vm_exit_reason, 0, 0, 0, 0);

        }

        else

        {

            vmx_exit_qualification_t exit_qual = { .raw = 0 };

            vmx_exit_inter_info_t exit_inter_info = { .raw = 0 };

            td_l2_to_l1_exit(vm_exit_reason, exit_qual, 0, exit_inter_info);

        }

    }



    //  Check if there's already a #PF or a #VE waiting to be injected.  If so, we have a

    //  double-fault case.  In this case we inject a #DF(0) exception.

    if ((entry_info.valid) &&

        (entry_info.interruption_type == VMEXIT_INTER_INFO_TYPE_HARDWARE_EXCEPTION) &&

        ((entry_info.vector == E_PF) || (entry_info.vector == E_VE)))

    {

        inject_df();

    }

    //  In all other cases, we inject the requested #PF

    else

    {

        ia32_vmwrite(VMX_VM_ENTRY_INTR_INFO_ENCODE, PF_INTERRUPTION_INFO);

        ia32_vmwrite(VMX_VM_ENTRY_EXCEPTION_ERRORCODE_ENCODE, (uint64_t)pfec.raw);

    }



    ia32_rflags_t rflags;



    ia32_vmread(VMX_GUEST_RFLAGS_ENCODE, &rflags.raw);

    rflags.rf = 1;

    ia32_vmwrite(VMX_GUEST_RFLAGS_ENCODE, rflags.raw);

}



uint64_t calculate_virt_tsc(uint64_t native_tsc, uint64_t tsc_multiplier, uint64_t tsc_offset)

{

    // Goal is to make the virtual TSC start from the requested virt_tsc



    // tmp_128b_virt_tsc = native_tsc * tsc_multiplier;

    uint128_t tmp_128b;



#ifdef TDXFV_NO_ASM

    // TDXFV_ABST_LBL: x86 / nondet

    tmp_128b = TDXFV_NONDET_uint128t();

#else

    _ASM_VOLATILE_ (

        "mulq %3\n"

        : "=a"(tmp_128b.qwords[0]), "=d"(tmp_128b.qwords[1])

        : "a"(native_tsc), "b"(tsc_multiplier)

        :);

#endif



    // tmp_virt_tsc_64b = tmp_128b_virt_tsc / (1ULL < 48);

    uint64_t tmp_64b;



    tmp_64b = (tmp_128b.qwords[1] << 16) | (tmp_128b.qwords[0] >> 48);



    // virt_tsc = tmp_virt_tsc_64b + tsc_offset;

    return (tmp_64b + tsc_offset);

}



cr_write_status_e write_guest_cr0(uint64_t value, bool_t allow_pe_disable)

{

    ia32_cr0_t cr0;

    ia32_cr4_t cr4;

    platform_common_config_t* msr_values_ptr = &get_global_data()->plt_common_config;



    cr0.raw = value;



    // If the guest attempted to write natively invalid values, inject a #GP(0)

    ia32_cr0_t cr0_fixed0;

    cr0_fixed0.raw = msr_values_ptr->ia32_vmx_cr0_fixed0.raw;

    cr0_fixed0.pe = 0;

    cr0_fixed0.pg = 0;



    if ((~value & cr0_fixed0.raw) ||

        (value & ~msr_values_ptr->ia32_vmx_cr0_fixed1.raw))

    {

        TDX_LOG("MOV to CR0 - attempt to write invalid values (0x%lx) - #GP", value);

        return CR_ACCESS_GP;

    }



    // The combination CR0.PE == 0 and CR0.PG == 1 is architecturally illegal

    if ((cr0.pe == 0) && (cr0.pg == 1))

    {

        TDX_LOG("MOV to CR0 - use illegal combination (0x%lx) - #GP", value);

        return CR_ACCESS_GP;

    }



    // If the guest attempted to clear CR0.WP while CR4.CET is 1, throw a #GP(0)

    ia32_vmread(VMX_GUEST_CR4_ENCODE, &(cr4.raw));

    if ((cr4.cet == 1) && (cr0.wp == 0))

    {

        TDX_LOG("MOV to CR0 - illegal attempt to clear bit (0x%lx) - #GP", value);

        return CR_ACCESS_GP;

    }



    // At this point, if the guest attempted to change any CR0 bit that is owned by TDX Module,

    // i.e., set to 1 in the CR0 guest/host mask, we throw a #VE.

    // An exception to this are reserved bits 28-19, 17 and 15-6, which are silently ignored

    // (this is an architectural behavior, though not well documented in the Intel SDM).

    // Reserved bits 63-32 are most likely to be caught by the fixed value checks above,

    // the check here takes care of a possible addition of non-reserved bits in the range 63-32,

    // that is not known at the time TDX Module is written.

    if ((!cr0.pe && !allow_pe_disable) || !cr0.ne || cr0.nw || cr0.cd || cr0.reserved_3)

    {

        TDX_LOG("MOV to CR0 - illegal bits set - 0x%llx\n", cr0.raw);

        return CR_ACCESS_NON_ARCH;

    }



    // Update the value of guest CR0.

    // Values of bits 28-19, 17 and 15-6 left as they were before.

    cr0.raw &= ~(uint64_t)CR0_IGNORED_MASK;

    uint64_t guest_cr0;

    ia32_vmread(VMX_GUEST_CR0_ENCODE, &guest_cr0);

    cr0.raw |= guest_cr0 & (uint64_t)CR0_IGNORED_MASK;

    ia32_vmwrite(VMX_GUEST_CR0_ENCODE, cr0.raw);



    return CR_ACCESS_SUCCESS;

}



bool_t is_guest_cr4_allowed_by_td_config(ia32_cr4_t cr4, tdcs_t* tdcs_p, ia32_xcr0_t xfam)

{

    td_param_attributes_t attributes = tdcs_p->executions_ctl_fields.attributes;



    // Check if bits for features that are not enabled by XFAM are set

    if ((!xfam.pk && cr4.pke) ||

        ((!xfam.cet_s || !xfam.cet_u) && cr4.cet) ||

        (!xfam.uli && cr4.uintr))

    {

        TDX_LOG("MOV to CR4 - attempt to write features not enabled by XFAM (0x%lx) - #GP", cr4.raw);

        return false;

    }



    // Check if bits for features that are not enabled by ATTRIBUTES are set

    if (cr4.keylocker == 1)

    {

        TDX_LOG("MOV to CR4 - keylocker not supported (0x%lx) - #GP", cr4.raw);

        return false;

    }



    if ((attributes.pks == 0) && (cr4.pks == 1))

    {

        TDX_LOG("MOV to CR4 - PKS not supported (0x%lx) - #GP", cr4.raw);

        return false;

    }



    if (!attributes.lass && cr4.lass)

    {

        TDX_LOG("MOV to CR4 - LASS not supported by the TD\n");

        return false;

    }



    return true;

}



cr_write_status_e write_guest_cr4(uint64_t value, tdcs_t* tdcs_p, tdvps_t* tdvps_p)

{

    ia32_cr0_t cr0;

    ia32_cr4_t cr4;

    platform_common_config_t* msr_values_ptr = &get_global_data()->plt_common_config;



    cr4.raw = value;



    // If the guest attempted to write natively invalid values, inject a #GP(0)

    ia32_cr4_t cr4_fixed0;

    cr4_fixed0.raw = msr_values_ptr->ia32_vmx_cr4_fixed0.raw;

    cr4_fixed0.vmxe = 0;

    if ((~value & cr4_fixed0.raw) ||

        (value & ~msr_values_ptr->ia32_vmx_cr4_fixed1.raw))

    {

        TDX_LOG("MOV to CR4 - attempt to write invalid values (0x%lx) - #GP", value);

        return CR_ACCESS_GP;

    }



    // If the guest attempted to set bits for features that are not enabled by XFAM,

    //   inject a #GP(0)

    ia32_xcr0_t cur_xfam;

    cur_xfam.raw = tdvps_p->management.xfam;



    if (!is_guest_cr4_allowed_by_td_config(cr4, tdcs_p, cur_xfam))

    {

        return CR_ACCESS_GP;

    }



    // If the guest attempted to set CR4.CET while CR0.WP is 0, throw a #GP(0)

    ia32_vmread(VMX_GUEST_CR0_ENCODE, &(cr0.raw));

    if ((cr4.cet == 1) && (cr0.wp == 0))

    {

        TDX_LOG("MOV to CR4 - illegal attempt to clear bit (0x%lx) - #GP", value);

        return CR_ACCESS_GP;

    }



    // In all other cases, there was no architectural error but there was

    // a VM exit due to bit values that are not compatible with TDX.

    // In these cases throw a #VE.

    TDX_LOG("MOV to CR4 - other case (0x%lx) - #VE", value);

    return CR_ACCESS_NON_ARCH;

}



bool_t verify_td_attributes(td_param_attributes_t attributes, bool_t is_import)

{

    tdx_module_global_t* tdx_global_data_ptr = get_global_data();



    if (((attributes.raw & ~tdx_global_data_ptr->attributes_fixed0) != 0) ||

        ((attributes.raw & tdx_global_data_ptr->attributes_fixed1) != tdx_global_data_ptr->attributes_fixed1))

    {

        return false;

    }



    if (attributes.migratable)

    {

        // A migratable TD can't be a debug TD and doesn't support PERFMON

        if (attributes.debug || attributes.perfmon)

        {

            return false;

        }

    }

    else if (is_import)

    {

        // TD must be migratable on import flow

        return false;

    }



    return true;

}



bool_t verify_td_config_flags(config_flags_t config_flags)

{

    tdx_module_global_t* tdx_global_data_ptr = get_global_data();



    if (((config_flags.raw & ~tdx_global_data_ptr->config_flags_fixed0.raw) != 0) ||

        ((config_flags.raw & tdx_global_data_ptr->config_flags_fixed1.raw) != tdx_global_data_ptr->config_flags_fixed1.raw))

    {

        return false;

    }



    return true;

}



bool_t check_xfam(ia32_xcr0_t xfam)

{

    tdx_module_global_t* tdx_global_data_ptr = get_global_data();



    // Check that all bits set to 1 are allowed

    if ((xfam.raw &

         ~(uint64_t)(TDX_XFAM_FIXED0 & (tdx_global_data_ptr->xcr0_supported_mask |

                             tdx_global_data_ptr->ia32_xss_supported_mask))) != 0)

    {

        return false;

    }



    // Check that all bits set to 0 are allowed and check that all bit combinations are allowed

    if (((xfam.raw & TDX_XFAM_FIXED1) != TDX_XFAM_FIXED1) ||

        (xfam.avx3_kmask && !xfam.avx) ||

        (xfam.avx3_kmask != xfam.avx3_zmm_hi) ||

        (xfam.avx3_kmask != xfam.avx3_zmm) ||

        (xfam.cet_s != xfam.cet_u) ||

        (xfam.amx_xtilecfg != xfam.amx_xtiledata))

    {

        return false;

    }



    return true;

}



bool_t verify_and_set_td_eptp_controls(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, bool_t gpaw, ia32e_eptp_t eptp)

{

    // Check if PML5 is supported by the platform

    uint64_t max_pwl = LVL_PML5;

    ia32_vmx_ept_vpid_cap_t vpid_cap = { .raw = get_global_data()->plt_common_config.ia32_vmx_ept_vpid_cap };



    if (!vpid_cap.pml5_supported)

    {

        max_pwl = LVL_PML4;

    }



    if ((eptp.fields.ept_ps_mt != MT_WB) ||

        (eptp.fields.ept_pwl < LVL_PML4) ||

        (eptp.fields.ept_pwl > max_pwl) ||

        (eptp.fields.enable_ad_bits != 0) ||

        (eptp.fields.enable_sss_control != 0) ||

        (eptp.fields.reserved_0 != 0) ||

        (eptp.fields.base_pa != 0) ||

        (eptp.fields.reserved_1 != 0))

    {

        return false;

    }



    uint64_t tdx_max_pa = get_global_data()->max_pa;



    if ((eptp.fields.ept_pwl == LVL_PML5) &&

        (tdx_max_pa < MIN_PA_FOR_PML5))

    {

        return false;

    }



    // Check compatibility with GPAW.  If the SHARED bit is 52 then this must be a 5-level EPT

    if (gpaw && (eptp.fields.ept_pwl < LVL_PML5))

    {

        return false;

    }



    tdcs_ptr->executions_ctl_fields.gpaw = gpaw;



    // The PA field of EPTP points to the Secure EPT root page in TDCS,

    // which has already been initialized to 0 during TDADDCX

    pa_t sept_root_pa;

    sept_root_pa.raw = tdr_ptr->management_fields.tdcx_pa[SEPT_ROOT_PAGE_INDEX];

    sept_root_pa = set_hkid_to_pa(sept_root_pa, 0);



    eptp.fields.base_pa = sept_root_pa.page_4k_num;



    tdcs_ptr->executions_ctl_fields.eptp.raw = eptp.raw;



    return true;

}



void calculate_tsc_virt_params(uint64_t tsc, uint64_t native_tsc_freq, uint16_t virt_tsc_frequency,

                               uint64_t virt_tsc, uint64_t* tsc_multiplier, uint64_t* tsc_offset)

{

    // To avoid losing accuracy, temporary results during the calculation have 128-bit accuracy.

    // This is best implemented with embedded assembly code, using:

    // - 64b*64b unsigned multiply (MUL), which produces a 128b result

    // - 128b/64b unsigned divide (DIV), which produces a 64b result



    uint64_t tmp_tsc_multiplier, tmp_tsc_offset;



    // 1. TSC Multiplier Calculation:

    // tmp_128b = virt_tsc_frequency * 25000000 * (1ULL < 48);

    // tsc_multiplier = tmp_128b / native_tsc_frequency;



    tdx_sanity_check((native_tsc_freq >= NATIVE_TSC_FREQUENCY_MIN), SCEC_SEAMCALL_SOURCE(TDH_MNG_INIT_LEAF), 0);



#ifdef TDXFV_NO_ASM

    // TDXFV_ABST_LBL: x86 / nondet

    tmp_tsc_multiplier = TDXFV_NONDET_uint64t();

#else

    _ASM_VOLATILE_ (

        "mulq %2\n"

        "divq %3\n"

        : "=a"(tmp_tsc_multiplier)

        : "a"((uint64_t)virt_tsc_frequency * VIRT_TSC_FREQUENCY_UNIT), "r"(1ULL << 48), "b"(native_tsc_freq)

        : "%rdx" );

#endif



    // 2. TSC Offset Calculation

    // tmp_128b = current_tsc * tsc_multiplier;

    // tmp_virt_tsc_64b = tmp_128b / (1ULL < 48);

    // tsc_offset = -tmp_virt_tsc_64b + virt_tsc;



    uint128_t tmp_128b;



#ifdef TDXFV_NO_ASM

    // TDXFV_ABST_LBL: x86 / nondet

    tmp_128b = TDXFV_NONDET_uint128t();

#else

    _ASM_VOLATILE_ (

        "mulq %3\n"

        : "=a"(tmp_128b.qwords[0]), "=d"(tmp_128b.qwords[1])

        : "a"(tsc), "b"(tmp_tsc_multiplier)

        :);

#endif



    tmp_tsc_offset = (tmp_128b.qwords[1] << 16) | (tmp_128b.qwords[0] >> 48);



    *tsc_multiplier = tmp_tsc_multiplier;

    *tsc_offset = -(tmp_tsc_offset) + virt_tsc;

}



bool_t check_guest_xcr0_value(ia32_xcr0_t xcr0, uint64_t xfam)

{

    tdx_module_global_t* global_data_ptr = get_global_data();



    // Check that any bit that is set to 1 is supported by XCR0 and XFAM.  Note that CPU

    // support has been enumerated on TDH_SYS_INIT and used to verify XFAM on TDH_MNG_INIT.

    if ((xcr0.raw & ~(global_data_ptr->xcr0_supported_mask & xfam)) != 0)

    {

        return false;

    }



    // For the following checks, see [Intel SDM, Vol. 1, 13.3]

    // XCR0[0] is always 1

    if (!xcr0.x87_fpu_mmx)

    {

        return false;

    }



    // Check that all bit combinations are allowed

    if ((xcr0.avx && !xcr0.sse)              ||    // AVX requires SSE

        (xcr0.avx3_kmask && !xcr0.avx)       ||    // AVX3 requires AVX

        (xcr0.avx3_kmask != xcr0.avx3_zmm_hi) ||   // All AVX3 bits must be the same

        (xcr0.avx3_kmask != xcr0.avx3_zmm)   ||    // All AVX3 bits must be the same

        (xcr0.amx_xtilecfg != xcr0.amx_xtiledata)) // All AMX bits must be the same

    {

        return false;

    }



    return true;

}



void send_self_ipi(apic_delivery_mode_t delivery_mode, uint32_t vector)

{

    ia32_apic_icr_t icr;



    icr.raw = 0;

    icr.delivery_mode = delivery_mode;

    icr.dest_shorthand = DEST_SHORTHAND_NONE;

    icr.vector = vector;



    // APIC works in x2APIC mode (MSR access). APIC ID is 32 bits.

    if (delivery_mode == APIC_DELIVERY_FIXED)

    {

        ia32_wrmsr(IA32_X2APIC_EOI, 0);

    }



    icr.x2apic_dest_field = ia32_rdmsr(IA32_X2APIC_APICID) & BIT_MASK_32BITS;



    ia32_wrmsr(IA32_X2APIC_ICR, icr.raw);

}



bool_t lfsr_init_seed (uint32_t* lfsr_value)

{

    uint64_t rand;



    if (!ia32_rdrand(&rand))

    {

        return false;

    }



    *lfsr_value = rand & 0xFFFFFFFF;



    return (*lfsr_value != 0);

}



uint32_t lfsr_get_random ()

{

    tdx_module_local_t* local_data_ptr = get_local_data();

    uint32_t lfsr_value = local_data_ptr->single_step_def_state.lfsr_value;



    if ((lfsr_value & 0x1) == 0x0)

    {

        lfsr_value = lfsr_value >> 1;

    }

    else

    {

        lfsr_value = (lfsr_value >> 1) ^ POLY_MASK_32;

    }



    tdx_sanity_check(lfsr_value != 0, SCEC_HELPERS_SOURCE, 2);



    local_data_ptr->single_step_def_state.lfsr_value = lfsr_value;



    return lfsr_value;

}



void initialize_extended_state(uint64_t xfam)

{

    ia32_xsetbv(0, xfam & XCR0_USER_BIT_MASK);

    ia32_wrmsr(IA32_XSS_MSR_ADDR, xfam & XCR0_SUPERVISOR_BIT_MASK);



    ia32_xrstors(&get_global_data()->xbuf, xfam);

}



void set_guest_pde_bs(void)

{

    ia32_rflags_t rflags;

    ia32_vmread(VMX_GUEST_RFLAGS_ENCODE, &rflags.raw);



    ia32_debugctl_t debugctl;

    ia32_vmread(VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE, &debugctl.raw);



    pending_debug_exception_t pde;

    ia32_vmread(VMX_GUEST_PND_DEBUG_EXCEPTION_ENCODE, &pde.raw);



    pde.bs = (rflags.tf == 1 && debugctl.btf == 0) ? 1 : 0;

    ia32_vmwrite(VMX_GUEST_PND_DEBUG_EXCEPTION_ENCODE, pde.raw);

}



void advance_guest_rip(void)

{

    current_vmcs_guest_rip_advance(0);



    clear_movss_sti_blocking();

    set_guest_pde_bs();

}



void clear_movss_sti_blocking(void)

{

    vmx_guest_inter_state_t guest_inter_state;

    ia32_vmread(VMX_GUEST_INTERRUPTIBILITY_ENCODE, &guest_inter_state.raw);



    if (guest_inter_state.blocking_by_mov_ss != 0 || guest_inter_state.blocking_by_sti != 0)

    {

        guest_inter_state.blocking_by_mov_ss = 0;

        guest_inter_state.blocking_by_sti = 0;

        ia32_vmwrite(VMX_GUEST_INTERRUPTIBILITY_ENCODE, guest_inter_state.raw);

    }

}



uint32_t check_mem_enc_alg (ia32_tme_capability_t tme_capability,  // In:  IA32_TME_CAPABILITY MSR value

                            ia32_tme_activate_t   tme_activate)    // In:  IA32_TME_ACTIVATE MSR value

{

    // IA32_TME_ACTIVATE must be locked

    if (tme_activate.lock == 0)

    {

        return IA32_TME_ACTIVATE_MSR_ADDR;

    }



    /* IA32_TME_CAPABILITIES must support either 128-bit or 256-bit memory encryption, with or

       without integrity as provided by MCHECK.

       IA32_TME_ACTIVATE must have been activated to support either 128-bit or 256-bit memory encryption, with or

       without integrity as provided by MCHECK.*/

    if (get_sysinfo_table()->mcheck_fields.tdx_without_integrity)

    {

        if ((tme_capability.aes_xts_256 == 0) && (tme_capability.aes_xts_128 == 0))

        {

            return IA32_TME_CAPABILITY_MSR_ADDR;

        }



        if ((tme_activate.algs_aes_xts_256 == 0) &&

            (tme_activate.algs_aes_xts_128 == 0))

        {

            return IA32_TME_ACTIVATE_MSR_ADDR;

        }

    }

    else

    {

        if ((tme_capability.aes_xts_256_with_integrity == 0) &&

            (tme_capability.aes_xts_128_with_integrity == 0))

        {

            return IA32_TME_CAPABILITY_MSR_ADDR;

        }



        if ((tme_activate.algs_aes_xts_256_with_integrity == 0) &&

            (tme_activate.algs_aes_xts_128_with_integrity == 0))

        {

            return IA32_TME_ACTIVATE_MSR_ADDR;

        }

    }



    return 0;

}



bool_t is_msr_dynamic_bit_cleared(tdcs_t* tdcs_ptr, uint32_t msr_addr, msr_bitmap_bit_type bit_meaning)

{

    // Common dynamic cases

    if (((bit_meaning == MSR_BITMAP_DYN_PERFMON)  && is_perfmon_supported_in_tdcs(tdcs_ptr)) ||

        ((bit_meaning == MSR_BITMAP_DYN_XFAM_CET) && is_cet_supported_in_tdcs(tdcs_ptr))     ||

        ((bit_meaning == MSR_BITMAP_DYN_XFAM_PT)  && is_pt_supported_in_tdcs(tdcs_ptr))      ||

        ((bit_meaning == MSR_BITMAP_DYN_XFAM_ULI) && is_uli_supported_in_tdcs(tdcs_ptr))     ||

        ((bit_meaning == MSR_BITMAP_DYN_XFAM_LBR) && is_lbr_supported_in_tdcs(tdcs_ptr))     ||

        ((bit_meaning == MSR_BITMAP_DYN_UMWAIT)   && is_waitpkg_supported_in_tdcs(tdcs_ptr)) ||

        ((bit_meaning == MSR_BITMAP_DYN_PKS)      && is_pks_supported_in_tdcs(tdcs_ptr))     ||

        ((bit_meaning == MSR_BITMAP_DYN_XFD)      && is_xfd_supported_in_tdcs(tdcs_ptr))     ||

        ((bit_meaning == MSR_BITMAP_DYN_TSX)      && is_tsx_supported_in_tdcs(tdcs_ptr)))

    {

        return true;

    }



    // Other rare dynamic cases

    if (bit_meaning == MSR_BITMAP_DYN_OTHER)

    {

        // No other MSR's are currently expected for rare case

        tdx_debug_assert((msr_addr == IA32_PERF_CAPABILITIES_MSR_ADDR) ||

                         (msr_addr == IA32_PERF_METRICS_MSR_ADDR));



        if ((msr_addr == IA32_PERF_CAPABILITIES_MSR_ADDR) &&

            (is_perfmon_supported_in_tdcs(tdcs_ptr) && is_pt_supported_in_tdcs(tdcs_ptr)))

        {

            return true;

        }



        if ((msr_addr == IA32_PERF_METRICS_MSR_ADDR) &&

            (is_perfmon_supported_in_tdcs(tdcs_ptr) &&

             get_global_data()->plt_common_config.ia32_perf_capabilities.perf_metrics_available))

        {

            return true;

        }

    }



    return false;

}



void set_msr_bitmaps(tdcs_t * tdcs_ptr)

{

    // Assuming that the whole MSR bitmap was initialized to all 1's by TDHMNGADDCX



    for (uint32_t i = 0; i < MAX_NUM_MSR_LOOKUP; i++)

    {

        uint32_t msr_addr = msr_lookup[i].start_address;



        bool_t clear_rd_bit = is_msr_dynamic_bit_cleared(tdcs_ptr, msr_addr, msr_lookup[i].rd_bit_meaning) ||

                              (msr_lookup[i].rd_bit_meaning == MSR_BITMAP_FIXED_0);

        bool_t clear_wr_bit = is_msr_dynamic_bit_cleared(tdcs_ptr, msr_addr, msr_lookup[i].wr_bit_meaning) ||

                              (msr_lookup[i].wr_bit_meaning == MSR_BITMAP_FIXED_0);



        if (!clear_rd_bit && !clear_wr_bit)

        {

            continue; // Nothing to do for whole MSR address range

        }



        for (; msr_addr <= msr_lookup[i].end_address; msr_addr++)

        {

            uint32_t byte_offset, bit_offset;

            byte_offset = (msr_addr & ~HIGH_MSR_MASK) ? MSR_BITMAP_SIZE : 0;

            byte_offset += (msr_addr & HIGH_MSR_MASK) / 8;

            bit_offset = (msr_addr & HIGH_MSR_MASK) % 8;



            uint32_t* byte_addr_rd = (uint32_t*)&tdcs_ptr->MSR_BITMAPS[byte_offset];

            uint32_t* byte_addr_wr = (uint32_t*)&tdcs_ptr->MSR_BITMAPS[byte_offset + (MSR_BITMAP_SIZE * 2)];



            if (clear_rd_bit)

            {

                btr_32b(byte_addr_rd, bit_offset);

            }



            if (clear_wr_bit)

            {

                btr_32b(byte_addr_wr, bit_offset);

            }

        }

    }

}



void set_xbuff_offsets_and_size(tdcs_t* tdcs_ptr, uint64_t xfam)

{

    tdx_module_global_t* tdx_global_data_ptr = get_global_data();



    // Calculate the offsets of XSAVE components in XBUFF, which depend on XFAM.  The algorithm

    // is described in the Intel SDM, Vol. 1, - 13.4.3 "Extended Region of an XSAVE Area"

    uint32_t offset = offsetof(xsave_area_t, extended_region);

    for (uint32_t xfam_i = 2; xfam_i <= XCR0_MAX_VALID_BIT; xfam_i++)

    {

        if ((xfam & BIT(xfam_i)) != 0)

        {

            if (tdx_global_data_ptr->xsave_comp[xfam_i].align)

            {

                // Align the offset up to the next 64B boundary

                offset = ROUND_UP(offset, 64U);

            }

            tdcs_ptr->executions_ctl_fields.xbuff_offsets[xfam_i] = offset;

            offset += tdx_global_data_ptr->xsave_comp[xfam_i].size;

        }

    }



    tdcs_ptr->executions_ctl_fields.xbuff_size = offset;

}



void init_imported_td_state_mutable (tdcs_t* tdcs_ptr)

{

    UNUSED(tdcs_ptr);

    // Do nothing

}



bool_t td_immutable_state_cross_check(tdcs_t* tdcs_ptr)

{

    // A TD can't be both migratable and partitioned

    if (tdcs_ptr->executions_ctl_fields.attributes.migratable &&

        (tdcs_ptr->management_fields.num_l2_vms > 0))

    {

        TDX_ERROR("Migration of partitioned TD's is not supported\n");

        return false;

    }



    return true;

}



api_error_type check_and_init_imported_td_state_immutable (tdcs_t* tdcs_ptr)

{

    if (!td_immutable_state_cross_check(tdcs_ptr))

    {

        return api_error_with_operand_id_fatal(TDX_OPERAND_INVALID, OPERAND_ID_RDX);

    }



    

    // num_vcpus sanity check (at this point num_vcpus is already set)

    if ((tdcs_ptr->management_fields.num_vcpus == 0) || (tdcs_ptr->management_fields.num_vcpus > tdcs_ptr->executions_ctl_fields.max_vcpus))

    {

        return api_error_with_operand_id_fatal(TDX_OPERAND_INVALID, OPERAND_ID_MAX_VCPUS);

    }



    /**

     * Initialize the TD Management Fields

     */

    tdcs_ptr->management_fields.num_assoc_vcpus = 0;

    tdcs_ptr->epoch_tracking.epoch_and_refcount.td_epoch = 1;

    tdcs_ptr->epoch_tracking.epoch_and_refcount.refcount[0] = 0;

    tdcs_ptr->epoch_tracking.epoch_and_refcount.refcount[1] = 0;



    /**

     * Execution control fields

     */

    set_xbuff_offsets_and_size(tdcs_ptr, tdcs_ptr->executions_ctl_fields.xfam);



    /** CONFIG_FLAGS is optionally imported since older TDX module versions didn't support it.  Set the GPAW bit

     *  based on the separate GPAW field that is always imported.

     */

    tdcs_ptr->executions_ctl_fields.config_flags.gpaw = (tdcs_ptr->executions_ctl_fields.gpaw != false);



    /** TD_CTLS is optionally imported (later. as part of the mutable state) since older TDX module versions didn't support it.

     *  Set the PENDING_VE_DISABLE bit based on the ATTRIBUTES field that has already been imported (as part of the immutable

     *  state). This value may be overwritten later by the immutable state import.

     */

    tdcs_ptr->executions_ctl_fields.td_ctls.pending_ve_disable = tdcs_ptr->executions_ctl_fields.attributes.sept_ve_disable;



    // Check the imported CPUID(0x1F) values and set CPUID(0xB) values



    api_error_type return_val = check_cpuid_1f(tdcs_ptr, false);

    if (return_val != TDX_SUCCESS)

    {

        return return_val;

    }



    calculate_servtd_hash(tdcs_ptr, true);



    /**

     *  Build the MSR bitmaps

     *

     *  The MSR bitmap page was filled with all 1's during TDH_MNG_ADDCX

     */

    set_msr_bitmaps(tdcs_ptr);



    return return_val;

}



api_error_type check_imported_vp_state(tdr_t* tdr_p, tdcs_t* tdcs_p, tdvps_t* tdvps_p)

{

    UNUSED(tdr_p);



    if (tdcs_p->executions_ctl_fields.topology_enum_configured)

    {

        uint32_t x2apic_id = tdcs_p->x2apic_ids[tdvps_p->management.vcpu_index];



        for (uint32_t i = 0; i < tdcs_p->management_fields.num_vcpus; i++)

        {

            if (x2apic_id == tdcs_p->x2apic_ids[i])

            {

                if (i != tdvps_p->management.vcpu_index)

                {

                    return api_error_with_operand_id(TDX_X2APIC_ID_NOT_UNIQUE, x2apic_id);

                }

            }

        }

    }



    return TDX_SUCCESS;

}



void prepare_td_vmcs(tdvps_t *tdvps_p, uint16_t vm_id)

{

    vmcs_header_t   *td_vmcs_p;

    ia32_vmx_basic_t vmx_basic;



    pa_t tdvps_vmcs_pa = { .raw = tdvps_p->management.tdvps_pa[get_tdvps_vmcs_page_index(vm_id)] };



    // Map the TD VMCS page

    td_vmcs_p = (vmcs_header_t *)map_pa(tdvps_vmcs_pa.raw_void, TDX_RANGE_RW);



    /*

     * Initialize the version ID in the TD VMCS (first 31 bits) with the

     * VMCS version ID reported by the IA32_VMX_BASIC MSR

     */

    vmx_basic.raw = get_global_data()->plt_common_config.ia32_vmx_basic.raw;

    td_vmcs_p->revision.vmcs_revision_identifier = vmx_basic.vmcs_revision_id;

    td_vmcs_p->revision.shadow_vmcs_indicator = 0;

    td_vmcs_p->vmx_abort_indicator = 0;



    vmclear_vmcs(tdvps_p, vm_id);



    free_la(td_vmcs_p);

}



api_error_code_e get_tdinfo_and_teeinfohash(tdcs_t* tdcs_p, ignore_tdinfo_bitmap_t ignore_tdinfo,

                                            td_info_t* td_info, measurement_t* tee_info_hash, bool_t is_guest)

{

    td_info_t             td_info_local;

    uint128_t             xmms[16];                  // SSE state backup for crypto

    crypto_api_error      sha_error_code;

    api_error_code_e      retval = UNINITIALIZE_ERROR;

    bool_t                rtmr_locked_flag = true;



    if (td_info == NULL)

    {

        td_info = &td_info_local;

    }



    // Zero the TDINFO (reserve fields are zero'd)

    basic_memset_to_zero(td_info, sizeof(td_info_t));



    // Acquire shared access to TDCS.RTMR

    if ((retval = acquire_sharex_lock_hp_sh(&tdcs_p->measurement_fields.rtmr_lock, is_guest)) != TDX_SUCCESS)

    {

        TDX_ERROR("Failed to acquire shared lock on RTMR\n");

        return retval;

    }



    rtmr_locked_flag = true;



    if (!ignore_tdinfo.attributes)

    {

        td_info->attributes = tdcs_p->executions_ctl_fields.attributes.raw;

    }

    if (!ignore_tdinfo.xfam)

    {

        td_info->xfam = tdcs_p->executions_ctl_fields.xfam;

    }

    if (!ignore_tdinfo.mrtd)

    {

        tdx_memcpy(td_info->mr_td.bytes, sizeof(measurement_t),

                   tdcs_p->measurement_fields.mr_td.bytes,

                   sizeof(measurement_t));

    }

    if (!ignore_tdinfo.mrconfig)

    {

        tdx_memcpy(td_info->mr_config_id.bytes, sizeof(measurement_t),

                   tdcs_p->measurement_fields.mr_config_id.bytes,

                   sizeof(measurement_t));

    }

    if (!ignore_tdinfo.mrowner)

    {

        tdx_memcpy(td_info->mr_owner.bytes, sizeof(measurement_t),

                   tdcs_p->measurement_fields.mr_owner.bytes,

                   sizeof(measurement_t));

    }

    if (!ignore_tdinfo.mrownerconfig)

    {

        tdx_memcpy(td_info->mr_owner_config.bytes, sizeof(measurement_t),

                   tdcs_p->measurement_fields.mr_owner_config.bytes,

                   sizeof(measurement_t));

    }

    for (uint32_t i = 0; i < NUM_OF_RTMRS; i++)

    {

        if (!(ignore_tdinfo.rtmr & BIT(i)))

        {

            tdx_memcpy(td_info->rtmr[i].bytes, sizeof(measurement_t),

                       tdcs_p->measurement_fields.rtmr[i].bytes,

                       SIZE_OF_SHA384_HASH_IN_BYTES);

        }

    }



    if (!ignore_tdinfo.servtd_hash)

    {

        tdx_memcpy(td_info->servtd_hash.bytes, sizeof(measurement_t),

                   tdcs_p->service_td_fields.servtd_hash.bytes,

                   sizeof(measurement_t));

    }



    /* SHA calculation is a relatively long operation.  Optimize by reusing the previously-calculated value,

       if available.  This is designed for use by TDG.MR.REPORT, which is interruptible. */

    if ((tdcs_p->measurement_fields.last_teeinfo_hash_valid) && (ignore_tdinfo.raw == 0))

    {

        // Optimize for the common case of TDG.MR.REPORT

        tdx_memcpy(tee_info_hash, sizeof(measurement_t),

                   &(tdcs_p->measurement_fields.last_teeinfo_hash), sizeof(measurement_t));

    }

    else

    {

        // Compute TEE_INFO_HASH

        store_xmms_in_buffer(xmms);



        if ((sha_error_code = sha384_generate_hash((const uint8_t *)td_info,

                                                    sizeof(td_info_t),

                                                    tee_info_hash->qwords)))

        {

            // Unexpected error - Fatal Error

            TDX_ERROR("Unexpected error in SHA384 - error = %d\n", sha_error_code);

            FATAL_ERROR();

        }



        load_xmms_from_buffer(xmms);

        basic_memset_to_zero(xmms, sizeof(xmms));



        if (ignore_tdinfo.raw == 0)

        {

            // Optimize for TDG.MR.REPORT: store the hash for next time

            tdx_memcpy(&(tdcs_p->measurement_fields.last_teeinfo_hash), sizeof(measurement_t),

                       tee_info_hash, sizeof(measurement_t));



            tdcs_p->measurement_fields.last_teeinfo_hash_valid = true;

        }

    }



    release_sharex_lock_hp_sh(&tdcs_p->measurement_fields.rtmr_lock);



    return TDX_SUCCESS;

}



api_error_code_e get_teeinfohash(tdcs_t* tdcs_p, ignore_tdinfo_bitmap_t ignore_tdinfo,

                                 measurement_t* tee_info_hash)

{

    td_info_t td_info;



    return get_tdinfo_and_teeinfohash(tdcs_p, ignore_tdinfo, &td_info, tee_info_hash, false);

}



api_error_type abort_import_session(

    tdcs_t                  *tdcs_p,

    api_error_type           status,

    uint32_t                 status_details)

{

    if (tdcs_p->management_fields.op_state == OP_STATE_LIVE_IMPORT)

    {

        tdcs_p->management_fields.op_state = OP_STATE_RUNNABLE;

        return api_error_with_operand_id(status, status_details);

    }

    else

    {

        tdcs_p->management_fields.op_state = OP_STATE_FAILED_IMPORT;

        status = api_error_with_operand_id(status, status_details);

        return api_error_fatal(status);

    }

}



#if 0

api_error_type abort_import_session_with_septe_details(

    tdcs_t                  *tdcs_p,

    ia32e_sept_t             septe,

    ept_level_t              level,

    api_error_type           status,

    uint32_t                 status_details)

{



    // Update output register operands

    tdx_module_local_t  * local_data_ptr = get_local_data();

    set_arch_septe_details_in_vmm_regs(septe, level, local_data_ptr);



    return abort_import_session(tdcs_p, status, status_details);

}

#endif

bool_t generate_256bit_random(uint256_t* rand)

{

    uint8_t successfull_randomizations = 0;



    for (uint8_t i = 0; i < get_global_data()->num_rdseed_retries; i++)

    {

        if (ia32_rdseed(&rand->qwords[successfull_randomizations]))

        {

            successfull_randomizations++;



            if (QUADWORDS_IN_256b == successfull_randomizations)

            {

                break;

            }

        }



        for (uint8_t j = 0; j < get_global_data()->num_rdseed_pauses; j++)

        {

            ia32_pause();

        }

    }



    if (successfull_randomizations < QUADWORDS_IN_256b)

    {

        basic_memset_to_zero(rand, sizeof(uint256_t));

        return false;

    }



    return true;

}



_STATIC_INLINE_ void copy_global_field_to_handoff(void* field_ptr, uint32_t field_size,

                                                  uint8_t** data, uint32_t* size, uint32_t* written_size)

{

    tdx_memcpy(*data, *size, field_ptr, field_size);

    *data += field_size;

    *size -= field_size;

    *written_size += field_size;

}



_STATIC_INLINE_ void copy_global_field_from_handoff(void* field_ptr, uint32_t field_size, uint8_t** data)

{

    tdx_memcpy(field_ptr, field_size, *data, field_size);

    *data += field_size;

}



uint32_t prepare_handoff_data(uint16_t hv, uint32_t size, uint8_t* data)

{

    // The function fills the handoff buffer with data variables that satisfy the following conditions:

    // 1)  Not initialized by TDH.SYS.INIT or TDH.SYS.LP.INIT

    // 2)  Persist across multiple SEAMCALLs

    // 3)  Maintained inside SEAM range

    // For hv = 0, these variables include the KOT, WBT, TDMR_TABLE, TDMR_ENTRIES, TDX_HKID, PKG_CONFIG_BITMAP



    tdx_module_global_t* g_d = get_global_data();

    uint32_t written_size = 0;



    // Currently support only HV 0

    tdx_debug_assert(hv == 0);

    UNUSED(hv);



    // All write size checks are done by tdx_memcpy inside



    // Copy KOT entries (no need to copy the lock)

    copy_global_field_to_handoff(&g_d->kot.entries, sizeof(g_d->kot.entries),

                                 &data, &size, &written_size);



    // Copy WBT entries

    copy_global_field_to_handoff(&g_d->wbt_entries, sizeof(g_d->wbt_entries),

                                 &data, &size, &written_size);



    // Copy TDMR_TABLE

    copy_global_field_to_handoff(&g_d->tdmr_table, sizeof(g_d->tdmr_table),

                                 &data, &size, &written_size);



    // Copy TDMR_ENTRIES

    copy_global_field_to_handoff(&g_d->num_of_tdmr_entries, sizeof(g_d->num_of_tdmr_entries),

                                 &data, &size, &written_size);



    // Copy TDX_HKID

    copy_global_field_to_handoff(&g_d->hkid, sizeof(g_d->hkid),

                                 &data, &size, &written_size);



    // Copy PKG_CONFIG_BITMAP

    copy_global_field_to_handoff(&g_d->pkg_config_bitmap, sizeof(g_d->pkg_config_bitmap),

                                 &data, &size, &written_size);



    return written_size;

}



void retrieve_handoff_data(uint16_t hv, uint32_t size, uint8_t* data)

{

    // The function extracts the values of some data variables from the handoff data buffer

    // For hv = 0, these variables include the KOT, WBT, TDMR_TABLE, TDMR_ENTRIES, TDX_HKID, PKG_CONFIG_BITMAP



    tdx_module_global_t* g_d = get_global_data();



    // Currently support only HV 0

    tdx_debug_assert(hv == 0);

    UNUSED(hv);



    uint32_t total_required_size = TDX_MIN_HANDOFF_SIZE;



    tdx_sanity_check(total_required_size <= size, SCEC_HELPERS_SOURCE, 5);



    // Copy KOT entries (no need to copy the lock)

    copy_global_field_from_handoff(&g_d->kot.entries, sizeof(g_d->kot.entries), &data);



    // Copy WBT entries

    copy_global_field_from_handoff(&g_d->wbt_entries, sizeof(g_d->wbt_entries), &data);



    // Copy TDMR_TABLE

    copy_global_field_from_handoff(&g_d->tdmr_table, sizeof(g_d->tdmr_table), &data);



    // Copy TDMR_ENTRIES

    copy_global_field_from_handoff(&g_d->num_of_tdmr_entries, sizeof(g_d->num_of_tdmr_entries), &data);



    // Copy TDX_HKID

    copy_global_field_from_handoff(&g_d->hkid, sizeof(g_d->hkid), &data);



    // Copy PKG_CONFIG_BITMAP

    copy_global_field_from_handoff(&g_d->pkg_config_bitmap, sizeof(g_d->pkg_config_bitmap), &data);

}



void complete_cpuid_handling(tdx_module_global_t* tdx_global_data_ptr)

{

    for (uint32_t i = 0; i < MAX_NUM_CPUID_LOOKUP; i++)

    {

        for (uint32_t j = 0; j < 4; j++)

        {

            uint32_t cpuid_value = tdx_global_data_ptr->cpuid_values[i].values.values[j];



            // Clear the bits that will be later virtualized as FIXED0 or DYNAMIC

            cpuid_value &= ~cpuid_lookup[i].fixed0_or_dynamic.values[j];



            // Set to 1 any bits that will be later virtualized as FIXED1

            cpuid_value |= cpuid_lookup[i].fixed1.values[j];



            tdx_global_data_ptr->cpuid_values[i].values.values[j] = cpuid_value;

        }

    }

}



bool_t is_voe_in_exception_bitmap( void )

{

    vmx_entry_inter_info_t entry_intr_info;



    ia32_vmread(VMX_VM_ENTRY_INTR_INFO_ENCODE, &(entry_intr_info.raw));



    if (entry_intr_info.valid && entry_intr_info.interruption_type == HW_EXCEPTION)

    {

        // Check the VOE vector vs. the exception bitmap

        uint64_t exception_bitmap = 0;

        ia32_vmread(VMX_EXCEPTION_BITMAP_ENCODE, &exception_bitmap);

        if ((exception_bitmap & BIT(entry_intr_info.vector)) != 0)

        {

            if (entry_intr_info.vector == E_PF)

            {

                // #PF is a special case where we need to check the Page Fault Error Code vs.

                // the mask and match values.  See [Intel SDM Vol. 3, 25.2].

                uint64_t pfec = 0, pfec_mask = 0, pfec_match = 0;

                ia32_vmread(VMX_VM_EXIT_EXCEPTION_ERRORCODE_ENCODE, &pfec);

                ia32_vmread(VMX_PAGEFAULT_ERRORCODE_MASK_ENCODE, &pfec_mask);

                ia32_vmread(VMX_PAGEFAULT_ERRORCODE_MATCH_ENCODE, &pfec_match);



                return ((pfec & pfec_mask) == pfec_match);

            }

            else

            {

                return true;

            }

        }

    }



    return false;

}



void convert_l2_voe_to_l1_exit(void)

{

    vmx_entry_inter_info_t entry_intr_info;

    ia32_vmread(VMX_VM_ENTRY_INTR_INFO_ENCODE, &(entry_intr_info.raw));



    tdx_debug_assert(entry_intr_info.valid);



    vmx_exit_inter_info_t exit_inter_info;



    // Copy the VOE information to VM exit information

    exit_inter_info.raw = entry_intr_info.raw;

    ia32_vmwrite(VMX_VM_EXIT_INTERRUPTION_INFO_ENCODE, exit_inter_info.raw);



    uint64_t error_code = 0;

    ia32_vmread(VMX_VM_ENTRY_EXCEPTION_ERRORCODE_ENCODE, &error_code);

    ia32_vmwrite(VMX_VM_EXIT_EXCEPTION_ERRORCODE_ENCODE, error_code);



    // Invalidate the entry interruption information to avoid injecting the VOE

    entry_intr_info.valid = 0;

    ia32_vmwrite(VMX_VM_ENTRY_INTR_INFO_ENCODE, entry_intr_info.raw);



    ia32_vmwrite(VMX_VM_EXIT_REASON_ENCODE, VMEXIT_REASON_EXCEPTION_OR_NMI);

    ia32_vmwrite(VMX_VM_EXIT_QUALIFICATION_ENCODE, 0);

}



void set_vmx_preemption_timer(tdvps_t* tdvps_p, uint16_t vm_id)

{

    vmx_pinbased_ctls_t pinbased_exec_ctls;

    ia32_vmread(VMX_VM_EXECUTION_CONTROL_PIN_BASED_ENCODE, &pinbased_exec_ctls.raw);



    if (tdvps_p->management.tsc_deadline[vm_id] == -1ULL)

    {

        // A TSC_DEADLINE value of -1 indicates no deadline. Disable the VMX-preemption timer.

        pinbased_exec_ctls.activate_vmx_preemption_timer = 0;

    }

    else

    {

        // Calculate the TSC ticks left until preemption timeout

        uint64_t preempt_time;

        uint64_t current_time = ia32_rdtsc();



        uint64_t future_delta = tdvps_p->management.shadow_tsc_deadline[vm_id] - current_time;

        uint64_t past_delta = current_time - tdvps_p->management.shadow_tsc_deadline[vm_id];



        // Calculation may indicate a time in the past.

        // In this case set to 0, which will cause the VM to exit immediately.

        if (past_delta < future_delta)

        {

            preempt_time = 0;

        }

        else

        {

            preempt_time = tdvps_p->management.shadow_tsc_deadline[vm_id] - current_time;



            // Scale down by the factor provided in IA32_VMX_MISC

            preempt_time >>= get_global_data()->plt_common_config.ia32_vmx_misc.vmx_preempt_timer_tsc_factor;



            // Timer is 32-bit.  If value doesn't fit, set to the maximum.

            if (preempt_time >= BIT(32))

            {

                preempt_time = BIT(32) - 1;

            }

        }



        // Enable VMX-preemption timer

        pinbased_exec_ctls.activate_vmx_preemption_timer = 1;

        ia32_vmwrite(VMX_GUEST_PREEMPTION_TIMER_COUNT_ENCODE, preempt_time);

    }



    ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_PIN_BASED_ENCODE, pinbased_exec_ctls.raw);

}



bool_t reinject_idt_vectoring_event_if_any(void)

{

    vmx_entry_inter_info_t entry_intr_info;

    vmx_idt_vectoring_info_t idt_vectoring_info;



    ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_FIELD_ENCODE, &idt_vectoring_info.raw);



    // Return false if there's nothing to do.

    IF_COMMON (!idt_vectoring_info.valid)

    {

        return false;

    }



    // Copy IDT vectoring fields to VM entry exception fields.

    // On the next VM entry, the CPU will inject a VOE.



    entry_intr_info.raw = idt_vectoring_info.raw;

    entry_intr_info.reserved = 0;

    ia32_vmwrite(VMX_VM_ENTRY_INTR_INFO_ENCODE, entry_intr_info.raw);



    if (idt_vectoring_info.error_code_valid)

    {

        uint64_t idt_vectoring_error_code;

        ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_ERRORCODE_ENCODE, &idt_vectoring_error_code);

        ia32_vmwrite(VMX_VM_ENTRY_EXCEPTION_ERRORCODE_ENCODE, idt_vectoring_error_code);

    }



    uint64_t vm_exit_instruction_length;

    ia32_vmread(VMX_VM_EXIT_INSTRUCTION_LENGTH_ENCODE, &vm_exit_instruction_length);

    ia32_vmwrite(VMX_VM_ENTRY_INSTRUCTION_LENGTH_ENCODE, vm_exit_instruction_length);



    // Make sure the above operation is done once per VM exit

    idt_vectoring_info.valid = 0;

    ia32_vmwrite(VMX_VM_EXIT_IDT_VECTOR_FIELD_ENCODE, idt_vectoring_info.raw);



    return true;

}



bool_t translate_l2_enter_guest_state_gpa(

    tdr_t *    tdr_ptr,

    tdcs_t *   tdcs_ptr,

    tdvps_t *  tdvps_ptr,

    uint16_t   vm_id,

    uint64_t * failed_gpa)

{

    uint64_t hpa;

    uint64_t gpa;



    ia32e_sept_t * sept_entry_ptr = NULL;

    ia32e_sept_t   sept_entry_copy;

    ept_level_t    sept_entry_level = LVL_PT;



    api_error_type return_val = TDX_OPERAND_INVALID;



    tdx_debug_assert(vm_id != 0);



    /*

     * Translate the GPAs of TDH.VP.ENTER output memory operands whose shadow HPA is NULL_PA,

     * using the L1 SEPT

     */

    hpa = tdvps_ptr->management.l2_enter_guest_state_hpa[vm_id];

    if (hpa == NULL_PA)

    {

        gpa = tdvps_ptr->management.l2_enter_guest_state_gpa[vm_id];



        return_val = check_and_walk_private_gpa_to_leaf(tdcs_ptr, OPERAND_ID_RCX, (pa_t)gpa,

                                          tdr_ptr->key_management_fields.hkid,

                                          &sept_entry_ptr, &sept_entry_level, &sept_entry_copy);

        if (return_val != TDX_SUCCESS)

        {

            *failed_gpa = gpa;

            goto EXIT;

        }



        if (!sept_state_is_guest_accessible_leaf(sept_entry_copy))

        {

            *failed_gpa = gpa;

            goto EXIT;

        }



        // Update the HPA

        hpa = leaf_ept_entry_to_hpa(sept_entry_copy, gpa, sept_entry_level);

        tdvps_ptr->management.l2_enter_guest_state_hpa[vm_id] = set_hkid_to_pa((pa_t)hpa, tdr_ptr->key_management_fields.hkid).raw;



        if (sept_entry_ptr != NULL)

        {

            free_la(sept_entry_ptr);

            sept_entry_ptr = NULL;

        }

    }



    return true;



EXIT:

    if (sept_entry_ptr != NULL)

    {

        free_la(sept_entry_ptr);

    }

    return false;

}



bool_t translate_gpas(

    tdr_t *    tdr_ptr,

    tdcs_t *   tdcs_ptr,

    tdvps_t *  tdvps_ptr,

    uint16_t   vm_id,

    uint64_t * failed_gpa)

{

    uint64_t hpa;

    uint64_t gpa;



    ia32e_sept_t * sept_entry_ptr = NULL;

    ia32e_sept_t   sept_entry_copy;

    ept_level_t    sept_entry_level = LVL_PT;



    api_error_type return_val = TDX_OPERAND_INVALID;



    // Check the VMCS is the correct one

    tdx_debug_assert(vm_id != 0);

    tdx_debug_assert(get_local_data()->vp_ctx.active_vmcs == vm_id);



    /*

     * Translate the GPAs of TDH.VP.ENTER output memory operands whose shadow HPA is NULL_PA,

     * using the L1 SEPT

     */

    if (!translate_l2_enter_guest_state_gpa(tdr_ptr, tdcs_ptr, tdvps_ptr, vm_id, failed_gpa))

    {

        goto EXIT;

    }



    hpa = tdvps_ptr->management.l2_vapic_hpa[vm_id];

    if (hpa == NULL_PA)

    {

        gpa = tdvps_ptr->management.l2_vapic_gpa[vm_id];

        return_val = check_and_walk_private_gpa_to_leaf(tdcs_ptr, OPERAND_ID_RCX, (pa_t)gpa,

                                          tdr_ptr->key_management_fields.hkid,

                                          &sept_entry_ptr, &sept_entry_level, &sept_entry_copy);

        if (return_val != TDX_SUCCESS)

        {

            *failed_gpa = gpa;

            goto EXIT;

        }



        if (!sept_state_is_guest_accessible_leaf(sept_entry_copy))

        {

            *failed_gpa = gpa;

            goto EXIT;

        }



        // Update the HPA

        hpa = leaf_ept_entry_to_hpa(sept_entry_copy, gpa, sept_entry_level);

        hpa = set_hkid_to_pa((pa_t)hpa, tdr_ptr->key_management_fields.hkid).raw;

        tdvps_ptr->management.l2_vapic_hpa[vm_id] = hpa;

        ia32_vmwrite(VMX_VIRTUAL_APIC_PAGE_ADDRESS_FULL_ENCODE, hpa);



        if (sept_entry_ptr != NULL)

        {

            free_la(sept_entry_ptr);

        }

    }

    

    return true;



EXIT:

    if (sept_entry_ptr != NULL)

    {

        free_la(sept_entry_ptr);

    }

    return false;

}



void invalidate_gpa_translations(tdvps_t *tdvps_ptr, uint16_t vm_id)

{

    tdvps_ptr->management.l2_enter_guest_state_hpa[vm_id] = NULL_PA;

    tdvps_ptr->management.l2_vapic_hpa[vm_id] = NULL_PA;

}



void invalidate_all_gpa_translations(tdcs_t* tdcs_p, tdvps_t* tdvps_p)

{

    for (uint16_t vm_id = 0; vm_id <= tdcs_p->management_fields.num_l2_vms; vm_id++)

    {

        invalidate_gpa_translations(tdvps_p, vm_id);

    }

}



bool_t adjust_tlb_tracking_state(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, tdvps_t* tdvps_ptr,

                                 bool_t new_association)

{

    tdcs_epoch_tracking_fields_t* epoch_tracking = &tdcs_ptr->epoch_tracking;



    // Lock the TD epoch

    if (acquire_sharex_lock_sh(&epoch_tracking->epoch_lock) != LOCK_RET_SUCCESS)

    {

        return false;

    }



    // Sample the TD epoch and atomically increment the REFCOUNT

    uint64_t vcpu_epoch = epoch_tracking->epoch_and_refcount.td_epoch;

    (void)_lock_xadd_16b(&epoch_tracking->epoch_and_refcount.refcount[vcpu_epoch & 1], 1);



    // End of critical section, release lock.

    release_sharex_lock_sh(&epoch_tracking->epoch_lock);



    if (vcpu_epoch != tdvps_ptr->management.vcpu_epoch)

    {

        if (!new_association)

        {

            /**

             *  The current VCPU was already associated with the current LP at the

             *  beginning of TDHVPENTER.

             *  Flush the TLB context and extended paging structure (EPxE) caches

             *  associated with the current TD.

             *  Else, no need to flush, since this LP is guaranteed not to hold any

             *  address translation for this VCPU

             */

            // Execute INVEPT type 1 for each Secure EPT

            flush_all_td_asids(tdr_ptr, tdcs_ptr);



            // Invalidate all soft-translated GPAs

            invalidate_all_gpa_translations(tdcs_ptr, tdvps_ptr);

        }



        // Store the sampled value of TD_EPOCH as the new value of VCPU_EPOCH

        tdvps_ptr->management.vcpu_epoch = vcpu_epoch;

    }



    return true;

}



void vmclear_vmcs(tdvps_t *tdvps_p, uint16_t vm_id)

{

    ia32_vmclear((void*)tdvps_p->management.tdvps_pa[get_tdvps_vmcs_page_index(vm_id)]);



    // Mark the guest TD as not launched.  Next VM entry will require VMLAUNCH

    tdvps_p->management.vm_launched[vm_id] = false;

}



api_error_type l2_sept_walk(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, uint16_t vm_id, pa_t page_gpa,

                            ept_level_t* level, ia32e_sept_t** l2_septe_ptr)

{

    ia32e_eptp_t septp = get_l2_septp(tdr_ptr, tdcs_ptr, vm_id);

    ia32e_sept_t cached_sept_entry = { .raw = 0 };



    ept_level_t requested_level = *level;

    *l2_septe_ptr = secure_ept_walk(septp, page_gpa, tdr_ptr->key_management_fields.hkid,

                                    level, &cached_sept_entry, false);



    if (requested_level != *level)

    {

        return TDX_L2_SEPT_WALK_FAILED;

    }



    return TDX_SUCCESS;

}



api_error_type l2_sept_walk_guest_side(

    tdr_t* tdr_ptr,

    tdcs_t* tdcs_ptr,

    uint16_t vm_id,

    pa_t page_gpa,

    ept_level_t* level,

    ia32e_sept_t* cached_l2_sept_entry,

    ia32e_sept_t** l2_septe_ptr)

{

    ia32e_eptp_t septp = get_l2_septp(tdr_ptr, tdcs_ptr, vm_id);



    ept_level_t requested_level = *level;

    *l2_septe_ptr = secure_ept_walk(septp, page_gpa, tdr_ptr->key_management_fields.hkid,

                                    level, cached_l2_sept_entry, true);



    if (requested_level != *level)

    {

        free_la(*l2_septe_ptr);

        *l2_septe_ptr = NULL;

        return TDX_EPT_WALK_FAILED;

    }



    return TDX_SUCCESS;

}



uint32_t prepare_servtd_hash_buff(tdcs_t* tdcs_ptr, servtd_hash_buff_t* servtd_has_buf)

{

    uint32_t num_tds = 0;



    tdx_debug_assert(MAX_SERVTDS <= 1);

    // TODO: add sorting for the array when the MAX_SERVTDS is greater than 1



    for (uint32_t i = 0; i < MAX_SERVTDS; i++)

    {

        if (tdcs_ptr->service_td_fields.servtd_bindings_table[i].state != SERVTD_NOT_BOUND)

        {

            tdx_memcpy(servtd_has_buf[num_tds].info_hash.qwords, sizeof(measurement_t),

                tdcs_ptr->service_td_fields.servtd_bindings_table[i].info_hash.qwords, sizeof(measurement_t));



            servtd_has_buf[num_tds].type = tdcs_ptr->service_td_fields.servtd_bindings_table[i].type;

            servtd_has_buf[num_tds].attrib.raw = tdcs_ptr->service_td_fields.servtd_bindings_table[i].attributes.raw;

            num_tds++;

        }

    }



    return num_tds;

}



void calculate_servtd_hash(tdcs_t* tdcs_ptr, bool_t handle_avx_state)

{

    servtd_hash_buff_t servtd_hash_buff[MAX_SERVTDS];

    basic_memset_to_zero((void*)servtd_hash_buff, (sizeof(servtd_hash_buff_t) * MAX_SERVTDS));

    uint32_t num_servtds = prepare_servtd_hash_buff(tdcs_ptr, servtd_hash_buff);



    if (num_servtds == 0)

    {

        basic_memset_to_zero((void*)&tdcs_ptr->service_td_fields.servtd_hash, sizeof(tdcs_ptr->service_td_fields.servtd_hash));

    }

    else

    {

        ALIGN(16) uint128_t xmms[16];



        if (handle_avx_state)

        {

            store_xmms_in_buffer(xmms);

        }



        crypto_api_error sha_error_code = sha384_generate_hash((const uint8_t*)servtd_hash_buff,

            num_servtds * sizeof(servtd_hash_buff_t),

            (uint64_t*)&tdcs_ptr->service_td_fields.servtd_hash);



        if (handle_avx_state)

        {

            load_xmms_from_buffer(xmms);

            basic_memset_to_zero(xmms, sizeof(xmms));

        }



        if (sha_error_code != 0)

        {

            // Unexpected error - Fatal Error

            TDX_ERROR("Unexpected error in SHA384 - error = %d\n", sha_error_code);

            FATAL_ERROR();

        }

    }

}



api_error_type check_cpuid_1f(tdcs_t* tdcs_p, bool_t allow_null)

{

    uint32_t cpuid_0b_idx;

    cpuid_topology_level_type_e prev_level_type;

    cpuid_topology_level_type_e level_type = LEVEL_TYPE_INVALID;



    cpuid_topology_shift_t cpuid_1f_eax;

    cpuid_topology_level_t cpuid_1f_ecx;



    bool_t null_config = false;

    bool_t core_level_scanned = false;



    // Scan the virtual CPUID(0x1F) sub-leaves



    for (uint32_t subleaf = 0; subleaf < LEVEL_TYPE_MAX; subleaf++)

    {

        uint32_t cpuid_1f_idx = get_cpuid_lookup_entry(CPUID_GET_TOPOLOGY_LEAF, subleaf);



        cpuid_config_return_values_t cpuid_values = tdcs_p->cpuid_config_vals[cpuid_1f_idx];



        // Null configuration case:  if all CPUID(0x1F) sub-leaves are configured as all-0, use the h/w values.

        // If the first subleaf is configured as 0, all the rest must be 0.

        if (subleaf == 0)

        {

            if ((cpuid_values.high == 0) && (cpuid_values.low == 0))

            {

                if (allow_null)

                {

                    null_config = true;

                }

                else

                {

                    return TDX_CPUID_LEAF_1F_FORMAT_UNRECOGNIZED;

                }

            }

        }

        else if ((null_config) && (cpuid_values.high || cpuid_values.low))

        {

            return TDX_CPUID_LEAF_1F_FORMAT_UNRECOGNIZED;

        }



        if (null_config)

        {

            cpuid_values = get_global_data()->cpuid_values[cpuid_1f_idx].values;



            tdcs_p->cpuid_config_vals[cpuid_1f_idx].low = cpuid_values.low;

            tdcs_p->cpuid_config_vals[cpuid_1f_idx].high = cpuid_values.high;

        }



        // We continue even if we use the h/w values, in order to set CPUID(0xB)

        cpuid_1f_eax.raw = cpuid_values.eax;

        cpuid_1f_ecx.raw = cpuid_values.ecx;



        prev_level_type = level_type;

        level_type = cpuid_1f_ecx.level_type;



        if (level_type != LEVEL_TYPE_INVALID)

        {

            // This is a valid sub-leaf.  Check that level type higher than the previous one

            // (initialized to INVALID, which is 0) but does not reach the max.

            if ((level_type <= prev_level_type) || (level_type >= LEVEL_TYPE_MAX))

            {

                return TDX_CPUID_LEAF_1F_FORMAT_UNRECOGNIZED;

            }



            if (level_type == LEVEL_TYPE_SMT)

            {

                // CPUID(0x0B, 0) is the SMT level. It is identical to CPUID(0x1F) at the SMT level.

                cpuid_0b_idx = get_cpuid_lookup_entry(0xB, 0);

                tdcs_p->cpuid_config_vals[cpuid_0b_idx] = cpuid_values;

            }

            else if (level_type == LEVEL_TYPE_CORE)

            {

                core_level_scanned = true;   // Prepare a flag for a sanity check later

            }

        }

        else  // level_type == CPUID_1F_ECX_t::INVALID

        {

            // The current sub-leaf is invalid, it marks the end of topology info.

            // Make sure we had at least one valid sub-leaf, otherwise CPUID leaf 1F is not configured properly.

            if (subleaf == 0)

            {

                return TDX_CPUID_LEAF_1F_FORMAT_UNRECOGNIZED;

            }



            // Sanity check: core level must have been scanned

            if (!core_level_scanned)

            {

                return TDX_CPUID_LEAF_1F_FORMAT_UNRECOGNIZED;

            }

        }



        // Generate virtual CPUID(0xB) values



        // CPUID(0x0B, 1) is the core level.  The information is of the last valid level of CPUID(0x1F)

        cpuid_0b_idx = get_cpuid_lookup_entry(0xB, 1);

        cpuid_1f_ecx.level_type = LEVEL_TYPE_CORE;

        cpuid_values.ecx = cpuid_1f_ecx.raw;

        tdcs_p->cpuid_config_vals[cpuid_0b_idx] = cpuid_values;

    }



    return TDX_SUCCESS;

}

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

 * @file metadata_generic.c

 * @brief Generic metadata handler

 */



#include "metadata_generic.h"

#include "auto_gen/global_sys_fields_lookup.h"

#include "auto_gen/tdr_tdcs_fields_lookup.h"

#include "auto_gen/td_vmcs_fields_lookup.h"

#include "auto_gen/td_l2_vmcs_fields_lookup.h"

#include "auto_gen/tdvps_fields_lookup.h"

#include "auto_gen/cpuid_configurations.h"

#include "helpers/error_reporting.h"

#include "helpers/helpers.h"

#include "metadata_sys.h"

#include "metadata_td.h"

#include "metadata_vp.h"



_STATIC_INLINE_ bool_t is_write_access_type(md_access_t access_type)

{

    return ((access_type & MD_WRITE_ACCESS) == MD_WRITE_ACCESS);

}



_STATIC_INLINE_ bool_t is_special_cpuid_field_id(md_field_id_t field_id)

{

    IF_RARE ((field_id.context_code == MD_CTX_TD) && (field_id.class_code == MD_TDCS_CPUID_CLASS_CODE))

    {

        return true;

    }



    return false;

}



_STATIC_INLINE_ bool_t is_special_l2_vmcs_field_id(md_field_id_t field_id)

{

    IF_RARE ((field_id.context_code == MD_CTX_VP) &&

             ((field_id.class_code == MD_TDVPS_VMCS_1_CLASS_CODE) ||

              (field_id.class_code == MD_TDVPS_VMCS_2_CLASS_CODE) ||

              (field_id.class_code == MD_TDVPS_VMCS_3_CLASS_CODE)))

    {

        return true;

    }



    return false;

}

#if 0 // TODO future use

_STATIC_INLINE_ bool_t is_l2_vm_field_id(md_field_id_t field_id, uint16_t* vm_id)

{

    if (field_id.context_code == MD_CTX_VP)

    {

        if ((field_id.class_code >= MD_TDVPS_VMCS_1_CLASS_CODE) &&

            (field_id.class_code < (MD_TDVPS_VMCS_1_CLASS_CODE + (L2_VP_CLASS_CODE_INC * MAX_L2_VMS))))

        {

            *vm_id = md_vp_get_l2_vm_index(field_id.class_code);

            return true;

        }

    }

    else if (field_id.context_code == MD_CTX_TD)

    {

        if ((field_id.class_code >= MD_TDCS_L2_SECURE_EPT_ROOT__1_CLASS_CODE) &&

            (field_id.class_code < (MD_TDCS_L2_SECURE_EPT_ROOT__1_CLASS_CODE + (L2_TD_CLASS_CODE_INC * MAX_L2_VMS))))

        {

            *vm_id = md_td_get_l2_vm_index(field_id.class_code);

            return true;

        }

    }



    *vm_id = 0;

    return false;

}

#endif

_STATIC_INLINE_ bool_t is_equal_field_id(md_field_id_t field_id1, md_field_id_t field_id2)

{

    return ((field_id1.field_code == field_id2.field_code) &&

            (field_id1.class_code == field_id2.class_code) &&

            (field_id1.context_code == field_id2.context_code));

}



api_error_code_e md_check_as_single_element_id(md_field_id_t field_id)

{

    // - RESERVED_* fields must be 0.

    // - LAST_ELEMENTS_IN_FIELD must be 0.

    // - LAST_FIELD_IN_SEQUENCE must by 0.

    // - WRITE_MASK_VALID is ignored.

    // - FIELD_SIZE is ignored.

    // - INC_SIZE is ignored.

    // - CONTEXT_CODE is ignored.

    IF_RARE (field_id.reserved_0 != 0 || field_id.reserved_1 != 0 ||

             field_id.reserved_2 != 0 || field_id.reserved_3 != 0 ||

             field_id.last_element_in_field != 0 || field_id.last_field_in_sequence != 0)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    return TDX_SUCCESS;

}



api_error_code_e md_check_as_sequence_header(md_context_code_e ctx_code, md_field_id_t field_id,

        md_access_t access_type)

{

    // - RESERVED_* fields must be 0.

    // - WRITE_MASK_VALID must be 0 if this is a read operation.

    IF_RARE (field_id.context_code != ctx_code ||

             field_id.reserved_0 != 0 || field_id.reserved_1 != 0 ||

             field_id.reserved_2 != 0 || field_id.reserved_3 != 0 ||

        ((access_type & MD_WRITE_ACCESS) == 0 && field_id.write_mask_valid != 0))

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    return TDX_SUCCESS;

}



_STATIC_INLINE_ uint32_t md_get_num_of_td_vp_ctx_unused_entries(md_context_code_e ctx_code, md_context_ptrs_t md_ctx)

{

    uint32_t unused_vms = MAX_L2_VMS;

    uint32_t unused_entries = 0;



    if (md_ctx.tdcs_ptr != NULL)

    {

        unused_vms = MAX_L2_VMS - md_ctx.tdcs_ptr->management_fields.num_l2_vms;

    }



    switch (ctx_code)

    {

        case MD_CTX_TD:

            unused_entries = TDCS_PAGES_PER_L2_VM * unused_vms;

            break;

        case MD_CTX_VP:

            unused_entries = TDVPS_PAGES_PER_L2_VM * unused_vms;

            break;

        case MD_CTX_SYS:

            unused_entries = 0;

            break;

        default:

            FATAL_ERROR();

            break;

    }



    return unused_entries;

}



const md_lookup_t* md_get_lookup_table(md_context_code_e ctx_code, md_field_id_t field_id,

                                       md_context_ptrs_t md_ctx, uint32_t* num_of_entries)

{

    const md_lookup_t* lookup_table;



    uint32_t unused_entries = md_get_num_of_td_vp_ctx_unused_entries(ctx_code, md_ctx);



    switch (ctx_code)

    {

        case MD_CTX_SYS:

            lookup_table = global_sys_lookup;

            *num_of_entries = MAX_NUM_GLOBAL_SYS_LOOKUP;

            break;

        case MD_CTX_TD:

            lookup_table = tdr_tdcs_lookup;

            *num_of_entries = MAX_NUM_TDR_TDCS_LOOKUP - unused_entries;

            break;

        case MD_CTX_VP:

            // In VP context, if the FIELD ID in NA - means a first entry in first table

            // meaning a TD VMCS table, which comes first to the actual TDVPS table

            if (is_null_field_id(field_id) || (field_id.class_code == MD_TDVPS_VMCS_CLASS_CODE))

            {

                lookup_table = td_vmcs_lookup;

                *num_of_entries = MAX_NUM_TD_VMCS_LOOKUP;

            }

            else if ((field_id.class_code == MD_TDVPS_VMCS_1_CLASS_CODE) ||

                     (field_id.class_code == MD_TDVPS_VMCS_2_CLASS_CODE) ||

                     (field_id.class_code == MD_TDVPS_VMCS_3_CLASS_CODE))

            {

                lookup_table = td_l2_vmcs_lookup;

                *num_of_entries = MAX_NUM_TD_L2_VMCS_LOOKUP;

            }

            else

            {

                lookup_table = tdvps_lookup;

                *num_of_entries = MAX_NUM_TDVPS_LOOKUP - unused_entries;

            }

            break;

        default:

            FATAL_ERROR();

            break;

    }



    return lookup_table;

}



uint32_t md_find_entry_idx(const md_lookup_t* lookup_table, uint32_t num_of_entries, md_field_id_t field_id)

{

    uint32_t i;



    IF_RARE (is_special_cpuid_field_id(field_id))

    {

        // TD context CPUID VALUES field id have different format

        // Zero out everything except the element number

        field_id.field_code = field_id.cpuid_field_code.element;

    }



    if (is_special_l2_vmcs_field_id(field_id))

    {

        field_id.class_code = 0;

    }



    for (i = 0; i < num_of_entries; i++)

    {

        // Search is done by Context, Class and Field

        // Since we already know the context, we just need to check it with debug assert

        tdx_debug_assert(field_id.context_code == lookup_table[i].field_id.context_code);



        uint16_t element_stride = (uint16_t)lookup_table[i].field_id.inc_size + 1;



        uint64_t first_element_id_in_range = lookup_table[i].field_id.field_code;

        uint64_t last_element_id_in_range = lookup_table[i].field_id.field_code +

                (lookup_table[i].num_of_elem * element_stride * lookup_table[i].num_of_fields);



        if ((field_id.class_code == lookup_table[i].field_id.class_code) &&

            ((uint64_t)field_id.field_code >= first_element_id_in_range) &&

            ((uint64_t)field_id.field_code < last_element_id_in_range))

        {

            break;

        }

    }



    // If entry not found

    if (i == num_of_entries)

    {

        return MD_NO_ENTRY_IDX;

    }



    return i;

}



_STATIC_INLINE_ void md_cpuid_field_id_set_leaf_subleaf(md_field_id_t* field_id, uint32_t leaf, uint32_t subleaf)

{

    field_id->cpuid_field_code.leaf = (uint16_t)(leaf & ~BIT(31));

    field_id->cpuid_field_code.leaf_bit31 = (leaf & (uint32_t)BIT(31)) >> 31;

    field_id->cpuid_field_code.subleaf = (uint16_t)subleaf;

    field_id->cpuid_field_code.subleaf_na = (subleaf == CPUID_SUBLEAF_NA) ? 1 : 0;

}



void md_cpuid_field_id_get_leaf_subleaf(md_field_id_t field_id, uint32_t* leaf, uint32_t* subleaf)

{

    *leaf = field_id.cpuid_field_code.leaf | (((uint32_t)field_id.cpuid_field_code.leaf_bit31) << 31);

    *subleaf = field_id.cpuid_field_code.subleaf_na ? CPUID_SUBLEAF_NA : field_id.cpuid_field_code.subleaf;

}



static md_field_id_t md_get_next_cpuid_value_entry(md_field_id_t field_id, bool_t element)

{

    // Inc size of CPUID field codes should be 0

    tdx_debug_assert(field_id.inc_size == 0);



    if (element && (field_id.cpuid_field_code.element == 0))

    {

        // There are only two elements in CPUID_VALUE field

        // If we are on the first element, just return the next element of the same field id

        field_id.field_code++;

        return field_id;

    }



    // Else in any other case - we need to return the next field

    // First find on what index we are already located

    uint32_t leaf, subleaf;

    md_cpuid_field_id_get_leaf_subleaf(field_id, &leaf, &subleaf);

    uint32_t index = get_cpuid_lookup_entry(leaf, subleaf);



    tdx_sanity_check(index != CPUID_LOOKUP_IDX_NA, SCEC_METADATA_HANDLER_SOURCE, 0);



    do

    {

        index = index + 1;

    } while (!cpuid_lookup[index].valid_entry);



    IF_RARE (index >= MAX_NUM_CPUID_LOOKUP)

    {

        // we finished the cpuid lookup array, return -1 to indicate that

        return (md_field_id_t)MD_FIELD_ID_NA;

    }



    // Get the leaf and subleaf of next entry in cpuid lookup

    leaf = cpuid_lookup[index].leaf_subleaf.leaf;

    subleaf = cpuid_lookup[index].leaf_subleaf.subleaf;



    // Set it into the field code value

    md_cpuid_field_id_set_leaf_subleaf(&field_id, leaf, subleaf);



    // Set to the first element

    field_id.cpuid_field_code.element = 0;



    return field_id;

}



typedef struct lookup_iterator_s

{

    const md_lookup_t* lookup_table;

    uint32_t num_of_entries_in_table;

    uint32_t table_idx;

    uint32_t parent_table_idx; // Used for L2 VMCS parent table entry idx (TDVPS table)

    md_field_id_t field_id;

} lookup_iterator_t;



_STATIC_INLINE_ uint32_t get_tdvps_table_idx_from_l2_vmcs_field_id(md_field_id_t field_id)

{

    tdx_debug_assert((field_id.class_code == MD_TDVPS_VMCS_1_CLASS_CODE) ||

                     (field_id.class_code == MD_TDVPS_VMCS_2_CLASS_CODE) ||

                     (field_id.class_code == MD_TDVPS_VMCS_3_CLASS_CODE));



    uint32_t l2_vm_id = md_vp_get_l2_vm_index(field_id.class_code);

    return (((l2_vm_id - 1) * L2_VMCS_INDEX_STRIDE) + L2_VMCS_1_ENTRY_INDEX);

}



static void ____md_fetch_next_of_last_table_entry(lookup_iterator_t* lookup_context, md_context_ptrs_t md_ctx)

{

    // Special case if we finished VMCS table - next is the first from TDVPS table

    // That's because VMCS table has class 0, and it basically precedes the TDVPS table

    IF_RARE ((lookup_context->lookup_table == td_vmcs_lookup) ||

             (lookup_context->lookup_table == td_l2_vmcs_lookup))

    {

        // Lookup table and table index CHANGE here

        if (lookup_context->lookup_table == td_l2_vmcs_lookup)

        {

            lookup_context->table_idx =

                    get_tdvps_table_idx_from_l2_vmcs_field_id(lookup_context->field_id) + 1;

        }

        else

        {

            lookup_context->table_idx = 0;

        }



        uint32_t unused_entries = md_get_num_of_td_vp_ctx_unused_entries(MD_CTX_VP, md_ctx);



        lookup_context->lookup_table = tdvps_lookup;

        lookup_context->num_of_entries_in_table = MAX_NUM_TDVPS_LOOKUP - unused_entries;



        lookup_context->field_id = tdvps_lookup[lookup_context->table_idx].field_id;

        return;

    }



    // Other case - we finished our context completely and there's no more fields in it

    lookup_context->lookup_table = NULL;

    lookup_context->num_of_entries_in_table = 0;

    lookup_context->table_idx = 0;

    lookup_context->field_id.raw = MD_FIELD_ID_NA;

    return;

}



// This internal function not only returns the field_id of the next field, but also returns

// the next index in the table to which the field_id belongs, and also returns a different

// lookup table ptr in case when we switched to different lookup table under the same context

// (currently happens only with TD-VMCS table in TDVPS context)

static void md_get_next_item_with_iterator(lookup_iterator_t* lookup_context, md_context_ptrs_t md_ctx, bool_t is_element)

{

    md_field_id_t tmp_field_id;

    uint32_t class_code = lookup_context->field_id.class_code;



    // In case when input field id is -1, we just want the very first entry from the relevant table

    // And return the id of the first element of the first field, so all the calculations below are

    // not relevant.

    IF_RARE (is_null_field_id(lookup_context->field_id))

    {

        // Lookup table here stays the same, but we just make the idx is 0

        lookup_context->table_idx = 0;

        lookup_context->field_id = lookup_context->lookup_table[0].field_id;

        goto EXIT;

    }



    tdx_sanity_check(lookup_context->table_idx != MD_NO_ENTRY_IDX, SCEC_METADATA_HANDLER_SOURCE, 1);



    IF_RARE (is_special_cpuid_field_id(lookup_context->field_id))

    {

        // Very special case of "CPUID_VALUES" field in TDCS, should be handled differently

        tmp_field_id = md_get_next_cpuid_value_entry(lookup_context->field_id, is_element);



        // If there's no more CPUID_VALUES entries, fetch the next field

        if (is_null_field_id(tmp_field_id))

        {

            goto EXIT_FETCH_NEXT;

        }



        // Lookup table and table index stays the same here

        lookup_context->field_id = tmp_field_id;

        return;

    }



    // Every entry in the lookup table can contain multiple fields,

    // and every field can contain multiple elements.

    // The below if-else case handling is correct for regular field id's only, and not for CPUID_VALUES

    // which we handle in md_td_get_next_cpuid_value_item above.

    const md_lookup_t* entry = &lookup_context->lookup_table[lookup_context->table_idx];

    uint16_t element_stride = (uint16_t)entry->field_id.inc_size + 1;



    tdx_debug_assert(lookup_context->field_id.field_code >= entry->field_id.field_code);



    IF_RARE (is_element)

    {

        // In this case we return the next element within a field, or a first element of next field

        uint32_t elem_num = (lookup_context->field_id.field_code - entry->field_id.field_code) /

                             element_stride;



        // If we still have elements in the current table entry

        if (elem_num < ((entry->num_of_fields * entry->num_of_elem) - 1))

        {

            lookup_context->field_id.field_code += element_stride;

            // Lookup table and table index stays the same here

            return;

        }

    }

    else

    {

        // In this case we return the next field, with a field_id of the first element

        uint32_t field_num = (lookup_context->field_id.field_code - entry->field_id.field_code) /

                             (entry->num_of_elem * element_stride);



        // If we still have fields in the current table entry

        if (field_num < (entry->num_of_fields - 1))

        {

            lookup_context->field_id.field_code += (entry->num_of_elem * element_stride);

            // Lookup table and table index stays the same here

            return;

        }

    }



EXIT_FETCH_NEXT:



    // If we don't have elements or fields in the current table entry, we go to the next one

    IF_RARE (lookup_context->table_idx == (lookup_context->num_of_entries_in_table - 1)) // Last entry in table

    {

        ____md_fetch_next_of_last_table_entry(lookup_context, md_ctx);

    }

    else

    {

        // Else - return next entry in the table (first field, first element)

        // Lookup table stays the same here, but the index changes

        lookup_context->table_idx++;

        // Remember the class code - needed to apply to L2 VMCS fields

        class_code = lookup_context->field_id.class_code;

        lookup_context->field_id = lookup_context->lookup_table[lookup_context->table_idx].field_id;

    }



EXIT:



    // In case when we fetched a first field of CPUID_VALUE array as the next field

    IF_RARE (is_special_cpuid_field_id(lookup_context->field_id))

    {

        // Insert the leaf/subleaf of the first CPUID entry to the field id

        md_cpuid_field_id_set_leaf_subleaf(&lookup_context->field_id, cpuid_lookup[0].leaf_subleaf.leaf,

                                           cpuid_lookup[0].leaf_subleaf.subleaf);

    }



    // In case when we fetched a L2 VMCS 1/2/3 "parent" field in TDVPS table

    IF_RARE ((lookup_context->field_id.raw == MD_TDVPS_L2_VMCS_1_FIELD_ID) ||

             (lookup_context->field_id.raw == MD_TDVPS_L2_VMCS_2_FIELD_ID) ||

             (lookup_context->field_id.raw == MD_TDVPS_L2_VMCS_3_FIELD_ID))

    {

        // Switch to L2 VMCS table instead

        // Lookup table and table index CHANGE here

        lookup_context->lookup_table = td_l2_vmcs_lookup;

        lookup_context->num_of_entries_in_table = MAX_NUM_TD_L2_VMCS_LOOKUP;

        lookup_context->table_idx = 0;

        // Remember the class code - needed to apply to L2 VMCS fields

        class_code = lookup_context->field_id.class_code;

        lookup_context->field_id = td_l2_vmcs_lookup[0].field_id;

    }



    // In case we fetched L2 VMCS field in L2 VMCS table

    if (lookup_context->lookup_table == td_l2_vmcs_lookup)

    {

        // Apply the class code

        // Remembered either from a previous field in L2 VMCS table (and contained correct code)

        // Or remembered from the "parent" field in TDVPS table

        lookup_context->field_id.class_code = class_code;

    }



    return;

}



static void md_get_next_accessible_item(lookup_iterator_t* lookup_context, bool_t is_element,

                            md_context_ptrs_t md_ctx, md_access_t access_type, md_access_qualifier_t access_qual)

{

    uint64_t rd_mask = 0;

    uint64_t wr_mask = 0;

    bool_t accessible_item = false;



    do

    {

        md_get_next_item_with_iterator(lookup_context, md_ctx, is_element);



        if (is_null_field_id(lookup_context->field_id))

        {

            break;

        }



        const md_lookup_t* entry = &lookup_context->lookup_table[lookup_context->table_idx];



        md_get_rd_wr_mask(entry, access_type, access_qual, &rd_mask, &wr_mask);



        accessible_item = ((!is_write_access_type(access_type) && rd_mask) ||

                           (is_write_access_type(access_type) && wr_mask));



    } while (!accessible_item);



    return;

}



static md_field_id_t md_get_next_item_in_context(md_context_code_e ctx_code, md_field_id_t field_id,

                                                 md_context_ptrs_t md_ctx, bool_t element,

                                                 md_access_t access_type, md_access_qualifier_t access_qual)

{

    lookup_iterator_t lookup_context;



    // TD-VMCS lookup table is accessed by class code 0. If we are on field_id==0 then we will get it

    // From this function below automatically.

    lookup_context.lookup_table = md_get_lookup_table(ctx_code, field_id, md_ctx,

                                                      &lookup_context.num_of_entries_in_table);

    lookup_context.field_id.raw = field_id.raw;



    // In case when input field id is -1, we just want the very first entry from the relevant table

    // And return the id of the first element of the first field, so the table search is not needed

    IF_RARE (is_null_field_id(field_id))

    {

        lookup_context.table_idx = 0;

    }

    else

    {

        lookup_context.table_idx = md_find_entry_idx(lookup_context.lookup_table,

                                                lookup_context.num_of_entries_in_table, field_id);

    }



    md_get_next_accessible_item(&lookup_context, element, md_ctx, access_type, access_qual);



    return lookup_context.field_id;

}



static md_field_id_t md_get_next_field_in_context(md_context_code_e ctx_code, md_field_id_t field_id,

                                                  md_context_ptrs_t md_ctx,

                                                  md_access_t access_type, md_access_qualifier_t access_qual)

{

    return md_get_next_item_in_context(ctx_code, field_id, md_ctx, false, access_type, access_qual);

}



md_field_id_t md_get_next_element_in_context(md_context_code_e ctx_code, md_field_id_t field_id,

                                             md_context_ptrs_t md_ctx,

                                             md_access_t access_type, md_access_qualifier_t access_qual)

{

    return md_get_next_item_in_context(ctx_code, field_id, md_ctx, true, access_type, access_qual);

}



static bool_t md_is_id_start_of_field(md_field_id_t field_id, const md_lookup_t* lookup_entry)

{

    uint32_t elem_num = field_id.field_code - lookup_entry->field_id.field_code;



    if (lookup_entry->field_id.inc_size)

    {

        IF_RARE ((elem_num % 2) != 0)

        {

            return false;

        }



        elem_num = elem_num / 2;

    }



    IF_RARE ((elem_num % lookup_entry->num_of_elem) != 0)

    {

        return false;

    }



    return true;

}



void md_get_rd_wr_mask(const md_lookup_t* entry, md_access_t access_type, md_access_qualifier_t access_qual,

        uint64_t* out_rd_mask, uint64_t* out_wr_mask)

{

    switch (access_type)

    {

        case MD_HOST_WR:

            *out_wr_mask = access_qual.host_qualifier.debug ? entry->dbg_wr_mask : entry->prod_wr_mask;

            *out_rd_mask = access_qual.host_qualifier.debug ? entry->dbg_rd_mask : entry->prod_rd_mask;

            break;

        case MD_HOST_RD:

            *out_wr_mask = 0;

            *out_rd_mask = access_qual.host_qualifier.debug ? entry->dbg_rd_mask : entry->prod_rd_mask;

            break;

        case MD_GUEST_WR:

            *out_wr_mask = entry->guest_wr_mask;

            *out_rd_mask = entry->guest_rd_mask;

            break;

        case MD_GUEST_RD:

            *out_wr_mask = 0;

            *out_rd_mask = entry->guest_rd_mask;

            break;

        case MD_SERV_TD_WR:

            *out_wr_mask = entry->migtd_wr_mask;

            *out_rd_mask = entry->migtd_rd_mask;

            break;

        case MD_SERV_TD_RD:

            *out_wr_mask = 0;

            *out_rd_mask = entry->migtd_rd_mask;

            break;

        case MD_EXPORT_IMMUTABLE:

            *out_wr_mask = 0;

            *out_rd_mask = (entry->mig_export == MIG_MB) ? entry->export_mask : 0;

            break;

        case MD_EXPORT_MUTABLE:

            *out_wr_mask = 0;

            *out_rd_mask = (entry->mig_export == MIG_ME) ? entry->export_mask : 0;

            break;

        case MD_IMPORT_IMMUTABLE:

            *out_wr_mask = (entry->mig_import == MIG_MB  || entry->mig_import == MIG_CB ||

                            entry->mig_import == MIG_MBO || entry->mig_import == MIG_CBO ||

                            entry->mig_import == MIG_IB  || entry->mig_import == MIG_IBS)

                                    ? entry->import_mask : 0;

            *out_rd_mask = ~(0ULL);

            break;

        case MD_IMPORT_MUTABLE:

            *out_wr_mask = (entry->mig_import == MIG_ME   || entry->mig_import == MIG_CE ||

                            entry->mig_import == MIG_MEO  || entry->mig_import == MIG_CEO ||

                            entry->mig_import == MIG_IE   || entry->mig_import == MIG_IES ||

                            entry->mig_import == MIG_IEME || entry->mig_import == MIG_IESME)

                                    ? entry->import_mask : 0;

            *out_rd_mask = ~(0ULL);

            break;

        default:

            TDX_ERROR("Incorrect access type : 0x%x\n", access_type);

            FATAL_ERROR();

            break;

    }



    return;

}



static const md_lookup_t* md_check_element_and_get_entry(md_context_code_e ctx_code, md_field_id_t field_id,

                                                         md_context_ptrs_t md_ctx)

{

    const md_lookup_t* lookup_table;

    uint32_t curr_idx, num_of_entries;



    lookup_table = md_get_lookup_table(ctx_code, field_id, md_ctx, &num_of_entries);



    curr_idx = md_find_entry_idx(lookup_table, num_of_entries, field_id);



    IF_RARE (curr_idx == MD_NO_ENTRY_IDX)

    {

        return NULL;

    }



    return &lookup_table[curr_idx];

}



api_error_code_e md_read_element(md_context_code_e ctx_code, md_field_id_t field_id,

        md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* value)

{

    api_error_code_e retval;

    const md_lookup_t* entry = md_check_element_and_get_entry(ctx_code, field_id, md_ctx);



    IF_RARE (entry == NULL)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    switch (ctx_code)

    {

        case MD_CTX_SYS:

            retval = md_sys_read_element(field_id, entry, access_type, access_qual, value);

            break;

        case MD_CTX_TD:

            retval = md_td_read_element(field_id, entry, access_type, access_qual, md_ctx, value);

            break;

        case MD_CTX_VP:

            retval = md_vp_read_element(field_id, entry, access_type, access_qual, md_ctx, value);

            break;

        default:

            FATAL_ERROR();

            break;

    }



    return retval;

}



api_error_code_e md_write_element(md_context_code_e ctx_code, md_field_id_t field_id,

         md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,

         uint64_t value, uint64_t wr_mask, uint64_t* old_value)

{

    api_error_code_e retval;

    const md_lookup_t* entry = md_check_element_and_get_entry(ctx_code, field_id, md_ctx);



    IF_RARE (entry == NULL)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    switch (ctx_code)

    {

        case MD_CTX_SYS:

            retval = md_sys_write_element(field_id, entry, access_type, access_qual,

                                         value, wr_mask, old_value);

            break;

        case MD_CTX_TD:

            retval = md_td_write_element(field_id, entry, access_type, access_qual, md_ctx,

                                         value, wr_mask, old_value);

            break;

        case MD_CTX_VP:

            retval = md_vp_write_element(field_id, entry, access_type, access_qual, md_ctx,

                                         value, wr_mask, old_value, true);

            break;

        default:

            FATAL_ERROR();

            break;

    }



    return retval;

}



static const md_lookup_t* md_check_field_and_get_entry(md_context_code_e ctx_code, md_field_id_t field_id,

                        md_context_ptrs_t md_ctx, lookup_iterator_t* lookup_context)

{

    const md_lookup_t* lookup_table;

    uint32_t curr_idx, num_of_entries;



    lookup_table = md_get_lookup_table(ctx_code, field_id, md_ctx, &num_of_entries);



    curr_idx = md_find_entry_idx(lookup_table, num_of_entries, field_id);



    const md_lookup_t* entry = &lookup_table[curr_idx];



    if ((curr_idx == MD_NO_ENTRY_IDX) || !md_is_id_start_of_field(field_id, entry) ||

        (field_id.element_size_code != entry->field_id.element_size_code))

    {

        return NULL;

    }



    tdx_sanity_check(entry->num_of_elem <= MAX_ELEMENTS_IN_FIELD, SCEC_METADATA_HANDLER_SOURCE, 2);



    if (lookup_context != NULL)

    {

        lookup_context->lookup_table = lookup_table;

        lookup_context->num_of_entries_in_table = num_of_entries;

        lookup_context->table_idx = curr_idx;

        lookup_context->field_id = entry->field_id;

        // Set up the exact input field code

        lookup_context->field_id.field_code = field_id.field_code;

    }



    return entry;

}



static api_error_code_e md_read_field_with_entry(md_context_code_e ctx_code, md_field_id_t field_id,

        md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,

        uint64_t value[MAX_ELEMENTS_IN_FIELD], const md_lookup_t* entry)

{

    api_error_code_e retval;



    IF_RARE (entry == NULL)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    switch (ctx_code)

    {

        case MD_CTX_SYS:

            retval = md_sys_read_field(field_id, entry, access_type, access_qual, value);

            break;

        case MD_CTX_TD:

            retval = md_td_read_field(field_id, entry, access_type, access_qual, md_ctx, value);

            break;

        case MD_CTX_VP:

            retval = md_vp_read_field(field_id, entry, access_type, access_qual, md_ctx, value);

            break;

        default:

            FATAL_ERROR();

            break;

    }



    return retval;

}



static api_error_code_e md_write_field_with_entry(md_context_code_e ctx_code, md_field_id_t field_id,

        md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,

        uint64_t value[MAX_ELEMENTS_IN_FIELD], uint64_t wr_mask, const md_lookup_t* entry, bool_t is_import)

{

    api_error_code_e retval;



    IF_RARE (entry == NULL)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    switch (ctx_code)

    {

        case MD_CTX_SYS:

            retval = md_sys_write_field(field_id, entry, access_type, access_qual, value, wr_mask);

            break;

        case MD_CTX_TD:

            retval = md_td_write_field(field_id, entry, access_type, access_qual, md_ctx, value, wr_mask, is_import);

            break;

        case MD_CTX_VP:

            retval = md_vp_write_field(field_id, entry, access_type, access_qual, md_ctx, value, wr_mask);

            break;

        default:

            FATAL_ERROR();

            break;

    }



    return retval;

}



_STATIC_INLINE_ void md_set_sequence_header(md_sequence_t* sequence_ptr, md_context_code_e ctx_code,

                                            md_field_id_t field_id, uint16_t num_of_elem, bool_t write_access)

{

    sequence_ptr->sequence_header.raw = field_id.raw;

    sequence_ptr->sequence_header.context_code = ctx_code;

    sequence_ptr->sequence_header.reserved_0 = 0;

    sequence_ptr->sequence_header.reserved_1 = 0;

    sequence_ptr->sequence_header.reserved_2 = 0;

    sequence_ptr->sequence_header.reserved_3 = 0;

    sequence_ptr->sequence_header.write_mask_valid = write_access;

    sequence_ptr->sequence_header.last_element_in_field = num_of_elem - 1;



#define MINUS_ONE_IN_9_BITS  (0x1FF)

    // Set it to -1, so that on first increment it will become 0

    sequence_ptr->sequence_header.last_field_in_sequence = MINUS_ONE_IN_9_BITS;

}



// Should be used only when next_field_id was created by calling md_get_next_item_in_context

// on the prev_field_id

_STATIC_INLINE_ bool_t is_sequential_field_id(md_field_id_t prev_field_id, uint32_t num_of_elem,

                                              md_field_id_t next_field_id)

{

    IF_RARE (is_special_cpuid_field_id(prev_field_id) &&

             is_special_cpuid_field_id(next_field_id))

    {

        // CPUID fields are never sequential

        return false;

    }



    uint16_t element_stride = (uint16_t)prev_field_id.inc_size + 1;



    return (prev_field_id.class_code == next_field_id.class_code) &&

           ((prev_field_id.field_code + (num_of_elem * element_stride)) == next_field_id.field_code);

}



typedef enum

{

    DUMP_SEQUENCE_DONE,

    DUMP_SEQUENCE_EMPTY,

    DUMP_SEQUENCE_NO_SPACE

} dump_seq_status_e;



// Can be invoked only after sequence header is set in sequence ptr

// Returns true if it completed the full the sequence dump

static dump_seq_status_e md_dump_sequence(md_sequence_t* sequence_ptr, md_context_code_e ctx_code,

                               md_context_ptrs_t md_ctx, uint32_t buff_size, md_access_t access_type,

                               md_access_qualifier_t access_qual,

                               uint32_t* elements_written, lookup_iterator_t* lkp_ctx)

{

    uint32_t sequence_idx = 0;

    dump_seq_status_e sequence_done = DUMP_SEQUENCE_NO_SPACE;

    const md_lookup_t* entry = NULL;

    api_error_code_e retval = TDX_SUCCESS;



    entry = &lkp_ctx->lookup_table[lkp_ctx->table_idx];



    bool_t sequence_header_set = false;



    // Decrement the sequence header size from the remaining buffer

    buff_size -= sizeof(md_field_id_t);

    *elements_written = 0;



    // Read the sequence, as long as there's space in the buffer for a whole field

    while ((uint64_t)buff_size >= ((uint64_t)entry->num_of_elem * sizeof(uint64_t)))

    {

        // Only fields that match the requested access attribute (e.g., immutable export) are dumped

        retval = md_read_field_with_entry(ctx_code, lkp_ctx->field_id,

                                          access_type, access_qual, md_ctx, &sequence_ptr->element[sequence_idx],

                                          entry);

        // If field was readable

        IF_COMMON (retval == TDX_SUCCESS)

        {

            if (!sequence_header_set)

            {

                // Set sequence header

                md_set_sequence_header(sequence_ptr, ctx_code, lkp_ctx->field_id, entry->num_of_elem, false);

                sequence_header_set = true;

            }



            // Update the remaining output buffer size, and advance the sequence buffer index

            buff_size -= (entry->num_of_elem * sizeof(uint64_t));

            sequence_idx += entry->num_of_elem;

            sequence_ptr->sequence_header.last_field_in_sequence++;

        }

        else if ((retval != TDX_METADATA_FIELD_NOT_READABLE) && (retval != TDX_METADATA_FIELD_SKIP))

        {

            TDX_ERROR("Unexpected error during sequence dump - 0x%llx, field_id = 0x%llx\n",

                    retval, lkp_ctx->field_id.raw);

            FATAL_ERROR();

        }



        // Fetch next field in context and class

        md_field_id_t last_field_id = lkp_ctx->field_id;

        md_get_next_accessible_item(lkp_ctx, false, md_ctx, access_type, access_qual);

        // If sequence is done (stopped on non-readable field), or no next field in table (current context),

        // or no next field in class, or two fields are not consequent,

        // or different number of elements between the fields

        // or different size of elements between the fields

        if ((retval == TDX_METADATA_FIELD_NOT_READABLE) ||

            (is_null_field_id(lkp_ctx->field_id)) ||

            !is_sequential_field_id(last_field_id, entry->num_of_elem, lkp_ctx->field_id) ||

            (entry->num_of_elem != lkp_ctx->lookup_table[lkp_ctx->table_idx].num_of_elem) ||

            (entry->field_id.element_size_code != lkp_ctx->field_id.element_size_code))

        {

            if (sequence_idx == 0)

            {

                sequence_done = DUMP_SEQUENCE_EMPTY;

            }

            else

            {

                sequence_done = DUMP_SEQUENCE_DONE;

            }

            break;

        }



        entry = &lkp_ctx->lookup_table[lkp_ctx->table_idx];

    }



    *elements_written = sequence_idx;



    return sequence_done;

}



api_error_code_e md_dump_list(md_context_code_e ctx_code, md_field_id_t field_id, md_context_ptrs_t md_ctx,

        md_list_header_t* list_header_ptr, uint32_t buff_size, md_access_t access_type,

        md_access_qualifier_t access_qual, md_field_id_t* next_field_id)

{

    lookup_iterator_t lookup_context;

    api_error_code_e retval;

    uint8_t* sequence_buffer_ptr;

    md_sequence_t* sequence_ptr;

    uint32_t elements_written = 0;

    dump_seq_status_e sequence_done = DUMP_SEQUENCE_NO_SPACE;



    next_field_id->raw = MD_FIELD_ID_NA;



    // Only HOST_RD, GUEST_RD and EXPORT_* are supported.

    IF_RARE ((access_type != MD_HOST_RD) && (access_type != MD_GUEST_RD) &&

        (access_type != MD_EXPORT_IMMUTABLE) && (access_type != MD_EXPORT_MUTABLE))

    {

        return TDX_METADATA_FIELD_NOT_READABLE;

    }



    // Buffer size, must be >= 24 to hold at least the list header and one sequence

    IF_RARE (buff_size < (sizeof(md_list_header_t) + sizeof(md_field_id_t) + MAX_ELEMENTS_IN_FIELD))

    {

        next_field_id->raw = field_id.raw;

        return TDX_METADATA_LIST_OVERFLOW;

    }



    // -1 as input means to expect a first field id from the lookup table

    if (is_null_field_id(field_id))

    {

        field_id = md_get_next_field_in_context(ctx_code, field_id, md_ctx, access_type, access_qual);



        // If we still got NULL_ID field, there's nothing to dump for given access type/qual

        if (is_null_field_id(field_id))

        {

            return TDX_SUCCESS;

        }

    }



    const md_lookup_t* entry = md_check_field_and_get_entry(ctx_code, field_id, md_ctx, &lookup_context);

    IF_RARE (entry == NULL)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    // Decrement the list header size

    buff_size -= sizeof(md_list_header_t);



    retval = TDX_METADATA_LIST_OVERFLOW;



    // Initialize the list header

    list_header_ptr->raw = 0;

    list_header_ptr->list_buff_size = sizeof(md_list_header_t);



    // Set up the first sequence header, which begins right after the list header

    sequence_buffer_ptr = (uint8_t*)(list_header_ptr) + sizeof(md_list_header_t);



    TDX_LOG("========================DUMP LIST========================\n");

    // Loop on sequences until we can't squeeze a sequence header + at least one complete field

    while (buff_size >= (sizeof(md_field_id_t) + entry->num_of_elem * sizeof(uint64_t)))

    {

        sequence_ptr = (md_sequence_t*)sequence_buffer_ptr;

        // Dump the sequence

#ifdef DEBUGFEATURE_TDX_DBG_TRACE

        uint64_t prev_field_id = lookup_context.field_id.raw;

#endif



        sequence_done = md_dump_sequence(sequence_ptr, ctx_code, md_ctx, buff_size, access_type, access_qual,

                                         &elements_written, &lookup_context);



        // Check that it's not an empty sequence

        IF_COMMON (sequence_done != DUMP_SEQUENCE_EMPTY)

        {

#ifdef DEBUGFEATURE_TDX_DBG_TRACE

            TDX_LOG("Sequence written from field 0x%llx, to field (which is next) 0x%llx\n",

                    prev_field_id, lookup_context.field_id.raw);

#endif



            // Update the list header

            list_header_ptr->num_sequences++;

            list_header_ptr->list_buff_size += (sizeof(md_field_id_t) + (elements_written * sizeof(uint64_t)));

            // Decrement the written element size and sequence header size from the buffer

            buff_size -= (sizeof(md_field_id_t) + (elements_written * sizeof(uint64_t)));

            // Advance the buffer pointer by the size of the sequence header + written elements

            sequence_buffer_ptr += (sizeof(md_field_id_t) + (elements_written * sizeof(uint64_t)));

        }



        // If sequence not finished (no more space left), or the context is done - no point to continue anymore

        IF_RARE ((sequence_done == DUMP_SEQUENCE_NO_SPACE) || is_null_field_id(lookup_context.field_id))

        {

            break;

        }



        // Fetch next field table entry, to see the number of elements in the loop condition

        entry = &lookup_context.lookup_table[lookup_context.table_idx];

    }



    // Next field id will either get -1 if we finished the context, or the next field id to be written

    // in case of unfinished sequence, or unfinished context

    next_field_id->raw = lookup_context.field_id.raw;



    if (is_null_field_id(*next_field_id))

    {

        retval = TDX_SUCCESS;

    }



    return retval;

}



_STATIC_INLINE_ bool_t is_required_entry(const md_lookup_t* entry, md_access_t access_type)

{

    if (access_type == MD_IMPORT_MUTABLE)

    {

        if (entry->mig_import == MIG_ME || entry->mig_import == MIG_CE || entry->mig_import == MIG_IESME)

        {

            return true;

        }

    }

    else if (access_type == MD_IMPORT_IMMUTABLE)

    {

        if (entry->mig_import == MIG_MB || entry->mig_import == MIG_CB)

        {

            return true;

        }

    }



    return false;

}



_STATIC_INLINE_ bool_t is_required_or_optional_entry(const md_lookup_t* entry, md_access_t access_type)

{

    if (access_type == MD_IMPORT_MUTABLE)

    {

        if (entry->mig_import == MIG_ME || entry->mig_import == MIG_CE || entry->mig_import == MIG_IESME ||

            entry->mig_import == MIG_MEO || entry->mig_import == MIG_CEO)

        {

            return true;

        }

    }

    else if (access_type == MD_IMPORT_IMMUTABLE)

    {

        if (entry->mig_import == MIG_MB || entry->mig_import == MIG_CB ||

            entry->mig_import == MIG_MBO || entry->mig_import == MIG_CBO)

        {

            return true;

        }

    }



    return false;

}



static api_error_code_e md_write_sequence(md_sequence_t* sequence_ptr, md_context_ptrs_t md_ctx,

                                uint32_t buff_size, md_access_t access_type, md_access_qualifier_t access_qual,

                                uint32_t* elements_read, lookup_iterator_t* lkp_iter, bool_t skip_non_writable,

                                uint64_t ext_err_info[2], bool_t is_import)

{

    md_context_code_e ctx_code = sequence_ptr->sequence_header.context_code;

    uint32_t sequence_idx = 0;

    const md_lookup_t* entry = NULL;

    uint64_t wr_mask;

    api_error_code_e retval;



    ext_err_info[0] = 0;

    ext_err_info[1] = 0;



    // Check that there's enough remaining size for the minimal sequence (header + 1 field)

    IF_RARE (buff_size < (sizeof(md_field_id_t) + sizeof(uint64_t)))

    {

        ext_err_info[0] = lkp_iter->field_id.raw;

        return api_error_with_l2_details(TDX_METADATA_LIST_OVERFLOW, 0xFFFF, 0);

    }

    // Check the sequence header

    retval = md_check_as_sequence_header(ctx_code, sequence_ptr->sequence_header, access_type);

    IF_RARE (retval != TDX_SUCCESS)

    {

        ext_err_info[0] = sequence_ptr->sequence_header.raw;

        return api_error_with_l2_details(retval, 0xFFFF, 0);

    }



    // Check the element size

    IF_RARE (sequence_ptr->sequence_header.element_size_code != lkp_iter->field_id.element_size_code)

    {

        ext_err_info[0] = sequence_ptr->sequence_header.raw;

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    *elements_read = 0;

    uint32_t num_fields = sequence_ptr->sequence_header.last_field_in_sequence + 1;



    // Subtract the sequence header size from remaining buffer

    buff_size -= sizeof(md_field_id_t);



    for (uint32_t i = 0; i < num_fields; i++)

    {

        entry = &lkp_iter->lookup_table[lkp_iter->table_idx];



        if (sequence_ptr->sequence_header.write_mask_valid)

        {

            // First element after the header will be the write mask, if write mask is valid

            wr_mask = sequence_ptr->element[0];

            sequence_idx++;

            buff_size -= sizeof(uint64_t);

        }

        else

        {

            wr_mask = (uint64_t)-1;

        }



        // Check that there's enough remaining size for the minimal sequence (1 field)

        if ((uint64_t)buff_size < ((uint64_t)entry->num_of_elem * sizeof(uint64_t)))

        {

            ext_err_info[0] = lkp_iter->field_id.raw;

            return api_error_with_l2_details(TDX_METADATA_LIST_OVERFLOW, 0xFFFF, 0);

        }



        if (!skip_non_writable || is_required_or_optional_entry(entry, access_type))

        {

            retval = md_write_field_with_entry(ctx_code, lkp_iter->field_id,

                                               access_type, access_qual, md_ctx, &sequence_ptr->element[sequence_idx],

                                               wr_mask, entry, is_import);



            if (retval != TDX_SUCCESS)

            {

                if (!((retval == TDX_METADATA_FIELD_NOT_WRITABLE) && skip_non_writable))

                {

                    ext_err_info[0] = lkp_iter->field_id.raw;

                    return retval;

                }

            }

        }



        // Update the remaining output buffer size, and advance the sequence buffer index

        buff_size -= (entry->num_of_elem * sizeof(uint64_t));

        sequence_idx += entry->num_of_elem;

        // Fetch next field in context and class

        md_get_next_item_with_iterator(lkp_iter, md_ctx, false);

        // If no next field in table (current context), or no next field in class, and apparently we still

        // have fields left...

        if ((i < (num_fields - 1)) &&

            (is_null_field_id(lkp_iter->field_id) ||

            (lkp_iter->field_id.class_code != entry->field_id.class_code)))

        {

            ext_err_info[0] = sequence_ptr->sequence_header.raw;

            return TDX_METADATA_FIELD_ID_INCORRECT;

        }

    }



    *elements_read = sequence_idx;



    return TDX_SUCCESS;

}



api_error_code_e md_write_list(md_context_code_e ctx_code, md_field_id_t expected_field, uint16_t buff_size,

                               bool_t check_missing, bool_t skip_non_writable, bool_t is_last,

                               md_context_ptrs_t md_ctx, md_list_header_t* list_header_ptr,

                               md_access_t access_type, md_access_qualifier_t access_qual,

                               md_field_id_t* next_field_id, uint64_t ext_err_info[2], bool_t is_import)

{

    lookup_iterator_t lkp_iter;

    uint16_t remaining_buff_size;

    api_error_code_e retval;

    uint8_t* sequence_buffer_ptr;

    md_sequence_t* sequence_ptr;

    uint32_t elements_read;



    // Default return values for extended error information

    ext_err_info[0] = ext_err_info[1] = 0;



    // Only HOST_WR, GUEST_WR and IMPORT_* are supported.

    tdx_debug_assert(!((access_type != MD_HOST_WR) && (access_type != MD_GUEST_WR) &&

        (access_type != MD_IMPORT_IMMUTABLE) && (access_type != MD_IMPORT_MUTABLE)));



    next_field_id->raw = MD_FIELD_ID_NA;



    // Check the list header

    if ((list_header_ptr->num_sequences == 0) || (list_header_ptr->reserved != 0))

    {

        return api_error_with_operand_id(TDX_INVALID_METADATA_LIST_HEADER, 0xFFFF);

    }



    if (list_header_ptr->list_buff_size > buff_size)

    {

        return api_error_with_operand_id(TDX_METADATA_LIST_OVERFLOW, 0xFFFF);

    }



    // -1 as input means to expect a first field id from the lookup table

    if (is_null_field_id(expected_field))

    {

        expected_field = md_get_next_field_in_context(ctx_code, expected_field, md_ctx, access_type, access_qual);



        // If we still got NULL_ID field, there's nothing to write for given access type/qual

        if (is_null_field_id(expected_field))

        {

            return TDX_METADATA_FIELD_ID_INCORRECT;

        }

    }



    if (check_missing)

    {

        // When ordered write list is done, we need to set up the iterator to the expected field

        if (md_check_field_and_get_entry(ctx_code, expected_field, md_ctx, &lkp_iter) == NULL)

        {

            return TDX_METADATA_FIELD_ID_INCORRECT;

        }

    }



    // Set up the first sequence header, which begins right after the list header

    remaining_buff_size = list_header_ptr->list_buff_size - sizeof(md_list_header_t);

    sequence_buffer_ptr = (uint8_t*)(list_header_ptr) + sizeof(md_list_header_t);



    // Read all sequences

    for (uint32_t i = 0; i < list_header_ptr->num_sequences; i++)

    {

        sequence_ptr = (md_sequence_t*)sequence_buffer_ptr;



        // Check that there's enough remaining size to actually access the sequence header,

        // and at least one element

        if (remaining_buff_size < (sizeof(sequence_ptr->sequence_header) + sizeof(uint64_t)))

        {

            return api_error_with_l2_details(TDX_METADATA_LIST_OVERFLOW, 0xFFFF, (uint16_t)i);

        }



        // Check context code

        if (sequence_ptr->sequence_header.context_code != expected_field.context_code)

        {

            ext_err_info[0] = sequence_ptr->sequence_header.raw;

            return api_error_with_l2_details(TDX_METADATA_FIELD_ID_INCORRECT, 0xFFFF, (uint16_t)i);

        }



        // When unordered write list is done, we need to set up the iterator for every new sequence

        if (!check_missing)

        {

            if (md_check_field_and_get_entry(ctx_code, sequence_ptr->sequence_header, md_ctx, &lkp_iter) == NULL)

            {

                ext_err_info[0] = sequence_ptr->sequence_header.raw;

                return api_error_with_l2_details(TDX_METADATA_FIELD_ID_INCORRECT, 0xFFFF, (uint16_t)i);

            }

        }



        // Check the sequence header if required

        if (check_missing && !is_equal_field_id(sequence_ptr->sequence_header, expected_field))

        {

            // The sequence header that we are looking at might skip some optional field in the context

            // We need to scroll forward the iterator until we find an entry with a field matching the sequence header

            // or until we hit the first required entry.

            while (!is_null_field_id(lkp_iter.field_id) &&

                   !is_equal_field_id(sequence_ptr->sequence_header, lkp_iter.field_id) &&

                   !is_required_entry(&lkp_iter.lookup_table[lkp_iter.table_idx], access_type))

            {

                md_get_next_item_with_iterator(&lkp_iter, md_ctx, false);

            }

            // If we didn't find any match, then a required field is missing

            if (!is_equal_field_id(sequence_ptr->sequence_header, lkp_iter.field_id))

            {

                ext_err_info[0] = lkp_iter.field_id.raw;

                return TDX_REQUIRED_METADATA_FIELD_MISSING;

            }

        }

        retval = md_write_sequence(sequence_ptr, md_ctx, (uint32_t)remaining_buff_size, access_type, access_qual,

                                   &elements_read, &lkp_iter, skip_non_writable, ext_err_info, is_import);

        if (retval != TDX_SUCCESS)

        {

            return api_error_with_operand_id(retval, i);

        }



        // Decrement the written element size and sequence header size from the buffer

        remaining_buff_size -= (sizeof(md_field_id_t) + (elements_read * sizeof(uint64_t)));

        // Advance the buffer pointer by the size of the sequence header + written elements

        sequence_buffer_ptr += (sizeof(md_field_id_t) + (elements_read * sizeof(uint64_t)));

        // Update the expected field id

        expected_field.raw = lkp_iter.field_id.raw;

    }



    if (check_missing)

    {

        if (is_last)

        {

            while (!is_null_field_id(lkp_iter.field_id))

            {

                if (is_required_entry(&lkp_iter.lookup_table[lkp_iter.table_idx], access_type))

                {

                    break;

                }

                md_get_next_item_with_iterator(&lkp_iter, md_ctx, false);

            }



            // This was the last metadata list, check that there are no required fields after the list

            if (!is_null_field_id(lkp_iter.field_id) &&

                 is_required_entry(&lkp_iter.lookup_table[lkp_iter.table_idx], access_type))

            {

                // There is a required field after this list

                ext_err_info[0] = lkp_iter.field_id.raw;

                ext_err_info[1] = 0;

                return TDX_REQUIRED_METADATA_FIELD_MISSING;

            }

        }

        else

        {

            // This was not the last metadata list page

            if (is_null_field_id(lkp_iter.field_id))

            {

                // We have more metadata lists to process, but there should be no more fields

                ext_err_info[0] = MD_FIELD_ID_NA;

                ext_err_info[1] = 0;

                return TDX_REQUIRED_METADATA_FIELD_MISSING;

            }

        }

    }



    // Return the next expected field id

    next_field_id->raw = lkp_iter.field_id.raw;



    return TDX_SUCCESS;

}

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

 * @file metadata_sys.c

 * @brief Sys-context (Global system fields) metadata handler

 */



#include "metadata_generic.h"

#include "metadata_sys.h"

#include "auto_gen/global_sys_fields_lookup.h"

#include "helpers/error_reporting.h"

#include "accessors/data_accessors.h"

#include "auto_gen/cpuid_configurations.h"

#include "helpers/migration.h"

#include "data_structures/loader_data.h"

#include "x86_defs/msr_defs.h"

#include "helpers/cpuid_fms.h"



static bool_t md_sys_get_elements(md_field_id_t field_id, const md_lookup_t* entry,

                                  uint64_t* element_array, uint64_t* array_size)

{

    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    tdx_module_global_t* global_data = get_global_data();



    handoff_data_header_t* handoff_data_hdr = (handoff_data_header_t*)sysinfo_table->data_rgn_base;



    *element_array = 0;

    *array_size = 0;



    tdx_debug_assert(entry->field_id.inc_size == 0);



    tdx_debug_assert(field_id.field_code >= entry->field_id.field_code);



    uint32_t field_num = (field_id.field_code - entry->field_id.field_code) / entry->num_of_elem;



    switch (entry->field_id.class_code)

    {

        case MD_SYS_PLATFORM_INFO_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_NUM_PKGS_FIELD_CODE)

            {

                *element_array = sysinfo_table->mcheck_fields.tot_num_sockets;

            }

            else if (entry->field_id.field_code == MD_SYS_PKG_FMS_FIELD_CODE)

            {

                *element_array = sysinfo_table->mcheck_fields.socket_cpuid_table[field_num].raw;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_TDX_MODULE_VERSION_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_VENDOR_ID_FIELD_CODE)

            {

                *element_array = 0x8086ULL;

            }

            else if (entry->field_id.field_code == MD_SYS_BUILD_DATE_FIELD_CODE)

            {

                *element_array = TDX_MODULE_BUILD_DATE;

            }

            else if (entry->field_id.field_code == MD_SYS_BUILD_NUM_FIELD_CODE)

            {

                *element_array = TDX_MODULE_BUILD_NUM;

            }

            else if (entry->field_id.field_code == MD_SYS_MINOR_VERSION_FIELD_CODE)

            {

                *element_array = TDX_MODULE_MINOR_VER;

            }

            else if (entry->field_id.field_code == MD_SYS_MAJOR_VERSION_FIELD_CODE)

            {

                *element_array = TDX_MODULE_MAJOR_VER;

            }

            else if (entry->field_id.field_code == MD_SYS_UPDATE_VERSION_FIELD_CODE)

            {

                *element_array = TDX_MODULE_UPDATE_VER;

            }

            else if (entry->field_id.field_code == MD_SYS_INTERNAL_VERSION_FIELD_CODE)

            {

                *element_array = TDX_MODULE_INTERNAL_VER;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_TDX_MODULE_INFO_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_SYS_ATTRIBUTES_FIELD_CODE)

            {

                tdsysinfo_attributes_t attributes = { .raw = 0 };



                *element_array = attributes.raw;

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_TDX_FEATURES_FIELD_CODE)

            {

                *element_array = NUM_TDX_FEATRUES;

            }

            else if (entry->field_id.field_code == MD_SYS_TDX_FEATURES0_FIELD_CODE)

            {

                tdx_features_enum0_t tdx_features_0;



                tdx_features_0.raw = 0;

                tdx_features_0.td_migration = 1;

                tdx_features_0.service_td = 1;

                tdx_features_0.td_preserving = 1;

                tdx_features_0.tdg_vp_rdwr = 1;

                tdx_features_0.relaxed_mem_mng_concurrency = 1;

                tdx_features_0.cpuid_virt_guest_ctrl = 1;

                tdx_features_0.local_attestation = global_data->seamverifyreport_available;

                tdx_features_0.td_partitioning = 1;

                tdx_features_0.td_entry_enhancements = 1;

                tdx_features_0.host_priority_locks = 1;

                tdx_features_0.config_ia32_arch_cap = 1;

                tdx_features_0.no_rbp_mod = 1;

                tdx_features_0.pending_ept_violation_v2 = 1;

                tdx_features_0.l2_tlb_invd_opt = 1;

                tdx_features_0.fms_config = 1;

                tdx_features_0.topology_enum = 1;

                tdx_features_0.reduced_ve = 0;



                *element_array = tdx_features_0.raw;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_CMR_INFO_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_NUM_CMRS_FIELD_CODE)

            {

                *element_array = MAX_CMR;

            }

            else if (entry->field_id.field_code == MD_SYS_CMR_BASE_FIELD_CODE)

            {

                *element_array = sysinfo_table->cmr_data[field_num].cmr_base;

            }

            else if (entry->field_id.field_code == MD_SYS_CMR_SIZE_FIELD_CODE)

            {

                *element_array = sysinfo_table->cmr_data[field_num].cmr_size;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_TDMR_INFO_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_MAX_TDMRS_FIELD_CODE)

            {

                *element_array = MAX_TDMRS;

            }

            else if (entry->field_id.field_code == MD_SYS_MAX_RESERVED_PER_TDMR_FIELD_CODE)

            {

                *element_array = MAX_RESERVED_AREAS;

            }

            else if (entry->field_id.field_code == MD_SYS_PAMT_4K_ENTRY_SIZE_FIELD_CODE ||

                     entry->field_id.field_code == MD_SYS_PAMT_2M_ENTRY_SIZE_FIELD_CODE ||

                     entry->field_id.field_code == MD_SYS_PAMT_1G_ENTRY_SIZE_FIELD_CODE)

            {

                *element_array = sizeof(pamt_entry_t);

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_TD_CONTROL_STRUCTURES_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_TDR_BASE_SIZE_FIELD_CODE)

            {

                *element_array = sizeof(tdr_t);

            }

            else if (entry->field_id.field_code == MD_SYS_TDCS_BASE_SIZE_FIELD_CODE)

            {

                *element_array = MIN_NUM_TDCS_PAGES * TDX_PAGE_SIZE_IN_BYTES;

            }

            else if (entry->field_id.field_code == MD_SYS_TDVPS_BASE_SIZE_FIELD_CODE)

            {

                *element_array = MIN_TDVPS_PAGES * TDX_PAGE_SIZE_IN_BYTES;

            }

            else if (entry->field_id.field_code == MD_SYS_TDCS_SIZE_PER_L2_VM_FIELD_CODE)

            {

                *element_array = TDCS_PAGES_PER_L2_VM * TDX_PAGE_SIZE_IN_BYTES;

            }

            else if (entry->field_id.field_code == MD_SYS_TDVPS_SIZE_PER_L2_VM_FIELD_CODE)

            {

                *element_array = TDVPS_PAGES_PER_L2_VM * TDX_PAGE_SIZE_IN_BYTES;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_TD_CONFIGURABILITY_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_ATTRIBUTES_FIXED0_FIELD_CODE)

            {

                *element_array = global_data->attributes_fixed0;

            }

            else if (entry->field_id.field_code == MD_SYS_ATTRIBUTES_FIXED1_FIELD_CODE)

            {

                *element_array = global_data->attributes_fixed1;

            }

            else if (entry->field_id.field_code == MD_SYS_CONFIG_FLAGS_FIXED0_FIELD_CODE)

            {

                *element_array = global_data->config_flags_fixed0.raw;

            }

            else if (entry->field_id.field_code == MD_SYS_CONFIG_FLAGS_FIXED1_FIELD_CODE)

            {

                *element_array = global_data->config_flags_fixed1.raw;

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_ALLOWED_FMS_FIELD_CODE)

            {

                *element_array = get_num_allowed_fms();

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_DISALLOWED_FMS_FIELD_CODE)

            {

                *element_array = NUM_OF_DISALLOWED_FMS;

            }

            else if (entry->field_id.field_code == MD_SYS_ALLOWED_FMS_FIELD_CODE)

            {

                if (field_num >= (uint32_t)get_num_allowed_fms())

                {

                    *element_array = 0;

                }

                else

                {

                    *element_array = get_allowed_fms((uint16_t)field_num).raw;

                }

            }

            else if (entry->field_id.field_code == MD_SYS_DISALLOWED_FMS_FIELD_CODE)

            {

                if (field_num >= NUM_OF_DISALLOWED_FMS)

                {

                    *element_array = 0;

                }

                else

                {

                    lfence();



                    *element_array = disallowed_fms[field_num].raw;

                }

            }

            else if (entry->field_id.field_code == MD_SYS_XFAM_FIXED0_FIELD_CODE)

            {

                *element_array = TDX_XFAM_FIXED0 &

                          (global_data->xcr0_supported_mask | global_data->ia32_xss_supported_mask);

            }

            else if (entry->field_id.field_code == MD_SYS_XFAM_FIXED1_FIELD_CODE)

            {

                *element_array = TDX_XFAM_FIXED1;

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_CPUID_CONFIG_FIELD_CODE)

            {

                *element_array = MAX_NUM_CPUID_CONFIG;

            }

            else if (entry->field_id.field_code == MD_SYS_CPUID_CONFIG_LEAVES_FIELD_CODE)

            {

                if (field_num >= MAX_NUM_CPUID_CONFIG)

                {

                    *element_array = ~(0ULL);

                }

                else

                {

                    lfence(); // Prevent speculative access to non-existant array field

                    *element_array = cpuid_configurable[field_num].leaf_subleaf.raw;

                }

            }

            else if (entry->field_id.field_code == MD_SYS_CPUID_CONFIG_VALUES_FIELD_CODE)

            {

                if (field_num >= MAX_NUM_CPUID_CONFIG)

                {

                    // No configurable bits

                    element_array[0] = 0;

                    element_array[1] = 0;

                }

                else

                {

                    lfence(); // Prevent speculative access to non-existant array field



                    uint32_t lookup_index = cpuid_configurable[field_num].lookup_index;



                    *array_size = 2 * sizeof(uint64_t);



                    element_array[0] = cpuid_configurable[field_num].config_direct.low |

                            (cpuid_configurable[field_num].allow_direct.low &

                             global_data->cpuid_values[lookup_index].values.low);



                    element_array[1] = cpuid_configurable[field_num].config_direct.high |

                            (cpuid_configurable[field_num].allow_direct.high &

                             global_data->cpuid_values[lookup_index].values.high);

                }

            }

            else if (entry->field_id.field_code == MD_SYS_IA32_ARCH_CAPABILITIES_CONFIG_MASK_FIELD_CODE)

            {

                *element_array = IA32_ARCH_CAPABILITIES_CONFIG_MASK;

            }

            else if (entry->field_id.field_code == MD_SYS_MAX_VCPUS_PER_TD_FIELD_CODE)

            {

                *element_array =  MAX_VCPUS_PER_TD;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_MIGRATION_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_MIG_ATTRIBUTES_FIELD_CODE)

            {

                *element_array = 0;

            }

            else if (entry->field_id.field_code == MD_SYS_MIN_EXPORT_VERSION_FIELD_CODE)

            {

                *element_array = 0;

            }

            else if (entry->field_id.field_code == MD_SYS_MAX_EXPORT_VERSION_FIELD_CODE)

            {

                *element_array = 0;

            }

            else if (entry->field_id.field_code == MD_SYS_MIN_IMPORT_VERSION_FIELD_CODE)

            {

                *element_array = 0;

            }

            else if (entry->field_id.field_code == MD_SYS_MAX_IMPORT_VERSION_FIELD_CODE)

            {

                *element_array = 0;

            }

            else if (entry->field_id.field_code == MD_SYS_MAX_MIGS_FIELD_CODE)

            {

                *element_array = MAX_MIGS;

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_IMMUTABLE_STATE_PAGES_FIELD_CODE)

            {

                *element_array = MIN_TD_IMMUTABLE_STATE_EXPORT_PAGES;

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_TD_STATE_PAGES_FIELD_CODE)

            {

                *element_array = MIN_TD_STATE_EXPORT_PAGES;

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_VP_STATE_PAGES_FIELD_CODE)

            {

                *element_array = MIN_VP_STATE_EXPORT_PAGES;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_SERVICE_TD_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_MAX_SERV_TDS_FIELD_CODE)

            {

                *element_array = MAX_SERVTDS;

            }

            else if (entry->field_id.field_code == MD_SYS_SERVTD_ATTR_FIXED0_FIELD_CODE)

            {

                *element_array = SERVTD_ATTRIBUTES_FIXED_0;

            }

            else if (entry->field_id.field_code == MD_SYS_SERVTD_ATTR_FIXED1_FIELD_CODE)

            {

                *element_array = SERVTD_ATTRIBUTES_FIXED_1;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_TDX_MODULE_HANDOFF_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_MODULE_HV_FIELD_CODE)

            {

                *element_array = TDX_MODULE_HV;

            }

            else if (entry->field_id.field_code == MD_SYS_MIN_UPDATE_HV_FIELD_CODE)

            {

                *element_array = TDX_MIN_UPDATE_HV;

            }

            else if (entry->field_id.field_code == MD_SYS_NO_DOWNGRADE_FIELD_CODE)

            {

                *element_array = TDX_NO_DOWNGRADE;

            }

            else if (entry->field_id.field_code == MD_SYS_NUM_HANDOFF_PAGES_FIELD_CODE)

            {

                *element_array = global_data->num_handoff_pages;

            }

            else if (entry->field_id.field_code == MD_SYS_HANDOFF_DATA_VALID_FIELD_CODE)

            {

                *element_array = handoff_data_hdr->valid;

            }

            else if (entry->field_id.field_code == MD_SYS_HANDOFF_DATA_HV_FIELD_CODE)

            {

                *element_array = handoff_data_hdr->hv;

            }

            else if (entry->field_id.field_code == MD_SYS_HANDOFF_DATA_SIZE_FIELD_CODE)

            {

                *element_array = handoff_data_hdr->size;

            }

            else

            {

                return false;

            }

            break;

        case MD_SYS_TD_PARTITIONING_CLASS_CODE:

            if (entry->field_id.field_code == MD_SYS_GUEST_L2_GPA_ATTR_MASK_FIELD_CODE)

            {

                *element_array = GUEST_L2_GPA_ATTR_MASK;

            }

            else if (entry->field_id.field_code == MD_SYS_VM_CTLS_FIXED0_FIELD_CODE)

            {

                *element_array = ALLOWED_VM_CTLS;

            }

            else if (entry->field_id.field_code == MD_SYS_VM_CTLS_FIXED1_FIELD_CODE)

            {

                *element_array = 0;

            }

            else if (entry->field_id.field_code == MD_SYS_VPCU_L2_CTLS_FIXED0_FIELD_CODE)

            {

                *element_array = ALLOWED_L2_VCPU_CTLS;

            }

            else if (entry->field_id.field_code == MD_SYS_VCPU_L2_CTLS_FIXED1_FIELD_CODE)

            {

                *element_array = 0;

            }

            else if (entry->field_id.field_code == MD_SYS_VPCU_L2_DEBUG_CTLS_FIXED0_FIELD_CODE)

            {

                *element_array = ALLOWED_L2_VM_DEBUG_CTLS;

            }

            else if (entry->field_id.field_code == MD_SYS_VCPU_L2_DEBUG_CTLS_FIXED1_FIELD_CODE)

            {

                *element_array = 0;

            }

            else

            {

                return false;

            }



            break;

        default:

            return false;

    }



    return true;

}





api_error_code_e md_sys_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

                                     md_access_qualifier_t access_qual, uint64_t* out_rd_value)

{

    uint64_t read_mask, write_mask;

    uint64_t read_value;

    uint64_t element_array[64];

    uint64_t array_size = 0;



    md_get_rd_wr_mask(entry, access_type, access_qual, &read_mask, &write_mask);



    if (read_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_READABLE;

    }



    if (!md_sys_get_elements(field_id, entry, element_array, &array_size))

    {

        if ((entry->field_id.raw == MD_SYS_CPUID_CONFIG_LEAVES_FIELD_ID) ||

            (entry->field_id.raw == MD_SYS_CPUID_CONFIG_VALUES_FIELD_ID))

        {

            return TDX_METADATA_FIELD_SKIP;

        }

        else

        {

            return TDX_METADATA_FIELD_ID_INCORRECT;

        }

    }



    if (array_size)

    {

        tdx_debug_assert(field_id.field_code >= entry->field_id.field_code);



        uint64_t elem_size = BIT(entry->field_id.element_size_code);

        uint64_t elem_num_in_field = (field_id.field_code - entry->field_id.field_code) % entry->num_of_elem;

        uint64_t offset = elem_num_in_field * elem_size;



        tdx_sanity_check(offset + elem_size <= array_size, SCEC_METADATA_HANDLER_SOURCE, 20);



        uint64_t* elem_ptr = (uint64_t*)((uint8_t*)element_array + offset);

        read_value = *elem_ptr;

    }

    else

    {

        read_value = element_array[0];

    }



    read_value &= read_mask;

    *out_rd_value = read_value;



    return TDX_SUCCESS;

}



api_error_code_e md_sys_read_field(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

                                   md_access_qualifier_t access_qual, uint64_t value[MAX_ELEMENTS_IN_FIELD])

{

    uint64_t read_mask, write_mask;

    uint64_t read_value;

    uint64_t element_array[64];

    uint64_t array_size = 0;



    md_get_rd_wr_mask(entry, access_type, access_qual, &read_mask, &write_mask);



    if (read_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_READABLE;

    }



    if (!md_sys_get_elements(field_id, entry, element_array, &array_size))

    {

        if ((entry->field_id.raw == MD_SYS_CPUID_CONFIG_LEAVES_FIELD_ID) ||

            (entry->field_id.raw == MD_SYS_CPUID_CONFIG_VALUES_FIELD_ID))

        {

            return TDX_METADATA_FIELD_SKIP;

        }

        else

        {

            return TDX_METADATA_FIELD_ID_INCORRECT;

        }

    }



    if (array_size)

    {

        uint64_t elem_size = BIT(entry->field_id.element_size_code);



        for (uint32_t i = 0; i < entry->num_of_elem; i++)

        {

            uint64_t offset = i * elem_size;

            tdx_sanity_check(offset + elem_size <= array_size, SCEC_METADATA_HANDLER_SOURCE, 21);

            uint64_t* elem_ptr = (uint64_t*)((uint8_t*)element_array + offset);

            read_value = *elem_ptr;

            value[i] = read_value & read_mask;

        }

    }

    else // single-element field

    {

        read_value = element_array[0];

        value[0] = read_value & read_mask;

    }



    return TDX_SUCCESS;

}



api_error_code_e md_sys_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, uint64_t wr_value, uint64_t wr_request_mask, uint64_t* old_value)

{

    UNUSED(field_id);

    UNUSED(entry);

    UNUSED(access_type);

    UNUSED(access_qual);

    UNUSED(wr_value);

    UNUSED(wr_request_mask);

    UNUSED(old_value);



    return TDX_METADATA_FIELD_NOT_WRITABLE;

}



api_error_code_e md_sys_write_field(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, uint64_t value[MAX_ELEMENTS_IN_FIELD], uint64_t wr_mask)

{

    UNUSED(field_id);

    UNUSED(entry);

    UNUSED(access_type);

    UNUSED(access_qual);

    UNUSED(value);

    UNUSED(wr_mask);



    return TDX_METADATA_FIELD_NOT_WRITABLE;

}

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

 * @file metadata_td.c

 * @brief TD-context (TDR and TDCS) metadata handler

 */



#include "metadata_generic.h"

#include "metadata_td.h"

#include "auto_gen/tdvps_fields_lookup.h"

#include "auto_gen/td_vmcs_fields_lookup.h"

#include "auto_gen/cpuid_configurations.h"

#include "helpers/error_reporting.h"

#include "helpers/helpers.h"

#include "helpers/virt_msr_helpers.h"

#include "accessors/ia32_accessors.h"

#include "helpers/cpuid_fms.h"



_STATIC_INLINE_ uint64_t get_element_num(md_field_id_t field_id, const md_lookup_t* entry, uint32_t cpuid_lookup_index)

{

    tdx_debug_assert(entry->field_id.inc_size == 0);



    IF_RARE (field_id.class_code == MD_TDCS_CPUID_CLASS_CODE)

    {

        tdx_sanity_check(cpuid_lookup_index < MAX_NUM_CPUID_LOOKUP, SCEC_METADATA_HANDLER_SOURCE, 10);



        // Check that element size is really 8 byte, so we can use sizeof(uint64_t)

        tdx_debug_assert(entry->field_id.element_size_code == 3);



        return field_id.cpuid_field_code.element +

               (cpuid_lookup_index * (sizeof(cpuid_config_return_values_t) / sizeof(uint64_t)));

    }



    return field_id.field_code - entry->field_id.field_code;

}



static uint64_t translate_hp_lock_timeout_to_usec(uint64_t timeout_in_tsc_ticks)

{

    uint64_t timeout_in_usec;



    // Assert that the casting below is safe

    tdx_sanity_check((get_global_data()->native_tsc_frequency <= BIT_MASK_32BITS), SCEC_METADATA_HANDLER_SOURCE, 25);



    // Avoid overflow in the calculation below (should not happen but better safe than sorry)

    if (timeout_in_tsc_ticks >= (BIT_MASK_64BITS / 1000000ULL))

    {

        timeout_in_tsc_ticks = (BIT_MASK_64BITS / 1000000ULL);

    }



    // The order of calculation is important to avoid underflow.

    timeout_in_usec = ((uint64_t)timeout_in_tsc_ticks * 1000000ULL) / get_global_data()->native_tsc_frequency;



    return timeout_in_usec;

}



static uint64_t check_hp_lock_timeout_and_translate_to_tsc(uint64_t timeout, uint64_t* tsc)

{

    // The timeout value, which is provided in usec units but stored as TSC tick units.

    // The timeout is stored as unsigned 32-bit but calculation is done in 64-bit to avoid overflow.

    // The order of calculation is important to avoid underflow.



    if ((timeout > MAX_HP_LOCK_TIMEOUT_USEC) || (timeout < MIN_HP_LOCK_TIMEOUT_USEC))

    {

        return false;

    }

    uint64_t native_tsc_frequency = get_global_data()->native_tsc_frequency;

    tdx_sanity_check((native_tsc_frequency <= BIT_MASK_32BITS), SCEC_METADATA_HANDLER_SOURCE, 26);



    // safe to cast due to the sanity check above

    uint64_t tsc_tmp = translate_usec_to_tsc((uint32_t)timeout, (uint32_t)native_tsc_frequency);



    *tsc = (uint32_t)tsc_tmp;



    return true;

}



static bool_t check_cpuid_xfam_masks(cpuid_config_return_values_t* cpuid_values, uint64_t xfam,

                                     const cpuid_config_return_values_t* cpuid_masks)

{

    uint64_t xfam_mask;   // 1-bit mask



    xfam_mask = 1ULL;

    for (uint32_t xfam_bit = 0; xfam_bit <= XCR0_MAX_VALID_BIT; xfam_bit++)

    {

        if ((xfam & xfam_mask) == 0)

        {

            // Loop on all 4 CPUID values

            for (uint32_t i = 0; i < 4; i++)

            {

                if (cpuid_values->values[i] & cpuid_masks[xfam_bit].values[i])

                {

                    return false;

                }

            }

        }

        xfam_mask <<= 1;

    }



    return true;

}



static bool_t check_cpuid_compatibility_and_set_flags(tdcs_t* tdcs_ptr, uint32_t leaf, uint32_t subleaf,

                                                      cpuid_config_return_values_t cpuid_values, uint32_t cpuid_index)

{

    td_param_attributes_t attributes;

    ia32_xcr0_t xfam;

    tdx_module_global_t* global_data_ptr = get_global_data();



    attributes.raw = tdcs_ptr->executions_ctl_fields.attributes.raw;

    xfam.raw = tdcs_ptr->executions_ctl_fields.xfam;



    if (cpuid_index == CPUID_LOOKUP_IDX_NA)

    {

        return false;

    }



    // CPUID leaves/sub-leaves that are CONFIG_DIRECT or ALLOW_DIRECT

    // Note: The following code assumes these are the first NUM_CONFIG entries

    // of the whole NUM_LOOKUP entries in the various CPUID tables.



    // Loop on all 4 CPUID values

    for (uint32_t i = 0; i < 4; i++)

    {

        uint32_t cpuid_value = cpuid_values.values[i];



        // Any bit whose value is 1 must not be FIXED_0 or DYNAMIC

        if ((cpuid_value & cpuid_lookup[cpuid_index].fixed0_or_dynamic.values[i]) != 0)

        {

            return false;

        }



        // Any bit whose value is 0 must not be FIXED_1

        if ((~cpuid_value & cpuid_lookup[cpuid_index].fixed1.values[i]) != 0)

        {

            return false;

        }



        uint32_t config_index = cpuid_lookup[cpuid_index].config_index;



        // configurable (CONFIG_DIRECT or ALLOW_DIRECT) CPUID leaf/sub-leaf

        if (config_index != CPUID_CONFIG_NULL_IDX)

        {

            // Any bit whose value is 1 and is ALLOW_DIRECT must be natively 1

            uint32_t masked_cpuid_value = cpuid_value & cpuid_configurable[config_index].allow_direct.values[i];

            if (masked_cpuid_value != (masked_cpuid_value & global_data_ptr->cpuid_values[cpuid_index].values.values[i]))

            {

                return false;

            }

        }

    }



    // Special CPUID Leafs/Sub-Leafs Handling

    // - Check bits that are not allowed by XFAM

    // - Check bits that are not allowed by ATTRIBUTES (KL, PERFMON etc.)

    // - Record CPUID flags that will be used for MSR virtualization and TD entry/exit.



    if (leaf == CPUID_VER_INFO_LEAF)

    {

        //  CPUID(1).EAX is the virtual Family/Model/Stepping configuration

        fms_info_t cpuid_01_eax = { .raw = cpuid_values.eax };



        if (!check_fms_config(cpuid_01_eax))

        {

            // The configured F/M/S value is not valid

            return false;

        }



        // Leaf 0x1 has ECX bits configurable by AVX (XFAM[2]).

        // If XFAM[2] is 0, the applicable bits must be 0.

        if (!xfam.avx && (cpuid_values.ecx & xfam_mask_0x1_0xffffffff[2].ecx))

        {

            return false;

        }



        cpuid_01_ecx_t cpuid_01_ecx;

        cpuid_01_ecx.raw = cpuid_values.ecx;



        tdcs_ptr->executions_ctl_fields.cpuid_flags.monitor_mwait_supported = cpuid_01_ecx.monitor;

        tdcs_ptr->executions_ctl_fields.cpuid_flags.dca_supported = cpuid_01_ecx.dca;

        tdcs_ptr->executions_ctl_fields.cpuid_flags.tsc_deadline_supported = cpuid_01_ecx.tsc_deadline;

    }

    else if (leaf == 0x5)

    {

        // CPUID(5) is virtualized as ALLOW_CPUID, based on CPUID(1).ECX(3) (MONITOR)

        // which was checked above.  On import, if enabled, the following checks are done:

        // - Virtual CPUID(5) bits that are known by the TDX module to be reserved are checked to be 0.

        //   This was done above.

        // - Virtual CPUID(5) bits that are not known by the TDX module to be reserved are checked for exact

        //   match with the native CPUID(5) values.

        if (tdcs_ptr->executions_ctl_fields.cpuid_flags.monitor_mwait_supported)

        {

            // MONITOR/MWAIT is supported, CPUID(5) is expected to be

            for (uint32_t i = 0; i < 4; i++)

            {

                // Compare to the native value and mask out fixed-0 bits

                if (((cpuid_values.values[i] ^ global_data_ptr->cpuid_values[cpuid_index].values.values[i]) &

                     ~cpuid_lookup[cpuid_index].fixed0_or_dynamic.values[i]) != 0)

                {

                    return false;

                }

            }

        }

        else

        {

            // MONITOR/MWAIT is not supported, CPUID(5) is expected to be all-0

            if ((cpuid_values.low != 0) || (cpuid_values.high != 0))

            {

                return false;

            }

        }

    }

    else if (leaf == CPUID_EXT_FEATURES_LEAF)

    {

        // Sub-leaves 0 and 1 have bits configurable by multiple XFAM bits.

        // If an XFAM bit is 0, the applicable CPUID values bits are cleared.

        if (subleaf == CPUID_EXT_FEATURES_SUBLEAF)

        {

            cpuid_07_00_ebx_t cpuid_07_00_ebx;

            cpuid_07_00_ecx_t cpuid_07_00_ecx;

            cpuid_07_00_edx_t cpuid_07_00_edx;



            if (!check_cpuid_xfam_masks(&cpuid_values, xfam.raw, xfam_mask_0x7_0x0))

            {

                return false;

            }



            cpuid_07_00_ebx.raw = cpuid_values.ebx;

            // Both CPUID bits that enumerate TSX must have the same virtual value

            if (cpuid_07_00_ebx.hle != cpuid_07_00_ebx.rtm)

            {

                return false;

            }



            // To support HLE, IA32_TSX_CTRL MSR must exist

            if (cpuid_07_00_ebx.hle && !global_data_ptr->plt_common_config.ia32_arch_capabilities.tsx_ctrl)

            {

                return false;

            }



            tdcs_ptr->executions_ctl_fields.cpuid_flags.tsx_supported = cpuid_07_00_ebx.hle;

            cpuid_07_00_ecx.raw = cpuid_values.ecx;



            if (cpuid_07_00_ecx.pks != attributes.pks || cpuid_07_00_ecx.kl_supported != 0)

            {

                return false;

            }



            tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported = cpuid_07_00_ecx.waitpkg;

            tdcs_ptr->executions_ctl_fields.cpuid_flags.tme_supported = cpuid_07_00_ecx.tme;

            tdcs_ptr->executions_ctl_fields.cpuid_flags.la57_supported = cpuid_07_00_ecx.la57;



            cpuid_07_00_edx.raw = cpuid_values.edx;

            tdcs_ptr->executions_ctl_fields.cpuid_flags.pconfig_supported = cpuid_07_00_edx.pconfig_mktme;

       }

       else if (subleaf == 1)

       {

            if (!check_cpuid_xfam_masks(&cpuid_values, xfam.raw, xfam_mask_0x7_0x1))

            {

                return false;

            }



            cpuid_07_01_eax_t cpuid_07_01_eax;

            cpuid_07_01_eax.raw = cpuid_values.eax;



            if (cpuid_07_01_eax.lass != attributes.lass)

            {

                return false;

            }



            tdcs_ptr->executions_ctl_fields.cpuid_flags.perfmon_ext_leaf_supported = cpuid_07_01_eax.perfmon_ext_leaf;

       }

       else if (subleaf == 2)

       {

            // Check CPU side channel protection support

           cpuid_07_02_edx_t cpuid_07_02_edx;

           cpuid_07_02_edx.raw = cpuid_values.edx;

           tdcs_ptr->executions_ctl_fields.cpuid_flags.ddpd_supported = cpuid_07_02_edx.ddpd;



           // The TD will never be configured with DDPD support if the CPU doesn't support DDPD

           tdx_debug_assert(!tdcs_ptr->executions_ctl_fields.cpuid_flags.ddpd_supported ||

                            global_data_ptr->ddpd_supported);



           // IA32_SPEC_CTRL virtualization is required in the following case:

           //  - The TD is configured without DDPD support, and

           //  - The CPU supports DDPD

           // Because in this case we enable DDPD without the TD knowing about this.

           tdx_debug_assert(tdcs_ptr->executions_ctl_fields.cpuid_flags.ddpd_supported ||

                            !global_data_ptr->ddpd_supported ||

                            global_data_ptr->plt_common_config.ia32_vmx_procbased_ctls3.virt_ia32_spec_ctrl);

       }

       else

       {

           // Should never get here, this sub-leaf is faulting

           return false;

       }

    }

    else if (leaf == CPUID_PERFMON_LEAF)

    {

        if (cpuid_values.low || cpuid_values.high)

        {

            return false;

        }

    }

    else if (leaf == CPUID_EXT_STATE_ENUM_LEAF)

    {

        if (subleaf == 0)

        {

            if (!check_cpuid_xfam_masks(&cpuid_values, xfam.raw, xfam_mask_0xd_0x0) ||

                cpuid_values.ecx != calculate_xsave_area_max_size(xfam))

            {

                return false;

            }

        }

        else if (subleaf == 1)

        {

            cpuid_0d_01_eax_t cpuid_0d_01_eax;

            cpuid_0d_01_eax.raw = cpuid_values.eax;



            if (!check_cpuid_xfam_masks(&cpuid_values, xfam.raw, xfam_mask_0xd_0x1) ||

                (!global_data_ptr->xfd_supported && cpuid_0d_01_eax.xfd_support))

            {

                return false;

            }



            tdcs_ptr->executions_ctl_fields.cpuid_flags.xfd_supported = cpuid_0d_01_eax.xfd_support;

        }

        else if (subleaf <= XCR0_MAX_VALID_BIT)

        {

            // Each sub-leaf n, where 2 <= n <= 18, is configured by XFAM[n]

            if (((xfam.raw & BIT(subleaf)) == 0) && (cpuid_values.low != 0 || cpuid_values.high != 0))

            {

                return false;

            }

        }

    }

    else if (leaf == 0x14)

    {

        if (!xfam.pt && (cpuid_values.low != 0 || cpuid_values.high != 0))

        {

            return false;

        }

    }

    else if (leaf == CPUID_TSC_ATTRIBUTES_LEAF)

    {

        // The following check relies on TSC_FREQUENCY to be imported before CPUID configuration.

        tdx_debug_assert(tdcs_ptr->executions_ctl_fields.tsc_frequency != 0);



        if (cpuid_values.ebx != (uint32_t)tdcs_ptr->executions_ctl_fields.tsc_frequency)

        {

            return false;

        }

    }

    else if (leaf == CPUID_KEYLOCKER_ATTRIBUTES_LEAF)

    {

        if (cpuid_values.low != 0 || cpuid_values.high != 0)

        {

            return false;

        }

    }

    else if (leaf == 0x1A)

    {

        // For migratable TDs, native model information is N/A, and should have been set to 0.

        // This information is used for Perfmon, which is not enabled for migratable TDs.

        if (cpuid_values.low != 0 || cpuid_values.high != 0)

        {

            return false;

        }

    }

    else if (leaf == 0x1C)

    {

        // Leaf 0x1C is wholly configured by LBR (XFAM[15])

        if (xfam.lbr == 0 && (cpuid_values.low != 0 || cpuid_values.high != 0))

        {

            return false;

        }

    }

    else if (leaf == 0x1D)

    {

        // Leaf 0x1D is wholly configured by AMX (XFAM[18:17])

        if ((!xfam.amx_xtilecfg || !xfam.amx_xtiledata) && (cpuid_values.low != 0 || cpuid_values.high != 0))

        {

            return false;

        }

    }

    else if (leaf == 0x23)

    {

        // Leaf 0x23's values are defined as "ALLOW_ATTRIBUTES(PERFMON)", i.e., if ATTRRIBUTES.PERFMON

        // is set they return the native values, else they return 0.

        if (!attributes.perfmon || !tdcs_ptr->executions_ctl_fields.cpuid_flags.perfmon_ext_leaf_supported)

        {

            if (cpuid_values.low != 0 || cpuid_values.high != 0)

            {

                return false;

            }

        }

    }



    tdcs_ptr->executions_ctl_fields.cpuid_valid[cpuid_index] = true;



    return true;

}



_STATIC_INLINE_ bool_t write_element_by_size(void* elem_ptr, uint64_t rd_value, uint64_t wr_value,

                                             uint64_t wr_mask, uint64_t size)

{

    uint64_t new_value = (rd_value & ~wr_mask) | (wr_value & wr_mask);

    bool_t success = false;



    if (size == 1)

    {

        success = (_lock_cmpxchg_8bit((uint8_t)rd_value, (uint8_t)new_value, elem_ptr) == (uint8_t)rd_value);

    }

    else if (size == 2)

    {

        success = (_lock_cmpxchg_16b((uint16_t)rd_value, (uint16_t)new_value, elem_ptr) == (uint16_t)rd_value);

    }

    else if (size == 4)

    {

        success = (_lock_cmpxchg_32b((uint32_t)rd_value, (uint32_t)new_value, elem_ptr) == (uint32_t)rd_value);

    }

    else if (size == 8)

    {

        success = (_lock_cmpxchg_64b((uint64_t)rd_value, (uint64_t)new_value, elem_ptr) == (uint64_t)rd_value);

    }



    return success;

}



static api_error_code_e md_td_get_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,

        uint64_t* out_rd_mask, uint64_t* out_wr_mask, uint64_t* out_rd_value, uint64_t** out_elem_ptr)

{

    uint64_t rd_mask = 0, wr_mask = 0;

    uint64_t read_value;



    uint8_t* page_ptr = NULL;

    uint32_t cpuid_lookup_index = 0;



    md_get_rd_wr_mask(entry, access_type, access_qual, &rd_mask, &wr_mask);



    switch (field_id.class_code)

    {

        case MD_TDR_TD_MANAGEMENT_CLASS_CODE:

        case MD_TDR_KEY_MANAGEMENT_CLASS_CODE:

        case MD_TDR_TD_PRESERVING_CLASS_CODE:

        {

            page_ptr = (uint8_t*)md_ctx.tdr_ptr;

            break;

        }

        case MD_TDCS_CPUID_CLASS_CODE:

        {

            // Check the CPUID field validity

            if (field_id.cpuid_field_code.reserved != 0)

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            // Check if encoded leaf and subleaf exist in the lookup table

            uint32_t leaf, subleaf;

            md_cpuid_field_id_get_leaf_subleaf(field_id, &leaf, &subleaf);

            cpuid_lookup_index = get_cpuid_lookup_entry(leaf, subleaf);



            if (cpuid_lookup_index >= MAX_NUM_CPUID_LOOKUP)

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            // CPUID leaf/subleaf that is faulting or not valid can't be read

            // This check is not done during import

            if ((access_type != MD_IMPORT_IMMUTABLE) &&

                (cpuid_lookup[cpuid_lookup_index].faulting

                 || !md_ctx.tdcs_ptr->executions_ctl_fields.cpuid_valid[cpuid_lookup_index]))

            {

                return TDX_METADATA_FIELD_NOT_READABLE;

            }



        }

        // No break - fallthrough

        case MD_TDCS_TD_MANAGEMENT_CLASS_CODE:

        case MD_TDCS_EXECUTION_CONTROLS_CLASS_CODE:

        case MD_TDCS_TLB_EPOCH_TRACKING_CLASS_CODE:

        case MD_TDCS_MEASUREMENT_CLASS_CODE:

        case MD_TDCS_SECURE_EPT_ROOT_CLASS_CODE:

        case MD_TDCS_MSR_BITMAPS_CLASS_CODE:

        case MD_TDCS_MIGRATION_CLASS_CODE:

        case MD_TDCS_SERVICE_TD_CLASS_CODE:

        case MD_TDCS_MIGSC_LINKS_CLASS_CODE:

        case MD_TDCS_VIRT_MSR_VALUES_CLASS_CODE:

        case MD_TDCS_X2APIC_IDS_CLASS_CODE:

        {

            page_ptr = (uint8_t*)md_ctx.tdcs_ptr;

            break;

        }

        case MD_TDCS_L2_SECURE_EPT_ROOT__1_CLASS_CODE:

        case MD_TDCS_L2_SECURE_EPT_ROOT__2_CLASS_CODE:

        case MD_TDCS_L2_SECURE_EPT_ROOT__3_CLASS_CODE:

        {

            if (md_ctx.tdcs_ptr->management_fields.num_l2_vms < md_td_get_l2_vm_index(field_id.class_code))

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            page_ptr = (uint8_t*)md_ctx.tdcs_ptr;

            break;

        }

        default:

            return TDX_METADATA_FIELD_ID_INCORRECT;

            break;

    }



    tdx_debug_assert(page_ptr != NULL);



    tdx_debug_assert(entry->field_id.inc_size == 0);



    uint64_t elem_size = BIT(entry->field_id.element_size_code);

    uint64_t elem_num = get_element_num(field_id, entry, cpuid_lookup_index);

    uint64_t offset = entry->offset + (elem_num * elem_size);

    uint64_t* elem_ptr = (uint64_t*)((uint8_t*)page_ptr + offset);



    *out_elem_ptr = elem_ptr;

    read_value = *elem_ptr;



    if (entry->special_rd_handling)

    {

        //----------------------------------

        //     Handle Special Read Cases

        //----------------------------------

        switch (entry->field_id.raw)

        {

            case MD_TDCS_HP_LOCK_TIMEOUT_FIELD_ID:

            {

                read_value = translate_hp_lock_timeout_to_usec(read_value);

                break;

            }

            case MD_TDCS_NUM_CPUID_VALUES_FIELD_ID:

            {

                read_value = MAX_NUM_CPUID_LOOKUP;

                break;

            }

            case MD_TDCS_MIG_ENC_KEY_FIELD_ID:

            {

                // MIG_ENC_KEY is composed of 4 elements. Only the first one above has a special read operation.

                if ((elem_num == 0) &&

                    (access_type == MD_SERV_TD_RD) &&

                    (access_qual.serv_td_qualifier.service_td_type == SERVTD_TYPE_MIGTD))

                {

                    // On every read of MIG_ENC_KEY by a Migration TD, we generate a new random key

                    if (!generate_256bit_random((uint256_t*)&md_ctx.tdcs_ptr->migration_fields.mig_enc_key))

                    {

                        return TDX_RND_NO_ENTROPY;

                    }



                    // Reassign 1st element read value after generation

                    read_value = md_ctx.tdcs_ptr->migration_fields.mig_enc_key.qwords[0];

                }



                break;

            }

            default:

                break;

        }

    }



    *out_rd_mask = rd_mask;

    *out_wr_mask = wr_mask;

    *out_rd_value = read_value & md_get_element_size_mask(entry->field_id.element_size_code);;



    return TDX_SUCCESS;

}



api_error_code_e md_td_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* out_rd_value)

{

    uint64_t rd_mask = 0, wr_mask = 0;

    uint64_t read_value;

    uint64_t* elem_ptr;

    api_error_code_e status;



    status = md_td_get_element(field_id, entry, access_type, access_qual, md_ctx,

                               &rd_mask, &wr_mask, &read_value, &elem_ptr);



    if (status != TDX_SUCCESS)

    {

        return status;

    }



    if (rd_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_READABLE;

    }



    *out_rd_value = read_value & rd_mask;



    return TDX_SUCCESS;

}



api_error_code_e md_td_read_field(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t value[MAX_ELEMENTS_IN_FIELD])

{

    // Since we read a multiple elements of the same field, we would like to directly access the ptr of

    // the first element of the field, which will save us the time of searching the offset and size

    // of every element in the above if-else blocks.



    uint64_t rd_mask = 0, wr_mask = 0;

    uint64_t read_value;

    uint64_t* elem_ptr;

    api_error_code_e status;



    status = md_td_get_element(field_id, entry, access_type, access_qual, md_ctx,

                               &rd_mask, &wr_mask, &read_value, &elem_ptr);



    if (status != TDX_SUCCESS)

    {

        if ((field_id.class_code == MD_TDCS_CPUID_CLASS_CODE) &&

            (status == TDX_METADATA_FIELD_NOT_READABLE))

        {

            status = TDX_METADATA_FIELD_SKIP;

        }



        return status;

    }



    if (rd_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_READABLE;

    }



    if (entry->special_rd_handling)

    {

        //----------------------------------

        //     Handle Special Read Cases

        //----------------------------------

        switch (entry->field_id.raw)

        {

            case MD_TDCS_VIRTUAL_TSC_FIELD_ID:

                tdx_debug_assert(entry->num_of_elem == 1);

                // Calculate the current virtual TSC, as the guest TD sees it

                value[0] = calculate_virt_tsc(ia32_rdtsc(), md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,

                                                            md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset);

                break;

            case MD_TDCS_CPUID_VALUES_FIELD_ID:

                tdx_debug_assert(entry->num_of_elem == 2);

                value[0] = elem_ptr[0];

                value[1] = elem_ptr[1];

                break;

            default:

                // Already handled by md_td_get_element!!!

                tdx_debug_assert(entry->num_of_elem == 1);

                value[0] = read_value;

                break;

        }

    }

    else

    {

        uint64_t first_elem_addr = (uint64_t)elem_ptr;

        uint64_t elem_size = BIT(entry->field_id.element_size_code);



        for (uint16_t i = 0; i < entry->num_of_elem; i++)

        {

            elem_ptr = (uint64_t*)(first_elem_addr + ((uint64_t)i * elem_size));



            value[i] = (*elem_ptr & rd_mask);

        }

    }



    return TDX_SUCCESS;

}



api_error_code_e md_td_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t wr_value, uint64_t wr_request_mask,

        uint64_t* old_value)

{

    uint64_t rd_mask = 0, wr_mask = 0, combined_wr_mask = 0;

    uint64_t read_value;

    uint64_t* elem_ptr;

    api_error_code_e status;



    status = md_td_get_element(field_id, entry, access_type, access_qual, md_ctx,

                               &rd_mask, &wr_mask, &read_value, &elem_ptr);



    if (status != TDX_SUCCESS)

    {

        return status;

    }



    // Narrow down the bits to be written with the input mask

    combined_wr_mask = wr_mask & wr_request_mask;



    // Check if the requested field is writable.

    // Note that there is no check for readable; we don't have write-only fields.

    if (combined_wr_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_WRITABLE;

    }



    if (!md_check_forbidden_bits_unchanged(read_value, wr_value, wr_request_mask, wr_mask))

    {

        return TDX_METADATA_FIELD_VALUE_NOT_VALID;

    }



    uint64_t elem_size = BIT(entry->field_id.element_size_code);



    bool_t write_done = false;



    // Insert the bits to be written

    wr_value = (read_value & ~combined_wr_mask) | (wr_value & combined_wr_mask);



    if (entry->special_wr_handling)

    {

        // Handle Special Write Cases

        // There are other special write cases that are only handled as a full field write



        switch (entry->field_id.raw)

        {

            case MD_TDCS_MIG_DEC_KEY_FIELD_ID:

                // Note that we actually set this flag before MIG_KEY is written below.

                // This is OK because the relevant case (writing by MigTD)

                // runs with a shared lock on OP_STATE, which MIG_KEY_SET

                // is read by TDH.EXPORT.STATE.IMMUTABLE, which runs with an exclusive lock on OP_STATE.

                md_ctx.tdcs_ptr->migration_fields.mig_dec_key_set = true;

                break;



            case MD_TDCS_MIG_VERSION_FIELD_ID:

                if ((wr_value < MIN_MIGRATION_EXPORT_VERSION) || (wr_value > MAX_MIGRATION_EXPORT_VERSION) ||

                    (wr_value < MIN_MIGRATION_IMPORT_VERSION) || (wr_value > MAX_MIGRATION_IMPORT_VERSION))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }

                break;

            case MD_TDCS_HP_LOCK_TIMEOUT_FIELD_ID:

            {

                // We only allow full field update

                tdx_debug_assert(elem_size == 8);

                if (combined_wr_mask != BIT_MASK_64BITS)

                {

                    return TDX_METADATA_WR_MASK_NOT_VALID;

                }



                uint64_t tsc;

                if (!check_hp_lock_timeout_and_translate_to_tsc(wr_value, &tsc))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                wr_value = tsc;

                *elem_ptr = wr_value;

                write_done = true;



                break;

            }

            case MD_TDCS_TD_CTLS_FIELD_ID:

            {

                if (!md_ctx.tdcs_ptr->executions_ctl_fields.config_flags.flexible_pending_ve)

                {

                    // The guest TD is not allowed to change TD_CTLS.PENDING_VE_DISABLE

                    td_ctls_t td_ctls_modified_bits = { .raw = wr_value ^ read_value };

                    if (td_ctls_modified_bits.pending_ve_disable)

                    {

                        return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                    }

                }



                // To enable virtual topology enumeration, all VCPU must have been properly configured

                td_ctls_t td_ctls = { .raw = wr_value };

                if (td_ctls.enum_topology && !md_ctx.tdcs_ptr->executions_ctl_fields.topology_enum_configured)

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                break;

            }

            default:

                tdx_debug_assert(0);   // Missing special handling

                break;

        }

    }



    // Update only the relevant bits per the write mask

    if (!write_done)

    {

        if (!write_element_by_size(elem_ptr, read_value, wr_value, combined_wr_mask, elem_size))

        {

            return api_error_with_operand_id(TDX_OPERAND_BUSY, OPERAND_ID_METADATA_FIELD);

        }

    }



    *old_value = read_value & rd_mask;



    return TDX_SUCCESS;

}



// Static asserts for some special fields handled in md_td_write_field:

tdx_static_assert(MD_TDCS_TSC_FREQUENCY_FIELD_CODE < MD_TDCS_VIRTUAL_TSC_FIELD_CODE,

                  wrong_field_code_order);

tdx_static_assert(MD_TDCS_EXECUTION_CONTROLS_CLASS_CODE < MD_TDCS_CPUID_CLASS_CODE,

                  wrong_field_class_order);



api_error_code_e md_td_write_field(md_field_id_t field_id, const md_lookup_t* entry,md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t value[MAX_ELEMENTS_IN_FIELD],

        uint64_t wr_request_mask, bool_t is_import)

{

    // Since we read a multiple elements of the same field, we would like to directly access the ptr of

    // the first element of the field, which will save us the time of searching the offset and size

    // of every element in the above if-else blocks.



    uint64_t rd_mask = 0, wr_mask = 0, combined_wr_mask = 0;

    uint64_t read_value;

    uint64_t* elem_ptr;

    api_error_code_e status;



    // Check that field writes are done only from import flows, so we won't need

    //  to worry about concurrency and atomic writes

    tdx_debug_assert((access_type == MD_IMPORT_IMMUTABLE) || (access_type == MD_IMPORT_MUTABLE));



    status = md_td_get_element(field_id, entry, access_type, access_qual, md_ctx,

                               &rd_mask, &wr_mask, &read_value, &elem_ptr);



    if (status != TDX_SUCCESS)

    {

        if ((field_id.class_code == MD_TDCS_CPUID_CLASS_CODE) &&

            (status == TDX_METADATA_FIELD_NOT_READABLE))

        {

            status = TDX_METADATA_FIELD_NOT_WRITABLE;

        }



        return status;

    }



    // Narrow down the bits to be written with the input mask

    combined_wr_mask = wr_mask & wr_request_mask;



    // Check if the requested field is writable.

    // Note that there is no check for readable; we don't have write-only

    // fields.

    if (combined_wr_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_WRITABLE;

    }



    bool_t write_done = false;



    if (entry->special_wr_handling)

    {

        //----------------------------------

        //     Handle Special Write Cases

        //----------------------------------

        switch (entry->field_id.raw)

        {

            case MD_TDCS_NUM_VCPUS_FIELD_ID:

            {

                break;

            }

            case MD_TDR_TD_UUID_FIELD_ID:

            {

                // TD_UUID is only written on import.

                // Save the existing value, it is checked on metadata access by service TDs

                md_ctx.tdcs_ptr->migration_fields.preimport_uuid.qwords[0] =

                        md_ctx.tdr_ptr->management_fields.td_uuid.qwords[0];

                md_ctx.tdcs_ptr->migration_fields.preimport_uuid.qwords[1] =

                        md_ctx.tdr_ptr->management_fields.td_uuid.qwords[1];

                md_ctx.tdcs_ptr->migration_fields.preimport_uuid.qwords[2] =

                        md_ctx.tdr_ptr->management_fields.td_uuid.qwords[2];

                md_ctx.tdcs_ptr->migration_fields.preimport_uuid.qwords[3] =

                        md_ctx.tdr_ptr->management_fields.td_uuid.qwords[3];

                break;

            }

            case MD_TDCS_ATTRIBUTES_FIELD_ID:

            {

                tdx_debug_assert(entry->num_of_elem == 1);

                td_param_attributes_t attributes;

                attributes.raw = value[0] & combined_wr_mask;

                if (!verify_td_attributes(attributes, is_import))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }

                break;

            }

            case MD_TDCS_CONFIG_FLAGS_FIELD_ID:

            {

                config_flags_t config_flags;

                config_flags.raw = value[0] & combined_wr_mask;

                if (!verify_td_config_flags(config_flags))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }

                break;

            }

            case MD_TDCS_EPTP_FIELD_ID:

            {

                tdx_debug_assert(entry->num_of_elem == 1);

                ia32e_eptp_t eptp;

                eptp.raw = value[0] & combined_wr_mask;

                if (!verify_and_set_td_eptp_controls(md_ctx.tdr_ptr, md_ctx.tdcs_ptr,

                                                     md_ctx.tdcs_ptr->executions_ctl_fields.gpaw, eptp))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }

                write_done = true;

                break;

            }

            case MD_TDCS_HP_LOCK_TIMEOUT_FIELD_ID:

            {

                if (!check_hp_lock_timeout_and_translate_to_tsc(value[0] & combined_wr_mask,

                        &md_ctx.tdcs_ptr->executions_ctl_fields.hp_lock_timeout))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                write_done = true;



                break;

            }

            case MD_TDCS_NUM_CPUID_VALUES_FIELD_ID:

            {

                if (value[0] != MAX_NUM_CPUID_LOOKUP)

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                write_done = true;   // Value is only checked



                break;

            }

            case MD_TDCS_NUM_L2_VMS_FIELD_ID:

            {

                if (value[0] > MAX_L2_VMS)

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                md_ctx.tdcs_ptr->management_fields.num_l2_vms = (uint16_t)value[0];



                // Now that we know the number of L2 VMs, check that enough pages have been allocated for TDCS

                if (!is_required_tdcs_allocated(md_ctx.tdr_ptr, (uint16_t)value[0]))

                {

                    return TDX_TDCS_NOT_ALLOCATED;

                }



                write_done = true;   // Value is only checked



                break;

            }

            case MD_TDCS_TD_CTLS_FIELD_ID:

            {

                // No special handling on import

                break;

            }

            case MD_TDCS_TSC_FREQUENCY_FIELD_ID:

            {

                // Sanity checks: see the TDR/TDCS spreadsheet

                tdx_debug_assert(entry->num_of_elem == 1);



                if ((value[0] < VIRT_TSC_FREQUENCY_MIN) || (value[0] > VIRT_TSC_FREQUENCY_MAX))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                break;

            }

            case MD_TDCS_VIRTUAL_TSC_FIELD_ID:

            {

                tdx_debug_assert(entry->num_of_elem == 1);



                // The calculation below relies on TSC_FREQUENCY being imported before VIRTUAL_TSC.

                // This is always true because of the order of field codes.

                // Checked by static assert above



                tdx_debug_assert(md_ctx.tdcs_ptr->executions_ctl_fields.tsc_frequency != 0);



                calculate_tsc_virt_params(ia32_rdtsc(),get_global_data()->native_tsc_frequency,

                                          md_ctx.tdcs_ptr->executions_ctl_fields.tsc_frequency, value[0],

                                          &md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,

                                          &md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset);

                write_done = true;

                break;

            }

            case MD_TDCS_XFAM_FIELD_ID:

            {

                tdx_debug_assert(entry->num_of_elem == 1);

                ia32_xcr0_t xfam;

                xfam.raw = value[0] & combined_wr_mask;

                if (!check_xfam(xfam))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }

                break;

            }

            case MD_TDCS_CPUID_VALUES_FIELD_ID:

            {

                uint32_t leaf, subleaf, index;



                // The checks below rely on TD execution controls being imported before CPUID.

                // This is always true because of the order of class codes.

                // Checked by static assert above



                md_cpuid_field_id_get_leaf_subleaf(field_id, &leaf, &subleaf);

                index = get_cpuid_lookup_entry(leaf, subleaf);



                cpuid_config_return_values_t cpuid_values;

                cpuid_values.low = value[0];

                cpuid_values.high = value[1];



                if (!check_cpuid_compatibility_and_set_flags(md_ctx.tdcs_ptr, leaf, subleaf, cpuid_values, index))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                break;

            }

            

            case MD_TDCS_SERVTD_NUM_FIELD_ID:

            {

                // Sanity checks: see the TDR/TDCS spreadsheet

                // SERVTD_NUM is checked to be exactly 1 (the Migration TD)

                if (1 != value[0])

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                // The value is only checked (marked in the spreadsheet as CB), but not imported

                write_done = true;

                break;

            }

            case MD_TDCS_VIRTUAL_IA32_ARCH_CAPABILITIES_FIELD_ID:

            {

                ia32_arch_capabilities_t ia32_arch_cap = { .raw = value[0] };

                if (!check_virt_ia32_arch_capabilities(md_ctx.tdcs_ptr, ia32_arch_cap))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }



                break;

            }

            default:

                tdx_debug_assert(0);   // Missing special handling

                break;

        }

    }



    if (!write_done)

    {

        uint64_t first_elem_addr = (uint64_t)elem_ptr;

        uint64_t elem_size = BIT(entry->field_id.element_size_code);



        for (uint16_t i = 0; i < entry->num_of_elem; i++)

        {

            elem_ptr = (uint64_t*)(first_elem_addr + ((uint64_t)i * elem_size));

            read_value = *elem_ptr & md_get_element_size_mask(entry->field_id.element_size_code);



            if (!md_check_forbidden_bits_unchanged(read_value, value[i], wr_request_mask, wr_mask))

            {

                return TDX_METADATA_FIELD_VALUE_NOT_VALID;

            }



            // Update only the relevant bits per the write mask

            if (!write_element_by_size(elem_ptr, read_value, value[i], combined_wr_mask, elem_size))

            {

                return api_error_with_operand_id(TDX_OPERAND_BUSY, OPERAND_ID_METADATA_FIELD);

            }

        }

    }



    return TDX_SUCCESS;

}

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

 * @file metadata_vp.c

 * @brief VP-context (TDVPS and TD-VMCS) metadata handler

 */



#include "metadata_generic.h"

#include "metadata_vp.h"

#include "auto_gen/tdvps_fields_lookup.h"

#include "auto_gen/td_vmcs_fields_lookup.h"

#include "helpers/error_reporting.h"

#include "accessors/vt_accessors.h"

#include "accessors/data_accessors.h"

#include "data_structures/tdx_tdvps.h"

#include "helpers/helpers.h"

#include "helpers/virt_msr_helpers.h"



#include "fv_utils.h"



#define POSTED_INTER_DESCRIPTOR_SIZE  64



_STATIC_INLINE_ bool_t is_initial_invalid_pa(uint64_t pa)

{

    return ((pa & BIT(63)) != 0);

}



static bool_t calculate_native_tsc(uint64_t virtual_tsc, uint64_t tsc_multiplier, uint64_t tsc_offset, uint64_t* native_tsc)

{

    // Virtual TSC to Native TSC Conversion



    // virtual_tsc = ((native_tsc * tsc_multiplier) >> 48) + tsc_offset



    // 1. tmp64b = virtual_tsc - tsc_offset

    // 2. tmp128b.low_64b = tmp64b << 48

    // 3. tmp128b.high_64b = tmp64b >> 16



    uint128_t tmp_128b;



    tmp_128b.qwords[0] = (virtual_tsc - tsc_offset) << 48;

    tmp_128b.qwords[1] = (virtual_tsc - tsc_offset) >> 16;



    // 4. if (tmp128b.high_64b >= tsc_multiplier) error  // Division would result in an overflow

    if (tmp_128b.qwords[1] >= tsc_multiplier)    // Division would result in an overflow

    {

        return false;

    }



    // 5. native_tsc = tmp_128b / tsc_multiplier;

#ifdef TDXFV_NO_ASM

    // TDXFV_ABST_LBL: x86 / nondet

    TDXFV_ABST_incomplete(); // potential exception

    *native_tsc = TDXFV_NONDET_uint64t();

#else

    _ASM_VOLATILE_ (

        "divq %3\n"

        : "=a"(*native_tsc)

        : "a"(tmp_128b.qwords[0]), "d"(tmp_128b.qwords[1]), "r"(tsc_multiplier)

        : );

#endif



    return true;

}



static bool_t check_and_update_ia32_dbgctrl(uint64_t* wr_value, tdcs_t* tdcs_ptr)

{

    ia32_debugctl_t ia32_debugctl;

    ia32_debugctl.raw = *wr_value;



    // For simplicity, we check  on TDHSYSINIT/TDHSYSINITLP that all non-reserved

    // bits are supported.  Thus, checking of unsupported bits is done by the

    // write mask and there's no need for an explicit check here.*/



    // Bits 7:6 must not be set to 01 unless the TD is in debug mode

    if ((ia32_debugctl.bts == 0) &&

        (ia32_debugctl.tr == 1) &&

        (tdcs_ptr->executions_ctl_fields.attributes.debug == 0))

    {

        return false;

    }



    // Update TD VMCS with the input value, except bit 13

    ia32_debugctl.en_uncore_pmi = get_local_data()->ia32_debugctl_value.en_uncore_pmi;

    *wr_value = ia32_debugctl.raw;



    return true;

}



static void combine_l2_cr0_cr4_controls(uint64_t base_l2_guest_host_mask, uint64_t base_l2_read_shadow,

                                        uint64_t l2_guest_host_mask_by_l1, uint64_t l2_read_shadow_by_l1,

                                        uint64_t* combined_l2_guest_host_mask, uint64_t* combined_l2_read_shadow)

{

    // If bit X value in either l2_guest_host_mask_by_l1 or td_guest_host_mask is 1, bit X is host-owned (1)

    *combined_l2_guest_host_mask = base_l2_guest_host_mask | l2_guest_host_mask_by_l1;



    // If bit X value in l2_guest_host_mask_by_l1 is 1, bit X is owned by the L1 VMM.

    // In this case, return bit X of l2_read_shadow_by_l1.

    // Else, If bit X value in base_l2_guest_host_mask is 1, bit X is owned by the TDX module.

    // In this case, return bit X of base_l2_read_shadow.

    // Else, return 0.



    // Bits owned by the L1 VMM are not owned by the TDX module

    base_l2_guest_host_mask &= ~l2_guest_host_mask_by_l1;



    *combined_l2_read_shadow = (base_l2_guest_host_mask & base_l2_read_shadow) |

                               (l2_guest_host_mask_by_l1 & l2_read_shadow_by_l1);

}



static void combine_and_write_l2_cr0_controls(tdvps_t* tdvps_ptr, uint16_t vm_id)

{

    uint64_t combined_l2_guest_host_mask, combined_l2_read_shadow;



    combine_l2_cr0_cr4_controls(tdvps_ptr->management.base_l2_cr0_guest_host_mask,

                                tdvps_ptr->management.base_l2_cr0_read_shadow,

                                tdvps_ptr->management.shadow_cr0_guest_host_mask[vm_id],

                                tdvps_ptr->management.shadow_cr0_read_shadow[vm_id],

                                &combined_l2_guest_host_mask, &combined_l2_read_shadow);



    ia32_vmwrite(VMX_CR0_GUEST_HOST_MASK_ENCODE, combined_l2_guest_host_mask);

    ia32_vmwrite(VMX_CR0_READ_SHADOW_ENCODE, combined_l2_read_shadow);

}



static void combine_and_write_l2_cr4_controls(tdvps_t* tdvps_ptr, uint16_t vm_id)

{

    uint64_t combined_l2_guest_host_mask, combined_l2_read_shadow;



    combine_l2_cr0_cr4_controls(tdvps_ptr->management.base_l2_cr4_guest_host_mask,

                                tdvps_ptr->management.base_l2_cr4_read_shadow,

                                tdvps_ptr->management.shadow_cr4_guest_host_mask[vm_id],

                                tdvps_ptr->management.shadow_cr4_read_shadow[vm_id],

                                &combined_l2_guest_host_mask, &combined_l2_read_shadow);



    ia32_vmwrite(VMX_CR4_GUEST_HOST_MASK_ENCODE, combined_l2_guest_host_mask);

    ia32_vmwrite(VMX_CR4_READ_SHADOW_ENCODE, combined_l2_read_shadow);

}



// Apply the CR controls to get the CR virtual value

_STATIC_INLINE_ uint64_t apply_cr0_cr4_controls_for_read(uint64_t cr, uint64_t guest_host_mask, uint64_t read_shadow)

{

    return (cr & ~guest_host_mask) | (read_shadow & guest_host_mask);

}



// Apply the CR controls to write the CR virtual value

_STATIC_INLINE_ bool_t apply_cr0_cr4_controls_for_write(uint64_t old_cr, uint64_t* new_cr,

                                                        uint64_t guest_host_mask, uint64_t read_shadow)

{

    // Check that no host-owned (visible by the guest as the shadow) bits are modified

    if ((*new_cr & guest_host_mask) != (read_shadow & guest_host_mask))

    {

        return false;

    }



    // Modify only guest-owned bits; keep host-owned bits

    *new_cr = (old_cr & guest_host_mask) | (*new_cr & ~guest_host_mask);



    return true;

}





static bool_t check_l2_procbased_exec_ctls(const tdcs_t* tdcs_p, uint32_t wr_mask,

                                           vmx_procbased_ctls_t ctls, md_access_t access)

{

    tdx_module_global_t* global_data = get_global_data();



    if ((access == MD_HOST_WR) && tdcs_p->executions_ctl_fields.attributes.debug)

    {

        // For debugger writes, this field's writable bits properties have been checked by TDH_SYS_INIT to be compatible

        // with the allowed values enumerated by the CPU using IA32_VMX_PROCBASED_CTLS MSR.

        // However, for debug TDs the write mask may be more permissive.  Thus, we check the actual value here.

        // Bits that are not 1 in the write mask are not modified from the current value and therefore are not checked.

        if (wr_mask & ((~ctls.raw & global_data->plt_common_config.ia32_vmx_true_procbased_ctls.not_allowed0) |

                       (ctls.raw & ~global_data->plt_common_config.ia32_vmx_true_procbased_ctls.allowed1)))

        {

            TDX_ERROR("check_l2_procbased_exec_ctls error - debugger write\n");

            TDX_ERROR("wr_mask = 0x%llx , ctls = 0x%llx\n", wr_mask, ctls.raw);

            TDX_ERROR("not_allowed0 = 0x%llx , allowed1 = 0x%llx\n",

                    global_data->plt_common_config.ia32_vmx_true_procbased_ctls.not_allowed0,

                    global_data->plt_common_config.ia32_vmx_true_procbased_ctls.allowed1);

            return false;

        }

    }

    else

    {

        // For production TDs, this field's writable bits properties must comply with the virtual value of

        // IA32_VMX_TRUE_PROCBASED_CTLS, as known to L1.  This takes into account the TD configuration.

        // Bits that are not 1 in the write mask are not modified from the current value and therefore are not checked.

        if (wr_mask & ((~ctls.raw & tdcs_p->virt_msrs.virt_ia32_vmx_true_procbased_ctls.not_allowed0) |

                       (ctls.raw & ~tdcs_p->virt_msrs.virt_ia32_vmx_true_procbased_ctls.allowed1)))

        {

            TDX_ERROR("check_l2_procbased_exec_ctls error - production write\n");

            TDX_ERROR("wr_mask = 0x%llx , ctls = 0x%llx\n", wr_mask, ctls.raw);

            TDX_ERROR("not_allowed0 = 0x%llx , allowed1 = 0x%llx\n",

                    tdcs_p->virt_msrs.virt_ia32_vmx_true_procbased_ctls.not_allowed0,

                    tdcs_p->virt_msrs.virt_ia32_vmx_true_procbased_ctls.allowed1);

            return false;

        }

    }



    return true;

}



static bool_t check_l2_procbased_exec_ctls2(const tdcs_t* tdcs_p, uint32_t wr_mask,

                                            vmx_procbased_ctls2_t ctls2, md_access_t access)

{

    tdx_module_global_t* global_data = get_global_data();



    if ((access == MD_HOST_WR) && tdcs_p->executions_ctl_fields.attributes.debug)

    {

        // For debugger writes, this field's writable bits properties have been checked by TDH_SYS_INIT to be compatible

        // with the allowed values enumerated by the CPU using IA32_VMX_PROCBASED_CTLS2 MSR.

        // However, for debug TDs the write mask may be more permissive.  Thus, we check the actual value here.

        // Bits that are not 1 in the write mask are not modified from the current value and therefore are not checked. */

        if (wr_mask & ((~ctls2.raw & global_data->plt_common_config.ia32_vmx_procbased_ctls2.not_allowed0) |

                       (ctls2.raw & ~global_data->plt_common_config.ia32_vmx_procbased_ctls2.allowed1)))

        {

            TDX_ERROR("check_l2_procbased_exec_ctls2 error - debugger write\n");

            TDX_ERROR("wr_mask = 0x%llx , ctls = 0x%llx\n", wr_mask, ctls2.raw);

            TDX_ERROR("not_allowed0 = 0x%llx , allowed1 = 0x%llx\n",

                    global_data->plt_common_config.ia32_vmx_procbased_ctls2.not_allowed0,

                    global_data->plt_common_config.ia32_vmx_procbased_ctls2.allowed1);

            return false;

        }

    }



    else

    {

        // For production TDs, this field's writable bits properties must comply with the virtual value of

        // IA32_VMX_PROCBASED_CTLS2, as known to L1.  This takes into account the TD configuration.

        // Bits that are not 1 in the write mask are not modified from the current value and therefore are not checked. */

        if (wr_mask & ((~ctls2.raw & tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls2.not_allowed0) |

                       (ctls2.raw & ~tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls2.allowed1)))

        {

            TDX_ERROR("check_l2_procbased_exec_ctls error - production write\n");

            TDX_ERROR("wr_mask = 0x%llx , ctls = 0x%llx\n", wr_mask, ctls2.raw);

            TDX_ERROR("not_allowed0 = 0x%llx , allowed1 = 0x%llx\n",

                    tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls2.not_allowed0,

                    tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls2.allowed1);

            return false;

        }

    }



    return true;

}



static bool_t check_l2_procbased_exec_ctls3(const tdcs_t* tdcs_p, uint64_t wr_mask,

                                            vmx_procbased_ctls3_t ctls3, md_access_t access)

{

    tdx_module_global_t* global_data = get_global_data();



    if ((access == MD_HOST_WR) && tdcs_p->executions_ctl_fields.attributes.debug)

    {

        // For debugger writes, this field's writable bits properties have been checked by TDH_SYS_INIT to be compatible

        // with the allowed values enumerated by the CPU using IA32_VMX_PROCBASED_CTLS3 MSR.

        // However, for debug TDs the write mask may be more permissive.  Thus, we check the actual value here.

        // Bits that are not 1 in the write mask are not modified from the current value and therefore are not checked. */

        if (ctls3.raw & wr_mask & ~global_data->plt_common_config.ia32_vmx_procbased_ctls3.raw)

        {

            return false;

        }

    }

    else

    {

        // For production TDs, this field's writable bits properties must comply with the virtual value of

        // IA32_VMX_PROCBASED_CTLS3, as known to L1.  This takes into account the TD configuration.

        // Bits that are not 1 in the write mask are not modified from the current value and therefore are not checked. */

        if (ctls3.raw & wr_mask & ~tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls3)

        {

            return false;

        }

    }



    return true;

}



static bool_t check_l1_procbased_exec_ctls2(const tdcs_t* tdcs_p, uint32_t wr_mask, vmx_procbased_ctls2_t new_ctls2)

{

    tdx_module_global_t* global_data = get_global_data();



    // For production TDs, this field's writable bits properties have been checked by TDH_SYS_INIT to be compatible

    // with the allowed values enumerated by the CPU using IA32_VMX_PROCBASED_CTLS2 MSR.

    // However, for debug TDs the write mask may be more permissive.  Thus, we check the actual value here.

    // Bits that are not 1 in the write mask are not modified from the current value and therefore are not checked. */

    if (wr_mask & ((~new_ctls2.raw & global_data->plt_common_config.ia32_vmx_procbased_ctls2.not_allowed0) |

                   (new_ctls2.raw & ~global_data->plt_common_config.ia32_vmx_procbased_ctls2.allowed1)))

    {

        return false;

    }



    // For PML to be enabled, the TD must be debuggable

    // PML address must have been set (as a valid shared HPA) for PML to be enabled

    if (new_ctls2.en_pml)

    {

        uint64_t pml_address;

        ia32_vmread(VMX_PML_LOG_ADDRESS_FULL_ENCODE, &pml_address);

        if (!tdcs_p->executions_ctl_fields.attributes.debug || is_initial_invalid_pa(pml_address))

        {

            return false;

        }

    }



    return true;

}



static bool_t check_guest_cr3_value(uint64_t wr_value, tdcs_t* tdcs_ptr)

{

    ia32_cr3_t cr3 = { .raw = wr_value };



    if (cr3.reserved_0 || cr3.reserved_1)

    {

        return false;

    }



    // If LAM is supported by the CPU, ignore bits 62:61 in the following check, they may be 1

    if (get_global_data()->lam_supported)

    {

        cr3.lam_u48 = 0;

        cr3.lam_u57 = 0;

    }



    // Other than the above, CR3 must hold a valid private GPA

    return check_gpa_validity((pa_t)cr3.raw, tdcs_ptr->executions_ctl_fields.gpaw, PRIVATE_ONLY);

}



static uint64_t md_vp_get_element_special_rd_handle(md_field_id_t field_id, md_access_t access_type,

                                                    md_context_ptrs_t md_ctx, uint16_t vm_id, uint64_t read_value)

{

    //----------------------------------

    //     Handle Special Read Cases

    //----------------------------------

    if (field_id.class_code == MD_TDVPS_VMCS_CLASS_CODE)

    {

        switch (field_id.field_code)

        {

            case VMX_GUEST_CR0_ENCODE:

            {

                /* For export and import, read the CR0 value as if read by the guest.

                   For debug, read the native CR0 value.

                */

                if ((access_type == MD_EXPORT_MUTABLE) || (access_type == MD_IMPORT_MUTABLE))

                {

                    uint64_t guest_host_mask, rd_shadow;

                    ia32_vmread(VMX_CR0_GUEST_HOST_MASK_ENCODE, &guest_host_mask);

                    ia32_vmread(VMX_CR0_READ_SHADOW_ENCODE, &rd_shadow);



                    read_value = apply_cr0_cr4_controls_for_read(read_value, guest_host_mask, rd_shadow);

                }



                break;

            }

            case VMX_GUEST_CR4_ENCODE:

            {

                /* For export, read the CR4 value as if read by the guest.

                For debug, read the native CR4 value.

                */

                if ((access_type == MD_EXPORT_MUTABLE) || (access_type == MD_IMPORT_MUTABLE))

                {

                    uint64_t guest_host_mask, rd_shadow;

                    ia32_vmread(VMX_CR4_GUEST_HOST_MASK_ENCODE, &guest_host_mask);

                    ia32_vmread(VMX_CR4_READ_SHADOW_ENCODE, &rd_shadow);



                    read_value = apply_cr0_cr4_controls_for_read(read_value, guest_host_mask, rd_shadow);

                }



                break;

            }

            default:

                tdx_debug_assert(0);

                break;

        }

    }

    else if ((field_id.class_code == MD_TDVPS_VMCS_1_CLASS_CODE) ||

             (field_id.class_code == MD_TDVPS_VMCS_2_CLASS_CODE) ||

             (field_id.class_code == MD_TDVPS_VMCS_3_CLASS_CODE))

    {

        switch (field_id.field_code)

        {

            case VMX_CR0_GUEST_HOST_MASK_ENCODE:

            {

                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))

                {

                    // On L1 VMM read and on export, read the value from the shadow

                    read_value = md_ctx.tdvps_ptr->management.shadow_cr0_guest_host_mask[vm_id];

                }

                break;

            }

            case VMX_CR0_READ_SHADOW_ENCODE:

            {

                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))

                {

                    // On L1 VMM read and on export, read the value from the shadow

                    read_value = md_ctx.tdvps_ptr->management.shadow_cr0_read_shadow[vm_id];

                }

                break;

            }

            case VMX_CR4_GUEST_HOST_MASK_ENCODE:

            {

                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))

                {

                    // On L1 VMM read and on export, read the value from the shadow

                    read_value = md_ctx.tdvps_ptr->management.shadow_cr4_guest_host_mask[vm_id];

                }

                break;

            }

            case VMX_CR4_READ_SHADOW_ENCODE:

            {

                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))

                {

                    // On L1 VMM read and on export, read the value from the shadow

                    read_value = md_ctx.tdvps_ptr->management.shadow_cr4_read_shadow[vm_id];

                }

                break;

            }

            case VMX_GUEST_CR0_ENCODE:

            {

                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))

                {

                    read_value = apply_cr0_cr4_controls_for_read(read_value,

                            md_ctx.tdvps_ptr->management.base_l2_cr0_guest_host_mask,

                            md_ctx.tdvps_ptr->management.base_l2_cr0_read_shadow);

                }

                break;

            }

            case VMX_GUEST_CR4_ENCODE:

            {

                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))

                {

                    read_value = apply_cr0_cr4_controls_for_read(read_value,

                            md_ctx.tdvps_ptr->management.base_l2_cr4_guest_host_mask,

                            md_ctx.tdvps_ptr->management.base_l2_cr4_read_shadow);

                }

                break;

            }

            case VMX_PAUSE_LOOP_EXITING_GAP_ENCODE:

            {

                if ((access_type == MD_GUEST_RD) || (access_type == MD_GUEST_WR))

                {

                    read_value = md_ctx.tdvps_ptr->management.shadow_ple_gap[vm_id];

                }

                // In other case the value is being read directly from the VMCS by VMREAD

                // before the special read handling

                break;

            }

            case VMX_PAUSE_LOOP_EXITING_WINDOW_ENCODE:

            {

                if ((access_type == MD_GUEST_RD) || (access_type == MD_GUEST_WR))

                {

                    read_value = md_ctx.tdvps_ptr->management.shadow_ple_window[vm_id];

                }

                // In other case the value is being read directly from the VMCS by VMREAD

                // before the special read handling

                break;

            }

            case VMX_GUEST_SHARED_EPT_POINTER_FULL_ENCODE:

            {

                // Read the shadow value;

                // The VMCS may hold another value if L2_CTLS[vm].ENABLE_SHARED_EPTP is false.

                read_value = md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id];

                break;

            }

            case VMX_VIRTUAL_APIC_PAGE_ADDRESS_FULL_ENCODE:

            {

                // Read the shadow GPA value

                read_value = md_ctx.tdvps_ptr->management.l2_vapic_gpa[vm_id];

                break;

            }

            default:

                tdx_debug_assert(0);

                break;

        }

    }

    else if (field_id.class_code == MD_TDVPS_GUEST_STATE_CLASS_CODE)

    {

        switch (field_id.field_code)

        {

            case MD_TDVPS_VCPU_STATE_DETAILS_FIELD_CODE:

            {

                // Calculate virtual interrupt pending status

                vcpu_state_t vcpu_state_details;

                guest_interrupt_status_t interrupt_status;

                uint64_t interrupt_status_raw;



                set_vm_vmcs_as_active(md_ctx.tdvps_ptr, 0);



                ia32_vmread(VMX_GUEST_INTERRUPT_STATUS_ENCODE, &interrupt_status_raw);

                interrupt_status.raw = (uint16_t)interrupt_status_raw;

                vcpu_state_details.raw = 0ULL;

                if ((interrupt_status.rvi & 0xF0UL) > (md_ctx.tdvps_ptr->vapic.apic[PPR_INDEX] & 0xF0UL))

                {

                    vcpu_state_details.vmxip = 1ULL;

                }

                read_value = vcpu_state_details.raw;



                break;

            }

            default:

                break;

        }

    }

    else if (field_id.class_code == MD_TDVPS_GUEST_MSR_STATE_CLASS_CODE)

    {

        switch (field_id.field_code)

        {

            case MD_TDVPS_IA32_SPEC_CTRL_FIELD_CODE:

            {

                // Return the value of IA32_SPEC_CTRL as seen by the guest TD

                read_value = calculate_virt_ia32_spec_ctrl(md_ctx.tdcs_ptr, md_ctx.tdvps_ptr->guest_msr_state.ia32_spec_ctrl);

                break;

            }

            default:

                break;

        }

    }



    return read_value;

}



static uint64_t* calc_elem_ptr(md_field_id_t field_id, const md_lookup_t* entry, md_context_ptrs_t md_ctx)

{

    tdx_debug_assert(md_ctx.tdvps_ptr != NULL);

    tdx_debug_assert(entry->field_id.inc_size == 0);



    uint64_t elem_size = BIT(entry->field_id.element_size_code);

    uint64_t elem_num = field_id.field_code - entry->field_id.field_code;

    uint64_t offset = entry->offset + (elem_num * elem_size);

    return (uint64_t*)((uint8_t*)md_ctx.tdvps_ptr + offset);

}



static api_error_code_e md_vp_get_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,

        uint64_t* out_rd_mask, uint64_t* out_wr_mask, uint64_t* out_rd_value, uint64_t** out_elem_ptr)

{

    uint64_t rd_mask = 0, wr_mask = 0;

    uint64_t read_value;

    uint16_t vm_id = 0;



    md_get_rd_wr_mask(entry, access_type, access_qual, &rd_mask, &wr_mask);



    switch (field_id.class_code)

    {

        case MD_TDVPS_VMCS_CLASS_CODE:

        case MD_TDVPS_VMCS_1_CLASS_CODE:

        case MD_TDVPS_VMCS_2_CLASS_CODE:

        case MD_TDVPS_VMCS_3_CLASS_CODE:

        {

            if (field_id.class_code != MD_TDVPS_VMCS_CLASS_CODE)

            {

                vm_id = md_vp_get_l2_vm_index(field_id.class_code);

                if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)

                {

                    return TDX_METADATA_FIELD_ID_INCORRECT;

                }

            }



            vmcs_field_code_t vmcs_field_code;

            vmcs_field_code.raw = field_id.field_code;

            // We do not allow using the "High" access type

            if (vmcs_field_code.access_type == VMCS_FIELD_ACCESS_TYPE_HIGH)

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            set_vm_vmcs_as_active(md_ctx.tdvps_ptr, vm_id);



            // Read the VMCS field. VMREAD may return an error if the field code does not match

            // a real VMCS field.

            if (!ia32_try_vmread(vmcs_field_code.raw, &read_value))

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            *out_elem_ptr = NULL; // No element address on VMCS elements

            break;

        }

        case MD_TDVPS_MSR_BITMAPS_1_CLASS_CODE:

        case MD_TDVPS_MSR_BITMAPS_2_CLASS_CODE:

        case MD_TDVPS_MSR_BITMAPS_3_CLASS_CODE:

        {

            vm_id = (uint16_t)md_vp_get_l2_vm_index(field_id.class_code);

            if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            tdx_debug_assert(md_ctx.tdvps_ptr != NULL);

            uint64_t elem_num = field_id.field_code - entry->field_id.field_code;



            if ((access_type == MD_HOST_RD) || (access_type == MD_HOST_WR))

            {

                // On host access (only for debug), return the real MSR bitmaps value

                *out_elem_ptr = &md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_msr_bitmaps[elem_num];

                read_value = md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_msr_bitmaps[elem_num];

            }

            else

            {

                // On guest access and for migration, return the shadow MSR bitmaps value

                *out_elem_ptr = &md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_shadow_msr_bitmaps[elem_num];

                read_value = md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_shadow_msr_bitmaps[elem_num];

            }



            break;

        }

        case MD_TDVPS_MSR_BITMAPS_SHADOW_1_CLASS_CODE:

        case MD_TDVPS_MSR_BITMAPS_SHADOW_2_CLASS_CODE:

        case MD_TDVPS_MSR_BITMAPS_SHADOW_3_CLASS_CODE:



            vm_id = (uint16_t)md_vp_get_l2_vm_index(field_id.class_code);

            if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            // Fallthrough - no break;

        case MD_TDVPS_VAPIC_CLASS_CODE:

        case MD_TDVPS_GUEST_GPR_STATE_CLASS_CODE:

        case MD_TDVPS_GUEST_EXT_STATE_CLASS_CODE:

        case MD_TDVPS_GUEST_MSR_STATE_CLASS_CODE:

        case MD_TDVPS_GUEST_STATE_CLASS_CODE:

        case MD_TDVPS_VE_INFO_CLASS_CODE:

        case MD_TDVPS_MANAGEMENT_CLASS_CODE:

        case MD_TDVPS_CPUID_CONTROL_CLASS_CODE:

        case MD_TDVPS_EPT_VIOLATION_LOG_CLASS_CODE:

        {

            uint64_t* elem_ptr = calc_elem_ptr(field_id, entry, md_ctx);



            *out_elem_ptr = elem_ptr;

            read_value = *elem_ptr;



            break;

        }

        default:

            FATAL_ERROR();

            break;

    }



    if (entry->special_rd_handling)

    {

        read_value = md_vp_get_element_special_rd_handle(field_id, access_type, md_ctx, vm_id, read_value);

    }



    *out_rd_mask = rd_mask;

    *out_wr_mask = wr_mask;

    *out_rd_value = read_value & md_get_element_size_mask(entry->field_id.element_size_code);



    return TDX_SUCCESS;

}



api_error_code_e md_vp_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* out_rd_value)

{

    uint64_t rd_mask, wr_mask, read_value;

    uint64_t* elem_ptr;

    api_error_code_e status;



    status = md_vp_get_element(field_id, entry, access_type, access_qual, md_ctx, &rd_mask, &wr_mask,

                               &read_value, &elem_ptr);



    if (status != TDX_SUCCESS)

    {

        return status;

    }



    if (rd_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_READABLE;

    }



    read_value &= rd_mask;

    *out_rd_value = read_value;



    return TDX_SUCCESS;

}



api_error_code_e md_vp_read_field(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t value[MAX_ELEMENTS_IN_FIELD])

{

    // No special handling on read field



    // Currently, all VCPU fields have exactly one element

    if (entry->num_of_elem != 1)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    return md_vp_read_element(field_id, entry, access_type, access_qual, md_ctx, &value[0]);

}



/**

 *  Write a metadata element to memory based on its size (1, 2, 4 or 8 bytes)

 */

_STATIC_INLINE_ void write_element_to_mem(void* element_ptr, uint64_t value, uint32_t element_size_code)

{

    uint8_t  *ptr_8;

    uint16_t *ptr_16;

    uint32_t *ptr_32;

    uint64_t *ptr_64;

    switch (element_size_code)

    {

    case 0:  // 1 byte

        ptr_8 = (uint8_t *)element_ptr;

        *ptr_8 = (uint8_t) value;

        break;

    case 1:  // 2 bytes

        ptr_16 = (uint16_t *)element_ptr;

        *ptr_16 = (uint16_t) value;

        break;

    case 2:  // 4 bytes

        ptr_32 = (uint32_t *)element_ptr;

        *ptr_32 = (uint32_t) value;

        break;

    case 3:  // 8 bytes

        ptr_64 = (uint64_t *)element_ptr;

        *ptr_64 = value;

        break;



    default:

        FATAL_ERROR();

        break;

    }

}



static api_error_code_e md_vp_element_vmcs_wr_handle(md_field_id_t field_id, md_context_ptrs_t md_ctx,

                                                     uint64_t wr_mask, uint64_t* wr_value, bool_t* write_done)

{

    *write_done = false;



    // Handle Special Cases

    //   - These are marked as RW* in the FAS TD VMCS tables

    //   - Shared PA values and their alignments were checked above

    switch (field_id.field_code)

    {

    case VMX_GUEST_CR0_ENCODE:

    {

        // CR0 value is written as if written by the guest TD.

        // No check of bit combination legality or cross-check with CR4 are done.  This means that a following

        // VM entry may fail; we support this for the relevant cases: debug and import.

        uint64_t old_cr, guest_host_mask, rd_shadow;

        ia32_vmread(VMX_GUEST_CR0_ENCODE, &old_cr);

        ia32_vmread(VMX_CR0_GUEST_HOST_MASK_ENCODE, &guest_host_mask);

        ia32_vmread(VMX_CR0_READ_SHADOW_ENCODE, &rd_shadow);



        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value, guest_host_mask, rd_shadow))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_GUEST_CR3_ENCODE:

    {

        if (!check_guest_cr3_value(*wr_value, md_ctx.tdcs_ptr))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_GUEST_CR4_ENCODE:

    {

        // CR4 value is written as if written by the guest TD

        uint64_t old_cr, guest_host_mask, rd_shadow;

        ia32_vmread(VMX_GUEST_CR4_ENCODE, &old_cr);

        ia32_vmread(VMX_CR4_GUEST_HOST_MASK_ENCODE, &guest_host_mask);

        ia32_vmread(VMX_CR4_READ_SHADOW_ENCODE, &rd_shadow);



        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value, guest_host_mask, rd_shadow))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        // No need to check the compatibility of the CR4 value with the TD configuration.

        // This is implied by the guest/host mask and read shadow that were checked above.

        // We keep this check as a debug assertion.

        // The check does not apply for debug TDs

        tdx_debug_assert(md_ctx.tdcs_ptr->executions_ctl_fields.attributes.debug ||

                is_guest_cr4_allowed_by_td_config((ia32_cr4_t)*wr_value, md_ctx.tdcs_ptr,

                (ia32_xcr0_t)md_ctx.tdcs_ptr->executions_ctl_fields.xfam));



        break;

    }

    case VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE:

    {

        if (!check_and_update_ia32_dbgctrl(wr_value, md_ctx.tdcs_ptr))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }



    case VMX_NOTIFY_WINDOW_ENCODE:

    {

        break;

    }

    case VMX_VM_EXECUTION_CONTROL_PIN_BASED_ENCODE:

    {

        // Enabling posted interrupts in only allowed if the proper fields

        // have been initialized

        vmx_pinbased_ctls_t pinbased_exec_ctls;

        pinbased_exec_ctls.raw = (uint32_t)*wr_value;

        if (pinbased_exec_ctls.process_posted_interrupts == 1)

        {

            uint64_t addr, vec;



            ia32_vmread(VMX_POSTED_INTERRUPT_NOTIFICATION_VECTOR_ENCODE, &vec);



            if ((uint16_t)vec == POSTED_INTERRUPT_NOTFICATION_VECTOR_INIT)

            {

                return api_error_with_operand_id(TDX_TD_VMCS_FIELD_NOT_INITIALIZED,

                                                 VMX_POSTED_INTERRUPT_NOTIFICATION_VECTOR_ENCODE);

            }



            ia32_vmread(VMX_POSTED_INTERRUPT_DESCRIPTOR_ADDRESS_FULL_ENCODE, &addr);





            if (addr == (-1ULL))

            {

                return api_error_with_operand_id(TDX_TD_VMCS_FIELD_NOT_INITIALIZED,

                                                 VMX_POSTED_INTERRUPT_DESCRIPTOR_ADDRESS_FULL_ENCODE);

            }

        }



        md_ctx.tdvps_ptr->management.shadow_pinbased_exec_ctls = (uint32_t)pinbased_exec_ctls.raw;



        break;

    }

    case VMX_POSTED_INTERRUPT_DESCRIPTOR_ADDRESS_FULL_ENCODE:

    {

        md_ctx.tdvps_ptr->management.shadow_pid_hpa = *wr_value;

        break;

    }

    case VMX_POSTED_INTERRUPT_NOTIFICATION_VECTOR_ENCODE:

    {

        // although 'wr_value' is of type 'uint_64' and could never be negative, the first condition is here for code-completeness

        if (*wr_value < POSTED_INTERRUPT_NOTFICATION_VECTOR_MIN || *wr_value > POSTED_INTERRUPT_NOTFICATION_VECTOR_MAX)

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }

        else

        {

            // Save the notification vector in a shadow variable to avoid the need to read it from

            // L1 VMCS on L2 VM exit.

            md_ctx.tdvps_ptr->management.shadow_posted_int_notification_vector = (uint16_t)*wr_value;

        }



        break;

    }

    case VMX_VM_EXECUTION_CONTROL_SECONDARY_PROC_BASED_ENCODE:

    {

        vmx_procbased_ctls2_t new_ctls2;

        new_ctls2.raw = *wr_value;

        if (!check_l1_procbased_exec_ctls2(md_ctx.tdcs_ptr, (uint32_t)wr_mask, new_ctls2))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_GUEST_SHARED_EPT_POINTER_FULL_ENCODE:

    {

        md_ctx.tdvps_ptr->management.shadow_shared_eptp[0] = *wr_value;



        break;

    }

    default:

        tdx_debug_assert(0); // The cases above should handle all special write handling.

        break;

    }



    return TDX_SUCCESS;

}



static api_error_code_e md_vp_element_l2_vmcs_wr_handle(md_field_id_t field_id, md_access_t access_type,

                                                        md_context_ptrs_t md_ctx, uint64_t wr_mask,

                                                        uint64_t* wr_value, bool_t* write_done)

{

    *write_done = false;



    uint16_t vm_id = md_vp_get_l2_vm_index(field_id.class_code);



    switch (field_id.field_code)

    {

    case VMX_CR0_GUEST_HOST_MASK_ENCODE:

    {

        // On L1 VMM write and on import, write the original value into the shadow, and

        // build the actual mask as a bitwise-or with the TD VCMS' mask.

        md_ctx.tdvps_ptr->management.shadow_cr0_guest_host_mask[vm_id] = *wr_value;



        // Combine the guest/host masks and read shadows and write the L2 VMCS

        combine_and_write_l2_cr0_controls(md_ctx.tdvps_ptr, vm_id);



        *write_done = true;

        break;

    }

    case VMX_CR0_READ_SHADOW_ENCODE:

    {

        md_ctx.tdvps_ptr->management.shadow_cr0_read_shadow[vm_id] = *wr_value;



        combine_and_write_l2_cr0_controls(md_ctx.tdvps_ptr, vm_id);



        *write_done = true;



        break;

    }

    case VMX_CR4_GUEST_HOST_MASK_ENCODE:

    {

        md_ctx.tdvps_ptr->management.shadow_cr4_guest_host_mask[vm_id] = *wr_value;



        combine_and_write_l2_cr4_controls(md_ctx.tdvps_ptr, vm_id);



        *write_done = true;



        break;

    }

    case VMX_CR4_READ_SHADOW_ENCODE:

    {

        md_ctx.tdvps_ptr->management.shadow_cr4_read_shadow[vm_id] = *wr_value;



        combine_and_write_l2_cr4_controls(md_ctx.tdvps_ptr, vm_id);



        *write_done = true;



        break;

    }

    case VMX_GUEST_EPT_POINTER_FULL_ENCODE:

    {

        ia32e_eptp_t eptp = { .raw = *wr_value };

        ia32_xcr0_t xfam = { .raw = md_ctx.tdcs_ptr->executions_ctl_fields.xfam };



        if (eptp.fields.enable_sss_control && !xfam.cet_s)

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_GUEST_CR0_ENCODE:

    {

        // L2 VM CR0 value is written using the base TDX policy for all L2 VMs

        uint64_t old_cr;

        ia32_vmread(VMX_GUEST_CR0_ENCODE, &old_cr);



        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value,

                md_ctx.tdvps_ptr->management.base_l2_cr0_guest_host_mask,

                md_ctx.tdvps_ptr->management.base_l2_cr0_read_shadow))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_GUEST_CR3_ENCODE:

    {

        if (!check_guest_cr3_value(*wr_value, md_ctx.tdcs_ptr))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_GUEST_CR4_ENCODE:

    {

        // L2 VM CR4 value is written using the base TDX policy for all L2 VMs

        uint64_t old_cr;

        ia32_vmread(VMX_GUEST_CR4_ENCODE, &old_cr);



        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value,

                md_ctx.tdvps_ptr->management.base_l2_cr4_guest_host_mask,

                md_ctx.tdvps_ptr->management.base_l2_cr4_read_shadow))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE:

    {

        if (!check_and_update_ia32_dbgctrl(wr_value, md_ctx.tdcs_ptr))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }

        break;

    }

    case VMX_HLATP_FULL_ENCODE:

    {

        // Checking as private GPA was done before

        break;

    }

    case VMX_PAUSE_LOOP_EXITING_GAP_ENCODE:

    case VMX_PAUSE_LOOP_EXITING_WINDOW_ENCODE:

    {

        if (access_type == MD_GUEST_WR)

        {

            // On writes by L1 VMM and on import, save the original value (in virtual TSC ticks) as a shadow

            // and convert to native TSC ticks.

            if (field_id.field_code == VMX_PAUSE_LOOP_EXITING_GAP_ENCODE)

            {

                md_ctx.tdvps_ptr->management.shadow_ple_gap[vm_id] = (uint32_t)*wr_value;

            }

            else

            {

                md_ctx.tdvps_ptr->management.shadow_ple_window[vm_id] = (uint32_t)*wr_value;

            }



            if (!calculate_native_tsc(*wr_value,

                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,

                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset,

                                      wr_value))

            {

                return TDX_METADATA_FIELD_VALUE_NOT_VALID;

            }



            // Check if the native value fits in 32 bits

            if (*wr_value >= BIT(32))

            {

                return TDX_METADATA_FIELD_VALUE_NOT_VALID;

            }

        }



        break;

    }

    case VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE:

    {

        vmx_procbased_ctls_t new_ctls = { .raw = *wr_value };



        if (!check_l2_procbased_exec_ctls(md_ctx.tdcs_ptr, (uint32_t)wr_mask, new_ctls, access_type))

        {

            TDX_ERROR("L2 VM_EXECUTION_CONTROL_PROC_BASED - failed checks. wr_mask = 0x%llx, wr_val = 0x%llx\n",

                    wr_mask, new_ctls.raw);

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }

        break;

    }

    case VMX_VM_EXECUTION_CONTROL_SECONDARY_PROC_BASED_ENCODE:

    {

        vmx_procbased_ctls2_t new_ctls2 = { .raw = *wr_value };



        if (!check_l2_procbased_exec_ctls2(md_ctx.tdcs_ptr, (uint32_t)wr_mask, new_ctls2, access_type))

        {

            TDX_ERROR("L2 VM_EXECUTION_CONTROL_SEC_PROC_BASED - failed checks. wr_mask = 0x%llx, wr_val = 0x%llx\n",

                    wr_mask, new_ctls2.raw);

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }



        break;

    }

    case VMX_VM_EXECUTION_CONTROL_TERTIARY_PROC_BASED_FULL_ENCODE:

    {

        vmx_procbased_ctls3_t new_ctls = { .raw = *wr_value };



        if (!check_l2_procbased_exec_ctls3(md_ctx.tdcs_ptr, wr_mask, new_ctls, access_type))

        {

            TDX_ERROR("L2 VM_EXECUTION_CONTROL_TER_PROC_BASED - failed checks. wr_mask = 0x%llx, wr_val = 0x%llx\n",

                    wr_mask, new_ctls.raw);

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }

        break;

    }

    case VMX_GUEST_SHARED_EPT_POINTER_FULL_ENCODE:

    {

        md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id] = *wr_value;

        if (!md_ctx.tdvps_ptr->management.l2_ctls[vm_id].enable_shared_eptp)

        {

            *write_done = true;

        }



        break;

    }

    case VMX_VIRTUAL_APIC_PAGE_ADDRESS_FULL_ENCODE:

    {

        // Checking as private GPA was done before



        md_ctx.tdvps_ptr->management.l2_vapic_gpa[vm_id] = *wr_value;

        md_ctx.tdvps_ptr->management.l2_vapic_hpa[vm_id] = NULL_PA;

        *write_done = true;

        break;

    }

    default:

        tdx_debug_assert(0); // The cases above should handle all special write handling.

        break;

    }



    return TDX_SUCCESS;

}



static api_error_code_e md_vp_element_tdvps_wr_handle(md_field_id_t field_id, md_access_t access_type,

                                                      md_context_ptrs_t md_ctx, uint64_t* wr_value, bool_t* write_done)

{

    *write_done = false;



    switch (field_id.class_code)

    {

        case MD_TDVPS_GUEST_STATE_CLASS_CODE:

        {

            if (field_id.field_code == MD_TDVPS_XCR0_FIELD_CODE)

            {

                if (!check_guest_xcr0_value((ia32_xcr0_t)*wr_value, md_ctx.tdcs_ptr->executions_ctl_fields.xfam))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }

            }

            else

            {

                tdx_debug_assert(0);

            }

            break;

        }

        case MD_TDVPS_GUEST_EXT_STATE_CLASS_CODE:

        {

            // Prevent the host VMM from writing the XSAVE header (only applicable for DEBUG TDs).

            // The XSAVE header starts after XSAVE legacy region, and is 64 bytes long.

            // As metadata the element size is 8 bytes.

            ia32_xcr0_t xfam = { .raw = md_ctx.tdcs_ptr->executions_ctl_fields.xfam };

            

            if (access_type == MD_HOST_WR)

            {

                if ((field_id.field_code >= (sizeof(xsave_legacy_region_t) / 8)) &&

                    (field_id.field_code < ((sizeof(xsave_legacy_region_t) + sizeof(xsave_header_t)) / 8)))

                {

                    return TDX_METADATA_FIELD_NOT_WRITABLE;

                }



                // Prevent modification of the IA32_RTIT_CTL MSR image in XBUFF.

                // This image resides at offset 0 of the PT component of XBUFF.

                // XBUFF is defined as an array of 8-byte metadata fields. Therefore, FIELD_CODE is offset / 8.





                if ((xfam.pt) && (field_id.field_code == md_ctx.tdcs_ptr->executions_ctl_fields.xbuff_offsets[XCR0_PT_BIT] / 8))

                {

                    return TDX_METADATA_FIELD_NOT_WRITABLE;

                }

            }

            else

            {

                tdx_debug_assert(MD_IMPORT_MUTABLE == access_type);

                /* Do not import the IA32_RTIT_CTL MSR image in XBUFF; write 0 instead.  This image resides at offset 0

                   of the PT component of XBUFF.

                   XBUFF is defined as an array of 8-byte metadata fields.  Therefore, FIELD_CODE is offset / 8. */

                if ((xfam.pt) && (field_id.field_code == md_ctx.tdcs_ptr->executions_ctl_fields.xbuff_offsets[XCR0_PT_BIT] / 8))

                {

                    *wr_value = 0;

                }

            }

            break;

        }

        case MD_TDVPS_GUEST_MSR_STATE_CLASS_CODE:

        {

            if (field_id.field_code == MD_TDVPS_IA32_SPEC_CTRL_FIELD_CODE)

            {

                *wr_value = calculate_real_ia32_spec_ctrl(md_ctx.tdcs_ptr, *wr_value);

            }

            else if (field_id.field_code == MD_TDVPS_IA32_XSS_FIELD_CODE)

            {

                tdx_module_global_t* global_data = get_global_data();



                // Check that any bit that is set to 1 is supported by IA32_XSS and XFAM.

                // Note that CPU support has been enumerated on TDH_SYS_INIT and used to verify XFAM on TDH_MNG_INIT.

                if (0 != (*wr_value & ~(global_data->ia32_xss_supported_mask & md_ctx.tdcs_ptr->executions_ctl_fields.xfam)))

                {

                    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                }

            }

            else

            {

                tdx_debug_assert(0);

            }

            break;

        }

        case MD_TDVPS_MANAGEMENT_CLASS_CODE:

        {

            switch (field_id.field_code)

            {

                case MD_TDVPS_VCPU_STATE_FIELD_CODE:

                {

                    // Write the imported VCPU state only if the VCPU is disabled

                    if (*wr_value != VCPU_DISABLED)

                    {

                        *write_done = true;

                    }

                    break;

                }

                case MD_TDVPS_VCPU_INDEX_FIELD_CODE:

                {

                    if (*wr_value >= (uint64_t)md_ctx.tdcs_ptr->management_fields.num_vcpus)

                    {

                        return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                    }

                    break;

                }

                case MD_TDVPS_LAST_TD_EXIT_FIELD_CODE:

                {

                    if ((*wr_value != LAST_EXIT_ASYNC_FAULT) &&

                        (*wr_value != LAST_EXIT_ASYNC_TRAP)  &&

                        (*wr_value != LAST_EXIT_TDVMCALL))

                    {

                        return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                    }

                    break;

                }

                case MD_TDVPS_CURR_VM_FIELD_CODE:

                {

                    if (*wr_value > (uint64_t)md_ctx.tdcs_ptr->management_fields.num_l2_vms)

                    {

                        return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                    }

                    break;

                }

                case MD_TDVPS_L2_EXIT_HOST_ROUTING_FIELD_CODE:

                {

                    if ((*wr_value != HOST_ROUTED_NONE) &&

                        (*wr_value != HOST_ROUTED_ASYNC)  &&

                        (*wr_value != HOST_ROUTED_TDVMCALL))

                    {

                        return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                    }

                    break;

                }

                case MD_TDVPS_XFAM_FIELD_CODE:

                {

                    // TODO @@@ This is a temporary solution for TDX 1.5.01 to avoid spreadsheet changes

                    return TDX_METADATA_FIELD_NOT_WRITABLE;



                    //if (!check_xfam((ia32_xcr0_t)*wr_value))

                    //{

                    //    return TDX_METADATA_FIELD_VALUE_NOT_VALID;

                    //}

                    break;

                }

                case MD_TDVPS_L2_CTLS_FIELD_CODE:

                {

                    // No L2 CTLS is supported for VM #0, ignore

                    break;

                }

                case (MD_TDVPS_L2_CTLS_FIELD_CODE + 1):

                case (MD_TDVPS_L2_CTLS_FIELD_CODE + 2):

                case (MD_TDVPS_L2_CTLS_FIELD_CODE + 3):

                {

                    uint16_t vm_id = (uint16_t)(field_id.field_code - MD_TDVPS_L2_CTLS_FIELD_CODE);

                    if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)

                    {

                        // No L2 CTLS is supported for non-existant VM, ignore

                        break;

                    }



                    l2_vcpu_ctrl_t l2_ctls = { .raw = *wr_value };



                    set_vm_vmcs_as_active(md_ctx.tdvps_ptr, vm_id);



                    if (l2_ctls.enable_shared_eptp &&

                        (md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id] != NULL_PA))

                    {

                        // Shared EPTP is enable, write the shadow value to VMCS

                        ia32_vmwrite(VMX_GUEST_SHARED_EPT_POINTER_FULL_ENCODE,

                                md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id]);

                    }

                    else

                    {

                        // Shared EPTP is disabled, point it to the TDCS' zero page

                        ia32_vmwrite(VMX_GUEST_SHARED_EPT_POINTER_FULL_ENCODE,

                                md_ctx.tdr_ptr->management_fields.tdcx_pa[ZERO_PAGE_INDEX]);

                    }

                    break;

                }

                case MD_TDVPS_TSC_DEADLINE_FIELD_CODE:

                {

                    // No TSC deadline is supported for VM #0, ignore

                    break;

                }

                case (MD_TDVPS_TSC_DEADLINE_FIELD_CODE + 1):

                case (MD_TDVPS_TSC_DEADLINE_FIELD_CODE + 2):

                case (MD_TDVPS_TSC_DEADLINE_FIELD_CODE + 3):

                {

                    uint16_t vm_id = (uint16_t)(field_id.field_code - MD_TDVPS_TSC_DEADLINE_FIELD_CODE);

                    if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)

                    {

                        // No TSC deadline is supported for non-existant VM, ignore

                        break;

                    }



                    if (*wr_value != ~(0ULL))

                    {

                        // TSC deadline is enabled.  Set the shadow value in native TSC units.



                        uint64_t native_tsc = ia32_rdtsc();

                        uint64_t virt_tsc = calculate_virt_tsc(native_tsc,

                                                               md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,

                                                               md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset);



                        /* Check if the TSC deadline is in the past.  Remmeber that the TD's virtual TSC starts from 0 and

                           can't practically wrap around, so we can do a simple comparison. */

                        uint64_t native_tsc_deadline = 0;

                        if (*wr_value <= virt_tsc)

                        {

                            // Deadline is in the past.  Set the deadline to the current native TSC value.

                            native_tsc_deadline = native_tsc;

                        }

                        else

                        {

                            if (!calculate_native_tsc(*wr_value,

                                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,

                                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset,

                                                      &native_tsc_deadline))

                            {

                                return TDX_OPERAND_INVALID;

                            }



                            if (0 == native_tsc_deadline)

                            {

                                return TDX_OPERAND_INVALID;

                            }



                            // If there was a wraparound, then it's an error.  Deadline was requested too far in the future.

                            if ((int64_t)(native_tsc_deadline - native_tsc) < 0)

                            {

                                return TDX_OPERAND_INVALID;

                            }

                        }



                        md_ctx.tdvps_ptr->management.shadow_tsc_deadline[vm_id] = native_tsc_deadline;

                    }

                    break;

                }

                default: tdx_debug_assert(0);

            }

            break;

        }

        case MD_TDVPS_MSR_BITMAPS_1_CLASS_CODE:

        case MD_TDVPS_MSR_BITMAPS_2_CLASS_CODE:

        case MD_TDVPS_MSR_BITMAPS_3_CLASS_CODE:

        {

            uint16_t vm_id = md_vp_get_l2_vm_index(field_id.class_code);



            if (vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)

            {

                return TDX_METADATA_FIELD_ID_INCORRECT;

            }



            // Write the value to the shadow page

            md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_shadow_msr_bitmaps[field_id.field_code] = *wr_value;

            *write_done = true;



            // Write the real MSR bitmaps page used by the CPU

            // The MSR bitmaps value is a bitwise - or of the TD's MSR bitmaps value and the shadow value.

            // Map the TD's MSR bitmaps page (it is typically unmapped).

            uint64_t* td_msr_bitmaps_page_p = (uint64_t*)md_ctx.tdcs_ptr->MSR_BITMAPS;

            md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_msr_bitmaps[field_id.field_code] =

                    td_msr_bitmaps_page_p[field_id.field_code] | *wr_value;



            break;

        }

        default: tdx_debug_assert(0);

    }



    return TDX_SUCCESS;

}



static api_error_code_e md_vp_element_special_wr_handle(md_field_id_t field_id, md_access_t access_type,

                                                        md_context_ptrs_t md_ctx, uint64_t wr_mask,

                                                        uint64_t* wr_value, bool_t* write_done)

{

    api_error_code_e retval = TDX_SUCCESS;

    *write_done = false;



    if (field_id.class_code == MD_TDVPS_VMCS_CLASS_CODE)

    {

        retval = md_vp_element_vmcs_wr_handle(field_id, md_ctx, wr_mask, wr_value, write_done);

    }

    else if ((field_id.class_code == MD_TDVPS_VMCS_1_CLASS_CODE) ||

             (field_id.class_code == MD_TDVPS_VMCS_2_CLASS_CODE) ||

             (field_id.class_code == MD_TDVPS_VMCS_3_CLASS_CODE))

    {

        retval = md_vp_element_l2_vmcs_wr_handle(field_id, access_type, md_ctx, wr_mask,

                                                 wr_value, write_done);

    }

    else

    {

        retval = md_vp_element_tdvps_wr_handle(field_id, access_type, md_ctx, wr_value, write_done);

    }



    return retval;

}



_STATIC_INLINE_ uint64_t md_vp_get_checked_size_of_shared_hpa_range(md_field_id_t field_id)

{

    uint64_t size = TDX_PAGE_SIZE_IN_BYTES;

    if ((field_id.class_code == MD_TDVPS_VMCS_CLASS_CODE ||

         field_id.class_code == MD_TDVPS_VMCS_1_CLASS_CODE ||

         field_id.class_code == MD_TDVPS_VMCS_2_CLASS_CODE ||

         field_id.class_code == MD_TDVPS_VMCS_3_CLASS_CODE) &&

         field_id.field_code == VMX_POSTED_INTERRUPT_DESCRIPTOR_ADDRESS_FULL_ENCODE)

    {

        size = POSTED_INTER_DESCRIPTOR_SIZE;

    }



    return size;

}



// Adjust current field value per field attributes

//  Used for handling fields whose initial value is special and contradict normal write rules

//  Currently supported:

//  - Handling of any PA:  special handling of NULL_PA (-1)

static uint64_t md_vp_adjust_value_per_field_attr_on_wr(const md_lookup_t* entry, uint64_t current_value,

                                                        uint64_t wr_mask)

{

    // Initial value of a physical address is NULL_PA (-1).

    // When writing a new value, we need to clear bits that are not part of the write mask.

    IF_RARE ((entry->attributes.gpa || entry->attributes.hpa) && is_initial_invalid_pa(current_value))

    {

        current_value &= wr_mask;

    }



    return current_value;

}



static api_error_code_e md_vp_handle_field_attribute_on_wr(md_field_id_t field_id, const md_lookup_t* entry,

                                                           md_context_ptrs_t md_ctx, uint64_t* wr_value)

{

    if (entry->attributes.hpa && entry->attributes.shared)

    {

        uint64_t size = md_vp_get_checked_size_of_shared_hpa_range(field_id);



        if (shared_hpa_check((pa_t)*wr_value, size) != TDX_SUCCESS)

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }

    }

    else if (entry->attributes.gpa && entry->attributes.prvate)

    {

        if (!check_gpa_validity((pa_t)*wr_value, md_ctx.tdcs_ptr->executions_ctl_fields.gpaw, PRIVATE_ONLY))

        {

            return TDX_METADATA_FIELD_VALUE_NOT_VALID;

        }

    }



    return TDX_SUCCESS;

}



api_error_code_e md_vp_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t wr_value, uint64_t wr_request_mask,

        uint64_t* old_value, bool_t return_old_val)

{

    uint64_t rd_mask, wr_mask, combined_wr_mask, read_value = 0;

    uint64_t tmp_old_value = 0;

    uint64_t* elem_ptr;

    api_error_code_e status;



    status = md_vp_get_element(field_id, entry, access_type, access_qual, md_ctx, &rd_mask, &wr_mask,

                               &tmp_old_value, &elem_ptr);



    if (status != TDX_SUCCESS)

    {

        return status;

    }



    // Narrow down the bits to be written with the input mask

    combined_wr_mask = wr_mask & wr_request_mask;



    // Check if the requested field is writable.

    // Note that there is no check for readable; we don't have write-only

    // fields.

    if (combined_wr_mask == 0)

    {

        return TDX_METADATA_FIELD_NOT_WRITABLE;

    }



    uint64_t element_size_mask = md_get_element_size_mask(entry->field_id.element_size_code);



    // If the whole element is written (e.g., on import), keep rd_value as 0.

    // This is used when inserting wr_value bits later.

    // This prevents the need to handle conversion on read that might introduce errors.

    if (combined_wr_mask != element_size_mask)

    {

        read_value = tmp_old_value;

    }



    // Mask the value to be returned at the end with the read mask

    tmp_old_value &= rd_mask;



    read_value = md_vp_adjust_value_per_field_attr_on_wr(entry, read_value, wr_mask);



    if (!md_check_forbidden_bits_unchanged(read_value, wr_value, wr_request_mask, wr_mask))

    {

        TDX_ERROR("Attempt to change forbidden bits, field_id = 0x%llx\n", field_id.raw);

        TDX_ERROR("read_value = 0x%llx , wr_value = 0x%llx , wr_request_mask = 0x%llx , wr_mask = 0x%llx\n",

                read_value, wr_value, wr_request_mask, wr_mask);

        return TDX_METADATA_FIELD_VALUE_NOT_VALID;

    }



    // Insert the bits to be written

    wr_value = (read_value & ~combined_wr_mask) | (wr_value & combined_wr_mask);



    // Check additional requirements on the value to be written

    status = md_vp_handle_field_attribute_on_wr(field_id, entry, md_ctx, &wr_value);

    if (status != TDX_SUCCESS)

    {

        return status;

    }



    bool_t write_done = false;



    if (entry->special_wr_handling)

    {

        status = md_vp_element_special_wr_handle(field_id, access_type, md_ctx, combined_wr_mask,

                                                 &wr_value, &write_done);

        if (status != TDX_SUCCESS)

        {

            return status;

        }

    }



    if ((field_id.class_code == MD_TDVPS_VMCS_CLASS_CODE) ||

        (field_id.class_code == MD_TDVPS_VMCS_1_CLASS_CODE) ||

        (field_id.class_code == MD_TDVPS_VMCS_2_CLASS_CODE) ||

        (field_id.class_code == MD_TDVPS_VMCS_3_CLASS_CODE))

    {

        // VMWRITE may fail if the field is read-only but the write mask allowed write.

        if (!write_done)

        {

            if (!ia32_try_vmwrite(field_id.field_code, wr_value))

            {

                return TDX_METADATA_FIELD_NOT_WRITABLE;

            }

        }

    }

    else

    {

        tdx_debug_assert(elem_ptr != NULL);

        // Write the value

        if (!write_done)

        {

            write_element_to_mem(elem_ptr, wr_value, entry->field_id.element_size_code);

        }

    }



    if (return_old_val)

    {

        *old_value = tmp_old_value;

    }



    return TDX_SUCCESS;

}



api_error_code_e md_vp_write_field(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,

                                   md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,

                                   uint64_t value[MAX_ELEMENTS_IN_FIELD], uint64_t wr_mask)

{

    // No special handling on read field



    // Currently, all VCPU fields have exactly one element

    if (entry->num_of_elem != 1)

    {

        return TDX_METADATA_FIELD_ID_INCORRECT;

    }



    uint64_t old_value;



    return md_vp_write_element(field_id, entry, access_type, access_qual, md_ctx, value[0], wr_mask, &old_value, false);

}



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

 * @file tdg_vm_rd_wr.c

 * @brief TDGVMRDWR API handler

 */



#include "tdx_td_api_handlers.h"

#include "tdx_basic_defs.h"

#include "tdx_basic_types.h"

#include "tdx_api_defs.h"

#include "auto_gen/tdx_error_codes_defs.h"

#include "data_structures/tdx_local_data.h"

#include "x86_defs/x86_defs.h"

#include "accessors/data_accessors.h"

#include "helpers/helpers.h"

#include "auto_gen/tdr_tdcs_fields_lookup.h"



static api_error_type tdg_vm_rd_wr(md_field_id_t field_id, uint64_t vm_id, tdx_module_local_t * local_data_ptr,

                                   bool_t write, uint64_t wr_value, uint64_t wr_request_mask, uint64_t version)

{

    // Temporary Variables

    uint64_t              rd_value;           // Data read from field



    md_context_ptrs_t     md_ctx;

    md_access_qualifier_t access_qual = { .raw = 0 };



    api_error_type        return_val = TDX_SUCCESS;



    // Default output register operands

    if (!write && (version > 0))

    {

        local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx = MD_FIELD_ID_NA;

    }

    local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 = 0;



    // TDG.VM.RD supports version 1.  Other version checks are done by the TDCALL dispatcher.

    if ((!write) && (version > 1))

    {

        TDX_ERROR("Unsupported version = %llx\n", version);

        return_val = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RAX);

        goto EXIT;

    }



    if (vm_id != 0)

    {

        return_val = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX);

        goto EXIT;

    }



    md_ctx.tdr_ptr = local_data_ptr->vp_ctx.tdr;

    md_ctx.tdcs_ptr = local_data_ptr->vp_ctx.tdcs;

    md_ctx.tdvps_ptr = NULL;



    // Set the proper context code

    field_id.context_code = MD_CTX_TD;    // CONTEXT_CODE is ignored on input



    if (!write && (version > 0))

    {

        // For read, a null field ID means return the first field ID in context

        if (is_null_field_id(field_id))

        {

            local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx =

                    (md_get_next_element_in_context(MD_CTX_TD, field_id, md_ctx, MD_GUEST_RD, access_qual)).raw;



            return_val = TDX_METADATA_FIRST_FIELD_ID_IN_CONTEXT;

            goto EXIT;

        }

    }



    return_val = md_check_as_single_element_id(field_id);



    if (return_val != TDX_SUCCESS)

    {

        TDX_ERROR("Request field id doesn't match single element = %llx\n", field_id.raw);

        goto EXIT;

    }



    if (write)

    {

        return_val = md_write_element(MD_CTX_TD, field_id, MD_GUEST_WR, access_qual,

                                      md_ctx, wr_value, wr_request_mask, &rd_value);

    }

    else

    {

        return_val = md_read_element(MD_CTX_TD, field_id, MD_GUEST_RD, access_qual,

                                     md_ctx, &rd_value);



        if ((version > 0) && (return_val == TDX_SUCCESS))

        {

            local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx =

                    md_get_next_element_in_context(MD_CTX_TD, field_id, md_ctx, MD_GUEST_RD, access_qual).raw;

        }

    }



    if (return_val != TDX_SUCCESS)

    {

        TDX_ERROR("Failed to Read or Write data to a TDR/TDCS field - error = %llx\n", return_val);

        goto EXIT;

    }



    local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 = rd_value;



    return_val = TDX_SUCCESS;



EXIT:



    return return_val;

}



api_error_type tdg_vm_wr(uint64_t requested_field_code,

        uint64_t vm_id,

        uint64_t wr_data,

        uint64_t wr_mask,

        uint64_t version)

{

    tdx_module_local_t * local_data_ptr = get_local_data();

    md_field_id_t    field_code = { .raw = requested_field_code };



    return tdg_vm_rd_wr(field_code, vm_id, local_data_ptr, true, wr_data, wr_mask, version);

}



api_error_type tdg_vm_rd(uint64_t requested_field_code, uint64_t vm_id, uint64_t version)

{

    tdx_module_local_t * local_data_ptr = get_local_data();

    md_field_id_t    field_code = { .raw = requested_field_code };



    return tdg_vm_rd_wr(field_code, vm_id, local_data_ptr, false, 0, 0, version);

}







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

 * @file common.c

 * @brief Common functions for TDX formal verification harnesses

 */



#include "accessors/data_accessors.h"



#include "fv_utils.h"

#include "fv_env.h"



void seam_call__exit_status_success() {

    TDXFV_ASSUME(get_local_data()->vmm_regs.rax == TDX_SUCCESS);

}



void seam_call__exit_status_unsuccess() {

    TDXFV_ASSUME(get_local_data()->vmm_regs.rax != TDX_SUCCESS);

}



void td_call__exit_status_success() {

    TDXFV_ASSUME(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);

}



void td_call__exit_status_unsuccess() {

    TDXFV_ASSUME(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax != TDX_SUCCESS);

}



void insert_cover_point() {

    TDXFV_ASSERT(false);

}

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

 * @file tdg_vm_wr_harness.c

 * @brief TDGVMRDWR API handler FV harness

 */



#include "tdx_td_api_handlers.h"

#include "tdx_basic_defs.h"

#include "tdx_basic_types.h"

#include "tdx_api_defs.h"

#include "auto_gen/tdx_error_codes_defs.h"

#include "data_structures/tdx_local_data.h"

#include "x86_defs/x86_defs.h"

#include "accessors/data_accessors.h"

#include "helpers/helpers.h"

#include "auto_gen/tdr_tdcs_fields_lookup.h"



#include "fv_utils.h"

#include "fv_env.h"



void tdg_vm_wr__call() {

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    tdx_leaf_and_version_t leaf_opcode = { .raw = tdx_local_data_ptr->td_regs.rax };

    

    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = tdg_vm_wr(

        tdx_local_data_ptr->td_regs.rdx,

        tdx_local_data_ptr->td_regs.rcx,

        tdx_local_data_ptr->td_regs.r8,

        tdx_local_data_ptr->td_regs.r9,

        leaf_opcode.version

    );

}



static inline void tdg_vm_wr__common_precond() {

    tdx_leaf_and_version_t leaf_opcode = { .raw = get_local_data()->td_regs.rax };

    TDXFV_ASSUME(leaf_opcode.leaf == TDG_VM_WR_LEAF);

}



static inline bool_t input_rcx_is_valid() {

    return (get_local_data()->td_regs.rcx == 0);

}



static inline bool_t input_field_id_is_valid() {

    md_field_id_t field_id = { .raw = get_local_data()->td_regs.rdx };

    return ((field_id.last_element_in_field == 0) && (field_id.last_field_in_sequence == 0));

}



static inline void tdg_vm_wr__common_postcond() {

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rax == shadow_td_regs_precall.rax);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rbx == shadow_td_regs_precall.rbx);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rcx == shadow_td_regs_precall.rcx);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rdx == shadow_td_regs_precall.rdx);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rsp == shadow_td_regs_precall.rsp);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rbp == shadow_td_regs_precall.rbp);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rsi == shadow_td_regs_precall.rsi);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.rdi == shadow_td_regs_precall.rdi);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r8 == shadow_td_regs_precall.r8);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r9 == shadow_td_regs_precall.r9);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r10 == shadow_td_regs_precall.r10);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r11 == shadow_td_regs_precall.r11);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r12 == shadow_td_regs_precall.r12);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r13 == shadow_td_regs_precall.r13);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r14 == shadow_td_regs_precall.r14);

    TDXFV_ASSERT(tdx_local_data_ptr->td_regs.r15 == shadow_td_regs_precall.r15);



    //tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbx == shadow_guest_gpr_state_precall.rbx);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rcx == shadow_guest_gpr_state_precall.rcx);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx == shadow_guest_gpr_state_precall.rdx);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsp == shadow_guest_gpr_state_precall.rsp);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbp == shadow_guest_gpr_state_precall.rbp);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsi == shadow_guest_gpr_state_precall.rsi);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdi == shadow_guest_gpr_state_precall.rdi);

    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8  == shadow_guest_gpr_state_precall.r8);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r9  == shadow_guest_gpr_state_precall.r9);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r10 == shadow_guest_gpr_state_precall.r10);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r11 == shadow_guest_gpr_state_precall.r11);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r12 == shadow_guest_gpr_state_precall.r12);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r13 == shadow_guest_gpr_state_precall.r13);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r14 == shadow_guest_gpr_state_precall.r14);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r15 == shadow_guest_gpr_state_precall.r15);



    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rax == shadow_vmm_regs_precall.rax);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rbx == shadow_vmm_regs_precall.rbx);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rcx == shadow_vmm_regs_precall.rcx);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdx == shadow_vmm_regs_precall.rdx);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsp == shadow_vmm_regs_precall.rsp);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rbp == shadow_vmm_regs_precall.rbp);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsi == shadow_vmm_regs_precall.rsi);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdi == shadow_vmm_regs_precall.rdi);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r8 == shadow_vmm_regs_precall.r8);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r9 == shadow_vmm_regs_precall.r9);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r10 == shadow_vmm_regs_precall.r10);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r11 == shadow_vmm_regs_precall.r11);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r12 == shadow_vmm_regs_precall.r12);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r13 == shadow_vmm_regs_precall.r13);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r14 == shadow_vmm_regs_precall.r14);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r15 == shadow_vmm_regs_precall.r15);

}



void tdg_vm_wr__expected__precond() {

    tdg_vm_wr__common_precond();

    TDXFV_ASSUME(

        input_rcx_is_valid() &&

        input_field_id_is_valid())

    ;

}



void tdg_vm_wr__expected__postcond() {

#ifdef TDXFV_CHECK_TDX_SUCCESS

    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);

#else

    TDXFV_ASSERT(true);

#endif

    tdg_vm_wr__common_postcond();

}



void tdg_vm_wr__unexpected__precond() {

    tdg_vm_wr__common_precond();

    TDXFV_ASSUME(!(

        input_rcx_is_valid() &&

        input_field_id_is_valid())

    );

}



void tdg_vm_wr__unexpected__postcond() {

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax != TDX_SUCCESS);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 == 0);

    tdg_vm_wr__common_postcond();

}



void tdg_vm_wr__unconstrained__precond() {

    tdg_vm_wr__common_precond();

    TDXFV_ASSUME(true);

}



// Keep the more specific test cases

void tdg_vm_wr__invalid_input_rcx__precond() {

    tdg_vm_wr__common_precond();

    TDXFV_ASSUME(

        !input_rcx_is_valid() &&

        input_field_id_is_valid()

    );

}



void tdg_vm_wr__invalid_input_rcx__postcond() {

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    TDXFV_ASSERT(

        (tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX)) ||

        ((tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax >> 32) == (TDX_OPERAND_BUSY >> 32))

    );

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 == 0);

    tdg_vm_wr__common_postcond();

}



void tdg_vm_wr__invalid_input_field_id__precond() {

    tdg_vm_wr__common_precond();

    TDXFV_ASSUME(

        input_rcx_is_valid() &&

        !input_field_id_is_valid()

    );

}



void tdg_vm_wr__invalid_input_field_id__postcond() {

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    TDXFV_ASSERT(

        (tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RDX)) ||

        ((tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax >> 32) == (TDX_OPERAND_BUSY >> 32))

    );

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 == 0);

    tdg_vm_wr__common_postcond();

}

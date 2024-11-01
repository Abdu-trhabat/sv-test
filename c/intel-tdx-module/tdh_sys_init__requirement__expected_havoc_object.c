// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// Copyright (C) 2023 Intel Corporation                                          
// SPDX-FileCopyrightText: 2024 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

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

 * @file tdh_sys_init_harness.c

 * @brief TDHSYSINIT API handler FV harness

 */

#include "tdx_basic_defs.h"

#include "tdx_basic_types.h"

#include "tdx_api_defs.h"

#include "tdx_vmm_api_handlers.h"

#include "auto_gen/tdx_error_codes_defs.h"



#include "data_structures/tdx_global_data.h"

#include "data_structures/loader_data.h"

#include "helpers/tdx_locks.h"

#include "helpers/helpers.h"

#include "x86_defs/x86_defs.h"

#include "accessors/ia32_accessors.h"

#include "accessors/data_accessors.h"

#include "helpers/virt_msr_helpers.h"



#include "helpers/smrrs.h"

#include "auto_gen/cpuid_configurations.h"



#include "fv_utils.h"

#include "fv_env.h"



void tdh_sys_init__common_precond() {

    tdx_module_local_t* local_data = get_local_data();

    tdx_leaf_and_version_t leaf_opcode;

    leaf_opcode.raw = local_data->vmm_regs.rax;

    TDXFV_ASSUME(leaf_opcode.leaf == TDH_SYS_INIT_LEAF);

}



void tdh_sys_init__invalid_input_rcx() {

    tdx_module_local_t* local_data = get_local_data();

    tdx_module_global_t* global_data = get_global_data();



    // Task-specific precondition

    TDXFV_ASSUME(local_data->vmm_regs.rcx != 0); // invalid input rcx

    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_PENDING);



    // Call ABI function

    local_data->vmm_regs.rax = tdh_sys_init();



    // Task-specific postcondition

    TDXFV_ASSERT(local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX));

    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);

    TDXFV_ASSERT(local_data->vmm_regs.rdx == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r8 == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);

}



void tdh_sys_init__invalid_state_sys_state() {

    tdx_module_local_t* local_data = get_local_data();

    tdx_module_global_t* global_data = get_global_data();



    // Task-specific precondition

    TDXFV_ASSUME(local_data->vmm_regs.rcx == 0);

    TDXFV_ASSUME(global_data->global_state.sys_state != SYSINIT_PENDING); // invalid system state



    // Call ABI function

    local_data->vmm_regs.rax = tdh_sys_init();



    // Task-specific postcondition

    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_SYS_INIT_NOT_PENDING);

    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);

    TDXFV_ASSERT(local_data->vmm_regs.rdx == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r8 == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);

}



void tdh_sys_init__invalid_entry() {

    tdx_module_local_t* local_data = get_local_data();

    tdx_module_global_t* global_data = get_global_data();



    // Task-specific precondition

    TDXFV_ASSUME(

        (local_data->vmm_regs.rcx != 0) ||

        (global_data->global_state.sys_state != SYSINIT_PENDING)

    );



    // Call ABI function

    local_data->vmm_regs.rax = tdh_sys_init();



    // Task-specific postcondition

    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);

    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);

    TDXFV_ASSERT(local_data->vmm_regs.rdx == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r8 == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);

    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);

}



void tdh_sys_init__valid_entry() {

    tdx_module_local_t* local_data = get_local_data();

    tdx_module_global_t* global_data = get_global_data();



    // Task-specific precondition

    TDXFV_ASSUME(

        (local_data->vmm_regs.rcx == 0) &&

        (global_data->global_state.sys_state == SYSINIT_PENDING)

    );



    // Call ABI function

    local_data->vmm_regs.rax = tdh_sys_init();



    // Task-specific postcondition

}



void tdh_sys_init__free_entry() {

    tdx_module_local_t* local_data = get_local_data();



    // Task-specific precondition



    // Call ABI function

    local_data->vmm_regs.rax = tdh_sys_init();



    // Task-specific postcondition

}



void tdh_sys_init__post_cover_success() {

    tdx_module_local_t* local_data = get_local_data();

    TDXFV_ASSUME(local_data->vmm_regs.rax == TDX_SUCCESS);



    TDXFV_ASSERT(false);

}



void tdh_sys_init__post_cover_unsuccess() {

    tdx_module_local_t* local_data = get_local_data();

    TDXFV_ASSUME(local_data->vmm_regs.rax != TDX_SUCCESS);



    TDXFV_ASSERT(false);

}



void tdh_sys_init__common_postcond() {

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



    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax == shadow_guest_gpr_state_precall.rax);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbx == shadow_guest_gpr_state_precall.rbx);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rcx == shadow_guest_gpr_state_precall.rcx);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx == shadow_guest_gpr_state_precall.rdx);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsp == shadow_guest_gpr_state_precall.rsp);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbp == shadow_guest_gpr_state_precall.rbp);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsi == shadow_guest_gpr_state_precall.rsi);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdi == shadow_guest_gpr_state_precall.rdi);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8  == shadow_guest_gpr_state_precall.r8);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r9  == shadow_guest_gpr_state_precall.r9);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r10 == shadow_guest_gpr_state_precall.r10);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r11 == shadow_guest_gpr_state_precall.r11);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r12 == shadow_guest_gpr_state_precall.r12);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r13 == shadow_guest_gpr_state_precall.r13);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r14 == shadow_guest_gpr_state_precall.r14);

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r15 == shadow_guest_gpr_state_precall.r15);



    //tdx_local_data_ptr->vmm_regs.rax

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rbx == shadow_vmm_regs_precall.rbx);

    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rcx == shadow_vmm_regs_precall.rcx);

    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdx == shadow_vmm_regs_precall.rdx);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsp == shadow_vmm_regs_precall.rsp);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rbp == shadow_vmm_regs_precall.rbp);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsi == shadow_vmm_regs_precall.rsi);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdi == shadow_vmm_regs_precall.rdi);

    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r8 == shadow_vmm_regs_precall.r8);

    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r9 == shadow_vmm_regs_precall.r9);

    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r10 == shadow_vmm_regs_precall.r10);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r11 == shadow_vmm_regs_precall.r11);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r12 == shadow_vmm_regs_precall.r12);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r13 == shadow_vmm_regs_precall.r13);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r14 == shadow_vmm_regs_precall.r14);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r15 == shadow_vmm_regs_precall.r15);

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



#include "fv_utils.h"

#include "fv_env.h"

#include "fv_nondets.h"





//

// TDX Module variables

//



tdx_module_local_t local_data_fv;

tdx_module_global_t global_data_fv;

sysinfo_table_t sysinfo_table_fv;



tdr_t tdr_fv;

tdcs_t tdcs_fv;

tdvps_t tdvps_fv;

tdmr_info_entry_t tdmr_info_fv[MAX_TDMRS];



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



void init_tdx_general() {

    // Initialize global variables with non-deterministic values

    TDXFV_NONDET_struct_tdx_module_local_t(&local_data_fv);

    TDXFV_NONDET_struct_tdx_module_global_t(&global_data_fv);

    TDXFV_NONDET_struct_sysinfo_table_t(&sysinfo_table_fv);



    TDXFV_NONDET_struct_tdr_t(&tdr_fv);

    TDXFV_NONDET_struct_tdcs_t(&tdcs_fv);

    TDXFV_NONDET_struct_tdvps_t(&tdvps_fv);

    for (int i = 0; i < MAX_TDMRS; i++) {

        TDXFV_NONDET_struct_tdmr_info_entry_t(&(tdmr_info_fv[i]));

    }



    TDXFV_NONDET_struct_gprs_state_t(&shadow_td_regs_precall);

    TDXFV_NONDET_struct_gprs_state_t(&shadow_vmm_regs_precall);

    TDXFV_NONDET_struct_gprs_state_t(&shadow_guest_gpr_state_precall);



    // Borrow init triggered by the first call of VMM dispatcher

    init_data_fast_ref_ptrs();



    tdx_module_local_t* local_data_ptr = get_local_data();



    TDXFV_ASSUME(local_data_ptr->local_data_fast_ref_ptr == &local_data_fv);

    TDXFV_ASSUME(local_data_ptr->sysinfo_fast_ref_ptr == &sysinfo_table_fv);

    TDXFV_ASSUME(local_data_ptr->global_data_fast_ref_ptr == &global_data_fv);

    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdr == &tdr_fv);

    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdvps == &tdvps_fv);

    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdcs == &tdcs_fv);



    tdx_module_global_t* global_data_ptr = get_global_data();

    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();



    // Ref: tdx_init_global_data()

    TDXFV_ASSUME(global_data_ptr->num_of_lps == sysinfo_table_ptr->mcheck_fields.tot_num_lps);

    TDXFV_ASSUME(global_data_ptr->num_of_pkgs == sysinfo_table_ptr->mcheck_fields.tot_num_sockets);



    // Ref: tdh_sys_init() - XXX not true for early-stage ABIs

    TDXFV_ASSUME(global_data_ptr->hkid_mask == BITS(MAX_PA - 1, global_data_ptr->hkid_start_bit));



    // Ref: associate_vcpu_initial()

    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdvps->management.last_seamdb_index == global_data_ptr->seamdb_index);

    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdvps->management.assoc_lpid == local_data_ptr->lp_info.lp_id);



    // Misc. modeling

    fv_is_called_by_host = TDXFV_NONDET_bool();

    fv_is_called_by_guest = TDXFV_NONDET_bool();

    tdxfv_abst_exception_init();

    tdxfv_abst_msr_init();

    tdxfv_abst_vcpu_init();

}



void init_vmm_dispatcher() {

    tdx_module_local_t* local_data = init_data_fast_ref_ptrs();

    tdx_module_global_t* global_data = get_global_data();

    tdx_leaf_and_version_t leaf_opcode;

    leaf_opcode.raw = local_data->vmm_regs.rax;



    // selected conditions from tdx_vmm_dispatcher

    TDXFV_ASSUME((leaf_opcode.reserved0 == 0) && (leaf_opcode.reserved1 == 0));

    TDXFV_ASSUME((leaf_opcode.version == 0) || (

        (leaf_opcode.leaf == TDH_MEM_PAGE_PROMOTE_LEAF) ||

        (leaf_opcode.leaf == TDH_MEM_SEPT_ADD_LEAF) ||

        (leaf_opcode.leaf == TDH_MEM_SEPT_REMOVE_LEAF) ||

        (leaf_opcode.leaf == TDH_MNG_RD_LEAF) ||

        (leaf_opcode.leaf == TDH_VP_RD_LEAF) ||

        (leaf_opcode.leaf == TDH_VP_INIT_LEAF)

    ));



    TDXFV_ASSUME((SYS_SHUTDOWN != global_data->global_state.sys_state) || 

        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF));



    TDXFV_ASSUME((global_data->global_state.sys_state == SYS_READY) ||

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



    // Shadow variables

    shadow_td_regs_precall= local_data->td_regs;

    shadow_vmm_regs_precall = local_data->vmm_regs;

    shadow_guest_gpr_state_precall = local_data->vp_ctx.tdvps->guest_state.gpr_state;

    fv_is_called_by_host = true;

    fv_is_called_by_guest = false;

}



void init_tdcall() {

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    // Selected ops/conditions from td dispatcher (pre tdcall)

    uint16_t vm_id = tdx_local_data_ptr->vp_ctx.tdvps->management.curr_vm;

    TDXFV_ASSUME((vm_id == tdx_local_data_ptr->current_td_vm_id) && (vm_id == 0));



    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;

    tdvps_ptr->guest_state.gpr_state.rax = tdx_local_data_ptr->td_regs.rax;

    tdvps_ptr->guest_state.gpr_state.rcx = tdx_local_data_ptr->td_regs.rcx;

    tdvps_ptr->guest_state.gpr_state.rdx = tdx_local_data_ptr->td_regs.rdx;

    tdvps_ptr->guest_state.gpr_state.rbx = tdx_local_data_ptr->td_regs.rbx;

    tdvps_ptr->guest_state.gpr_state.rbp = tdx_local_data_ptr->td_regs.rbp;

    tdvps_ptr->guest_state.gpr_state.rsi = tdx_local_data_ptr->td_regs.rsi;

    tdvps_ptr->guest_state.gpr_state.rdi = tdx_local_data_ptr->td_regs.rdi;

    tdvps_ptr->guest_state.gpr_state.r8  = tdx_local_data_ptr->td_regs.r8;

    tdvps_ptr->guest_state.gpr_state.r9  = tdx_local_data_ptr->td_regs.r9;

    tdvps_ptr->guest_state.gpr_state.r10 = tdx_local_data_ptr->td_regs.r10;

    tdvps_ptr->guest_state.gpr_state.r11 = tdx_local_data_ptr->td_regs.r11;

    tdvps_ptr->guest_state.gpr_state.r12 = tdx_local_data_ptr->td_regs.r12;

    tdvps_ptr->guest_state.gpr_state.r13 = tdx_local_data_ptr->td_regs.r13;

    tdvps_ptr->guest_state.gpr_state.r14 = tdx_local_data_ptr->td_regs.r14;

    tdvps_ptr->guest_state.gpr_state.r15 = tdx_local_data_ptr->td_regs.r15;



    // Selected ops/conditions from tdcall

    tdx_leaf_and_version_t leaf_opcode;

    leaf_opcode.raw = tdx_local_data_ptr->td_regs.rax;

    TDXFV_ASSUME((leaf_opcode.reserved0 == 0) && (leaf_opcode.reserved1 == 0));

    TDXFV_ASSUME((leaf_opcode.version == 0) || (leaf_opcode.leaf == TDG_VM_RD_LEAF));



    // Shadow variables

    shadow_td_regs_precall= tdx_local_data_ptr->td_regs;

    shadow_vmm_regs_precall = tdx_local_data_ptr->vmm_regs;

    shadow_guest_gpr_state_precall = tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state;

    fv_is_called_by_host = false;

    fv_is_called_by_guest = true;

}



void insert_error() {

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

 * @file td_vmcs_init.c

 * @brief Predefined init fields for TD's VMCS

 */

#include "x86_defs/vmcs_defs.h"

#include "accessors/vt_accessors.h"

#include "accessors/data_accessors.h"

#include "data_structures/td_vmcs_init.h"

#include "td_dispatcher/tdx_td_dispatcher.h"

#include "helpers/helpers.h"



const vmcs_fields_info_t td_vmcs_migrated_state_init_map[] = {



        // Guest Register State

        {.encoding = VMX_GUEST_DR7_ENCODE, .value = 0x00000400ULL},

        {.encoding = VMX_GUEST_RIP_ENCODE, .value = 0xFFFFFFF0ULL},

        {.encoding = VMX_GUEST_RFLAGS_ENCODE, .value = 0x00000002ULL},

        {.encoding = VMX_GUEST_CS_LIMIT_ENCODE, .value = 0xFFFFFFFFULL},

        {.encoding = VMX_GUEST_CS_ARBYTE_ENCODE, .value = 0x0000C09BULL},

        {.encoding = VMX_GUEST_DS_LIMIT_ENCODE, .value = 0xFFFFFFFFULL},

        {.encoding = VMX_GUEST_DS_ARBYTE_ENCODE, .value = 0x0000C093ULL},

        {.encoding = VMX_GUEST_ES_LIMIT_ENCODE, .value = 0xFFFFFFFFULL},

        {.encoding = VMX_GUEST_ES_ARBYTE_ENCODE, .value = 0x0000C093ULL},

        {.encoding = VMX_GUEST_FS_LIMIT_ENCODE, .value = 0xFFFFFFFFULL},

        {.encoding = VMX_GUEST_FS_ARBYTE_ENCODE, .value = 0x0000C093ULL},

        {.encoding = VMX_GUEST_GS_LIMIT_ENCODE, .value = 0xFFFFFFFFULL},

        {.encoding = VMX_GUEST_GS_ARBYTE_ENCODE, .value = 0x0000C093ULL},

        {.encoding = VMX_GUEST_SS_LIMIT_ENCODE, .value = 0xFFFFFFFFULL},

        {.encoding = VMX_GUEST_SS_ARBYTE_ENCODE, .value = 0x0000C093ULL},

        {.encoding = VMX_GUEST_LDTR_LIMIT_ENCODE, .value = 0x0000FFFFULL},

        {.encoding = VMX_GUEST_LDTR_ARBYTE_ENCODE, .value = 0x00010082ULL},

        {.encoding = VMX_GUEST_TR_LIMIT_ENCODE, .value = 0x0000FFFFULL},

        {.encoding = VMX_GUEST_TR_ARBYTE_ENCODE, .value = 0x0000008BULL},

        {.encoding = VMX_GUEST_GDTR_LIMIT_ENCODE, .value = 0x0000FFFFULL},



        // Guest MSR

        {.encoding = VMX_GUEST_IA32_PERF_GLOBAL_CONTROL_FULL_ENCODE, .value = 0xFFULL},

        {.encoding = VMX_GUEST_IA32_PAT_FULL_ENCODE, .value = 0x0007040600070406ULL},

        {.encoding = VMX_GUEST_IA32_EFER_FULL_ENCODE, .value = 0x901ULL},



        {.encoding = (uint64_t)-1, .value = 0} // indicates last index

};



const vmcs_fields_info_t td_vmcs_non_migrated_state_init_map[] = {



        // Guest Register State - these two needs to initialized on import

        {.encoding = VMX_GUEST_CR0_ENCODE, .value = 0x0021ULL},

        {.encoding = VMX_GUEST_CR4_ENCODE, .value = 0x2040ULL},



        // Controls for APIC Virtualization

        {.encoding = VMX_VIRTUAL_APIC_ACCESS_PAGE_ADDRESS_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_POSTED_INTERRUPT_NOTIFICATION_VECTOR_ENCODE, .value = 0xFFFFULL},

        {.encoding = VMX_POSTED_INTERRUPT_DESCRIPTOR_ADDRESS_FULL_ENCODE, .value = (uint64_t)-1},



        // VM-Execution Control

        {.encoding = VMX_EXCEPTION_BITMAP_ENCODE, .value = BIT(18)}, // Bit 18 (MCE) is set to 1

        {.encoding = VMX_IO_BITMAP_A_PHYPTR_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_IO_BITMAP_B_PHYPTR_FULL_ENCODE, .value = (uint64_t)-1},



        {.encoding = VMX_EPTP_LIST_ADDRESS_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_VMREAD_BITMAP_ADDRESS_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_VMWRITE_BITMAP_ADDRESS_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_ENCLS_EXIT_CONTROL_FULL_ENCODE, .value = (BIT(63) - BIT(0) + BIT(63))},

        {.encoding = VMX_ENCLV_EXIT_CONTROL_FULL_ENCODE, .value = (BIT(63) - BIT(0) + BIT(63))},



        {.encoding = VMX_PML_LOG_ADDRESS_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_PCONFIG_EXITING_FULL_ENCODE, .value = (BIT(63) - BIT(0) + BIT(63))},

        {.encoding = VMX_OSV_CVP_FULL_ENCODE, .value = (uint64_t)-1},



        // VM-Exit Controls for MSRs

        {.encoding = VMX_EXIT_MSR_STORE_PHYPTR_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_EXIT_MSR_LOAD_PHYPTR_FULL_ENCODE, .value = (uint64_t)-1},



        // VM-Entry Controls

        {.encoding = VMX_ENTRY_MSR_LOAD_PHYPTR_FULL_ENCODE, .value = (uint64_t)-1},



        // Guest Non-Register State

        {.encoding = VMX_GUEST_SAVED_WORKING_VMCS_POINTER_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_GUEST_PDPTR0_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_GUEST_PDPTR1_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_GUEST_PDPTR2_FULL_ENCODE, .value = (uint64_t)-1},

        {.encoding = VMX_GUEST_PDPTR3_FULL_ENCODE, .value = (uint64_t)-1},



        {.encoding = (uint64_t)-1, .value = 0} // indicates last index

};





_STATIC_INLINE_ void read_vmcs_field_info(uint64_t encoding, vmcs_fields_info_t *fields_info)

{

    fields_info->encoding = encoding;

    ia32_vmread(fields_info->encoding, &fields_info->value);

}



void save_vmcs_non_lp_host_fields(vmcs_host_values_t* host_fields_ptr)

{

    read_vmcs_field_info(VMX_HOST_CR0_ENCODE, &host_fields_ptr->CR0);

    read_vmcs_field_info(VMX_HOST_CR3_ENCODE, &host_fields_ptr->CR3);

    read_vmcs_field_info(VMX_HOST_CR4_ENCODE, &host_fields_ptr->CR4);

    read_vmcs_field_info(VMX_HOST_CS_SELECTOR_ENCODE, &host_fields_ptr->CS);

    read_vmcs_field_info(VMX_HOST_SS_SELECTOR_ENCODE, &host_fields_ptr->SS);

    read_vmcs_field_info(VMX_HOST_FS_SELECTOR_ENCODE, &host_fields_ptr->FS);

    read_vmcs_field_info(VMX_HOST_GS_SELECTOR_ENCODE, &host_fields_ptr->GS);

    read_vmcs_field_info(VMX_HOST_TR_SELECTOR_ENCODE, &host_fields_ptr->TR);

    read_vmcs_field_info(VMX_HOST_IA32_S_CET_ENCODE, &host_fields_ptr->IA32_S_CET);

    read_vmcs_field_info(VMX_HOST_IA32_PAT_FULL_ENCODE, &host_fields_ptr->IA32_PAT);

    read_vmcs_field_info(VMX_HOST_IA32_EFER_FULL_ENCODE, &host_fields_ptr->IA32_EFER);

    read_vmcs_field_info(VMX_HOST_FS_BASE_ENCODE, &host_fields_ptr->FS_BASE);

    read_vmcs_field_info(VMX_HOST_IDTR_BASE_ENCODE, &host_fields_ptr->IDTR_BASE);

    read_vmcs_field_info(VMX_HOST_GDTR_BASE_ENCODE, &host_fields_ptr->GDTR_BASE);

}



static void init_td_vmcs_non_lp_host_fields(vmcs_host_values_t* host_fields_ptr)

{

    ia32_vmwrite(host_fields_ptr->CR0.encoding, host_fields_ptr->CR0.value);

    ia32_vmwrite(host_fields_ptr->CR3.encoding, host_fields_ptr->CR3.value);

    ia32_vmwrite(host_fields_ptr->CR4.encoding, host_fields_ptr->CR4.value);

    ia32_vmwrite(host_fields_ptr->CS.encoding, host_fields_ptr->CS.value);

    ia32_vmwrite(host_fields_ptr->SS.encoding, host_fields_ptr->SS.value);

    ia32_vmwrite(host_fields_ptr->FS.encoding, host_fields_ptr->FS.value);

    ia32_vmwrite(host_fields_ptr->GS.encoding, host_fields_ptr->GS.value);

    ia32_vmwrite(host_fields_ptr->TR.encoding, host_fields_ptr->TR.value);

    ia32_vmwrite(host_fields_ptr->IA32_S_CET.encoding, host_fields_ptr->IA32_S_CET.value);

    ia32_vmwrite(host_fields_ptr->IA32_PAT.encoding, host_fields_ptr->IA32_PAT.value);

    ia32_vmwrite(host_fields_ptr->IA32_EFER.encoding, host_fields_ptr->IA32_EFER.value);

    ia32_vmwrite(host_fields_ptr->FS_BASE.encoding, host_fields_ptr->FS_BASE.value);

    ia32_vmwrite(host_fields_ptr->IDTR_BASE.encoding, host_fields_ptr->IDTR_BASE.value);

    ia32_vmwrite(host_fields_ptr->GDTR_BASE.encoding, host_fields_ptr->GDTR_BASE.value);

}



void init_guest_td_address_fields(tdr_t* tdr_ptr, tdvps_t* tdvps_ptr, uint16_t curr_hkid, uint16_t vm_id)

{

    // L2 VMCS init

    if (vm_id > 0)

    {

        ia32_vmwrite(VMX_VIRTUAL_APIC_PAGE_ADDRESS_FULL_ENCODE, NULL_PA);

        ia32_vmwrite(VMX_MSR_BITMAP_PHYPTR_FULL_ENCODE, tdvps_ptr->management.tdvps_pa[get_tdvps_msr_bitmap_index(vm_id)]);

        ia32_vmwrite(VMX_VIRTUAL_EXCEPTION_INFO_ADDRESS_FULL_ENCODE, NULL_PA);

    }

    else // L1 VMCS init

    {

        ia32_vmwrite(VMX_VIRTUAL_APIC_PAGE_ADDRESS_FULL_ENCODE, tdvps_ptr->management.tdvps_pa[TDVPS_VAPIC_PAGE_INDEX]);

        ia32_vmwrite(VMX_MSR_BITMAP_PHYPTR_FULL_ENCODE, tdr_ptr->management_fields.tdcx_pa[MSR_BITMAPS_PAGE_INDEX]);

        ia32_vmwrite(VMX_VIRTUAL_EXCEPTION_INFO_ADDRESS_FULL_ENCODE, tdvps_ptr->management.tdvps_pa[TDVPS_VE_INFO_PAGE_INDEX]);

    }



    // Set all to TDCS Zero Page

    ia32_vmwrite(VMX_PASID_LOW_FULL_ENCODE, tdr_ptr->management_fields.tdcx_pa[ZERO_PAGE_INDEX]);

    ia32_vmwrite(VMX_PASID_HIGH_FULL_ENCODE, tdr_ptr->management_fields.tdcx_pa[ZERO_PAGE_INDEX]);

    ia32_vmwrite(VMX_GUEST_SHARED_EPT_POINTER_FULL_ENCODE, tdr_ptr->management_fields.tdcx_pa[ZERO_PAGE_INDEX]);



    ia32_vmwrite(VMX_HKID_ENCODE, curr_hkid);

}



static void init_td_vmcs_exec_control_field(tdcs_t * tdcs_ptr, uint16_t vm_id)

{

    td_vmcs_values_t* td_vmcs_values_ptr = vm_id ? &get_global_data()->l2_vmcs_values :

                                                   &get_global_data()->td_vmcs_values;



    uint32_t vmexit_controls_vector = td_vmcs_values_ptr->exit_ctls;

    uint32_t vmentry_controls_vector = td_vmcs_values_ptr->entry_ctls;

    uint32_t pin_based_execution_controls = td_vmcs_values_ptr->pinbased_ctls;

    vmx_procbased_ctls_t processor_based_execution_controls = { .raw = td_vmcs_values_ptr->procbased_ctls };

    vmx_procbased_ctls2_t sec_proc_based_execution_controls = { .raw = td_vmcs_values_ptr->procbased_ctls2 };

    vmx_procbased_ctls3_t ter_proc_based_execution_controls = { .raw = td_vmcs_values_ptr->procbased_ctls3 };



    // Fixed bits already set in tdh_sys_init



    // Conditional bits:



    if (tdcs_ptr->executions_ctl_fields.attributes.perfmon || tdcs_ptr->executions_ctl_fields.attributes.debug)

    {

        vmexit_controls_vector  |= (uint32_t)1 << VMCS_EXIT_LOAD_PERF_GLBL_CTRL_BIT_LOCATION;

        vmexit_controls_vector  |= (uint32_t)1 << VMCS_EXIT_SAVE_PERF_GLBL_CTRL_BIT_LOCATION;



        vmentry_controls_vector |= (uint32_t)1 << VMCS_ENTRY_LOAD_PERF_GLBL_CTRL_BIT_LOCATION;

    }

    else

    {

        vmexit_controls_vector  &= ~((uint32_t)1 << VMCS_EXIT_LOAD_PERF_GLBL_CTRL_BIT_LOCATION);

        vmexit_controls_vector  &= ~((uint32_t)1 << VMCS_EXIT_SAVE_PERF_GLBL_CTRL_BIT_LOCATION);



        vmentry_controls_vector &= ~((uint32_t)1 << VMCS_ENTRY_LOAD_PERF_GLBL_CTRL_BIT_LOCATION);

    }



    if (tdcs_ptr->executions_ctl_fields.attributes.pks || tdcs_ptr->executions_ctl_fields.attributes.debug)

    {

        vmentry_controls_vector |= (uint32_t) 1 << VMCS_ENTRY_LOAD_PKRS_BIT_LOCATION;

    }

    else

    {

        vmentry_controls_vector &= ~((uint32_t) 1 << VMCS_ENTRY_LOAD_PKRS_BIT_LOCATION);

    }



    processor_based_execution_controls.mwait_exiting = ~tdcs_ptr->executions_ctl_fields.cpuid_flags.monitor_mwait_supported;

    processor_based_execution_controls.rdpmc_exiting = ~tdcs_ptr->executions_ctl_fields.attributes.perfmon;

    processor_based_execution_controls.monitor_exiting = ~tdcs_ptr->executions_ctl_fields.cpuid_flags.monitor_mwait_supported;



    sec_proc_based_execution_controls.en_guest_wait_pause = tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported;

    sec_proc_based_execution_controls.en_pconfig = tdcs_ptr->executions_ctl_fields.cpuid_flags.pconfig_supported;



    ter_proc_based_execution_controls.gpaw = tdcs_ptr->executions_ctl_fields.gpaw;



    if (get_global_data()->ddpd_supported != tdcs_ptr->executions_ctl_fields.cpuid_flags.ddpd_supported)

    {

        ter_proc_based_execution_controls.virt_ia32_spec_ctrl = 1;

    }



    ia32_vmwrite(VMX_VM_EXIT_CONTROL_ENCODE, vmexit_controls_vector);

    ia32_vmwrite(VMX_VM_ENTRY_CONTROL_ENCODE, vmentry_controls_vector);

    ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_PIN_BASED_ENCODE, pin_based_execution_controls);

    ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, processor_based_execution_controls.raw);

    ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_SECONDARY_PROC_BASED_ENCODE, sec_proc_based_execution_controls.raw);

    ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_TERTIARY_PROC_BASED_FULL_ENCODE, ter_proc_based_execution_controls.raw);

}



void init_module_lp_host_state_in_td_vmcs(tdx_module_local_t* ld_p)

{

    // Init LP-dependant state

    ia32_vmwrite(VMX_HOST_RSP_ENCODE, ld_p->host_rsp);

    ia32_vmwrite(VMX_HOST_SSP_ENCODE, ld_p->host_ssp);

    ia32_vmwrite(VMX_HOST_GS_BASE_ENCODE, ld_p->host_gs_base);

}



void init_module_host_state_in_td_vmcs(void)

{

    init_td_vmcs_non_lp_host_fields(&get_global_data()->seam_vmcs_host_values);



    init_module_lp_host_state_in_td_vmcs(get_local_data());



    void (*td_entry_func_ptr)(void) = tdx_tdexit_entry_point;

    ia32_vmwrite(VMX_HOST_RIP_ENCODE, (uint64_t)td_entry_func_ptr);

}



static void init_tdcs_dependent_fields_in_vmcs(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, uint16_t vm_id)

{

    uint64_t bitmap = 0;



    // Exec control fields

    init_td_vmcs_exec_control_field(tdcs_ptr, vm_id);



    // Other exec-control fields:

    // TSC multiplier

    ia32_vmwrite(VMX_TSC_MULTIPLIER_FULL_ENCODE, tdcs_ptr->executions_ctl_fields.tsc_multiplier);



    // TSC offset

    ia32_vmwrite(VMX_TSC_OFFSET_FULL_ENCODE, tdcs_ptr->executions_ctl_fields.tsc_offset);



    // EPTP

    if (vm_id == 0)

    {

        pa_t eptp_raw = set_hkid_to_pa((pa_t)tdcs_ptr->executions_ctl_fields.eptp.raw, 0);

        ia32_vmwrite(VMX_GUEST_EPT_POINTER_FULL_ENCODE, eptp_raw.raw);

    }

    else

    {

        ia32e_eptp_t l2_eptp = get_l2_septp(tdr_ptr, tdcs_ptr, vm_id);

        ia32_vmwrite(VMX_GUEST_EPT_POINTER_FULL_ENCODE, l2_eptp.raw);

    }



    /** L1 CR0 Guest/Host Mask

     * The following bits are set to 1 : PE (0), NE (5), NW (29), CD (30)

     * Any bit set to 1 in IA32_VMX_CR0_FIXED0 (i.e., bit whose value must be 1)), 

     * except for PG(31) which is set to 0, since the guest TD run as an unrestricted guest.

     * Any bit set to 0 in IA32_VMX_CR0_FIXED1 (i.e., bit whose value must be 0).

     * Bits known to TDX-SEAM as reserved (TDX1:  bits 63-32, 28-19, 17 and 15-6)

     * All other bits are cleared to 0

     */

    uint64_t ia32_vmx_cr0_fixed0 = get_global_data()->plt_common_config.ia32_vmx_cr0_fixed0.raw;

    uint64_t ia32_vmx_cr0_fixed1 = get_global_data()->plt_common_config.ia32_vmx_cr0_fixed1.raw;

    

    if (vm_id == 0)

    {

        bitmap = (ia32_vmx_cr0_fixed0 | (~ia32_vmx_cr0_fixed1)) & (~BIT(31));

        bitmap = bitmap | BIT(0) | (BIT(5) | BIT(29) | BIT(30) |

                 BITS(63,32) | BITS(28,19) | BIT(17) | BITS(15,6));



        ia32_vmwrite(VMX_CR0_GUEST_HOST_MASK_ENCODE, bitmap);

    }

    else

    {

        ia32_vmwrite(VMX_CR0_GUEST_HOST_MASK_ENCODE, ~(0ULL));

    }





    /** L1 CR0 Read Shadow

     * The following bits are set to 1: PE (0), NE (5)

     * Any bit set to 1 in IA32_VMX_CR0_FIXED0 (i.e., bit whose value must be 1)

     * All other bits are cleared to 0

     */

    if (vm_id == 0)

    {

        bitmap = ia32_vmx_cr0_fixed0 | (BIT(0) | BIT(5));

    }

    else

    {

        bitmap = BIT(0) | BIT(5);

    }



    ia32_vmwrite(VMX_CR0_READ_SHADOW_ENCODE, bitmap);



    /** L1 CR4 Guest/Host Mask

     * Bits MCE (6), VMXE (13) and SMXE (14) are always set to 1

     * Bit PKE (22) is set to ~TDCS.XFAM[9]

     * bit CET (23) is cleared to 0 if TDCS.XFAM[12:11] is 11. Otherwise, bit CET (23) is set to 1

     * Bit UINT (25) is set ~TDCS.XFAM[14] if ULI is not enabled

     * Bit KL (19) is set to ~TDCS.ATTRIBUTES.KL if KeyLocker is not enabled.

     * Bit PKS (24) is set to ~TDCS.ATTRIBUTES.PKS if PKS is not enabled.

     * Any bit set to 1 in IA32_VMX_CR4_FIXED0 is set to 1

     * Any bit set to 0 in IA32_VMX_CR4_FIXED1 is set to 1

     * Reserved bits (15 and 63-26) are set to 1

     * All other bits are cleared to 0

     */

    uint64_t ia32_vmx_cr4_fixed0 = get_global_data()->plt_common_config.ia32_vmx_cr4_fixed0.raw;

    uint64_t ia32_vmx_cr4_fixed1 = get_global_data()->plt_common_config.ia32_vmx_cr4_fixed1.raw;



    if (vm_id == 0)

    {

        bitmap = ia32_vmx_cr4_fixed0 | (~ia32_vmx_cr4_fixed1);

        bitmap = bitmap | (BIT(6) | BIT(13) | BIT(14) | BIT(15) | BIT(26) | BITS(31,29) | BITS(63,33));

        if ((tdcs_ptr->executions_ctl_fields.xfam & BIT(9)) == 0)

        {

            bitmap |= BIT(22);

        }

        if ((tdcs_ptr->executions_ctl_fields.xfam & BITS(12,11)) != BITS(12,11))

        {

            bitmap |= BIT(23);

        }

        if ((tdcs_ptr->executions_ctl_fields.xfam & BIT(14)) == 0)

        {

            bitmap |= BIT(25);

        }

        if (!tdcs_ptr->executions_ctl_fields.attributes.kl)

        {

            bitmap |= BIT(19);

        }

        if (!tdcs_ptr->executions_ctl_fields.attributes.pks)

        {

            bitmap |= BIT(24);

        }

        if (!tdcs_ptr->executions_ctl_fields.attributes.lass)

        {

            bitmap |= BIT(27);

        }



        ia32_vmwrite(VMX_CR4_GUEST_HOST_MASK_ENCODE, bitmap);

    }

    else

    {

        ia32_vmwrite(VMX_CR4_GUEST_HOST_MASK_ENCODE, ~(0ULL));

    }



    /** L1 CR4 Read Shadow

         * Bit MCE (6) is set to 1.

         * Bit VMXE (13) is cleared to 0.

         * Any other bit whose value is set to 1 in IA32_VMX_CR4_FIXED0 (i.e., a bit whose value must be 1) is set to 1.

         * All other bits are cleared to 0

         */

    if (vm_id == 0)

    {

        bitmap = (ia32_vmx_cr4_fixed0 & ~BIT(13)) | BIT(6);

    }

    else

    {

        bitmap = BIT(6) | BIT(13);

    }

    

    ia32_vmwrite(VMX_CR4_READ_SHADOW_ENCODE, bitmap);



    if (get_global_data()->plt_common_config.ia32_vmx_procbased_ctls3.virt_ia32_spec_ctrl)

    {

        // Set IA32_SPEC_CTRL Mask to tdcs_p->IA32_SPEC_CTRL_MASK.

        ia32_vmwrite(VMX_IA32_SPEC_CTRL_MASK, tdcs_ptr->executions_ctl_fields.ia32_spec_ctrl_mask);

    }

}



static void init_tdvps_shadow_masks(tdvps_t* tdvps_ptr, uint16_t vm_id)

{

    if (vm_id == 0)

    {

        uint64_t val = 0;



        tdvps_ptr->management.shadow_cr0_guest_host_mask[0] = (ia32_vmread(VMX_CR0_GUEST_HOST_MASK_ENCODE, &val), val);

        tdvps_ptr->management.shadow_cr0_read_shadow[0] = (ia32_vmread(VMX_CR0_READ_SHADOW_ENCODE, &val), val);

        tdvps_ptr->management.shadow_cr4_guest_host_mask[0] = (ia32_vmread(VMX_CR4_GUEST_HOST_MASK_ENCODE, &val), val);

        tdvps_ptr->management.shadow_cr4_read_shadow[0] = (ia32_vmread(VMX_CR4_READ_SHADOW_ENCODE, &val), val);

    }

    else

    {

        tdvps_ptr->management.shadow_cr0_guest_host_mask[vm_id] = ~(0ULL);

        tdvps_ptr->management.shadow_cr0_read_shadow[vm_id] = 0;

        tdvps_ptr->management.shadow_cr4_guest_host_mask[vm_id] = ~(0ULL);

        tdvps_ptr->management.shadow_cr4_read_shadow[vm_id] = 0;

    }

}



void init_td_vmcs(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, tdvps_t* tdvps_ptr, bool_t init_on_import, uint16_t vm_id)

{

    uint32_t index = 0;

    vmx_procbased_ctls2_t procbased_ctls2 = {.raw = get_global_data()->td_vmcs_values.procbased_ctls2};



    if (!init_on_import)

    {

        while (td_vmcs_migrated_state_init_map[index].encoding != (uint64_t)(-1))

        {

            ia32_vmwrite(td_vmcs_migrated_state_init_map[index].encoding, td_vmcs_migrated_state_init_map[index].value);

            index++;

        }



        index = 0;

    }



    while (td_vmcs_non_migrated_state_init_map[index].encoding != (uint64_t)(-1))

    {

        if (td_vmcs_non_migrated_state_init_map[index].encoding != VMX_ENCLV_EXIT_CONTROL_FULL_ENCODE ||

            procbased_ctls2.en_enclv_exiting == 1)

        {

            ia32_vmwrite(td_vmcs_non_migrated_state_init_map[index].encoding, td_vmcs_non_migrated_state_init_map[index].value);

        }

        index++;

    }



    /**

     *  Initialize TD VMCS host fields

     */

    init_module_host_state_in_td_vmcs();



    /**

     * Initialize TD address fields

     */

    init_guest_td_address_fields(tdr_ptr, tdvps_ptr, tdr_ptr->key_management_fields.hkid, vm_id);



    /**

     *  Initialize/Update fields which depend on TDCS/TDR values

     */

    init_tdcs_dependent_fields_in_vmcs(tdr_ptr, tdcs_ptr, vm_id);



    // Init shadow mask fields in TDVPS

    init_tdvps_shadow_masks(tdvps_ptr, vm_id);



    /**

     * VPID

     * Set by TDX-SEAM on TDHVPINIT to the sequential index of the VCPU

     */

    uint16_t vpid = compose_vpid(vm_id, tdr_ptr->key_management_fields.hkid);

    ia32_vmwrite(VMX_GUEST_VPID_ENCODE, vpid);

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

 * @file tdg_vp_invept.c

 * @brief TDGVPINVVPID API handler

 */

#include "tdx_td_api_handlers.h"

#include "tdx_basic_defs.h"

#include "tdx_basic_types.h"

#include "tdx_api_defs.h"

#include "accessors/data_accessors.h"

#include "accessors/vt_accessors.h"

#include "auto_gen/tdx_error_codes_defs.h"

#include "x86_defs/vmcs_defs.h"

#include "x86_defs/x86_defs.h"

#include "data_structures/tdx_local_data.h"

#include "helpers/helpers.h"

#include "data_structures/td_vmcs_init.h"



// Execute INVVPID on the GLA range specified by the GLA list entry

static api_error_type invvpid_gla_list_entry(gla_list_entry_t gla_list_entry, uint16_t vpid)

{

    gla_list_entry_t  la;

    invvpid_descriptor_t   descriptor;



    descriptor.raw_low = 0;

    descriptor.vpid = vpid;



    la.raw = gla_list_entry.raw;

    la.last_gla_index = 0;



    for (uint32_t i = 0; i <= gla_list_entry.last_gla_index; i++)

    {

        descriptor.la = la.raw;



        if (!ia32_invvpid(&descriptor, INVVPID_INDIVIDUAL_ADDRESS))

        {

            TDX_ERROR("ia32_invvpid failure due to bad LA - 0x%llx\n", la.raw);

            return TDX_GLA_NOT_CANONICAL;

        }



        la.base_gla++;

    }



    return TDX_SUCCESS;

}



typedef union vm_and_flags_u

{

    struct

    {

        uint64_t list           : 1;    // Bit 0 - used for TDG_VP_ENTER input

        uint64_t reserved0      : 51;   // Bits 51:1

        uint64_t vm             : 2;    // Bits 52:53

        uint64_t reserved1      : 10;   // Bits 54:63

    };



    uint64_t raw;

} vm_and_flags_t;

tdx_static_assert(sizeof(vm_and_flags_t) == 8, vm_and_flags_t);



api_error_type tdg_vp_invvpid(uint64_t flags, uint64_t entry_or_list, bool_t* interrupt_occurred)

{

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    tdr_t*   tdr_p   = tdx_local_data_ptr->vp_ctx.tdr;

    tdcs_t*  tdcs_p  = tdx_local_data_ptr->vp_ctx.tdcs;

    tdvps_t* tdvps_p = tdx_local_data_ptr->vp_ctx.tdvps;



    gla_list_info_t   gla_list_info;

    gla_list_entry_t  gla_list_entry;

    gla_list_entry_t* gla_list_p = NULL;

    pa_t                   gla_list_gpa;



    uint16_t               vm_id;

    uint16_t               vpid;

    bool_t                 interrupt_pending = false;

    api_error_type         return_val = TDX_OPERAND_INVALID;



    vm_and_flags_t vm_and_flags = { .raw = flags };



    vm_id = vm_and_flags.vm;

    if ((vm_id == 0) || (vm_id > tdcs_p->management_fields.num_l2_vms)

                     || (vm_and_flags.reserved0 != 0) || (vm_and_flags.reserved1 != 0))

    {

        return api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX);

    }



    vpid = compose_vpid(vm_and_flags.vm, tdr_p->key_management_fields.hkid);

    tdx_debug_assert(vpid != 0);



    if (vm_and_flags.list == 0)

    {

        // Process a single entry

        gla_list_entry.raw = entry_or_list;

        return_val = invvpid_gla_list_entry(gla_list_entry, vpid);

        if (return_val != TDX_SUCCESS)

        {

            goto EXIT;

        }

    }

    else

    {

        // Process a list of entries

        gla_list_info.raw = entry_or_list;

        if (gla_list_info.reserved_0 || gla_list_info.reserved_1 ||

            ((gla_list_info.first_entry + gla_list_info.num_entries) > PAGE_GLA_LIST_MAX_ENTRIES))

        {

            TDX_ERROR("Incorrect GLA list info - 0x%llx\n", gla_list_info.raw);

            return api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RDX);

        }



        gla_list_gpa.raw = 0;

        gla_list_gpa.page_4k_num = gla_list_info.list_gpa;



        // Verify that GPA is a valid private GPA

        // Translate the GPA; this may result in an EPT violation TD exit or a #VE

        return_val = check_walk_and_map_guest_side_gpa(tdcs_p,

                                                       tdvps_p,

                                                       gla_list_gpa,

                                                       tdr_p->key_management_fields.hkid,

                                                       TDX_RANGE_RO,

                                                       PRIVATE_ONLY,

                                                       (void **)&gla_list_p);

        if (return_val != TDX_SUCCESS)

        {

            TDX_ERROR("GLA list GPA is not a valid private GPA - 0x%llx\n", gla_list_gpa.raw);

            return api_error_with_operand_id(return_val, OPERAND_ID_RDX);

        }



        while ((gla_list_info.num_entries > 0) && !interrupt_pending)

        {

            // Process a single entry

            return_val = invvpid_gla_list_entry(gla_list_p[gla_list_info.first_entry], vpid);

            if (return_val != TDX_SUCCESS)

            {

                goto EXIT;

            }



            // Move to the next entry

            gla_list_info.first_entry++;

            gla_list_info.num_entries--;



            // Check for a pending interrupt

            if (is_interrupt_pending_guest_side())

            {

                interrupt_pending = true;

            }

        }



        tdvps_p->guest_state.gpr_state.rdx = gla_list_info.raw;

    }



EXIT:



    *interrupt_occurred = interrupt_pending;



    if (gla_list_p != NULL)

    {

        free_la(gla_list_p);

    }



    return return_val;

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

 * @file tdh_sys_init.c

 * @brief TDHSYSINIT API handler

 */

#include "tdx_basic_defs.h"

#include "tdx_basic_types.h"

#include "tdx_api_defs.h"

#include "tdx_vmm_api_handlers.h"

#include "auto_gen/tdx_error_codes_defs.h"



#include "data_structures/tdx_global_data.h"

#include "data_structures/loader_data.h"

#include "helpers/tdx_locks.h"

#include "helpers/helpers.h"

#include "x86_defs/x86_defs.h"

#include "accessors/ia32_accessors.h"

#include "accessors/data_accessors.h"

#include "helpers/virt_msr_helpers.h"



#include "helpers/smrrs.h"

#include "auto_gen/cpuid_configurations.h"



/*

 * check_allowed_vmx_ctls

 */

_STATIC_INLINE_ bool_t check_allowed_vmx_ctls(uint32_t* dest,

                                              ia32_vmx_allowed_bits_t src,

                                              uint32_t init,

                                              uint32_t variable_mask,

                                              uint32_t unknown_mask)

{

    // Sanity check on the MSR values returned by the CPU:

    // Any bit can't be both fixed-1 (bits that are 1 in NOT_ALLOWED0) and fixed-0 (bits that are 0 in ALLOWED1)

    tdx_sanity_check((src.not_allowed0 & ~src.allowed1) == 0, SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 0);



    // Sanity check on the TDX-SEAM module's constants:

    // Any unknown bits must be 0 in the init value and must not be variable

    tdx_sanity_check(((init | variable_mask) & unknown_mask) == 0,

                     SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 1);



    // Check bits that are fixed-1 (bits that are 1 in NOT_ALLOWED0).

    // Any fixed-1 bit must be initialized to 1.  For this check, ignore bits in the init value that are unknown.

    // Per Intel SDM:

    // Bits 31:0 indicate the allowed 0-settings of these controls.

    // VM entry allows control X to be 0 if bit X in the MSR is cleared to 0;

    // if bit X in the MSR is set to 1, VM entry fails if control X is 0.

    if ((src.not_allowed0 & ~(init | unknown_mask)) != 0)

    {

        return false;

    }



    // Check bits that are fixed-0 (bits that are 0 in ALLOWED1).

    // Any fixed-0 bit must be initialized to 0.

    // Per Intel SDM:

    // Bits 63:32 indicate the allowed 1-settings of these controls.

    // VM entry allows control X to be 1 if bit 32+X in the MSR is set to 1;

    // if bit 32+X in the MSR is cleared to 0, VM entry fails if control X is 1.

    if ((~src.allowed1 & init) != 0)

    {

        return false;

    }



    // Any fixed-1 bit (that is 1 in NOT_ALLOWED0) or fixed-0 bit (that is 0 in ALLOWED1) must not be variable

    if (((src.not_allowed0 | ~src.allowed1) & variable_mask) != 0)

    {

        return false;

    }



    // Return the value used for initializing the TD VMCS field (incl. unknown bits) Set fixed-1 (NOT_ALLOWED0) bits to 1.

    *dest = (init | src.not_allowed0);



    return true;

}



_STATIC_INLINE_ bool_t check_allowed64_vmx_ctls(uint64_t not_allowed0, uint64_t allowed1,

                                                uint64_t init, uint64_t variable_mask)

{

    tdx_sanity_check((not_allowed0 & ~allowed1) == 0, SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 2);



    if ((not_allowed0 & ~init) || (~allowed1 & init) || ((not_allowed0 | ~allowed1) & variable_mask))

    {

        return false;

    }



    return true;

}



/*

 * check_allowed1_vmx_ctls

 */

_STATIC_INLINE_ bool_t check_allowed1_vmx_ctls(uint64_t* dest,

                                              uint64_t  allowed1,

                                              uint64_t  init,

                                              uint64_t  variable_mask,

                                              uint64_t  unknown_mask)

{

    /* Sanity check on the TDX-SEAM module's constants:

           Any unknown bits must be 0 in the init value and must not be variable */

    tdx_sanity_check(((init | variable_mask) & unknown_mask) == 0, SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 3);



    /* Check bits that are fixed-0 (bits that are 0 in ALLOWED1).  Any fixed-0

       bit must be initialized to 0. */

    if ((~allowed1 & init) != 0)

    {

        return false;

    }



    // Any fixed-0 bit (that is 0 in ALLOWED1) must not be variable.

    if ((~allowed1 & variable_mask) != 0)

    {

        return false;

    }



    // Return the value used for initializing the TD VMCS field (incl. unknown bits)

    *dest = init;



    return true;

}



_STATIC_INLINE_ bool_t is_smrr_mask_valid_for_tdx(smrr_base_t smrr_base, smrr_mask_t smrr_mask)

{

    // Create a bit mask from the first LSB which is 1 in the mask, until the uppermost bit 31

    // XOR it with the mask value to see if there are any "hole" bits in the mask

    uint32_t actual_mask = (uint32_t)(smrr_mask.raw & BITS(31, 12));



    uint64_t mask_lsb;



    if (!bit_scan_forward64(actual_mask, &mask_lsb))

    {

        return false; // Don't allow mask 0

    }



    uint32_t bitmask = (uint32_t)(BITS(31, mask_lsb));



    if ((actual_mask ^ bitmask) != 0)

    {

        return false;

    }



    // Check that the base is aligned on the range size

    uint32_t actual_base = (uint32_t)(smrr_base.raw & BITS(31, 12));



    if ((actual_base & ~bitmask) != 0)

    {

        return false;

    }



    return true;

}



_STATIC_INLINE_ api_error_type check_and_store_smrr_smrr2(tdx_module_global_t* tdx_global_data_ptr)

{

    uint8_t num_of_smrrs = 1;



    tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.raw = ia32_rdmsr(MTRR_CAP_MSR_ADDR);



    if (tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.smrr == 0)

    {

        TDX_ERROR("SMRR not enabled\n");

        return TDX_SMRR_NOT_SUPPORTED;

    }



    if (tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.smrr_lock == 0)

    {

            TDX_ERROR("SMRR Lock not enabled\n");

            return TDX_SMRR_LOCK_NOT_SUPPORTED;

    }



    tdx_global_data_ptr->plt_common_config.smrr[0].smrr_mask.raw = ia32_rdmsr(SMRR_MASK_MSR_ADDR);

    tdx_global_data_ptr->plt_common_config.smrr[0].smrr_base.raw = ia32_rdmsr(SMRR_BASE_MSR_ADDR);



    sysinfo_table_t * sysinfo_table_ptr = get_sysinfo_table();



    // Determine whether SMRR2 is supported

    if (sysinfo_table_ptr->mcheck_fields.smrr2_not_supported == 0 && tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.smrr2 != 0)

    {

        tdx_global_data_ptr->plt_common_config.smrr[1].smrr_mask.raw = ia32_rdmsr(SMRR2_MASK_MSR_ADDR);

        tdx_global_data_ptr->plt_common_config.smrr[1].smrr_base.raw = ia32_rdmsr(SMRR2_BASE_MSR_ADDR);

        num_of_smrrs = 2U;

    }



    //SMRR and SMRR2 must be locked

    for (uint8_t smrr_idx = 0; smrr_idx < num_of_smrrs; smrr_idx++)

    {

        if (tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_mask.lock == 0)

        {

            TDX_ERROR("SMRR %d not locked\n", smrr_idx+1);

            return api_error_with_operand_id(TDX_SMRR_NOT_LOCKED, (uint64_t)smrr_idx);

        }

    }



    //SMRR and SMRR2 must not overlap with any CMR



    for (uint8_t smrr_idx = 0; smrr_idx < num_of_smrrs; smrr_idx++)

    {

        if (tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_mask.vld == 0)

        {

            continue;

        }

        smrr_base_t smrr_base = { .raw = 0 };

        smrr_base.base = tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_base.base;

        smrr_mask_t smrr_mask = { .raw = 0 };

        smrr_mask.mask = tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_mask.mask;



        if (!is_smrr_mask_valid_for_tdx(smrr_base, smrr_mask))

        {

            TDX_ERROR("SMRR %d mask is corrupt 0x%llx (base 0x%llx)\n",

                    smrr_idx+1, smrr_mask.raw, smrr_base.raw);

            return api_error_with_operand_id(TDX_INVALID_SMRR_CONFIGURATION, (uint64_t)smrr_idx);

        }



        uint64_t smrr_size = mask_to_size(smrr_mask.raw);



        tdx_debug_assert(is_valid_integer_range(smrr_base.raw, smrr_size));



        // Check SMRRs don't overlap with CMRs - at this point CMR ranges should be checked

        // for integer overflow

        for (uint8_t cmr_i = 0; cmr_i < MAX_CMR; cmr_i++)

        {

            if (sysinfo_table_ptr->cmr_data[cmr_i].cmr_size != 0 &&

                    is_overlap(smrr_base.raw, smrr_size, sysinfo_table_ptr->cmr_data[cmr_i].cmr_base,

                    sysinfo_table_ptr->cmr_data[cmr_i].cmr_size))

            {

                TDX_ERROR("SMRR %d overlap with CMR %d \n", smrr_idx+1, cmr_i);

                return api_error_with_multiple_info(TDX_SMRR_OVERLAPS_CMR, smrr_idx, cmr_i, 0, 0);

            }

        };

    }

    return TDX_SUCCESS;

}



_STATIC_INLINE_ api_error_type check_key_management_config(tdx_module_global_t* tdx_global_data_ptr)

{

    tdx_global_data_ptr->plt_common_config.ia32_tme_capability.raw = ia32_rdmsr(IA32_TME_CAPABILITY_MSR_ADDR);

    tdx_global_data_ptr->plt_common_config.ia32_tme_activate.raw = ia32_rdmsr(IA32_TME_ACTIVATE_MSR_ADDR);



    uint32_t msr_addr = check_mem_enc_alg(tdx_global_data_ptr->plt_common_config.ia32_tme_capability,

                                          tdx_global_data_ptr->plt_common_config.ia32_tme_activate);

    if (msr_addr != 0)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, msr_addr);

    }



    tdx_global_data_ptr->hkid_start_bit = (uint32_t)(MAX_PA -

            (uint64_t)tdx_global_data_ptr->plt_common_config.ia32_tme_activate.mk_tme_keyid_bits);



    tdx_global_data_ptr->hkid_mask = BITS(MAX_PA - 1,

                                          tdx_global_data_ptr->hkid_start_bit);



    tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.raw =

            ia32_rdmsr(IA32_MKTME_KEYID_PARTITIONING_MSR_ADDR);



    tdx_global_data_ptr->private_hkid_min =

            tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids + 1;



    tdx_global_data_ptr->private_hkid_max =

            tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids +

            tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_tdx_priv_kids;



    if (tdx_global_data_ptr->private_hkid_max >= MAX_HKIDS)

    {

        return api_error_with_operand_id(TDX_NUM_ACTIVATED_HKIDS_NOT_SUPPORTED, MAX_HKIDS);

    }



    /* Get the number of cache sub-blocks for TDWBINVD

    */

    // INIT number of cached blocks for WBINVD cycle

    tdx_global_data_ptr->num_of_cached_sub_blocks = ia32_rdmsr(IA32_WBINVDP_MSR_ADDR);



    // WBNOINVDP should return the same value

    if (ia32_rdmsr(IA32_WBNOINVDP_MSR_ADDR) != tdx_global_data_ptr->num_of_cached_sub_blocks)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_WBNOINVDP_MSR_ADDR);

    }



    return TDX_SUCCESS;

}





_STATIC_INLINE_ api_error_type check_cpuid_configurations(tdx_module_global_t* global_data_ptr)

{

    /**

     * Sample and Check Native CPUID Values

     */



    cpuid_config_t cpuid_config;

    sysinfo_table_t *sysinfo_table_ptr = get_sysinfo_table();

    uint32_t lpids_sharing_l3_cache = (uint32_t)-1; //Initialized to invalid value.

    bool_t core_level_scanned = false;

    uint32_t shift_count = (uint32_t)-1; //Initialized to invalid value.

    uint32_t prev_level_type = LEVEL_TYPE_INVALID;



    bool_t perfmon_ext_leaf_checked = false;

    bool_t perfmon_ext_leaf_supported = false;



    global_data_ptr->xfd_faulting_mask = 0; // Updated later per CPUID leaf 0xD

    global_data_ptr->x2apic_core_id_shift_count = 0;  // Updated later per CPUID leaf 0x1F



    // Boot NT4 bit should not be set

    ia32_misc_enable_t misc_enable = { .raw = ia32_rdmsr(IA32_MISC_ENABLES_MSR_ADDR) };

    if (misc_enable.limit_cpuid_maxval)

    {

    	return TDX_LIMIT_CPUID_MAXVAL_SET;

    }



    if ((!misc_enable.perfmon_available) || (misc_enable.bts_unavailable))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_MISC_ENABLES_MSR_ADDR);

    }



    uint32_t last_base_leaf, last_extended_leaf;

    uint32_t ebx, ecx, edx;



    // Last base leaves need to be taken before

    ia32_cpuid(CPUID_MAX_INPUT_VAL_LEAF, 0, &last_base_leaf, &ebx, &ecx, &edx);

    if (last_base_leaf < CPUID_MIN_LAST_CPU_BASE_LEAF)

    {

        return api_error_with_operand_id(TDX_CPUID_LEAF_NOT_SUPPORTED, CPUID_MIN_LAST_CPU_BASE_LEAF);

    }

    global_data_ptr->cpuid_last_base_leaf = CPUID_LAST_BASE_LEAF;



    ia32_cpuid(CPUID_MAX_EXTENDED_VAL_LEAF, 0, &last_extended_leaf, &ebx, &ecx, &edx);

    if (last_extended_leaf < CPUID_LAST_EXTENDED_LEAF)

    {

        return api_error_with_operand_id(TDX_CPUID_LEAF_NOT_SUPPORTED, CPUID_LAST_EXTENDED_LEAF);

    }

    tdx_sanity_check(last_extended_leaf >= CPUID_MAX_EXTENDED_VAL_LEAF, SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 4);

    global_data_ptr->cpuid_last_extended_leaf = last_extended_leaf;



    for (uint32_t i = 0; i < MAX_NUM_CPUID_LOOKUP; i++)

    {

        if (!cpuid_lookup[i].valid_entry)

        {

            continue;

        }



        cpuid_config.leaf_subleaf = cpuid_lookup[i].leaf_subleaf;



        if ((cpuid_config.leaf_subleaf.leaf <= last_base_leaf) ||

            ((cpuid_config.leaf_subleaf.leaf >= CPUID_FIRST_EXTENDED_LEAF) &&

             (cpuid_config.leaf_subleaf.leaf <= last_extended_leaf)))

        {

            ia32_cpuid(cpuid_config.leaf_subleaf.leaf, cpuid_config.leaf_subleaf.subleaf,

                    &cpuid_config.values.eax, &cpuid_config.values.ebx,

                    &cpuid_config.values.ecx, &cpuid_config.values.edx);

        }

        else

        {

            // Leaf is not supported by the CPU, use all-0 values as default

            cpuid_config.values.low = 0;

            cpuid_config.values.high = 0;

        }



        if (!(((cpuid_config.values.low & cpuid_lookup[i].verify_mask.low)

                == cpuid_lookup[i].verify_value.low)

                && ((cpuid_config.values.high

                        & cpuid_lookup[i].verify_mask.high)

                        == cpuid_lookup[i].verify_value.high)))

        {

            tdx_module_local_t *tdx_local_data_ptr = get_local_data();

            tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;

            tdx_local_data_ptr->vmm_regs.rdx = cpuid_lookup[i].verify_mask.low;

            tdx_local_data_ptr->vmm_regs.r8 = cpuid_lookup[i].verify_mask.high;

            tdx_local_data_ptr->vmm_regs.r9 = cpuid_lookup[i].verify_value.low;

            tdx_local_data_ptr->vmm_regs.r10 = cpuid_lookup[i].verify_value.high;



            TDX_ERROR("CPUID 0x%x.0x%x doesn't match expected value!\n",

                    cpuid_config.leaf_subleaf.leaf, cpuid_config.leaf_subleaf.subleaf);

            TDX_ERROR("Verify mask: EAX = 0x%x, EBX = 0x%x, ECX = 0x%x, EDX = 0x%x\n",

                    cpuid_lookup[i].verify_mask.eax, cpuid_lookup[i].verify_mask.ebx,

                    cpuid_lookup[i].verify_mask.ecx, cpuid_lookup[i].verify_mask.edx);

            TDX_ERROR("Verify value: EAX = 0x%x, EBX = 0x%x, ECX = 0x%x, EDX = 0x%x\n",

                    cpuid_lookup[i].verify_value.eax, cpuid_lookup[i].verify_value.ebx,

                    cpuid_lookup[i].verify_value.ecx, cpuid_lookup[i].verify_value.edx);

            TDX_ERROR("Platform value: EAX = 0x%x, EBX = 0x%x, ECX = 0x%x, EDX = 0x%x\n",

                    cpuid_config.values.eax, cpuid_config.values.ebx,

                    cpuid_config.values.ecx, cpuid_config.values.edx);



            return TDX_INCORRECT_CPUID_VALUE;

        }



        /**

         * Special Handling of selected CPUIDs

         */



        uint32_t leaf = cpuid_config.leaf_subleaf.leaf;

        uint32_t subleaf = cpuid_config.leaf_subleaf.subleaf;



        /* CPUID Leaf 1 is a special case.  The Stepping ID field, returned in RAX

           should be set to the minimal F/M/S of all packages in the platform.

           F/M/S values are read by MCHECK, which also assures Family and Model are

           the same in all packages.

           SEAMLDR verifies Family and Model compatibility with the TDX-SEAM module.

        */

        if (leaf == CPUID_VER_INFO_LEAF)

        {

            global_data_ptr->platform_fms.raw = sysinfo_table_ptr->mcheck_fields.socket_cpuid_table[0].raw;

            for (uint32_t pkg_index = 1; pkg_index < sysinfo_table_ptr->mcheck_fields.tot_num_sockets; pkg_index++)

            {

                if (global_data_ptr->platform_fms.stepping_id >

                    sysinfo_table_ptr->mcheck_fields.socket_cpuid_table[pkg_index].stepping_id)

                {

                    global_data_ptr->platform_fms.stepping_id = sysinfo_table_ptr->mcheck_fields.socket_cpuid_table[pkg_index].stepping_id;

                }

            }

            cpuid_config.values.eax = global_data_ptr->platform_fms.raw;

        }

        /* Get the number of LPIDs sharing the L3 cache. This is used later to verify

           the scope of WBINVD, which TDX-SEAM currently assumes to be package.

        */

        else if (leaf == CPUID_DET_CACHE_PARAMS_LEAF && subleaf == CPUID_DET_CACHE_PARAMS_SUBLEAF)

        {

            lpids_sharing_l3_cache =

                    ((cpu_cache_params_t)cpuid_config.values.eax).max_num_of_lps_sharing_cache;

        }



        /* Check Extended Features Support

        */

        else if (leaf == CPUID_EXT_FEATURES_LEAF)

        {

            if (subleaf == CPUID_EXT_FEATURES_SUBLEAF)

            {

                //Sample the TSX support bits.

                cpuid_07_00_ebx_t cpuid_07_00_ebx = {.raw = cpuid_config.values.ebx};

                global_data_ptr->hle_supported = cpuid_07_00_ebx.hle;

                global_data_ptr->rtm_supported = cpuid_07_00_ebx.rtm;



                cpuid_07_00_ecx_t cpuid_07_00_ecx = { .raw = cpuid_config.values.ecx };

                global_data_ptr->waitpkg_supported = cpuid_07_00_ecx.waitpkg;

                global_data_ptr->la57_supported = cpuid_07_00_ecx.la57;

            }

            else if (subleaf == CPUID_EXT_FEATURES2_SUBLEAF)

            {

                // get some CPUID values needed for later checks

                cpuid_07_01_eax_t cpuid_7_1_eax = {.raw = cpuid_config.values.eax};

                perfmon_ext_leaf_supported = cpuid_7_1_eax.perfmon_ext_leaf;

                perfmon_ext_leaf_checked = true;



                global_data_ptr->lam_supported = cpuid_7_1_eax.lam;

                global_data_ptr->lass_supported = cpuid_7_1_eax.lass;

                global_data_ptr->perfmon_ext_leaf_supported = perfmon_ext_leaf_supported;

            }

            else if (subleaf == 2)

            {

                // Check CPU side channel protection support

                cpuid_07_02_edx_t cpuid_07_02_edx;

                cpuid_07_02_edx.raw = cpuid_config.values.edx;

                global_data_ptr->ddpd_supported = cpuid_07_02_edx.ddpd;

            }

        }



        else if (leaf == CPUID_PERFMON_LEAF)

        {

            tdx_module_local_t *tdx_local_data_ptr = get_local_data();



            cpuid_0a_eax_t cpuid_0a_eax;

            cpuid_0a_ecx_t cpuid_0a_ecx;

            cpuid_0a_edx_t cpuid_0a_edx;



            cpuid_0a_eax.raw = cpuid_config.values.eax;

            cpuid_0a_ecx.raw = cpuid_config.values.ecx;

            cpuid_0a_edx.raw = cpuid_config.values.edx;



            if (cpuid_0a_eax.version < 5)  // not supported

            {

                tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;

                tdx_local_data_ptr->vmm_regs.rdx = CPUID_PERFMON_EAX_MASK_LOW;

                tdx_local_data_ptr->vmm_regs.r8  = CPUID_PERFMON_EAX_MASK_HIGH;

                tdx_local_data_ptr->vmm_regs.r9  = CPUID_PERFMON_EAX_EXPECTED_LOW;

                tdx_local_data_ptr->vmm_regs.r10 = CPUID_PERFMON_EAX_EXPECTED_HIGH;



                TDX_ERROR("Failed CPUID_PERFMON_LEAF (0xA) check, version %d is lower than supported",

                           cpuid_0a_eax.version);



                return TDX_INCORRECT_CPUID_VALUE;

            }



            // Read and check actual number of fixed-function counters

            global_data_ptr->num_fixed_ctrs = cpuid_0a_edx.num_fcs;

            if (global_data_ptr->num_fixed_ctrs > MAX_FIXED_CTR)

            {

                tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;

                tdx_local_data_ptr->vmm_regs.rdx = CPUID_PERFMON_EDX_MASK_LOW;

                tdx_local_data_ptr->vmm_regs.r8  = CPUID_PERFMON_EDX_MASK_HIGH;

                tdx_local_data_ptr->vmm_regs.r9  = CPUID_PERFMON_EDX_EXPECTED_LOW;

                tdx_local_data_ptr->vmm_regs.r10 = CPUID_PERFMON_EDX_EXPECTED_HIGH;



                TDX_ERROR("Failed CPUID_PERFMON_LEAF (0xA) check, num_fixed_ctrs %d is higher than supported",

                        cpuid_0a_edx.num_fcs);



                return TDX_INCORRECT_CPUID_VALUE;

            }



            // Per Intel SDM, Vol. 3, 19.2.5.2:

            // FxCtr[i]_is_supported := ECX[i] || (EDX[4:0] > i)

            // So, set all bitmap bits per EDX[4:0] and OR with the bitmap in ECX.

            global_data_ptr->fc_bitmap = (uint32_t)((BIT(cpuid_0a_edx.num_fcs) - 1) | cpuid_0a_ecx.raw);

        }



        /* Get the supported extended features.  Allow only features that are recognized

           by TDX-SEAM (as specified by XCR0_USER_BIT_MASK and XCR0_SUPERVISOR_BIT_MASK to avoid surprises. */

        else if (leaf == CPUID_EXT_STATE_ENUM_LEAF)

        {

            if (subleaf == CPUID_EXT_STATE_ENUM_MAIN_SUBLEAF)

            {

                global_data_ptr->xcr0_supported_mask = cpuid_config.values.eax & XCR0_USER_BIT_MASK;

            }

            else if (subleaf == CPUID_EXT_STATE_ENUM_XSAVES_SUBLEAF)

            {

                cpuid_0d_01_eax_t cpuid_0D_01_eax;

                cpuid_0D_01_eax.raw = cpuid_config.values.eax;

                global_data_ptr->xfd_supported = cpuid_0D_01_eax.xfd_support;

                global_data_ptr->ia32_xss_supported_mask = cpuid_config.values.ecx & XCR0_SUPERVISOR_BIT_MASK;



                // Sanity check: Masks for user and system extended features must be mutually exclusive

                tdx_sanity_check((global_data_ptr->xcr0_supported_mask & global_data_ptr->ia32_xss_supported_mask) == 0,

                                SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF),5);

            }

            else

            {

                // For sub-leaf > 1, collect extended state component size and alignment information.

                cpuid_0d_ecx_t cpuid_0d_ecx = { .raw = cpuid_config.values.ecx };



                global_data_ptr->xsave_comp[subleaf].size  = cpuid_config.values.eax;

                global_data_ptr->xsave_comp[subleaf].align = cpuid_0d_ecx.align_64;



                // Update the XFD faulting mask for this sub-leaf

                if (global_data_ptr->xfd_supported && cpuid_0d_ecx.xfd_faulting)

                {

                    global_data_ptr->xfd_faulting_mask |= (1 << subleaf);

                }



                // Sanity checks on the extended features masks

                if (cpuid_0d_ecx.ia32_xss)

                {

                    // This is a system feature and must not be in the XCR0 supported mask

                    if ((uint64_t)global_data_ptr->xcr0_supported_mask & (BIT(subleaf)))

                    {

                        // FATAL_ERROR

                        FATAL_ERROR();

                    }

                }

                else

                {

                    // This is a user feature and must not be in the IA32_XSS supported mask

                    if ((uint64_t)global_data_ptr->ia32_xss_supported_mask & (BIT(subleaf)))

                    {

                        // FATAL_ERROR

                        FATAL_ERROR();

                    }

                }

            }

        }



        else if (leaf == CPUID_TSC_ATTRIBUTES_LEAF)

        {

            // Get TSC attributes



            if (cpuid_config.values.ebx == 0)

            {

                return api_error_with_operand_id(TDX_CPUID_LEAF_NOT_SUPPORTED, CPUID_TSC_ATTRIBUTES_LEAF);

            }



            global_data_ptr->crystal_clock_frequency = cpuid_config.values.ecx;



            // Calculate native TSC frequency. Calculation is done as unsigned 64b and

            //   in the proper order.

            global_data_ptr->native_tsc_frequency =

                    ((uint64_t)cpuid_config.values.ecx * (uint64_t)cpuid_config.values.ebx) /

                     (uint64_t)cpuid_config.values.eax;



            // Sanity check on native TSC frequency, to guarantee no overflow when TSC virtualization

            // params are calculated.

            if (global_data_ptr->native_tsc_frequency < NATIVE_TSC_FREQUENCY_MIN)

            {

                // Fatal Error

                FATAL_ERROR();

            }

        }

        else if (leaf == 0x1A)

        {

            // Store the native model information for later reference

            global_data_ptr->native_model_info.raw = cpuid_config.values.eax;

        }

        else if (leaf == CPUID_LBR_CAPABILITIES_LEAF)

        {

            uint32_t cpuid_1c_eax;

            cpuid_1c_eax = (uint32_t)cpuid_config.values.eax;

            tdx_debug_assert((cpuid_1c_eax & (BIT(8)-1)) > 0);

            // get the index of the most significant bit set to '1' int lower 8 bits of cpuid_1c_eax

            uint64_t msb;



            if (!bit_scan_reverse64(cpuid_1c_eax & (BIT(8)-1), &msb))

            {

                FATAL_ERROR();

            }



            global_data_ptr->max_lbr_depth = 8 * ((uint32_t)msb + 1);

        }

        /**

         * Get topology information and verify that the scope of WBINVD is package

         *

         * Notes:  1. The following algorithm assumes we scan sub-leaves sequentially, starting

         *            from 0.  The lookup tables must be built this way.

         *         2. The algorithm assumes that the sub-leaves are organized in order of level

         *            types.  Although the Intel SDM does not require it, actual CPU

         *            implementations work this way and it simplifies out life.

         */

        else if (leaf == CPUID_GET_TOPOLOGY_LEAF)

        {

            if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type != (uint32_t)LEVEL_TYPE_INVALID)

            {

                /* This is a valid leaf.  Checks that level type higher than the last one

                   (initialized to INVALID, which is 0) but does not reach the max.

                 */

                if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type <= prev_level_type ||

                    ((cpuid_topology_level_t)cpuid_config.values.ecx).level_type >= (uint32_t)LEVEL_TYPE_MAX)

                {

                    return TDX_CPUID_LEAF_1F_FORMAT_UNRECOGNIZED;

                }



                /* Get the shift count.  Per the Intel SDM, this is the "number of

                   bits to shift right on x2APIC ID to get a unique topology ID of

                   the next level type.  All logical processors with the same next

                   level ID share current level."

                 */

                shift_count = ((cpuid_topology_shift_t)cpuid_config.values.eax).shift_count;



                if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type == LEVEL_TYPE_SMT)

                {

                    // For the SMT level, save the core (which is the next level) shift count

                    global_data_ptr->x2apic_core_id_shift_count = shift_count;

                }

                else if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type == LEVEL_TYPE_CORE)

                {

                    core_level_scanned = true;   // Prepare a flag for a sanity check later

                }

            }

            else

            {

                /* The current sub-leaf is invalid, it marks the end of topology info.

                   Make sure we had at least one valid sub-leaf, otherwise

                   CPUID leaf 1F is not supported.

                 */

                if (cpuid_config.leaf_subleaf.subleaf == CPUID_GET_TOPOLOGY_INVALID_SUBLEAF)

                {

                    return api_error_with_operand_id(TDX_CPUID_LEAF_NOT_SUPPORTED, OPERAND_ID_RAX);

                }

                // Sanity check: core level must have been scanned.

                if (!core_level_scanned)

                {

                    return api_error_with_operand_id(TDX_CPUID_LEAF_NOT_SUPPORTED, OPERAND_ID_RAX);

                }



                /* Check if this is the first invalid topology sub-leaf.  The shift count

                    saved from the previous level indicates the shift count for

                    getting the package number.

                 */

                if (prev_level_type != LEVEL_TYPE_INVALID)

                {



                    tdx_sanity_check(shift_count != (uint32_t)-1,

                                     SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 6);

                    tdx_sanity_check(lpids_sharing_l3_cache != (uint32_t)-1,

                                     SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 7);



                    /* This is the first invalid topology sub-leaf.  The shift count

                       saved from the previous level indicates the shift count for

                       getting the package number.

                     */

                    global_data_ptr->x2apic_pkg_id_shift_count = shift_count;



                    // Calculate the core ID mask

                    tdx_sanity_check((shift_count - global_data_ptr->x2apic_core_id_shift_count) < 32,

                            SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 8);

                    global_data_ptr->x2apic_core_id_mask =

                            (uint32_t)(BIT(shift_count - global_data_ptr->x2apic_core_id_shift_count)) - 1U;



                    /* Verify that L3 cache is shared across package:

                       According to the Intel SDM description of CPUID leaf 4:

                       "The nearest power-of-2 integer that is not smaller than

                       (1 + EAX[25:14]) is the number of unique initial APIC IDs

                       reserved for addressing different logical processors sharing

                       this cache."

                       Thus, the value of lpids_sharing_l3_cache must fit within

                       shift_count bits, and its most significant bit must

                       be 1.

                     */

                    if ((lpids_sharing_l3_cache >> (shift_count - 1)) != (uint32_t)0x00000001)

                    {

                        TDX_ERROR("invalid wbinvd scope\n");

                        return TDX_INVALID_WBINVD_SCOPE;

                    }

                }

            }



            prev_level_type = ((cpuid_topology_level_t)cpuid_config.values.ecx).level_type;

        }

        else if (cpuid_config.leaf_subleaf.leaf == 0x23)

        {

            tdx_sanity_check(perfmon_ext_leaf_checked == true, SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 9);

        }

        else if (cpuid_config.leaf_subleaf.leaf == CPUID_GET_MAX_PA_LEAF)

        {

            // Get MAX_PA

            tdx_module_local_t *tdx_local_data_ptr = get_local_data();



            cpuid_80000008_eax_t cpuid_80000008_eax = { .raw = cpuid_config.values.eax };



            global_data_ptr->max_pa = cpuid_80000008_eax.pa_bits;



            // Check that LA_BITS is compatible with LA57 from CPUID(7, 0).ECX[16]

            if (global_data_ptr->la57_supported)

            {

                if (cpuid_80000008_eax.la_bits != 57)

                {

                    tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;

                    tdx_local_data_ptr->vmm_regs.rdx = CPUID_MAXPA_EAX_MASK_LOW;

                    tdx_local_data_ptr->vmm_regs.r8  = CPUID_MAXPA_EAX_MASK_HIGH;

                    tdx_local_data_ptr->vmm_regs.r9  = CPUID_MAXPA_EAX_EXPECTED_LOW_57;

                    tdx_local_data_ptr->vmm_regs.r10 = CPUID_MAXPA_EAX_EXPECTED_HIGH;



                    TDX_ERROR("LA bits are not 57 - %d", cpuid_80000008_eax.la_bits);



                    return TDX_INCORRECT_CPUID_VALUE;

                }

            }

            else

            {

                if (cpuid_80000008_eax.la_bits != 48)

                {

                    tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;

                    tdx_local_data_ptr->vmm_regs.rdx = CPUID_MAXPA_EAX_MASK_LOW;

                    tdx_local_data_ptr->vmm_regs.r8  = CPUID_MAXPA_EAX_MASK_HIGH;

                    tdx_local_data_ptr->vmm_regs.r9  = CPUID_MAXPA_EAX_EXPECTED_LOW_48;

                    tdx_local_data_ptr->vmm_regs.r10 = CPUID_MAXPA_EAX_EXPECTED_HIGH;



                    TDX_ERROR("LA bits are not 48 - %d", cpuid_80000008_eax.la_bits);



                    return TDX_INCORRECT_CPUID_VALUE;

                }

            }

        }



        global_data_ptr->cpuid_values[i] = cpuid_config;

    }



    return TDX_SUCCESS;

}



_STATIC_INLINE_ bool_t check_cmrs()

{

    /*----------------------------------------------------------------

      Defense-in-depth sanity check on the CMR list provided by MCHECK

      ----------------------------------------------------------------*/

    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    tdx_module_global_t* tdx_global_data_ptr = get_global_data();



    uint64_t prev_cmr_area_start = 0;

    uint64_t prev_cmr_area_end = 0;





    for (uint32_t i = 0; i < MAX_CMR; i++)

    {

        if (sysinfo_table->cmr_data[i].cmr_size > 0)

        {

            if (!is_valid_integer_range(sysinfo_table->cmr_data[i].cmr_base,

                                        sysinfo_table->cmr_data[i].cmr_size))

            {

                return false;

            }



            uint64_t cmr_area_start = sysinfo_table->cmr_data[i].cmr_base;

            uint64_t cmr_area_end = sysinfo_table->cmr_data[i].cmr_base

                    + sysinfo_table->cmr_data[i].cmr_size-1;



            // CMR ranges should be within the boundaries of the physical address range.

            // taking into account MAX_PA and HKID partitioning (HKID bits must be 0).

            if ( ((cmr_area_start & tdx_global_data_ptr->hkid_mask) != 0) ||

                 ((cmr_area_end & tdx_global_data_ptr->hkid_mask) != 0) ||

                  (cmr_area_end > BIT(MAX_PA))

               )

            {

                return false;

            }



            // CMR range should be 4KB-aligned and range size should be a multiple of 4KB (range size is not required to be a power of two)

            if (!is_addr_aligned_any(cmr_area_start, _4KB) ||

                !is_addr_aligned_any(sysinfo_table->cmr_data[i].cmr_size,_4KB))

            {

                return false;

            }



            // CMR ranges must be ordered by a start address and must not overlap each other

            if (prev_cmr_area_end > 0 && (prev_cmr_area_start > cmr_area_start ||

                                          prev_cmr_area_end > cmr_area_start))

            {

                return false;

            }



            prev_cmr_area_start = cmr_area_start;

            prev_cmr_area_end = cmr_area_end;

        }



    }

    return true;

}



_STATIC_INLINE_ api_error_type check_msrs(tdx_module_global_t* tdx_global_data_ptr, bool_t* tsx_ctrl_modified_flag,

                                          ia32_tsx_ctrl_t* tsx_ctrl_original, ia32_tsx_ctrl_t* tsx_ctrl_modified)

{

    platform_common_config_t* msr_values_ptr = &tdx_global_data_ptr->plt_common_config;



    // Sample and Check Capabilities MSRs

    msr_values_ptr->ia32_core_capabilities.raw = ia32_rdmsr(IA32_CORE_CAPABILITIES);



    msr_values_ptr->ia32_arch_capabilities.raw = ia32_rdmsr(IA32_ARCH_CAPABILITIES_MSR_ADDR);

    if (!check_native_ia32_arch_capabilities(msr_values_ptr->ia32_arch_capabilities))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_ARCH_CAPABILITIES_MSR_ADDR);

    }



    // Sanity Check of IA32_XAPIC_DISABLE_STATUS

    msr_values_ptr->ia32_xapic_disable_status.raw = ia32_rdmsr(IA32_XAPIC_DISABLE_STATUS_MSR_ADDR);

    if ((msr_values_ptr->ia32_xapic_disable_status.legacy_xapic_disabled != 1) ||

        (msr_values_ptr->ia32_xapic_disable_status.reserved != 0))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_XAPIC_DISABLE_STATUS_MSR_ADDR);

    }



    if (msr_values_ptr->ia32_arch_capabilities.tsx_ctrl)

    {

    	tsx_ctrl_original->raw = ia32_rdmsr(IA32_TSX_CTRL_MSR_ADDR);

        if (tsx_ctrl_original->tsx_cpuid_clear)

        {

            // TSX_CPUID_CLEAR forces CPUID(7,0).EBX bits 4 and 11 to 0.

            // In order to get their real values, clear this bit.

            // It will be restored later, after we sample CPUID.

            tsx_ctrl_modified->raw = tsx_ctrl_original->raw;

            tsx_ctrl_modified->tsx_cpuid_clear = 0;

            ia32_wrmsr(IA32_TSX_CTRL_MSR_ADDR, tsx_ctrl_modified->raw);

            *tsx_ctrl_modified_flag = true;

        }

    }



    msr_values_ptr->ia32_misc_package_ctls.raw = ia32_rdmsr(IA32_MISC_PACKAGE_CTLS_MSR_ADDR);

    if (!msr_values_ptr->ia32_misc_package_ctls.energy_filtering_enable)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_MISC_PACKAGE_CTLS_MSR_ADDR);

    }



    // Check Performance Monitoring - Support of IA32_A_PMC MSRs

    msr_values_ptr->ia32_perf_capabilities.raw = ia32_rdmsr(IA32_PERF_CAPABILITIES_MSR_ADDR);

    if ((msr_values_ptr->ia32_perf_capabilities.freeze_while_smm_supported != 1) ||

        (msr_values_ptr->ia32_perf_capabilities.full_write != 1))

    {

        TDX_ERROR("Check of IA32 PERF MSRs failed\n");

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_PERF_CAPABILITIES_MSR_ADDR);

    }





    /*--------------------------------------------

                  Time Stamp Counter

    --------------------------------------------*/

    // Sample IA32_TSC_ADJUST

    // This MSR should read the same value on all LP on TDSYSINITLP and during

    // TDX-SEAM operation on TDHVPENTER and other flows that rely on rdtsc.

    msr_values_ptr->ia32_tsc_adjust = ia32_rdmsr(IA32_TSC_ADJ_MSR_ADDR);



    return TDX_SUCCESS;

}



_STATIC_INLINE_ api_error_type check_l2_vmx_msrs(tdx_module_global_t* tdx_global_data_ptr)

{

    platform_common_config_t* msr_values_ptr = &tdx_global_data_ptr->plt_common_config;

    td_vmcs_values_t* l2_vmcs_values_ptr = &tdx_global_data_ptr->l2_vmcs_values;



    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->pinbased_ctls, msr_values_ptr->ia32_vmx_true_pinbased_ctls,

            PINBASED_CTLS_L2_INIT, PINBASED_CTLS_L2_VARIABLE, PINBASED_CTLS_L2_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_PINBASED_CTLS_MSR_ADDR);

    }



    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->procbased_ctls, msr_values_ptr->ia32_vmx_true_procbased_ctls,

            PROCBASED_CTLS_L2_INIT, PROCBASED_CTLS_L2_VARIABLE, PROCBASED_CTLS_L2_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_PROCBASED_CTLS_MSR_ADDR);

    }



    vmx_procbased_ctls2_t procbased_ctls2_init = { .raw = PROCBASED_CTLS2_L2_INIT };



    procbased_ctls2_init.en_guest_wait_pause = tdx_global_data_ptr->waitpkg_supported;

    vmx_procbased_ctls2_t procbased_ctls2_allowed1 = { .raw = msr_values_ptr->ia32_vmx_procbased_ctls2.allowed1 };

    if (!procbased_ctls2_allowed1.en_enclv_exiting)

    {

        procbased_ctls2_init.en_enclv_exiting = 0;

    }



    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->procbased_ctls2, msr_values_ptr->ia32_vmx_procbased_ctls2,

            (uint32_t)procbased_ctls2_init.raw, PROCBASED_CTLS2_L2_VARIABLE, PROCBASED_CTLS2_L2_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_PROCBASED_CTLS2_MSR_ADDR);

    }



    vmx_procbased_ctls3_t procbased_ctls3_init = { .raw = PROCBASED_CTLS3_L2_INIT };



    vmx_procbased_ctls3_t procbased_ctls3_variable = { .raw = PROCBASED_CTLS3_L2_VARIABLE };

    // The L2 VMCS spreadsheet generates the VARIABLE mask for the VIRTUALIZE_IA32_SPEC_CTRL as 1,

    // however this bit is only set if the CPU supports it. Therefore don't check it.

    procbased_ctls3_variable.virt_ia32_spec_ctrl = 0;



    if (!check_allowed1_vmx_ctls(&l2_vmcs_values_ptr->procbased_ctls3, msr_values_ptr->ia32_vmx_procbased_ctls3.raw,

            (uint32_t)procbased_ctls3_init.raw, procbased_ctls3_variable.raw, PROCBASED_CTLS3_L2_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_PROCBASED_CTLS3_MSR_ADDR);

    }



    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->exit_ctls, msr_values_ptr->ia32_vmx_true_exit_ctls,

            EXIT_CTLS_L2_INIT, EXIT_CTLS_L2_VARIABLE, EXIT_CTLS_L2_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_EXIT_CTLS_MSR_ADDR);

    }



    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->entry_ctls, msr_values_ptr->ia32_vmx_true_entry_ctls,

            ENTRY_CTLS_L2_INIT, ENTRY_CTLS_L2_VARIABLE, ENTRY_CTLS_L2_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_ENTRY_CTLS_MSR_ADDR);

    }



    ia32_cr0_t cr0_fixed0;

    cr0_fixed0.raw = msr_values_ptr->ia32_vmx_cr0_fixed0.raw;

    cr0_fixed0.pe = 0;

    cr0_fixed0.pg = 0;



    // CR0 checks for L2 don't depend on each TD configuration, thus they are done here

    if (!check_allowed64_vmx_ctls(cr0_fixed0.raw, msr_values_ptr->ia32_vmx_cr0_fixed1.raw,

                                  GUEST_CR0_L2_INIT, GUEST_CR0_L2_VARIABLE))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_CR0_FIXED0_MSR_ADDR);

    }



    // CR4 checks for L2 are only for the init values.

    // Actual variable bits mask depend on each TD configuration and is therefore calculated on TD init and import.

    if ((msr_values_ptr->ia32_vmx_cr4_fixed0.raw & (uint64_t)~GUEST_CR4_L2_INIT) != 0)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_CR4_FIXED0_MSR_ADDR);

    }



    if ((~msr_values_ptr->ia32_vmx_cr4_fixed1.raw & GUEST_CR4_L2_INIT) != 0)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_CR4_FIXED1_MSR_ADDR);

    }



    return TDX_SUCCESS;

}



_STATIC_INLINE_ api_error_type check_vmx_msrs(tdx_module_global_t* tdx_global_data_ptr)

{

    platform_common_config_t* msr_values_ptr = &tdx_global_data_ptr->plt_common_config;



    td_vmcs_values_t* td_vmcs_values_ptr = &tdx_global_data_ptr->td_vmcs_values;



    msr_values_ptr->ia32_vmx_basic.raw = ia32_rdmsr(IA32_VMX_BASIC_MSR_ADDR);

    if ((msr_values_ptr->ia32_vmx_basic.vmcs_region_size > TD_VMCS_SIZE) ||

        (msr_values_ptr->ia32_vmx_basic.vmexit_info_on_ios != 1) ||

        (msr_values_ptr->ia32_vmx_basic.ia32_vmx_true_available != 1))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_BASIC_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_true_pinbased_ctls.raw = ia32_rdmsr(IA32_VMX_TRUE_PINBASED_CTLS_MSR_ADDR);

    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->pinbased_ctls, msr_values_ptr->ia32_vmx_true_pinbased_ctls,

            PINBASED_CTLS_INIT, PINBASED_CTLS_VARIABLE, PINBASED_CTLS_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_PINBASED_CTLS_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_true_procbased_ctls.raw = ia32_rdmsr(IA32_VMX_TRUE_PROCBASED_CTLS_MSR_ADDR);

    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->procbased_ctls, msr_values_ptr->ia32_vmx_true_procbased_ctls,

            PROCBASED_CTLS_INIT, PROCBASED_CTLS_VARIABLE, PROCBASED_CTLS_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_PROCBASED_CTLS_MSR_ADDR);

    }



    /* procbased_ctls2 is a special case:

       - It depends on WAITPKG support.

       - It depends on the CPU support of ENCLV exiting

    */

    vmx_procbased_ctls2_t procbased_ctls2_init = {.raw = PROCBASED_CTLS2_INIT};

    procbased_ctls2_init.en_guest_wait_pause = tdx_global_data_ptr->waitpkg_supported;



    msr_values_ptr->ia32_vmx_procbased_ctls2.raw = ia32_rdmsr(IA32_VMX_PROCBASED_CTLS2_MSR_ADDR);



    vmx_procbased_ctls2_t procbased_ctls2_allowed1 = {.raw = msr_values_ptr->ia32_vmx_procbased_ctls2.allowed1};

    if (!procbased_ctls2_allowed1.en_enclv_exiting)

    {

        procbased_ctls2_init.en_enclv_exiting = 0;

    }



    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->procbased_ctls2, msr_values_ptr->ia32_vmx_procbased_ctls2,

            (uint32_t)procbased_ctls2_init.raw, PROCBASED_CTLS2_VARIABLE, PROCBASED_CTLS2_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_PROCBASED_CTLS2_MSR_ADDR);

    }



    vmx_procbased_ctls3_t procbased_ctls3_init = {.raw = PROCBASED_CTLS3_INIT};



    msr_values_ptr->ia32_vmx_procbased_ctls3.raw = ia32_rdmsr(IA32_VMX_PROCBASED_CTLS3_MSR_ADDR);



    // If the CPU supports DDPD, then it must support IA32_SPEC_CTRL virtualization

    if (tdx_global_data_ptr->ddpd_supported &&

        !msr_values_ptr->ia32_vmx_procbased_ctls3.virt_ia32_spec_ctrl)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_PROCBASED_CTLS3_MSR_ADDR);

    }



    vmx_procbased_ctls3_t procbased_ctls3_variable = { .raw = PROCBASED_CTLS3_VARIABLE };



    // The TD VMCS spreadsheet generates the VARIABLE mask for the VIRTUALIZE_IA32_SPEC_CTRL as 1,

    // however this bit is only set if the CPU supports it. Therefore don't check it.

    procbased_ctls3_variable.virt_ia32_spec_ctrl = 0;



    if (!check_allowed1_vmx_ctls(&td_vmcs_values_ptr->procbased_ctls3, msr_values_ptr->ia32_vmx_procbased_ctls3.raw,

            (uint32_t)procbased_ctls3_init.raw, procbased_ctls3_variable.raw, PROCBASED_CTLS3_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_PROCBASED_CTLS3_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_true_exit_ctls.raw = ia32_rdmsr(IA32_VMX_TRUE_EXIT_CTLS_MSR_ADDR);



    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->exit_ctls, msr_values_ptr->ia32_vmx_true_exit_ctls,

            EXIT_CTLS_INIT, EXIT_CTLS_VARIABLE, EXIT_CTLS_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_EXIT_CTLS_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_true_entry_ctls.raw = ia32_rdmsr(IA32_VMX_TRUE_ENTRY_CTLS_MSR_ADDR);

    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->entry_ctls, msr_values_ptr->ia32_vmx_true_entry_ctls,

            ENTRY_CTLS_INIT, ENTRY_CTLS_VARIABLE, ENTRY_CTLS_UNKNOWN))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_TRUE_ENTRY_CTLS_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_misc.raw = ia32_rdmsr(IA32_VMX_MISC_MSR_ADDR);

    if ((msr_values_ptr->ia32_vmx_misc.unrestricted_guest == 0) ||

        (msr_values_ptr->ia32_vmx_misc.activity_hlt == 0) ||

        (msr_values_ptr->ia32_vmx_misc.activity_shutdown == 0) ||

        (msr_values_ptr->ia32_vmx_misc.pt_in_vmx == 0) ||

        (msr_values_ptr->ia32_vmx_misc.max_cr3_targets < 4) ||

        (msr_values_ptr->ia32_vmx_misc.vmwrite_any_vmcs_field == 0))

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_MISC_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_ept_vpid_cap = ia32_rdmsr(IA32_VMX_EPT_VPID_CAP_MSR_ADDR);

    if ((msr_values_ptr->ia32_vmx_ept_vpid_cap & IA32_VMX_EPT_VPID_CAP_MASK) != IA32_VMX_EPT_VPID_CAP_MASK)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_EPT_VPID_CAP_MSR_ADDR);

    }



    ia32_cr0_t cr0_fixed0;

    cr0_fixed0.raw = ia32_rdmsr(IA32_VMX_CR0_FIXED0_MSR_ADDR);

    msr_values_ptr->ia32_vmx_cr0_fixed0.raw = cr0_fixed0.raw;

    cr0_fixed0.pe = 0;

    cr0_fixed0.pg = 0;

    if ((cr0_fixed0.raw & (uint64_t)~GUEST_CR0_INIT) != 0)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_CR0_FIXED0_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_cr0_fixed1.raw = ia32_rdmsr(IA32_VMX_CR0_FIXED1_MSR_ADDR);

    if ((~msr_values_ptr->ia32_vmx_cr0_fixed1.raw & GUEST_CR0_INIT) != 0)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_CR0_FIXED1_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_cr4_fixed0.raw = ia32_rdmsr(IA32_VMX_CR4_FIXED0_MSR_ADDR);

    if ((msr_values_ptr->ia32_vmx_cr4_fixed0.raw & (uint64_t)~GUEST_CR4_INIT) != 0)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_CR4_FIXED0_MSR_ADDR);

    }



    msr_values_ptr->ia32_vmx_cr4_fixed1.raw = ia32_rdmsr(IA32_VMX_CR4_FIXED1_MSR_ADDR);

    if ((~msr_values_ptr->ia32_vmx_cr4_fixed1.raw & GUEST_CR4_INIT) != 0)

    {

        return api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_VMX_CR4_FIXED1_MSR_ADDR);

    }



    return check_l2_vmx_msrs(tdx_global_data_ptr);

}



_STATIC_INLINE_ api_error_type check_platform_config_and_cpu_enumeration(tdx_module_global_t* tdx_global_data_ptr,

                                                                         bool_t* tsx_ctrl_modified_flag,

                                                                         ia32_tsx_ctrl_t* tsx_ctrl_original,

                                                                         ia32_tsx_ctrl_t* tsx_ctrl_modified)

{



    api_error_type err;



    /*---------------------------------------------------

        Sample and Check MSR's

    ---------------------------------------------------*/

    if ((err = check_msrs(tdx_global_data_ptr, tsx_ctrl_modified_flag, tsx_ctrl_original, tsx_ctrl_modified)) != TDX_SUCCESS)

    {

        TDX_ERROR("Check of MSR's failed\n");

        return err;

    }



    /*------------------------------------------

      Sample and Check Native CPUID Values

      ------------------------------------------*/

    if ((err = check_cpuid_configurations(tdx_global_data_ptr)) != TDX_SUCCESS)

    {

        TDX_ERROR("check_cpuid_configurations failure\n");

        return err;

    }



    /*------------------------------------------

      Sample and Check IA32_VMX_* MSRs

      ------------------------------------------*/

    if ((err = check_vmx_msrs(tdx_global_data_ptr)) != TDX_SUCCESS)

    {

        TDX_ERROR("Check of IA32 VMX MSRs failed\n");

        return err;

    }



    /*---------------------------------------------------

        Sample and Check Key Management Configuration

    ---------------------------------------------------*/

    if ((err = check_key_management_config(tdx_global_data_ptr)) != TDX_SUCCESS)

    {

        TDX_ERROR("Check of key management configuration failed\n");

        return err;

    }



    /*---------------------------------------------------

        Sanity check on CMR info provided by MCHECK

    ---------------------------------------------------*/

    if (!check_cmrs())

    {

        err = TDX_CMR_LIST_INVALID;

        return err;

    }



    /*---------------------------------------------------

        Check SMRRs and store in global data

    ---------------------------------------------------*/

    if ((err = check_and_store_smrr_smrr2(tdx_global_data_ptr)) != TDX_SUCCESS)

    {

        TDX_ERROR("check_and_store_smrr_smrr2 failure\n");

        return err;

    }



    return TDX_SUCCESS;

}





_STATIC_INLINE_ void tdx_init_global_data(tdx_module_global_t* tdx_global_data_ptr)

{



    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();



    //NUM_LPS

    tdx_global_data_ptr->num_of_lps = sysinfo_table_ptr->mcheck_fields.tot_num_lps;



    //NUM_PKGS

    tdx_global_data_ptr->num_of_pkgs = sysinfo_table_ptr->mcheck_fields.tot_num_sockets;



    //NUM_INIT_PKGS

    tdx_global_data_ptr->num_of_init_pkgs = (uint32_t)0;



    tdx_global_data_ptr->pkg_config_bitmap = (uint32_t)0;



    // INIT SEAMRR base and size

    tdx_global_data_ptr->seamrr_base = ia32_rdmsr(IA32_SEAMRR_BASE_MSR_ADDR) & IA32_SEAMRR_BASE_AND_MASK_MASK;



    uint64_t seamrr_mask = ia32_rdmsr(IA32_SEAMRR_MASK_MSR_ADDR) & IA32_SEAMRR_BASE_AND_MASK_MASK;

    tdx_global_data_ptr->seamrr_size = mask_to_size(seamrr_mask);



    tdx_global_data_ptr->num_of_init_lps = 0;



    tdx_global_data_ptr->global_state.sys_state = SYSINIT_DONE;



    // XBUF

    tdx_global_data_ptr->xbuf.xsave_header.xstate_bv = 0;

    tdx_global_data_ptr->xbuf.xsave_header.xcomp_bv = BIT(63);

    basic_memset_to_zero(&tdx_global_data_ptr->xbuf.xsave_header.reserved, sizeof(tdx_global_data_ptr->xbuf.xsave_header.reserved));



    // VMCS host fields

    save_vmcs_non_lp_host_fields(&tdx_global_data_ptr->seam_vmcs_host_values);



    tdx_global_data_ptr->num_rdseed_retries = 6;

    tdx_global_data_ptr->num_rdseed_pauses = 32;

}



_STATIC_INLINE_ api_error_type tdx_init_stack_canary(void)

{

    uint64_t canary;

    if (!ia32_rdrand(&canary))

    {

        return TDX_RND_NO_ENTROPY;

    }



    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    uint64_t last_page_addr = sysinfo_table->data_rgn_base + sysinfo_table->data_rgn_size - _4KB;

    sysinfo_table_t* last_page_ptr = (sysinfo_table_t*)(last_page_addr);



    last_page_ptr->stack_canary.canary = canary;

    ia32_vmwrite(VMX_HOST_FS_BASE_ENCODE, last_page_addr);



    //Copy SYS_INFO_TABLE information that is being used in other flows

    for (uint64_t i = 0; i < MAX_CMR; i++)

    {

        last_page_ptr->cmr_data[i].cmr_base = sysinfo_table->cmr_data[i].cmr_base;

        last_page_ptr->cmr_data[i].cmr_size = sysinfo_table->cmr_data[i].cmr_size;

    }

    last_page_ptr->code_rgn_base = sysinfo_table->code_rgn_base;

    last_page_ptr->code_rgn_size = sysinfo_table->code_rgn_size;

    last_page_ptr->data_rgn_base = sysinfo_table->data_rgn_base;

    last_page_ptr->data_rgn_size = sysinfo_table->data_rgn_size;

    last_page_ptr->keyhole_edit_rgn_base = sysinfo_table->keyhole_edit_rgn_base;

    last_page_ptr->keyhole_edit_rgn_size = sysinfo_table->keyhole_edit_rgn_size;

    last_page_ptr->keyhole_rgn_base = sysinfo_table->keyhole_rgn_base;

    last_page_ptr->keyhole_rgn_size = sysinfo_table->keyhole_rgn_size;

    last_page_ptr->num_stack_pages = sysinfo_table->num_stack_pages;

    last_page_ptr->num_tls_pages = sysinfo_table->num_tls_pages;

    last_page_ptr->seam_status = sysinfo_table->seam_status;

    last_page_ptr->module_hv = sysinfo_table->module_hv;

    last_page_ptr->min_update_hv = sysinfo_table->min_update_hv;

    last_page_ptr->no_downgrade = sysinfo_table->no_downgrade;

    last_page_ptr->num_handoff_pages = sysinfo_table->num_handoff_pages;

    last_page_ptr->stack_rgn_base = sysinfo_table->stack_rgn_base;

    last_page_ptr->stack_rgn_size = sysinfo_table->stack_rgn_size;



    return TDX_SUCCESS;

}



_STATIC_INLINE_ bool_t is_td_preserving_available(seam_ops_capabilities_t caps)

{

    if ((caps.raw & TD_PRESERVING_CAPABILITIES) == TD_PRESERVING_CAPABILITIES)

    {

        return true;

    }



    return false;

}



_STATIC_INLINE_ api_error_type check_module_build_time_defs(tdx_module_global_t* tdx_global_data_ptr)

{

    sysinfo_table_t* sysinfo_table = get_sysinfo_table();



    tdx_global_data_ptr->module_hv         = sysinfo_table->module_hv;

    tdx_global_data_ptr->min_update_hv     = sysinfo_table->min_update_hv;

    tdx_global_data_ptr->no_downgrade      = sysinfo_table->no_downgrade;

    tdx_global_data_ptr->num_handoff_pages = sysinfo_table->num_handoff_pages;



    if ((tdx_global_data_ptr->module_hv != TDX_MODULE_HV) ||

        (tdx_global_data_ptr->min_update_hv < TDX_MIN_UPDATE_HV) ||

        ((tdx_global_data_ptr->no_downgrade == 0) && (TDX_NO_DOWNGRADE == 1)) ||

        ((tdx_global_data_ptr->num_handoff_pages + 1) < TDX_MIN_HANDOFF_PAGES))

    {

        TDX_ERROR("Incompatible TD preserving defs\n");

        return TDX_SYS_INCOMPATIBLE_SIGSTRUCT;

    }



    return TDX_SUCCESS;

}



api_error_type tdh_sys_init(void)

{

    bool_t global_lock_acquired = false;

    tdx_module_global_t* tdx_global_data_ptr = get_global_data();

    tdx_module_local_t *tdx_local_data_ptr = get_local_data();

    api_error_type retval = TDX_SYS_BUSY;

    api_error_type err;



    ia32_tsx_ctrl_t tsx_ctrl_original = { .raw = 0 };

    ia32_tsx_ctrl_t tsx_ctrl_modified = { .raw = 0 };

    bool_t tsx_ctrl_modified_flag = false;



    td_param_attributes_t attributes_fixed0;

    td_param_attributes_t attributes_fixed1;



    uint64_t reserved_rcx = tdx_local_data_ptr->vmm_regs.rcx;



    tdx_local_data_ptr->vmm_regs.rcx = 0;

    tdx_local_data_ptr->vmm_regs.rdx = 0;

    tdx_local_data_ptr->vmm_regs.r8 = 0;

    tdx_local_data_ptr->vmm_regs.r9 = 0;

    tdx_local_data_ptr->vmm_regs.r10 = 0;



    // Acquire an exclusive lock to the whole TDX-SEAM module

    if (acquire_sharex_lock_ex(&tdx_global_data_ptr->global_lock) != LOCK_RET_SUCCESS)

    {

        TDX_ERROR("Failed to acquire global lock\n");

        retval = TDX_SYS_BUSY;

        goto EXIT;

    }

    global_lock_acquired = true;



    // RCX should be reserved

    if (reserved_rcx != 0)

    {

        TDX_ERROR("RCX should be reserved\n");

        retval = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX);

        goto EXIT;

    }



    // Check the system state

    if (tdx_global_data_ptr->global_state.sys_state != SYSINIT_PENDING)

    {

        TDX_ERROR("Wrong sys_init state: %d\n", tdx_global_data_ptr->global_state.sys_state);

        retval = TDX_SYS_INIT_NOT_PENDING;

        goto EXIT;

    }



    if ((err = check_platform_config_and_cpu_enumeration(tdx_global_data_ptr, &tsx_ctrl_modified_flag,

                                                         &tsx_ctrl_original, &tsx_ctrl_modified))!= TDX_SUCCESS)

    {

        TDX_ERROR("Failed to check and config CPU enumeration\n");

        retval = err;

        goto EXIT;

    }



    seam_ops_capabilities_t caps = {.raw = ia32_seamops_capabilities()};



    if (!is_td_preserving_available(caps))

    {

        TDX_ERROR("TD-preserving is not supported on the platform\n");

        retval = TDX_INCOMPATIBLE_SEAM_CAPABILITIES;

        goto EXIT;

    }



    tdx_global_data_ptr->seam_capabilities = caps;



    uint64_t seamdb_size;

    if ((err = check_module_build_time_defs(tdx_global_data_ptr)) != TDX_SUCCESS)

    {

        TDX_ERROR("Failed to check module build time defs\n");

        retval = err;

        goto EXIT;

    }



    uint64_t result = ia32_seamops_seamdb_getref(&tdx_global_data_ptr->seamdb_index,

                                                 &tdx_global_data_ptr->seamdb_nonce,

                                                 &seamdb_size);



    tdx_sanity_check((result == SEAMOPS_SUCCESS), SCEC_SEAMCALL_SOURCE(TDH_SYS_INIT_LEAF), 20);



    tdx_global_data_ptr->seamverifyreport_available = ((caps.raw & BIT(SEAMOPS_SEAMVERIFYREPORT_LEAF)) != 0);

    /*

     * Calculate allowed ATTRIBUTES bits.

     */

    attributes_fixed0.raw = TDX_ATTRIBUTES_FIXED0;

    attributes_fixed1.raw = TDX_ATTRIBUTES_FIXED1;



    if (!tdx_global_data_ptr->lass_supported)

    {

        attributes_fixed0.raw &= ~TDX_ATTRIBUTES_LASS_SUPPORT;

    }



    tdx_global_data_ptr->attributes_fixed0 = attributes_fixed0.raw;

    tdx_global_data_ptr->attributes_fixed1 = attributes_fixed1.raw;



    config_flags_t config_flags_fixed0 = { .raw = CONFIG_FLAGS_FIXED0 };

    config_flags_t config_flags_fixed1 = { .raw = CONFIG_FLAGS_FIXED1 };



    if (tdx_global_data_ptr->max_pa <= 48)

    {

        config_flags_fixed1.gpaw = 0;

    }



    tdx_global_data_ptr->config_flags_fixed0.raw = config_flags_fixed0.raw;

    tdx_global_data_ptr->config_flags_fixed1.raw = config_flags_fixed1.raw;



    if (tdx_init_stack_canary() != TDX_SUCCESS)

    {

        retval = TDX_RND_NO_ENTROPY;

        goto EXIT;

    }



    tdx_init_global_data(tdx_global_data_ptr);



    retval = TDX_SUCCESS;



    EXIT:



    // Restore the original value of IA32_TSX_CTRL, if modified above

    if (tsx_ctrl_modified_flag)

    {

        ia32_wrmsr(IA32_TSX_CTRL_MSR_ADDR, tsx_ctrl_original.raw);

    }



    if (global_lock_acquired)

    {

        release_sharex_lock_ex(&tdx_global_data_ptr->global_lock);

    }

    return retval;

}



int main() {

    // before_target methods

    init_tdx_general();

    init_vmm_dispatcher();

    tdh_sys_init__common_precond();



    // Target method

    tdh_sys_init__valid_entry();



    // after_target methods

    tdh_sys_init__common_postcond();



    return 0;

}

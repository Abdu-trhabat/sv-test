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
 * @file tdg_vp_enter_harness.c
 * @brief TDGVPENTER API handler FV harness
 */

#include "tdx_td_api_handlers.h"
#include "tdx_basic_defs.h"
#include "tdx_basic_types.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "accessors/data_accessors.h"
#include "accessors/vt_accessors.h"
#include "tdx_api_defs.h"
#include "x86_defs/vmcs_defs.h"
#include "x86_defs/x86_defs.h"
#include "helpers/helpers.h"
#include "data_structures/tdx_local_data.h"
#include "memory_handlers/keyhole_manager.h"
#include "td_dispatcher/tdx_td_dispatcher.h"
#include "td_transitions/td_exit.h"
#include "helpers/virt_msr_helpers.h"

#include "fv_utils.h"
#include "fv_env.h"

void tdg_vp_enter__call() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = tdg_vp_enter(
        tdx_local_data_ptr->td_regs.rcx,
        tdx_local_data_ptr->td_regs.rdx
    );
}

static inline void tdg_vp_enter__common_precond() {
    tdx_leaf_and_version_t leaf_opcode = { .raw = get_local_data()->td_regs.rax };
    TDXFV_ASSUME(leaf_opcode.leaf == TDG_VP_ENTER_LEAF);
}

static inline bool_t input_vmflag_is_valid() {
    uint64_t vmflag = get_local_data()->td_regs.rcx;
    uint64_t vmindex = (vmflag >> 52) & 0x3;        // bits [53:52]
    uint64_t reserved1 = ((vmflag << 12) >> 14);    // bits [51:2]
    uint64_t reserved2 = (vmflag >> 54);            // bits [63:54]
    return (
        (vmindex >= 1) &&
        (vmindex <= get_local_data()->vp_ctx.tdcs->management_fields.num_l2_vms) &&
        (reserved1 == 0) &&
        (reserved2 == 0)
    );
}

static inline bool_t input_gpa_is_valid() {
    // The GPA (rdx) must be 256 aligned
    return ((get_local_data()->td_regs.rdx & 0xFF) == 0);
}

static inline bool_t all_conditions_valid() {
    return (
        input_vmflag_is_valid() &&
        input_gpa_is_valid()
    );
}

static inline void tdg_vp_enter__common_postcond() {
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
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx == shadow_guest_gpr_state_precall.rdx);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsp == shadow_guest_gpr_state_precall.rsp);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbp == shadow_guest_gpr_state_precall.rbp);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsi == shadow_guest_gpr_state_precall.rsi);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdi == shadow_guest_gpr_state_precall.rdi);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8  == shadow_guest_gpr_state_precall.r8);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r9  == shadow_guest_gpr_state_precall.r9);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r10 == shadow_guest_gpr_state_precall.r10);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r11 == shadow_guest_gpr_state_precall.r11);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r12 == shadow_guest_gpr_state_precall.r12);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r13 == shadow_guest_gpr_state_precall.r13);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r14 == shadow_guest_gpr_state_precall.r14);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r15 == shadow_guest_gpr_state_precall.r15);

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

void tdg_vp_enter__expected__precond() {
    tdg_vp_enter__common_precond();
    TDXFV_ASSUME(all_conditions_valid());
}

void tdg_vp_enter__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdg_vp_enter__common_postcond();
}

void tdg_vp_enter__unexpected__precond() {
    tdg_vp_enter__common_precond();
    TDXFV_ASSUME(!all_conditions_valid());
}

void tdg_vp_enter__unexpected__postcond() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax != TDX_SUCCESS);
    tdg_vp_enter__common_postcond();
}

void tdg_vp_enter__unconstrained__precond() {
    tdg_vp_enter__common_precond();
    TDXFV_ASSUME(true);
}

// Keep the specialized test case
void tdg_vp_enter__invalid_input_vmflag__precond() {
    tdg_vp_enter__common_precond();
    TDXFV_ASSUME(
        !input_vmflag_is_valid() && // invalid input VMFLAG
        input_gpa_is_valid()
    );
}

void tdg_vp_enter__invalid_input_vmflag__postcond() {
    uint64_t return_status = get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax;
    // relax to include rdx due to lack of precise page structure modeling
    TDXFV_ASSERT(
        return_status == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX) ||
        return_status == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RDX)
    );
    tdg_vp_enter__common_postcond();
}

void tdg_vp_enter__invalid_input_gpa__precond() {
    tdg_vp_enter__common_precond();
    TDXFV_ASSUME(
        input_vmflag_is_valid() && 
        !input_gpa_is_valid() // invalid input GPA
    );
}

void tdg_vp_enter__invalid_input_gpa__postcond() {
    uint64_t return_status = get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax;
    TDXFV_ASSERT(
        return_status == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RDX)
    );
    tdg_vp_enter__common_postcond();
}

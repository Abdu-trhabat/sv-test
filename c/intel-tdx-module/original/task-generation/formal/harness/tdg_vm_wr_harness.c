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

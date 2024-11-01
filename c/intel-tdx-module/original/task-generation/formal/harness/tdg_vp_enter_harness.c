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

void tdg_vp_enter__common_precond() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    tdx_leaf_and_version_t leaf_opcode = { .raw = tdx_local_data_ptr->td_regs.rax };
    TDXFV_ASSUME(leaf_opcode.leaf == TDG_VP_ENTER_LEAF);
}

void tdg_vp_enter__invalid_input_vmflag() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    // Task-specific precondition
    uint64_t reserved1 = ((tdx_local_data_ptr->td_regs.rcx << 12) >> 14); // bits [51:2]
    uint64_t vmindex = (tdx_local_data_ptr->td_regs.rcx >> 52) & 0x3; // bits[53:52]
    uint64_t reserved2 = (tdx_local_data_ptr->td_regs.rcx >> 54); // bits [63:54]
    tdcs_t* tdcs_ptr = tdx_local_data_ptr->vp_ctx.tdcs;
    TDXFV_ASSUME((vmindex < 1) || (vmindex > tdcs_ptr->management_fields.num_l2_vms) || (reserved1 != 0) || (reserved2 != 0));

    // Call ABI function
    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = 
        tdg_vp_enter(tdx_local_data_ptr->td_regs.rcx, tdx_local_data_ptr->td_regs.rdx);

    // Task-specific postcondition
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX));
}

void tdg_vp_enter__invalid_entry() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    // Task-specific precondition
    uint64_t reserved1 = ((tdx_local_data_ptr->td_regs.rcx << 12) >> 14); // bits [51:2]
    uint64_t vmindex = (tdx_local_data_ptr->td_regs.rcx >> 52) & 0x3; // bits[53:52]
    uint64_t reserved2 = (tdx_local_data_ptr->td_regs.rcx >> 54); // bits [63:54]
    tdcs_t* tdcs_ptr = tdx_local_data_ptr->vp_ctx.tdcs;
    TDXFV_ASSUME((vmindex < 1) || (vmindex > tdcs_ptr->management_fields.num_l2_vms) || (reserved1 != 0) || (reserved2 != 0));

    // Call ABI function
    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = 
        tdg_vp_enter(tdx_local_data_ptr->td_regs.rcx, tdx_local_data_ptr->td_regs.rdx);

    // Task-specific postcondition
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax != TDX_SUCCESS);
}

void tdg_vp_enter__valid_entry() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    // Task-specific precondition
    uint64_t reserved1 = ((tdx_local_data_ptr->td_regs.rcx << 12) >> 14); // bits [51:2]
    uint64_t vmindex = (tdx_local_data_ptr->td_regs.rcx >> 52) & 0x3; // bits[53:52]
    uint64_t reserved2 = (tdx_local_data_ptr->td_regs.rcx >> 54); // bits [63:54]
    tdcs_t* tdcs_ptr = tdx_local_data_ptr->vp_ctx.tdcs;
    TDXFV_ASSUME((vmindex >= 1) && (vmindex <= tdcs_ptr->management_fields.num_l2_vms));
    TDXFV_ASSUME((reserved1 == 0) && (reserved2 == 0));

    // Call ABI function
    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = 
        tdg_vp_enter(tdx_local_data_ptr->td_regs.rcx, tdx_local_data_ptr->td_regs.rdx);

    // Task-specific postcondition
}

void tdg_vp_enter__free_entry() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    // Call ABI function
    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = 
        tdg_vp_enter(tdx_local_data_ptr->td_regs.rcx, tdx_local_data_ptr->td_regs.rdx);
}

void tdg_vp_enter__post_cover_success() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    TDXFV_ASSUME(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdg_vp_enter__post_cover_unsuccess() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    TDXFV_ASSUME(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax != TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdg_vp_enter__common_postcond() {
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
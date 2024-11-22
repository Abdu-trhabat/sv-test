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
 * @file tdh_mng_key_freeid_harness.c
 * @brief TDHMNGKEYFREEID API handler FV harness
 */
#include "tdx_vmm_api_handlers.h"
#include "tdx_basic_defs.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "x86_defs/x86_defs.h"
#include "data_structures/tdx_global_data.h"
#include "data_structures/td_control_structures.h"
#include "memory_handlers/keyhole_manager.h"
#include "memory_handlers/pamt_manager.h"
#include "helpers/helpers.h"
#include "accessors/data_accessors.h"

#include "fv_utils.h"
#include "fv_env.h"

void tdh_mng_key_freeid__common_precond() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_MNG_KEY_FREEID_LEAF);
}

void tdh_mng_key_freeid__invalid_input_tdr_hkid() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();

    // Task-specific precondition
    TDXFV_ASSUME(((((pa_t) local_data->vmm_regs.rcx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) != 0); // invalid rcx
    TDXFV_ASSUME(local_data->vp_ctx.tdr_pamt_entry->pt == PT_TDR);
    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_BLOCKED);
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].state == KOT_STATE_HKID_FLUSHED);
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].wbinvd_bitmap == 0);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX)) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_mng_key_freeid__invalid_state_tdr_metadata() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();

    // Task-specific precondition
    TDXFV_ASSUME(((((pa_t) local_data->vmm_regs.rcx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);
    TDXFV_ASSUME(local_data->vp_ctx.tdr_pamt_entry->pt != PT_TDR); // invalid tdr metadata
    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_BLOCKED);
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].state == KOT_STATE_HKID_FLUSHED);
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].wbinvd_bitmap == 0);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_PAGE_METADATA_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_mng_key_freeid__invalid_state_tdr_lifecycle() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();

    // Task-specific precondition
    TDXFV_ASSUME(((((pa_t) local_data->vmm_regs.rcx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);
    TDXFV_ASSUME(local_data->vp_ctx.tdr_pamt_entry->pt == PT_TDR);
    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state != TD_BLOCKED); // invalid lifecycle
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].state == KOT_STATE_HKID_FLUSHED);
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].wbinvd_bitmap == 0);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_LIFECYCLE_STATE_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_mng_key_freeid__invalid_state_kot() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();

    // Task-specific precondition
    TDXFV_ASSUME(((((pa_t) local_data->vmm_regs.rcx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);
    TDXFV_ASSUME(local_data->vp_ctx.tdr_pamt_entry->pt == PT_TDR);
    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_BLOCKED);
    TDXFV_ASSUME((global_data->kot.entries[tdr_fv.key_management_fields.hkid].state != KOT_STATE_HKID_FLUSHED) ||
                 (global_data->kot.entries[tdr_fv.key_management_fields.hkid].wbinvd_bitmap != 0)); // invalid kot status

    // Call ABI function
    local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_WBCACHE_NOT_COMPLETE) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_mng_key_freeid__invalid_entry() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();

    // Task-specific precondition
    bool_t precond = true;
    precond = precond && (((((pa_t) local_data->vmm_regs.rcx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);
    precond = precond && (local_data->vp_ctx.tdr_pamt_entry->pt == PT_TDR);
    precond = precond && (tdr_fv.management_fields.lifecycle_state == TD_BLOCKED);
    precond = precond && (global_data->kot.entries[tdr_fv.key_management_fields.hkid].state == KOT_STATE_HKID_FLUSHED);
    precond = precond && (global_data->kot.entries[tdr_fv.key_management_fields.hkid].wbinvd_bitmap == 0);
    TDXFV_ASSUME(precond == false);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
}

void tdh_mng_key_freeid__valid_entry() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();

    // Task-specific precondition
    TDXFV_ASSUME(((((pa_t) local_data->vmm_regs.rcx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);
    TDXFV_ASSUME(local_data->vp_ctx.tdr_pamt_entry->pt == PT_TDR);
    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_BLOCKED);
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].state == KOT_STATE_HKID_FLUSHED);
    TDXFV_ASSUME(global_data->kot.entries[tdr_fv.key_management_fields.hkid].wbinvd_bitmap == 0);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

    // Task-specific postcondition
}

void tdh_mng_key_freeid__free_entry() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition

    // Call ABI function
    local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

    // Task-specific postcondition
}

void tdh_mng_key_freeid__post_cover_success() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax == TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_mng_key_freeid__post_cover_unsuccess() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax != TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_mng_key_freeid__common_postcond() {
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

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
 * @file tdh_import_abort_harness.c
 * @brief TDH_IMPORT_ABORT API handler FV harness
 */

#include "tdx_vmm_api_handlers.h"
#include "tdx_basic_defs.h"
#include "auto_gen/op_state_lookup.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "x86_defs/x86_defs.h"
#include "accessors/ia32_accessors.h"
#include "accessors/data_accessors.h"
#include "helpers/helpers.h"
#include "helpers/migration.h"
#include "metadata_handlers/metadata_generic.h"

#include "fv_utils.h"
#include "fv_env.h"

void tdh_import_abort__call() {
    tdx_module_local_t* local_data = get_local_data();
    local_data->vmm_regs.rax = tdh_import_abort(
        local_data->vmm_regs.rcx,
        local_data->vmm_regs.r8,
        local_data->vmm_regs.r10
    );
}

static inline void tdh_import_abort__common_precond() {
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = get_local_data()->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_IMPORT_ABORT_LEAF);
}

static inline bool_t input_tdr_pa_is_valid() {
    pa_t pa = { .raw = get_local_data()->vmm_regs.rcx };
    return (
        ((get_local_data()->vmm_regs.rcx & (_4KB - 1)) == 0) &&
        (((pa.full_pa & get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0) &&
        (get_local_data()->vmm_regs.rcx < BIT(MAX_PA))
    );
}

static inline bool_t input_mbmd_size_is_valid() {
    hpa_and_size_t mbmd_hpa_and_size = { .raw = get_local_data()->vmm_regs.r8 };
    return (mbmd_hpa_and_size.size >= sizeof(mbmd_t));
}

static inline bool_t input_r10_is_valid() {
    return (get_local_data()->vmm_regs.r10 == 0);
}

static inline bool_t state_td_state_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.fatal == false);
}

static inline bool_t state_lifecycle_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.lifecycle_state == TD_KEYS_CONFIGURED);
}

// XXX Note: This condition is enforced by current TDR invariants.
static inline bool_t state_num_tdcx_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES);
}

static inline bool_t state_debug_is_valid() {
    return (get_local_data()->vp_ctx.tdcs->executions_ctl_fields.attributes.debug == true);
}

static inline bool_t state_op_state_is_valid() {
    return (
        (get_local_data()->vp_ctx.tdcs->management_fields.op_state == OP_STATE_MEMORY_IMPORT) ||
        (get_local_data()->vp_ctx.tdcs->management_fields.op_state == OP_STATE_STATE_IMPORT) ||
        (get_local_data()->vp_ctx.tdcs->management_fields.op_state == OP_STATE_POST_IMPORT) ||
        (get_local_data()->vp_ctx.tdcs->management_fields.op_state == OP_STATE_FAILED_IMPORT)
    );
}

static inline bool_t state_tdr_pamt_entry_is_valid() {
    return (get_local_data()->vp_ctx.tdr_pamt_entry->pt == PT_TDR);
}

static inline bool_t all_conditions_valid() {
    return (
        input_tdr_pa_is_valid() &&
        input_mbmd_size_is_valid() &&
        input_r10_is_valid() &&
        state_td_state_is_valid() &&
        state_lifecycle_is_valid() &&
        state_num_tdcx_is_valid() &&
        state_debug_is_valid() &&
        state_op_state_is_valid() &&
        state_tdr_pamt_entry_is_valid()
    );
}

static inline void tdh_import_abort__common_postcond() {
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

void tdh_import_abort__expected__precond() {
    tdh_import_abort__common_precond();
    TDXFV_ASSUME(all_conditions_valid());
}

void tdh_import_abort__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdh_import_abort__common_postcond();
}

void tdh_import_abort__unexpected__precond() {
    tdh_import_abort__common_precond();
    TDXFV_ASSUME(!all_conditions_valid());
}

void tdh_import_abort__unexpected__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
    tdh_import_abort__common_postcond();
}

void tdh_import_abort__unconstrained__precond() {
    tdh_import_abort__common_precond();
    TDXFV_ASSUME(true);
}

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
 * @file tdh_mng_init_harness.c
 * @brief TDHMNGINIT API handler FV harness
 */
#include "tdx_vmm_api_handlers.h"
#include "tdx_basic_defs.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "x86_defs/x86_defs.h"
#include "data_structures/td_control_structures.h"
#include "x86_defs/vmcs_defs.h"
#include "memory_handlers/keyhole_manager.h"
#include "memory_handlers/pamt_manager.h"
#include "memory_handlers/sept_manager.h"
#include "helpers/helpers.h"
#include "helpers/virt_msr_helpers.h"
#include "accessors/ia32_accessors.h"
#include "accessors/data_accessors.h"
#include "crypto/sha384.h"
#include "auto_gen/msr_config_lookup.h"
#include "auto_gen/cpuid_configurations.h"
#include "helpers/cpuid_fms.h"

#include "fv_utils.h"
#include "fv_env.h"

void tdh_mng_init__call() {
    tdx_module_local_t* local_data = get_local_data();
    
    local_data->vmm_regs.rax = tdh_mng_init(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);
}

static inline void tdh_mng_init__common_precond() {
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = get_local_data()->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_MNG_INIT_LEAF);
}

static inline bool_t input_tdr_pa_is_valid() {
    pa_t pa = { .raw = get_local_data()->vmm_regs.rcx };
    return (
        ((get_local_data()->vmm_regs.rcx & (_4KB - 1)) == 0) &&
        (((pa.full_pa & get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0) &&
        (get_local_data()->vmm_regs.rcx < BIT(MAX_PA))
    );
}

static inline bool_t state_td_state_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.fatal == false);
}

static inline bool_t state_lifecycle_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.lifecycle_state == TD_KEYS_CONFIGURED);
}

// XXX Note: This condition is enforced by current TDR invariants.
static inline bool_t state_num_tdcx_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.num_tdcx != 0);
}

static inline bool_t state_op_state_is_valid() {
    return (get_local_data()->vp_ctx.tdcs->management_fields.op_state == OP_STATE_UNINITIALIZED);
}

static inline bool_t state_pamt_metadata_is_valid() {
    pa_t tdr_pa = { .raw = get_local_data()->vmm_regs.rcx };
    pamt_block_t tdr_pamt_block;
    pamt_entry_t* tdr_pamt_entry_ptr = NULL;
    bool_t tdr_locked_flag = false;
    tdr_t* tdr_ptr = NULL;
    api_error_type fwd_eval_check_tdr = check_lock_and_map_explicit_tdr(
        tdr_pa, OPERAND_ID_RCX, 1, TDX_LOCK_EXCLUSIVE,
        PT_TDR, &tdr_pamt_block, &tdr_pamt_entry_ptr, &tdr_locked_flag, &tdr_ptr
    );
    if (!(
        fwd_eval_check_tdr == TDX_SUCCESS && 
        tdr_pamt_entry_ptr != NULL
    )) {
        return false;
    }
    return (tdr_pamt_entry_ptr->pt == PT_TDR);
}

static inline bool_t all_conditions_valid() {
    return (
        input_tdr_pa_is_valid() &&
        state_td_state_is_valid() &&
        state_lifecycle_is_valid() &&
        state_num_tdcx_is_valid() &&
        state_op_state_is_valid() &&
        state_pamt_metadata_is_valid()
    );
}

static inline void tdh_mng_init__common_postcond() {
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
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rcx == shadow_vmm_regs_precall.rcx);
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

void tdh_mng_init__expected__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(all_conditions_valid());
}

void tdh_mng_init__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdh_mng_init__common_postcond();
}

void tdh_mng_init__unexpected__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(!all_conditions_valid());
}

void tdh_mng_init__unexpected__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    tdh_mng_init__common_postcond();
}

void tdh_mng_init__unconstrained__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(true);
}

// Special test cases
void tdh_mng_init__invalid_input_tdr_pa__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(
        !input_tdr_pa_is_valid() && // invalid TDR PA
        state_td_state_is_valid() &&
        state_lifecycle_is_valid() &&
        state_num_tdcx_is_valid() &&
        state_op_state_is_valid() &&
        state_pamt_metadata_is_valid()
    );
}

void tdh_mng_init__invalid_input_tdr_pa__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX)) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    tdh_mng_init__common_postcond();
}

void tdh_mng_init__invalid_state_td_state__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(
        input_tdr_pa_is_valid() &&
        !state_td_state_is_valid() && // invalid td state
        state_lifecycle_is_valid() &&
        state_num_tdcx_is_valid() &&
        state_op_state_is_valid() &&
        state_pamt_metadata_is_valid()
    );
}

void tdh_mng_init__invalid_state_td_state__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_TD_FATAL) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    tdh_mng_init__common_postcond();
}

void tdh_mng_init__invalid_state_lifecycle__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(
        input_tdr_pa_is_valid() &&
        state_td_state_is_valid() &&
        !state_lifecycle_is_valid() && // invalid lifecycle state
        state_num_tdcx_is_valid() &&
        state_op_state_is_valid() &&
        state_pamt_metadata_is_valid()
    );
}

void tdh_mng_init__invalid_state_lifecycle__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_TD_KEYS_NOT_CONFIGURED) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    tdh_mng_init__common_postcond();
}

void tdh_mng_init__invalid_state_no_tdcx__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(
        input_tdr_pa_is_valid() &&
        state_td_state_is_valid() &&
        state_lifecycle_is_valid() &&
        !state_num_tdcx_is_valid() && // invalid number of TDCX
        state_op_state_is_valid() &&
        state_pamt_metadata_is_valid()
    );
}

void tdh_mng_init__invalid_state_no_tdcx__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_TDCS_NOT_ALLOCATED) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    tdh_mng_init__common_postcond();
}

void tdh_mng_init__invalid_state_op_state__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(
        input_tdr_pa_is_valid() &&
        state_td_state_is_valid() &&
        state_lifecycle_is_valid() &&
        state_num_tdcx_is_valid() &&
        !state_op_state_is_valid() && // invalid op state
        state_pamt_metadata_is_valid()
    );
}

void tdh_mng_init__invalid_state_op_state__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_OP_STATE_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    tdh_mng_init__common_postcond();
}

void tdh_mng_init__invalid_state_pamt_metadata__precond() {
    tdh_mng_init__common_precond();
    TDXFV_ASSUME(
        input_tdr_pa_is_valid() &&
        state_td_state_is_valid() &&
        state_lifecycle_is_valid() &&
        state_num_tdcx_is_valid() &&
        state_op_state_is_valid() &&
        !state_pamt_metadata_is_valid() // invalid metadata
    );
}

void tdh_mng_init__invalid_state_pamt_metadata__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_PAGE_METADATA_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    tdh_mng_init__common_postcond();
}

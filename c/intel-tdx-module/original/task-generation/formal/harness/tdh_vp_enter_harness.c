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
 * @file tdh_vp_enter_harness.c
 * @brief TDHVPENTER API handler FV harness
 */
#include "tdx_vmm_api_handlers.h"
#include "tdx_basic_defs.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "x86_defs/x86_defs.h"
#include "data_structures/td_control_structures.h"
#include "memory_handlers/keyhole_manager.h"
#include "memory_handlers/pamt_manager.h"
#include "memory_handlers/sept_manager.h"
#include "helpers/helpers.h"
#include "accessors/ia32_accessors.h"
#include "accessors/data_accessors.h"
#include "td_dispatcher/tdx_td_dispatcher.h"
#include "td_transitions/td_exit_stepping.h"
#include "td_dispatcher/vm_exits/td_vmexit.h"
#include "td_transitions/td_exit.h"
#include "helpers/virt_msr_helpers.h"

#include "fv_utils.h"
#include "fv_env.h"

void tdh_vp_enter__common_precond() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_VP_ENTER_LEAF);
}

void tdh_vp_enter__invalid_input_vcpu_handle() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    // invalid input vcpu handle
    TDXFV_ASSUME(((local_data->vmm_regs.rcx & 0xFFF) != 0) || // [11:0]
                 ((local_data->vmm_regs.rcx >> 54) != 0));    // [63:54]

    TDXFV_ASSUME(tdr_fv.management_fields.fatal == false);

    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);

    TDXFV_ASSUME((tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) &&
                 (tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES));

    TDXFV_ASSUME((tdcs_fv.management_fields.op_state == OP_STATE_RUNNABLE) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_EXPORT) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_IMPORT));

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    TDXFV_ASSUME(tdvpr_pamt_entry_ptr->pt == PT_TDVPR);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX)) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_vp_enter__invalid_state_td_state() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    TDXFV_ASSUME(((local_data->vmm_regs.rcx & 0xFFF) == 0) && // [11:0]
                 ((local_data->vmm_regs.rcx >> 54) == 0));    // [63:54]

    TDXFV_ASSUME(tdr_fv.management_fields.fatal != false); // invalid td state

    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);

    TDXFV_ASSUME((tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) &&
                 (tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES));

    TDXFV_ASSUME((tdcs_fv.management_fields.op_state == OP_STATE_RUNNABLE) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_EXPORT) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_IMPORT));

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    TDXFV_ASSUME(tdvpr_pamt_entry_ptr->pt == PT_TDVPR);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_TD_FATAL) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_vp_enter__invalid_state_lifecycle() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    TDXFV_ASSUME(((local_data->vmm_regs.rcx & 0xFFF) == 0) && // [11:0]
                 ((local_data->vmm_regs.rcx >> 54) == 0));    // [63:54]

    TDXFV_ASSUME(tdr_fv.management_fields.fatal == false);

    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state != TD_KEYS_CONFIGURED); // invalid lifecycle

    TDXFV_ASSUME((tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) &&
                 (tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES));

    TDXFV_ASSUME((tdcs_fv.management_fields.op_state == OP_STATE_RUNNABLE) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_EXPORT) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_IMPORT));

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    TDXFV_ASSUME(tdvpr_pamt_entry_ptr->pt == PT_TDVPR);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_TD_KEYS_NOT_CONFIGURED) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_vp_enter__invalid_state_num_tdcx() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    TDXFV_ASSUME(((local_data->vmm_regs.rcx & 0xFFF) == 0) && // [11:0]
                 ((local_data->vmm_regs.rcx >> 54) == 0));    // [63:54]

    TDXFV_ASSUME(tdr_fv.management_fields.fatal == false);

    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);

    TDXFV_ASSUME(!(tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) ||
                 !(tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES)); // invalid tdcx num

    TDXFV_ASSUME((tdcs_fv.management_fields.op_state == OP_STATE_RUNNABLE) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_EXPORT) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_IMPORT));

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    TDXFV_ASSUME(tdvpr_pamt_entry_ptr->pt == PT_TDVPR);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_TDCX_NUM_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_vp_enter__invalid_state_op_state() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    TDXFV_ASSUME(((local_data->vmm_regs.rcx & 0xFFF) == 0) && // [11:0]
                 ((local_data->vmm_regs.rcx >> 54) == 0));    // [63:54]

    TDXFV_ASSUME(tdr_fv.management_fields.fatal == false);

    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);

    TDXFV_ASSUME((tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) &&
                 (tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES));

    TDXFV_ASSUME((tdcs_fv.management_fields.op_state != OP_STATE_RUNNABLE) &&
                 (tdcs_fv.management_fields.op_state != OP_STATE_LIVE_EXPORT) &&
                 (tdcs_fv.management_fields.op_state != OP_STATE_LIVE_IMPORT)); // invalid op state

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    TDXFV_ASSUME(tdvpr_pamt_entry_ptr->pt == PT_TDVPR);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_OP_STATE_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_vp_enter__invalid_state_pamt_metadata() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    TDXFV_ASSUME(((local_data->vmm_regs.rcx & 0xFFF) == 0) && // [11:0]
                 ((local_data->vmm_regs.rcx >> 54) == 0));    // [63:54]

    TDXFV_ASSUME(tdr_fv.management_fields.fatal == false);

    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);

    TDXFV_ASSUME((tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) &&
                 (tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES));

    TDXFV_ASSUME((tdcs_fv.management_fields.op_state == OP_STATE_RUNNABLE) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_EXPORT) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_IMPORT));

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    TDXFV_ASSUME(tdvpr_pamt_entry_ptr->pt != PT_TDVPR); // invalid metadata

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_PAGE_METADATA_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
}

void tdh_vp_enter__invalid_entry() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    bool_t precond = true;
    precond = precond && (((local_data->vmm_regs.rcx & 0xFFF) == 0) && // [11:0]
                          ((local_data->vmm_regs.rcx >> 54) == 0));    // [63:54]

    precond = precond && (tdr_fv.management_fields.fatal == false);

    precond = precond && (tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);

    precond = precond && ((tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) &&
                          (tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES));

    precond = precond && ((tdcs_fv.management_fields.op_state == OP_STATE_RUNNABLE) ||
                          (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_EXPORT) ||
                          (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_IMPORT));

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    precond = precond && (tdvpr_pamt_entry_ptr->pt == PT_TDVPR);
    TDXFV_ASSUME(precond == false);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
    TDXFV_ASSERT((local_data->vmm_regs.rax >> 63) == 1);
    uint64_t class_and_details = (local_data->vmm_regs.rax >> 32) & 0xFFFF; // [47:32]
    TDXFV_ASSERT((class_and_details != TDX_SUCCESS) &&
                 (class_and_details != TDX_NON_RECOVERABLE_VCPU) &&
                 (class_and_details != TDX_NON_RECOVERABLE_TD) &&
                 (class_and_details != TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE) &&
                 (class_and_details != TDX_TD_EXIT_ON_L2_VM_EXIT) &&
                 (class_and_details != TDX_TD_EXIT_ON_L2_TO_L1) &&
                 (class_and_details != TDX_HOST_PRIORITY_BUSY_TIMEOUT) &&
                 (class_and_details != TDX_NON_RECOVERABLE_TD_CORRUPTED_MD) &&
                 (class_and_details != TDX_TD_EXIT_BEFORE_L2_ENTRY) &&
                 (class_and_details != TDX_CROSS_TD_FAULT) &&
                 (class_and_details != TDX_CROSS_TD_TRAP)
    );
}

void tdh_vp_enter__valid_entry() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition
    TDXFV_ASSUME(((local_data->vmm_regs.rcx & 0xFFF) == 0) && // [11:0]
                 ((local_data->vmm_regs.rcx >> 54) == 0));    // [63:54]

    TDXFV_ASSUME(tdr_fv.management_fields.fatal == false);

    TDXFV_ASSUME(tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);

    TDXFV_ASSUME((tdr_fv.management_fields.num_tdcx >= MIN_NUM_TDCS_PAGES) &&
                 (tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES));

    TDXFV_ASSUME((tdcs_fv.management_fields.op_state == OP_STATE_RUNNABLE) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_EXPORT) ||
                 (tdcs_fv.management_fields.op_state == OP_STATE_LIVE_IMPORT));

    pa_t tdvpr_pa;
    tdvpr_pa.raw = TDXFV_NONDET_uint64t();
    tdvpr_pa.page_4k_num = ((vcpu_and_flags_t) local_data->vmm_regs.rcx).tdvpra_hpa_51_12;
    pamt_entry_t* tdvpr_pamt_entry_ptr = NULL;
    pamt_block_t tdvpr_pamt_block; // dummy
    bool_t tdvpr_locked_flag = false; // dummy
    api_error_type fwd_eval_check_hpa = check_and_lock_explicit_4k_private_hpa(tdvpr_pa, OPERAND_ID_RCX, TDX_LOCK_SHARED, 
        PT_TDVPR, &tdvpr_pamt_block, &tdvpr_pamt_entry_ptr, &tdvpr_locked_flag);
    TDXFV_ASSUME(fwd_eval_check_hpa == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdvpr_pamt_entry_ptr != NULL);

    TDXFV_ASSUME(tdvpr_pamt_entry_ptr->pt == PT_TDVPR);

#if 0
    pa_t tdr_pa = get_pamt_entry_owner(tdvpr_pamt_entry_ptr);
    tdr_t* tdr_ptr = NULL;
    pamt_entry_t* tdr_pamt_entry_ptr = NULL; // dummy
    bool_t tdr_locked_flag = false; // dummy
    api_error_type fwd_eval_map_tdr = lock_and_map_implicit_tdr(tdr_pa, OPERAND_ID_TDR, TDX_RANGE_RW, TDX_LOCK_SHARED, 
        &tdr_pamt_entry_ptr, &tdr_locked_flag, &tdr_ptr);
    TDXFV_ASSUME(fwd_eval_map_tdr == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdr_ptr != NULL);

    tdcs_t* tdcs_ptr = NULL;
    api_error_type fwd_eval_map_tdcs = check_state_map_tdcs_and_lock(tdr_ptr, TDX_RANGE_RW, TDX_LOCK_SHARED, false, 
        TDH_VP_ENTER_LEAF, &tdcs_ptr);
    TDXFV_ASSUME(fwd_eval_map_tdcs == TDX_SUCCESS); // XXX potential overconstrain
    TDXFV_ASSUME(tdcs_ptr != NULL);

    tdvps_t* tdvps_ptr = map_tdvps(tdvpr_pa, tdr_ptr->key_management_fields.hkid, tdcs_ptr->management_fields.num_l2_vms, TDX_RANGE_RW);
    TDXFV_ASSUME(tdvps_ptr != NULL);
    TDXFV_ASSUME(tdvps_ptr->management.last_td_exit != LAST_EXIT_TDVMCALL);
#endif

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
}

void tdh_vp_enter__free_entry() {
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition

    // Call ABI function
    local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

    // Task-specific postcondition
}

void tdh_vp_enter__post_cover_success() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax == TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_vp_enter__post_cover_unsuccess() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax != TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_vp_enter__common_postcond() {
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
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rbx == shadow_vmm_regs_precall.rbx);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rcx == shadow_vmm_regs_precall.rcx);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdx == shadow_vmm_regs_precall.rdx);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsp == shadow_vmm_regs_precall.rsp);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rbp == shadow_vmm_regs_precall.rbp);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsi == shadow_vmm_regs_precall.rsi);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdi == shadow_vmm_regs_precall.rdi);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r8 == shadow_vmm_regs_precall.r8);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r9 == shadow_vmm_regs_precall.r9);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r10 == shadow_vmm_regs_precall.r10);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r11 == shadow_vmm_regs_precall.r11);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r12 == shadow_vmm_regs_precall.r12);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r13 == shadow_vmm_regs_precall.r13);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r14 == shadow_vmm_regs_precall.r14);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r15 == shadow_vmm_regs_precall.r15);
}

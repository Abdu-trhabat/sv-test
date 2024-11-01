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

    TDXFV_ASSERT(local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX));

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

    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_TD_FATAL);

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

    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_TD_KEYS_NOT_CONFIGURED);

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

    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_TDCX_NUM_INCORRECT);

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

    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_OP_STATE_INCORRECT);

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

    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_PAGE_METADATA_INCORRECT);

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

 * @file keyhole_manager.c

 * @brief Keyhole manager implementation

 */



#include "keyhole_manager.h"

#include "x86_defs/x86_defs.h"

#include "data_structures/tdx_local_data.h"

#include "data_structures/loader_data.h"

#include "accessors/ia32_accessors.h"

#include "accessors/data_accessors.h"



_STATIC_INLINE_ uint64_t la_from_keyhole_idx(uint16_t keyhole_idx)

{

    // The keyhole mechanism allows LP with LPID = i to map at most M = 128 physical pages.

    // M keyhole access pages, starting at linear address Vi = Sysinfo.KeyholeRegionBase + i * M * 4K



    tdx_debug_assert(keyhole_idx < MAX_KEYHOLE_PER_LP);



    return get_sysinfo_table()->keyhole_rgn_base +

            (((uint64_t)get_local_data()->lp_info.lp_id * MAX_KEYHOLE_PER_LP + keyhole_idx) * (uint64_t)0x1000);

}



_STATIC_INLINE_ uint16_t keyhole_idx_from_la(uint64_t la)

{

    // The keyhole mechanism allows LP with LPID = i to map at most M = 128 physical pages.

    // M keyhole access pages, starting at linear address Vi = Sysinfo.KeyholeRegionBase + i * M * 4K



    tdx_debug_assert(la >= (get_sysinfo_table()->keyhole_rgn_base +

            (get_local_data()->lp_info.lp_id * MAX_KEYHOLE_PER_LP) * 0x1000));

    tdx_debug_assert(la < (get_sysinfo_table()->keyhole_rgn_base +

            ((get_local_data()->lp_info.lp_id + 1 ) * MAX_KEYHOLE_PER_LP) * 0x1000));



    uint16_t keyhole_idx = (uint16_t)(((la - get_sysinfo_table()->keyhole_rgn_base) / 0x1000) -

                                      (get_local_data()->lp_info.lp_id * MAX_KEYHOLE_PER_LP));



    tdx_debug_assert(keyhole_idx < MAX_KEYHOLE_PER_LP);



    return keyhole_idx;

}



static void fill_keyhole_pte(uint16_t keyhole_idx, uint64_t pa, bool_t is_writable, bool_t is_wb_memtype)

{

    uint64_t lp_keyhole_edit_base = get_sysinfo_table()->keyhole_edit_rgn_base +

            (uint64_t)(get_local_data()->lp_info.lp_id * MAX_KEYHOLE_PER_LP * sizeof(ia32e_pxe_t));



    ia32e_pxe_t* pte_p = (ia32e_pxe_t*)(lp_keyhole_edit_base + (uint64_t)((uint32_t)keyhole_idx * sizeof(ia32e_pxe_t)));

    ia32e_pxe_t new_pte;



    new_pte.raw = (uint64_t)0;



    new_pte.fields_4k.addr = (pa >> 12);

    new_pte.fields_4k.p    = 1;

    new_pte.fields_4k.a    = 1;

    new_pte.fields_4k.xd   = 1;

    new_pte.fields_4k.rw   = is_writable;

    new_pte.fields_4k.d    = is_writable;



    // If not WB memtype - UC required - which is mapped in index 7 of IA32_PAT_MSR

    if (is_wb_memtype == false)

    {

        new_pte.fields_4k.pat = 1;

        new_pte.fields_4k.pwt = 1;

        new_pte.fields_4k.pcd = 1;

    }

    // Else - default WB memtype required - mapped at index 0 of IA32_PAT_MSR (PAT=PWT=PCD=0)



    ia32_set_ac();



    pte_p->raw = new_pte.raw;



    ia32_clear_ac();



    return;

}



static uint16_t hash_pa(uint64_t bits)

{

    uint16_t res;



    res = (uint16_t)(bits & BIT_MASK_16BITS);

    res ^= (uint16_t)((bits >> 16) & BIT_MASK_16BITS);

    res ^= (uint16_t)((bits >> 32) & BIT_MASK_16BITS);

    res ^= (uint16_t)((bits >> 48) & BIT_MASK_16BITS);



    res %= (uint16_t)MAX_KEYHOLE_PER_LP;



    return res;

}



static uint16_t hash_table_find_entry(uint64_t pa, bool_t is_writable, bool_t is_wb_memtype, uint16_t* prev_idx)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    uint64_t pa_pg_start = PG_START(pa);



    uint16_t hash_idx = hash_pa(pa_pg_start);

    uint16_t keyhole_idx = keyhole_state->hash_table[hash_idx];

    uint16_t ret_idx = UNDEFINED_IDX;



    keyhole_entry_t* keyhole;



    while (keyhole_idx != UNDEFINED_IDX)

    {

        tdx_debug_assert(keyhole_idx < MAX_KEYHOLE_PER_LP);

        keyhole = &keyhole_state->keyhole_array[keyhole_idx];



        if ((keyhole->mapped_pa == pa_pg_start) && (keyhole->is_writable == is_writable) &&

            (keyhole->is_wb_memtype == is_wb_memtype))

        {

            ret_idx = keyhole_idx;

            break;

        }

        if (prev_idx != NULL)

        {

            *prev_idx = keyhole_idx;

        }

        keyhole_idx = keyhole->hash_list_next;

    }



    return ret_idx;

}



static void hash_table_remove_entry(uint64_t pa, bool_t is_writable, bool_t is_wb_memtype)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    uint64_t pa_pg_start = PG_START(pa);



    uint16_t hash_idx = hash_pa(pa_pg_start);

    uint16_t prev_idx = UNDEFINED_IDX;

    uint16_t keyhole_idx = hash_table_find_entry(pa, is_writable, is_wb_memtype, &prev_idx);



    keyhole_entry_t* keyhole;



    keyhole = &keyhole_state->keyhole_array[keyhole_idx];



    // Indicates first entry in the hash table

    if (prev_idx == UNDEFINED_IDX)

    {

        keyhole_state->hash_table[hash_idx] = keyhole->hash_list_next;

    }

    else

    {

        tdx_debug_assert(prev_idx < MAX_KEYHOLE_PER_LP);

        keyhole_state->keyhole_array[prev_idx].hash_list_next = keyhole->hash_list_next;

    }



    keyhole->hash_list_next = (uint16_t)UNDEFINED_IDX;

}



static void hash_table_insert_entry(uint64_t pa, uint16_t new_keyhole_idx)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    uint64_t pa_pg_start = PG_START(pa);



    uint16_t hash_idx = hash_pa(pa_pg_start);

    uint16_t keyhole_idx = keyhole_state->hash_table[hash_idx];



    keyhole_state->keyhole_array[new_keyhole_idx].hash_list_next = keyhole_idx;

    keyhole_state->hash_table[hash_idx] = new_keyhole_idx;

}



static void lru_cache_remove_entry(uint16_t keyhole_idx)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    uint16_t lru_prev = keyhole_state->keyhole_array[keyhole_idx].lru_prev;

    uint16_t lru_next = keyhole_state->keyhole_array[keyhole_idx].lru_next;



    if (keyhole_state->lru_head == keyhole_idx)

    {

        keyhole_state->lru_head = lru_prev;

    }



    if (keyhole_state->lru_tail == keyhole_idx)

    {

        keyhole_state->lru_tail = lru_next;

    }



    if (lru_prev != UNDEFINED_IDX)

    {

        tdx_debug_assert(lru_prev < MAX_KEYHOLE_PER_LP);

        keyhole_state->keyhole_array[lru_prev].lru_next = lru_next;

    }



    if (lru_next != UNDEFINED_IDX)

    {

        tdx_debug_assert(lru_next < MAX_KEYHOLE_PER_LP);

        keyhole_state->keyhole_array[lru_next].lru_prev = lru_prev;

    }

}



static void lru_cache_add_head_entry(uint16_t keyhole_idx)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    uint16_t lru_prev = keyhole_state->lru_head;



    if (lru_prev == UNDEFINED_IDX)

    {

        keyhole_state->lru_head = keyhole_idx;

    } else {

        tdx_debug_assert(lru_prev < MAX_KEYHOLE_PER_LP);

        keyhole_state->keyhole_array[lru_prev].lru_next = keyhole_idx;

    }



    keyhole_state->keyhole_array[keyhole_idx].lru_prev = lru_prev;

    keyhole_state->keyhole_array[keyhole_idx].lru_next = (uint16_t)UNDEFINED_IDX;



    keyhole_state->lru_head = keyhole_idx;

}



void init_keyhole_state(void)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    // At init state - free keyhole entries will be linked in the LRU list

    // So that as long as there are any free entries left, they will be used before

    // cached entries will be reused.



    for (uint16_t i = 0; i < MAX_KEYHOLE_PER_LP; i++)

    {

        keyhole_state->keyhole_array[i].state = (uint8_t)KH_ENTRY_FREE;

        keyhole_state->keyhole_array[i].lru_prev = i - 1;

        keyhole_state->keyhole_array[i].lru_next = i + 1;

        keyhole_state->keyhole_array[i].hash_list_next = (uint16_t)UNDEFINED_IDX;

        keyhole_state->keyhole_array[i].mapped_pa = 0;

        keyhole_state->keyhole_array[i].is_writable = 0;

        keyhole_state->keyhole_array[i].ref_count = 0;



        keyhole_state->hash_table[i] = (uint16_t)UNDEFINED_IDX;

    }



    keyhole_state->keyhole_array[0].lru_prev = (uint16_t)UNDEFINED_IDX;

    keyhole_state->keyhole_array[MAX_CACHEABLE_KEYHOLES - 1].lru_next = (uint16_t)UNDEFINED_IDX;



    keyhole_state->lru_head = MAX_CACHEABLE_KEYHOLES - 1;

    keyhole_state->lru_tail = 0;



    keyhole_state->total_ref_count = 0;

}



static void* map_pa_with_memtype(void* pa, mapping_type_t mapping_type, bool_t is_wb_memtype)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    bool_t is_writable = (mapping_type == TDX_RANGE_RW) ? true : false;



    // Search the requested PA first, if it's mapped or cached

    uint16_t keyhole_idx = hash_table_find_entry((uint64_t)pa, is_writable, is_wb_memtype, NULL);



    // Increment the total ref count and check for overflow

    keyhole_state->total_ref_count += 1;

    tdx_sanity_check(keyhole_state->total_ref_count != 0, SCEC_KEYHOLE_MANAGER_SOURCE, 0);



    // Requested PA is already mapped/cached

    if (keyhole_idx != UNDEFINED_IDX)

    {

        tdx_debug_assert(keyhole_idx < MAX_KEYHOLE_PER_LP);

        // If the relevant keyhole is marked for removal, remove it from the LRU cache list

        // and make it "mapped"

        if (keyhole_state->keyhole_array[keyhole_idx].state == KH_ENTRY_CAN_BE_REMOVED)

        {

            lru_cache_remove_entry(keyhole_idx);

            keyhole_state->keyhole_array[keyhole_idx].state = (uint8_t)KH_ENTRY_MAPPED;

        }

        keyhole_state->keyhole_array[keyhole_idx].ref_count += 1;



        // Check ref count overflow

        tdx_sanity_check(keyhole_state->keyhole_array[keyhole_idx].ref_count != 0, SCEC_KEYHOLE_MANAGER_SOURCE, 1);



        // Protection against speculative attacks on sensitive physical addresses

        lfence();



        // In any case, both MAPPED and CAN_BE_REMOVED - return the existing LA to the user

        return (void*)(la_from_keyhole_idx(keyhole_idx) | PG_OFFSET((uint64_t)pa));

    }



    // If it's not mapped, take the entry from LRU tail

    // If there are any free entries, they will be first from tail in the LRU list

    keyhole_idx = keyhole_state->lru_tail;



    // Check if there any available keyholes left, otherwise - kill the module

    tdx_sanity_check(keyhole_idx != UNDEFINED_IDX, SCEC_KEYHOLE_MANAGER_SOURCE, 2);



    keyhole_entry_t* target_keyhole = &keyhole_state->keyhole_array[keyhole_idx];



    uint64_t la = la_from_keyhole_idx(keyhole_idx) | PG_OFFSET((uint64_t)pa);



    // Remove the entry from the LRU list - valid for both FREE and CAN_BE_REMOVED

    lru_cache_remove_entry(keyhole_idx);



    // If a cached entry is being reused:

    bool_t flush = (target_keyhole->state == KH_ENTRY_CAN_BE_REMOVED);



    // Remove it from LRU list, remove it from the search hash table, and flush TLB

    if (flush)

    {

        hash_table_remove_entry(target_keyhole->mapped_pa, target_keyhole->is_writable,

                                target_keyhole->is_wb_memtype);

    }



    // Update the entry info, insert it to the search hash table, and fill the actual PTE

    target_keyhole->state = KH_ENTRY_MAPPED;

    target_keyhole->mapped_pa = PG_START((uint64_t)pa);

    target_keyhole->is_writable = is_writable;

    target_keyhole->is_wb_memtype = is_wb_memtype;

    target_keyhole->ref_count = 1;



    hash_table_insert_entry((uint64_t)pa, keyhole_idx);

    fill_keyhole_pte(keyhole_idx, (uint64_t)pa, is_writable, is_wb_memtype);



    // Flush the TLB for a reused entry - ***AFTER*** the PTE was updated

    // If INVLPG is done before the PTE is updated - the TLB entry may not be flushed properly

    if (flush)

    {

        ia32_invalidate_tlb_entries(la);

    }



    // Protection against speculative attacks on sensitive physical addresses

    lfence();



    return (void*)la;

}



void* map_pa_non_wb(void* pa, mapping_type_t mapping_type)

{

    return map_pa_with_memtype(pa, mapping_type, false);

}



void* map_pa(void* pa, mapping_type_t mapping_type)

{

    return map_pa_with_memtype(pa, mapping_type, true);

}



void free_la(void* la)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    uint16_t keyhole_idx = keyhole_idx_from_la((uint64_t)la);



    tdx_sanity_check((keyhole_state->keyhole_array[keyhole_idx].state != KH_ENTRY_FREE) &&

                     (keyhole_state->keyhole_array[keyhole_idx].state != KH_ENTRY_CAN_BE_REMOVED),

                     SCEC_KEYHOLE_MANAGER_SOURCE, 3);



    if (keyhole_idx >= MAX_CACHEABLE_KEYHOLES)

    {

        return;

    }



    tdx_sanity_check((keyhole_state->total_ref_count > 0) &&

                     (keyhole_state->keyhole_array[keyhole_idx].ref_count > 0), SCEC_KEYHOLE_MANAGER_SOURCE, 4);



    keyhole_state->total_ref_count -= 1;

    keyhole_state->keyhole_array[keyhole_idx].ref_count -= 1;



    if (keyhole_state->keyhole_array[keyhole_idx].ref_count == 0)

    {

        keyhole_state->keyhole_array[keyhole_idx].state = (uint8_t)KH_ENTRY_CAN_BE_REMOVED;

        lru_cache_add_head_entry(keyhole_idx);

    }



    return;

}



void* map_continuous_pages(uint64_t* pa_array, uint16_t array_size, mapping_type_t mapping_type,

                           uint16_t starting_static_keyhole)

{

    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;

    bool_t is_writable = (mapping_type == TDX_RANGE_RW) ? true : false;



    tdx_debug_assert(MAX_STATIC_KEYHOLES > starting_static_keyhole);

    tdx_debug_assert(array_size <= (MAX_STATIC_KEYHOLES - starting_static_keyhole));



    for (uint16_t i = 0; i < array_size; i++)

    {

        uint64_t pa = PG_START(pa_array[i]);

        uint16_t keyhole_idx = (uint16_t)MAX_CACHEABLE_KEYHOLES + starting_static_keyhole + i;



        keyhole_entry_t* target_keyhole = &keyhole_state->keyhole_array[keyhole_idx];



        // If the static keyhole already mapped - but for a different PA/different access rights

        // Flush the TLB for that entry and replace it

        bool_t flush = (target_keyhole->state == KH_ENTRY_MAPPED) &&

                        ((target_keyhole->mapped_pa != pa) || (target_keyhole->is_writable != is_writable));



        // Flush the TLB for a reused entry - ***AFTER*** the PTE was updated

        // If INVLPG is done before the PTE is updated - the TLB entry may not be flushed properly

        IF_RARE(flush || (target_keyhole->state != KH_ENTRY_MAPPED))

        {

            target_keyhole->state = (uint8_t)KH_ENTRY_MAPPED;

            target_keyhole->mapped_pa = pa;

            target_keyhole->is_writable = is_writable;

            target_keyhole->is_wb_memtype = true;



            fill_keyhole_pte(keyhole_idx, pa, is_writable, true);

        }

        IF_RARE (flush)

        {

            uint64_t la = la_from_keyhole_idx(keyhole_idx);

            ia32_invalidate_tlb_entries(la);

        }

    }



    // Protection against speculative attacks on sensitive physical addresses

    lfence();



    return (void*)(la_from_keyhole_idx(MAX_CACHEABLE_KEYHOLES + starting_static_keyhole));

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

 * @file pamt_manager.c

 * @brief PAMT manager implementation

 */



#include "pamt_manager.h"

#include "data_structures/tdx_global_data.h"

#include "keyhole_manager.h"

#include "accessors/data_accessors.h"

#include "helpers/helpers.h"



bool_t pamt_get_block(pa_t pa, pamt_block_t* pamt_block)

{

    tdmr_entry_t* covering_tdmr = NULL;

    tdx_module_global_t* global_data_ptr = get_global_data();



    uint64_t pa_addr = get_addr_from_pa(pa);



    // Assuming that TDMR table is sorted by base (ascending)

    for (uint32_t i = 0; i < global_data_ptr->num_of_tdmr_entries; i++)

    {

        if (global_data_ptr->tdmr_table[i].base <= pa_addr)

        {

            covering_tdmr = &global_data_ptr->tdmr_table[i];

        }

        else

        {

            break;

        }

    }



    if (covering_tdmr == NULL || pa_addr >= (covering_tdmr->base + covering_tdmr->size))

    {

        TDX_ERROR("Couldn't find covering TDMR for PA = 0x%llx\n", pa_addr);

        return false;

    }



    pa_t offset_pa;



    offset_pa.raw = pa_addr - covering_tdmr->base;

    uint32_t pamt_block_num = (uint32_t)offset_pa.page_1g_num;



    tdx_sanity_check(pamt_block_num < covering_tdmr->num_of_pamt_blocks, SCEC_PAMT_MANAGER_SOURCE, 0);



    if (pa_addr >= (covering_tdmr->last_initialized & ~(_1GB - 1)))

    {

        TDX_ERROR("PA = 0x%llx wasn't initialized yet for the covering TDMR (last init addr = 0x%llx)\n",

                pa_addr, covering_tdmr->last_initialized);

        return false;

    }



    pamt_block->pamt_1gb_p = (pamt_entry_t*) (covering_tdmr->pamt_1g_base

            + (uint64_t)(pamt_block_num * sizeof(pamt_entry_t)));

    pamt_block->pamt_2mb_p = (pamt_entry_t*) (covering_tdmr->pamt_2m_base

            + (uint64_t)(pamt_block_num * sizeof(pamt_entry_t) * PAMT_2MB_ENTRIES_IN_1GB));

    pamt_block->pamt_4kb_p = (pamt_entry_t*) (covering_tdmr->pamt_4k_base

            + (uint64_t)(pamt_block_num * sizeof(pamt_entry_t) * PAMT_4KB_ENTRIES_IN_1GB));



    return true;

}





#define PAMT_4K_ENTRIES_IN_2MB    (_2MB / _4KB)

#define PAMT_4K_ENTRIES_IN_1GB    (_1GB / _4KB)

#define PAMT_4K_ENTRIES_IN_CACHE  (MOVDIR64_CHUNK_SIZE / sizeof(pamt_entry_t))



_STATIC_INLINE_ bool_t is_page_reserved(uint64_t page_offset, tdmr_entry_t *tdmr_entry, uint32_t* last_rsdv_idx)

{

    uint64_t rsvd_offset, rsvd_offset_end;

    uint32_t i;



    for (i = *last_rsdv_idx; i < tdmr_entry->num_of_rsvd_areas; i++)

    {

        rsvd_offset = tdmr_entry->rsvd_areas[i].offset;

        rsvd_offset_end = rsvd_offset + tdmr_entry->rsvd_areas[i].size;



        if ((page_offset >= rsvd_offset) && (page_offset < rsvd_offset_end))

        {

            *last_rsdv_idx = i;

            return true;

        }

    }



    *last_rsdv_idx = i;

    return false;

}



_STATIC_INLINE_ void pamt_4kb_init(pamt_block_t* pamt_block, uint64_t num_4k_entries, tdmr_entry_t *tdmr_entry)

{

    pamt_entry_t* pamt_entry = NULL;

    uint64_t current_4k_page_idx = ((uint64_t)pamt_block->pamt_4kb_p - tdmr_entry->pamt_4k_base)

                                    / sizeof(pamt_entry_t);

    uint64_t page_offset;

    uint32_t last_rsdv_idx = 0;



    // PAMT_CHILD_ENTRIES pamt entries take more than 1 page size, this is why

    // we need to do a new map each time we reach new page in the entries array

    // Since we work with chunks of PAMT_CHILD_ENTRIES entries it time,

    // the start address is always aligned on 4K page

    uint32_t pamt_entries_in_page = TDX_PAGE_SIZE_IN_BYTES / sizeof(pamt_entry_t);

    uint32_t pamt_pages = (uint32_t)(num_4k_entries / pamt_entries_in_page);



    pamt_entry_t* pamt_entry_start = pamt_block->pamt_4kb_p;

    tdx_sanity_check(((uint64_t)pamt_entry_start % TDX_PAGE_SIZE_IN_BYTES) == 0,

            SCEC_PAMT_MANAGER_SOURCE, 11);

    for (uint32_t i = 0; i < pamt_pages; i++)

    {

        pamt_entry = map_pa_with_global_hkid(

                &pamt_entry_start[pamt_entries_in_page * i], TDX_RANGE_RW);

        // create a cache aligned, cache sized chunk and fill it with 'val'

        ALIGN(MOVDIR64_CHUNK_SIZE) pamt_entry_t chunk[PAMT_4K_ENTRIES_IN_CACHE];

        basic_memset((uint64_t)chunk, PAMT_4K_ENTRIES_IN_CACHE*sizeof(pamt_entry_t), 0 , PAMT_4K_ENTRIES_IN_CACHE*sizeof(pamt_entry_t));

        for (uint32_t j = 0; j < pamt_entries_in_page; j++, current_4k_page_idx++)

        {

            page_offset = current_4k_page_idx * TDX_PAGE_SIZE_IN_BYTES;

            if (is_page_reserved(page_offset, tdmr_entry, &last_rsdv_idx))

            {

                chunk[j%PAMT_4K_ENTRIES_IN_CACHE].pt = PT_RSVD;

            }

            else

            {

                chunk[j%PAMT_4K_ENTRIES_IN_CACHE].pt = PT_NDA;

                last_rsdv_idx = 0;

            }

            if ((j+1)%PAMT_4K_ENTRIES_IN_CACHE == 0)

            {

                fill_cachelines_no_sfence((void*)&(pamt_entry[j-3]), (uint8_t*)chunk, 1);

            }

        }

        mfence();

        free_la(pamt_entry);

    }

}



_STATIC_INLINE_ void pamt_nodes_init(uint64_t start_pamt_4k_p, uint64_t end_pamt_4k_p,

        pamt_entry_t* nodes_array, uint64_t entries_in_node, tdmr_entry_t *tdmr_entry)

{

    pamt_entry_t* pamt_entry;



    uint64_t entries_start = (start_pamt_4k_p - tdmr_entry->pamt_4k_base) / (entries_in_node * (uint64_t)sizeof(pamt_entry_t));

    uint64_t entries_end   = (end_pamt_4k_p - tdmr_entry->pamt_4k_base) / (entries_in_node * (uint64_t)sizeof(pamt_entry_t));



    uint32_t i = 0;

    while ((entries_end - (uint64_t)i) > entries_start)

    {

        void* entry_p = &nodes_array[i];

        pamt_entry = map_pa_with_global_hkid(entry_p, TDX_RANGE_RW);

        if (is_cacheline_aligned(entry_p))

        {

            zero_cacheline(pamt_entry);

        }

        pamt_entry->pt = PT_NDA;



        free_la(pamt_entry);

        i++;

    }

}



void pamt_init(pamt_block_t* pamt_block, uint64_t num_4k_entries, tdmr_entry_t *tdmr_entry)

{

    uint64_t start_pamt_4k_p = (uint64_t)pamt_block->pamt_4kb_p;

    uint64_t end_pamt_4k_p = start_pamt_4k_p + (num_4k_entries * (uint64_t)sizeof(pamt_entry_t));



    pamt_4kb_init(pamt_block, num_4k_entries, tdmr_entry);

    pamt_nodes_init(start_pamt_4k_p, end_pamt_4k_p, pamt_block->pamt_2mb_p, PAMT_4K_ENTRIES_IN_2MB, tdmr_entry);

    pamt_nodes_init(start_pamt_4k_p, end_pamt_4k_p, pamt_block->pamt_1gb_p, PAMT_4K_ENTRIES_IN_1GB, tdmr_entry);

}



api_error_code_e pamt_walk(pa_t pa, pamt_block_t pamt_block, lock_type_t leaf_lock_type,

                           page_size_t* leaf_size, bool_t walk_to_leaf_size, bool_t is_guest,

                           pamt_entry_t** pamt_entry)

{

    pamt_entry_t* pamt_1gb = map_pa_with_global_hkid(pamt_block.pamt_1gb_p, TDX_RANGE_RW);

    pamt_entry_t* pamt_2mb = map_pa_with_global_hkid(&pamt_block.pamt_2mb_p[pa.pamt_2m.idx], TDX_RANGE_RW);

    pamt_entry_t* pamt_4kb = map_pa_with_global_hkid(&pamt_block.pamt_4kb_p[pa.pamt_4k.idx], TDX_RANGE_RW);



    pamt_entry_t* ret_entry_pp = NULL;



    page_size_t target_size = walk_to_leaf_size ? *leaf_size : PT_4KB;



    api_error_code_e retval = UNINITIALIZE_ERROR;



    *pamt_entry = NULL;



    // Exclusive mode is not supported in guest-side calls

    tdx_debug_assert(!(is_guest && (leaf_lock_type == TDX_LOCK_EXCLUSIVE)));



    // Acquire PAMT 1GB entry lock as shared

    if ((retval = acquire_sharex_lock_hp(&pamt_1gb->entry_lock, TDX_LOCK_SHARED, is_guest)) != TDX_SUCCESS)

    {

        goto EXIT;

    }



    // Return pamt_1g entry if it is currently a leaf entry

    if ((pamt_1gb->pt == PT_REG) || (target_size == PT_1GB))

    {

        // Promote PAMT lock to exclusive if needed

        if ((leaf_lock_type == TDX_LOCK_EXCLUSIVE) &&

            ((retval = promote_sharex_lock_hp(&pamt_1gb->entry_lock)) != TDX_SUCCESS))

        {

            goto EXIT_FAILURE_RELEASE_ROOT;

        }



        *leaf_size = PT_1GB;

        ret_entry_pp = pamt_block.pamt_1gb_p;



        goto EXIT;

    }



    // Acquire PAMT 2MB entry lock as shared

    if ((retval = acquire_sharex_lock_hp(&pamt_2mb->entry_lock, TDX_LOCK_SHARED, is_guest)) != TDX_SUCCESS)

    {

        goto EXIT_FAILURE_RELEASE_ROOT;

    }



    // Return pamt_2m entry if it is leaf

    if ((pamt_2mb->pt == PT_REG) || (target_size == PT_2MB))

    {

        // Promote PAMT lock to exclusive if needed

        if ((leaf_lock_type == TDX_LOCK_EXCLUSIVE) &&

            ((retval = promote_sharex_lock_hp(&pamt_2mb->entry_lock)) != TDX_SUCCESS))

        {

            goto EXIT_FAILURE_RELEASE_ALL;

        }



        *leaf_size = PT_2MB;

        ret_entry_pp = &pamt_block.pamt_2mb_p[pa.pamt_2m.idx];



        goto EXIT;

    }



    // Acquire PAMT 4KB entry lock as shared/exclusive based on the lock flag

    if ((retval = acquire_sharex_lock_hp(&pamt_4kb->entry_lock, leaf_lock_type, is_guest)) != TDX_SUCCESS)

    {

        goto EXIT_FAILURE_RELEASE_ALL;

    }



    *leaf_size = PT_4KB;

    ret_entry_pp = &pamt_block.pamt_4kb_p[pa.pamt_4k.idx];



    goto EXIT;



EXIT_FAILURE_RELEASE_ALL:

    // Release PAMT 2MB shared lock

    release_sharex_lock_hp_sh(&pamt_2mb->entry_lock);

EXIT_FAILURE_RELEASE_ROOT:

    // Release PAMT 1GB shared lock

    release_sharex_lock_hp_sh(&pamt_1gb->entry_lock);



EXIT:

    free_la(pamt_1gb);

    free_la(pamt_2mb);

    free_la(pamt_4kb);



    if (ret_entry_pp != NULL)

    {

        *pamt_entry = map_pa_with_global_hkid(ret_entry_pp,

                (leaf_lock_type == TDX_LOCK_EXCLUSIVE) ? TDX_RANGE_RW : TDX_RANGE_RO);

    }



    return retval;

}



void pamt_unwalk(pa_t pa, pamt_block_t pamt_block, pamt_entry_t* pamt_entry_p,

                 lock_type_t leaf_lock_type, page_size_t leaf_size)

{

    pamt_entry_t* pamt_1gb = map_pa_with_global_hkid(pamt_block.pamt_1gb_p, TDX_RANGE_RW);

    pamt_entry_t* pamt_2mb = map_pa_with_global_hkid(&pamt_block.pamt_2mb_p[pa.pamt_2m.idx], TDX_RANGE_RW);

    pamt_entry_t* pamt_4kb = map_pa_with_global_hkid(&pamt_block.pamt_4kb_p[pa.pamt_4k.idx], TDX_RANGE_RW);



    switch (leaf_size)

    {

        case PT_4KB:

            release_sharex_lock_hp(&pamt_4kb->entry_lock, leaf_lock_type);

            release_sharex_lock_hp_sh(&pamt_2mb->entry_lock);

            release_sharex_lock_hp_sh(&pamt_1gb->entry_lock);



            break;



        case PT_2MB:

            release_sharex_lock_hp(&pamt_2mb->entry_lock, leaf_lock_type);

            release_sharex_lock_hp_sh(&pamt_1gb->entry_lock);



            break;



        case PT_1GB:

            release_sharex_lock_hp(&pamt_1gb->entry_lock, leaf_lock_type);



            break;



        default:

            tdx_sanity_check(0, SCEC_PAMT_MANAGER_SOURCE, 2);

    }



    free_la(pamt_1gb);

    free_la(pamt_2mb);

    free_la(pamt_4kb);



    free_la(pamt_entry_p);



    return;



}



api_error_code_e pamt_promote(pa_t pa, page_size_t new_leaf_size)

{

    pamt_entry_t* promoted_pamt_entry = NULL;

    pamt_entry_t* pamt_entry_children_pa = NULL;

    pamt_entry_t* pamt_entry_children_la = NULL;

    pamt_block_t pamt_block;

    api_error_code_e retval = UNINITIALIZE_ERROR;



    tdx_sanity_check((new_leaf_size == PT_2MB) || (new_leaf_size == PT_1GB), SCEC_PAMT_MANAGER_SOURCE, 3);



    // Get PAMT block of the merge page address (should never fail)

    if (!pamt_get_block(pa, &pamt_block))

    {

        FATAL_ERROR();

    }



    if (new_leaf_size == PT_2MB)

    {

        promoted_pamt_entry = map_pa_with_global_hkid(&pamt_block.pamt_2mb_p[pa.pamt_2m.idx], TDX_RANGE_RW);

        pamt_entry_children_pa = &pamt_block.pamt_4kb_p[pa.pamt_4k.idx];

    }

    else // No other case except PT_1GB here, enforced by sanity check above

    {

        promoted_pamt_entry = map_pa_with_global_hkid(pamt_block.pamt_1gb_p, TDX_RANGE_RW);

        pamt_entry_children_pa = &pamt_block.pamt_2mb_p[pa.pamt_2m.idx];

    }



    tdx_sanity_check(promoted_pamt_entry->pt == PT_NDA, SCEC_PAMT_MANAGER_SOURCE, 4);



    // Acquire exclusive lock on the promoted entry

    if ((retval = acquire_sharex_lock_hp_ex(&promoted_pamt_entry->entry_lock, false)) != TDX_SUCCESS)

    {

        goto EXIT;

    }



    // PAMT_CHILD_ENTRIES pamt entries take more than 1 page size, this is why

    // we need to do a new map each time we reach new page in the entries array

    // Since we work with chunks of PAMT_CHILD_ENTRIES entries it time,

    // the start address is always aligned on 4K page

    uint32_t pamt_entries_in_page = TDX_PAGE_SIZE_IN_BYTES / sizeof(pamt_entry_t);

    uint32_t pamt_pages = PAMT_CHILD_ENTRIES / pamt_entries_in_page;



    tdx_sanity_check(((uint64_t)pamt_entry_children_pa % TDX_PAGE_SIZE_IN_BYTES) == 0,

            SCEC_PAMT_MANAGER_SOURCE, 5);



    for (uint32_t i = 0; i < pamt_pages; i++)

    {

        pamt_entry_children_la = map_pa_with_global_hkid(

                &pamt_entry_children_pa[pamt_entries_in_page * i], TDX_RANGE_RW);



        for (uint32_t j = 0; j < pamt_entries_in_page; j++)

        {

            if (i == 0 && j == 0)

            {

                // Copy the first child leaf metadata to the merged new leaf entry

                // making its page type PT_REG and inheriting its owner

                promoted_pamt_entry->pt = pamt_entry_children_la[0].pt;

                promoted_pamt_entry->owner = pamt_entry_children_la[0].owner;

            }



            tdx_sanity_check((promoted_pamt_entry->pt == pamt_entry_children_la[j].pt) &&

                       (promoted_pamt_entry->owner == pamt_entry_children_la[j].owner),

                       SCEC_PAMT_MANAGER_SOURCE, 6);



            pamt_entry_children_la[j].pt = PT_NDA;

        }



        free_la(pamt_entry_children_la);

    }



    // Release previously acquired exclusive lock

    release_sharex_lock_hp_ex(&promoted_pamt_entry->entry_lock);



    retval = TDX_SUCCESS;



EXIT:

    free_la(promoted_pamt_entry);



    return retval;

}



api_error_code_e pamt_demote(pa_t pa, page_size_t leaf_size)

{

    pamt_entry_t* demoted_pamt_entry = NULL;

    pamt_entry_t* pamt_entry_children_pa = NULL;

    pamt_entry_t* pamt_entry_children_la = NULL;

    pamt_block_t pamt_block;

    api_error_code_e retval = UNINITIALIZE_ERROR;



    tdx_sanity_check((leaf_size == PT_2MB) || (leaf_size == PT_1GB), SCEC_PAMT_MANAGER_SOURCE, 7);



    // Get PAMT block (should never fail)

    if (!pamt_get_block(pa, &pamt_block))

    {

        FATAL_ERROR();

    }



    if (leaf_size == PT_2MB)

    {

        demoted_pamt_entry = map_pa_with_global_hkid(&pamt_block.pamt_2mb_p[pa.pamt_2m.idx], TDX_RANGE_RW);

        pamt_entry_children_pa = &pamt_block.pamt_4kb_p[pa.pamt_4k.idx];

    }

    else // No other case except PT_1GB here, enforced by sanity check above

    {

        demoted_pamt_entry = map_pa_with_global_hkid(pamt_block.pamt_1gb_p, TDX_RANGE_RW);

        pamt_entry_children_pa = &pamt_block.pamt_2mb_p[pa.pamt_2m.idx];

    }



    tdx_sanity_check(demoted_pamt_entry->pt == PT_REG, SCEC_PAMT_MANAGER_SOURCE, 8);



    // Acquire exclusive lock on the demoted entry

    if ((retval = acquire_sharex_lock_hp_ex(&demoted_pamt_entry->entry_lock, false)) != TDX_SUCCESS)

    {

        goto EXIT;

    }



    // PAMT_CHILD_ENTRIES pamt entries take more than 1 page size, this is why

    // we need to do a new map each time we reach new page in the entries array

    // Since we work with chunks of PAMT_CHILD_ENTRIES entries it time,

    // the start address is always aligned on 4K page

    uint32_t pamt_entries_in_page = TDX_PAGE_SIZE_IN_BYTES / sizeof(pamt_entry_t);

    uint32_t pamt_pages = PAMT_CHILD_ENTRIES / pamt_entries_in_page;



    tdx_sanity_check(((uint64_t)pamt_entry_children_pa % TDX_PAGE_SIZE_IN_BYTES) == 0,

            SCEC_PAMT_MANAGER_SOURCE, 9);



    for (uint32_t i = 0; i < pamt_pages; i++)

    {

        pamt_entry_children_la = map_pa_with_global_hkid(

                &pamt_entry_children_pa[pamt_entries_in_page * i], TDX_RANGE_RW);



        for (uint32_t j = 0; j < pamt_entries_in_page; j++)

        {

            // Copy the leaf entry metadata to its 512 child entries

            pamt_entry_children_la[j].pt = demoted_pamt_entry->pt;

            pamt_entry_children_la[j].owner = demoted_pamt_entry->owner;

            pamt_entry_children_la[j].bepoch.raw = 0;

        }



        free_la(pamt_entry_children_la);

    }



    // Convert parent entry type from regular to NDA

    demoted_pamt_entry->pt = PT_NDA;



    // Release previously acquired exclusive lock

    release_sharex_lock_hp_ex(&demoted_pamt_entry->entry_lock);



    retval = TDX_SUCCESS;



EXIT:



    free_la(demoted_pamt_entry);

    return retval;



}



pamt_entry_t* pamt_implicit_get(pa_t pa, page_size_t leaf_size)

{

    pamt_block_t pamt_block;



    if (!pamt_get_block(pa, &pamt_block))

    {

        FATAL_ERROR(); // PAMT block not found or not initialized

    }



    pamt_entry_t* pamt_entry_p = NULL;



    switch (leaf_size)

    {

        case PT_1GB:

            pamt_entry_p = map_pa_with_global_hkid(pamt_block.pamt_1gb_p, TDX_RANGE_RW);

            break;

        case PT_2MB:

            pamt_entry_p = map_pa_with_global_hkid(&pamt_block.pamt_2mb_p[pa.pamt_2m.idx], TDX_RANGE_RW);

            break;

        case PT_4KB:

            pamt_entry_p = map_pa_with_global_hkid(&pamt_block.pamt_4kb_p[pa.pamt_4k.idx], TDX_RANGE_RW);

            break;

        default:

            FATAL_ERROR();

            break;

    }



    tdx_sanity_check((pamt_entry_p->pt != PT_NDA) && (pamt_entry_p->pt != PT_RSVD), SCEC_PAMT_MANAGER_SOURCE, 10);



    return pamt_entry_p;

}



api_error_code_e pamt_implicit_get_and_lock(pa_t pa, page_size_t leaf_size, lock_type_t leaf_lock_type,

                                            pamt_entry_t** pamt_entry)

{

    api_error_code_e errc;

    pamt_entry_t* tmp_pamt_entry = pamt_implicit_get(pa, leaf_size);



    if ((errc = acquire_sharex_lock_hp(&tmp_pamt_entry->entry_lock, leaf_lock_type, false)) != TDX_SUCCESS)

    {

        free_la(tmp_pamt_entry);

        *pamt_entry = NULL;

        return errc;

    }



    *pamt_entry = tmp_pamt_entry;

    return TDX_SUCCESS;

}



void pamt_implicit_release_lock(pamt_entry_t* pamt_entry, lock_type_t leaf_lock_type)

{

    release_sharex_lock_hp(&pamt_entry->entry_lock, leaf_lock_type);



    free_la(pamt_entry);

}



bool_t pamt_is_2mb_range_free(pa_t hpa, pamt_block_t* pamt_block)

{

    pamt_entry_t* pamt_entry_children_la;

    pamt_entry_t* pamt_entry_children_pa = &pamt_block->pamt_4kb_p[hpa.pamt_4k.idx];

    uint32_t pamt_entries_in_page = TDX_PAGE_SIZE_IN_BYTES / sizeof(pamt_entry_t);

    uint32_t pamt_pages = PAMT_CHILD_ENTRIES / pamt_entries_in_page;



    tdx_sanity_check(((uint64_t)pamt_entry_children_pa % TDX_PAGE_SIZE_IN_BYTES) == 0,

                     SCEC_HELPERS_SOURCE, 3);



    for (uint32_t i = 0; i < pamt_pages; i++)

    {

        pamt_entry_children_la = map_pa_with_global_hkid(&pamt_entry_children_pa[pamt_entries_in_page * i], TDX_RANGE_RO);



        for (uint32_t j = 0; j < pamt_entries_in_page; j++)

        {

            // Check the leaf entry is not directly assigned

            if (pamt_entry_children_la[j].pt != PT_NDA)

            {

                TDX_ERROR("Page %d in range is not NDA!\n", (i * pamt_entries_in_page) + j);

                free_la(pamt_entry_children_la);

                return false;

            }

        }

        free_la(pamt_entry_children_la);

    }



    return true;

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

 * @file sept_manager.c

 * @brief SEPT manager implementaiton

 */





#include "tdx_basic_defs.h"

#include "tdx_basic_types.h"



#include "sept_manager.h"

#include "keyhole_manager.h"

#include "x86_defs/x86_defs.h"

#include "accessors/data_accessors.h"

#include "data_structures/tdx_local_data.h"

#include "helpers/helpers.h"





_STATIC_INLINE_ uint64_t get_ept_entry_idx(pa_t gpa, ept_level_t lvl)

{

    uint64_t idx = 0;



    switch (lvl)

    {

        case LVL_PML5:

            idx = gpa.fields_4k.pml5_index;

            break;

        case LVL_PML4:

            idx = gpa.fields_4k.pml4_index;

            break;

        case LVL_PDPT:

            idx = gpa.fields_4k.pdpt_index;

            break;

        case LVL_PD:

            idx = gpa.fields_4k.pd_index;

            break;

        case LVL_PT:

            idx = gpa.fields_4k.pt_index;

            break;

        default:

            tdx_sanity_check(0, SCEC_SEPT_MANAGER_SOURCE, 0);

            break;

    }



    return idx;

}



_STATIC_INLINE_ bool_t is_secure_ept_entry_misconfigured(ia32e_sept_t* pte, ept_level_t level)

{

    pa_t hpa;

    hpa.raw = pte->raw & IA32E_PAGING_STRUCT_ADDR_MASK;



    if (!is_pa_smaller_than_max_pa(hpa.raw))

    {

        return true;

    }



    if ((pte->r == 0) && (pte->w == 1))

    {

        TDX_ERROR("Read bit is zero but write bit is 1 - 0x%llx\n", pte->raw);

        return true;

    }



    platform_common_config_t* msr_values = &get_global_data()->plt_common_config;



    if (!(msr_values->ia32_vmx_ept_vpid_cap & EPT_VPID_CAP_ALLOW_EXECUTE_ONLY))

    {

        if ((pte->r == 0) && (pte->x == 1))

        {

            TDX_ERROR("Read bit is zero but X bit is 1 - 0x%llx\n", pte->raw);

            return true;

        }

    }



    if (pte->rwx)

    {

        // A reserved bit is set. This includes the setting of a bit in the

        // range 51:12 that is beyond the logical processor’s physical-address width.



        // Bits beyond logical processor physical-address width will be checked

        // by the is_pa_smaller_than_max_pa() function call above



        // Paging structure case:

        if (((level > LVL_PDPT) || ((level > LVL_PT) && !pte->leaf))

                && pte->fields_ps.reserved_0)

        {

            TDX_ERROR("Reserved bits are set in PS entry - 0x%llx\n", pte->raw);

            return true;

        }

        // Leaf case

        if ( ((level == LVL_PDPT) && pte->leaf && pte->reserved_1) ||

             ((level == LVL_PD) && pte->leaf && pte->reserved_1)

           )

        {

            TDX_ERROR("Reserved bits are set in leaf entry - 0x%llx\n", pte->raw);

            return true;

        }



        // The entry is the last one used to translate a guest physical address

        // (either an EPT PDE with bit 7 set to 1 or an EPT PTE) and the

        // value of bits 5:3 (EPT memory type) is 2, 3, or 7 (these values are reserved).

        if ( ((level == LVL_PDPT) && pte->leaf) ||

             ((level == LVL_PD) && pte->leaf) ||

              (level == LVL_PT) )

        {

            // Looking here at 4K struct because the MT bits location is the same in 1G and 2M

            if ((pte->mt == MT_RSVD0) || (pte->mt == MT_RSVD1) ||

                (pte->mt == MT_UCM))

            {

                TDX_ERROR("Memory type is incorrect (%d) - 0x%llx\n", pte->mt, pte->raw);

                return true;

            }

        }

    }



    return false;

}



_STATIC_INLINE_ bool_t is_shared_ept_entry_misconfigured(ia32e_ept_t* pte, ept_level_t level)

{

    pa_t hpa;

    hpa.raw = pte->raw & IA32E_PAGING_STRUCT_ADDR_MASK;



    // 28.2.3.1 EPT Misconfigurations from Intel SDM:

    // Bit 0 of the entry is clear (indicating that data reads are not allowed)

    // and bit 1 is set (indicating that data writes are allowed).

    if ((pte->fields_ps.r == 0) && (pte->fields_ps.w == 1))

    {

        return true;

    }



    platform_common_config_t* msr_values = &get_global_data()->plt_common_config;



    // Either of the following if the processor does not support execute-only translations:

    if (!(msr_values->ia32_vmx_ept_vpid_cap & EPT_VPID_CAP_ALLOW_EXECUTE_ONLY))

    {

        // Bit 0 of the entry is clear (indicating that data reads are not allowed)

        // and bit 2 is set (indicating that instruction fetches are allowed)

        if ((pte->fields_ps.r == 0) && (pte->fields_ps.x == 1))

        {

            return true;

        }



        // The "mode-based execute control for EPT" VM-execution control is 1,

        // bit 0 of the entry is clear (indicating that data reads are not allowed),

        // and bit 10 is set (indicating that instruction fetches are allowed from

        // usermode linear addresses).



        // No need to check, because "mode-based execute control for EPT" bit

        // is defined to be a constant 0 in TD VMCS.

    }



    // The entry is present (see Section 28.2.2) and one of the following holds:

    if (pte->present.rwx)

    {

        // A reserved bit is set. This includes the setting of a bit in the

        // range 51:12 that is beyond the logical processor’s physical-address width.



        // Bits beyond logical processor physical-address width will be checked

        // by the shared_hpa_check() function call above



        // Paging structure case:

        if (((level > LVL_PDPT) || ((level > LVL_PT) && !pte->fields_1g.leaf))

                && pte->fields_ps.reserved_0)

        {

            return true;

        }

        // Leaf case

        if ( ((level == LVL_PDPT) && pte->fields_1g.leaf && pte->fields_1g.reserved_0) ||

             ((level == LVL_PD) && pte->fields_2m.leaf && pte->fields_2m.reserved_0)

           )

        {

            return true;

        }



        // The entry is the last one used to translate a guest physical address

        // (either an EPT PDE with bit 7 set to 1 or an EPT PTE) and the

        // value of bits 5:3 (EPT memory type) is 2, 3, or 7 (these values are reserved).

        if ( ((level == LVL_PDPT) && pte->fields_1g.leaf) ||

             ((level == LVL_PD) && pte->fields_2m.leaf) ||

              (level == LVL_PT) )

        {

            // Looking here at 4K struct because the MT bits location is the same in 1G and 2M

            if ((pte->fields_4k.mt == MT_RSVD0) || (pte->fields_4k.mt == MT_RSVD1) ||

                (pte->fields_4k.mt == MT_UCM))

            {

                return true;

            }

        }

        else

        {

            // Shared 4KB HPA check is relevant only for present and non-leaf entries

            // Leaf entry HPA should be checked at the end of the final translation

            if (shared_hpa_check(hpa, TDX_PAGE_SIZE_IN_BYTES) != TDX_SUCCESS)

            {

                return true;

            }

        }

    }



    return false;

}



_STATIC_INLINE_ bool_t is_ept_violation_convertible(ia32e_ept_t* pte, ept_level_t level)

{

    // #VE is enabled unconditionally for TDX non-root operation.

    // The TDX-SEAM module sets the TD VMCS EPT-violation #VE VM-execution control to 1.



    // Checks are according to SDM (25.5.6.1) - Convertible EPT Violations



    // The values of certain EPT paging-structure entries determine which EPT violations are convertible. Specifically,

    // bit 63 of certain EPT paging-structure entries may be defined to mean suppress #VE:

    // - If bits 2:0 of an EPT paging-structure entry are all 0, the entry is not present.

    //      (If the “mode-based execute control for EPT VM-execution control is 1,

    //       an EPT paging-structure entry is present if any of bits 2:0 or bit 10 is 1)

    //      If the processor encounters such an entry while translating a guest-physical address,

    //      it causes an EPT violation. The EPT violation is convertible if and only if bit 63 of the entry is 0.



    // - If an EPT paging-structure entry is present, the following cases apply:

    //      * If bit 7 of the entry is 1, or if the entry is an EPT PTE, the entry maps a page.

    //        If the processor uses such an entry to translate a guest-physical address, and if

    //        an access to that address causes an EPT violation, the EPT violation is convertible

    //        if and only if bit 63 of the entry is 0.

    //      * If bit 7 of the entry is 0 and the entry is not an EPT PTE, the entry references another EPT paging

    //        structure. The processor does not use the value of bit 63 of the entry to determine whether any

    //        subsequent EPT violation is convertible.



    // Note that Bit(22) - Mode-based execute control for EPT in TD exec controls is always 0

    // So no need to check bit 10 in EPT entry to determine whether the entry is present



    if ((!pte->present.rwx || pte->fields_2m.leaf || (level == LVL_PT)) && !pte->fields_4k.supp_ve)

    {

        return true;

    }



    return false;

}



ept_walk_result_t gpa_translate(ia32e_eptp_t eptp, pa_t gpa, bool_t private_gpa,

                                uint16_t private_hkid, access_rights_t access_rights,

                                pa_t* hpa, ia32e_ept_t* cached_ept_entry, access_rights_t* accumulated_rwx)

{

    ia32e_paging_table_t *pt;

    ia32e_ept_t *pte;

    pa_t pt_pa;

    ept_level_t current_lvl;



    // Get root PML EPT page address

    pt_pa.raw = eptp.raw & IA32E_PAGING_STRUCT_ADDR_MASK;

    current_lvl = eptp.fields.ept_pwl;

    // No need to check the HPA of PML5 in Shared EPTP, it is checked during TDHVPWR



    accumulated_rwx->raw = (uint8_t)7;



    for (;current_lvl >= LVL_PT; current_lvl--)

    {

        if (private_gpa)

        {

            pt_pa = set_hkid_to_pa(pt_pa, private_hkid);

        }

        pt = map_pa((void*)(pt_pa.full_pa), TDX_RANGE_RO);

        pte = &(pt->ept[get_ept_entry_idx(gpa, current_lvl)]);



        // Update the output data - note the we read only from the cached entry

        cached_ept_entry->raw = pte->raw; // Atomic copy

        accumulated_rwx->rwx &= cached_ept_entry->present.rwx;



        free_la(pt); // Not needed at that point



        // Check misconfiguration conditions

        IF_RARE (!private_gpa && is_shared_ept_entry_misconfigured(cached_ept_entry, current_lvl))

        {

            return EPT_WALK_MISCONFIGURATION;

        }



        // Misconfigurations on Secure EPT are not expected and considered to be fatal errors

        IF_RARE (private_gpa && is_secure_ept_entry_misconfigured((ia32e_sept_t*)cached_ept_entry, current_lvl))

        {

            FATAL_ERROR();

        }



        // Check violation conditions

        IF_RARE ((cached_ept_entry->present.rwx == 0) ||

                 ((uint8_t)(access_rights.rwx & cached_ept_entry->present.rwx) != access_rights.rwx))

        {

            if (is_ept_violation_convertible(cached_ept_entry, current_lvl))

            {

                return EPT_WALK_CONVERTIBLE_VIOLATION;

            }

            else

            {

                return EPT_WALK_VIOLATION;

            }

        }



        // Check if leaf is reached - page walk done

        if (is_ept_leaf_entry(cached_ept_entry, current_lvl))

        {

            // Calculate the final HPA

            hpa->raw = leaf_ept_entry_to_hpa((*(ia32e_sept_t*)cached_ept_entry), gpa.raw, current_lvl);

            break;

        }



        // Cannot continue to next level, this should be the last one

        IF_RARE (current_lvl == LVL_PT)

        {

            FATAL_ERROR();

        }



        pt_pa.raw = cached_ept_entry->raw & IA32E_PAGING_STRUCT_ADDR_MASK;

    }



    // Shared HPA check on the final translated 4KB page.

    // Since TDX module works only with 4KB operands, this check is sufficient,

    // and we don't need to check SEAMRR overlaps of whole area in case when bigger (1GB or 2MB)

    // leaf page is mapped by the TD.

    if (!private_gpa && (shared_hpa_check(*hpa, TDX_PAGE_SIZE_IN_BYTES) != TDX_SUCCESS))

    {

        return EPT_WALK_MISCONFIGURATION;

    }



    return EPT_WALK_SUCCESS;

}



ia32e_sept_t* secure_ept_walk(ia32e_eptp_t septp, pa_t gpa, uint16_t private_hkid,

                              ept_level_t* level, ia32e_sept_t* cached_sept_entry,

                              bool_t l2_sept_guest_side_walk)

{

    ia32e_paging_table_t *pt;

    ia32e_sept_t *pte;

    pa_t pt_pa;



    ept_level_t requested_level = *level;

    ept_level_t current_lvl;



    tdx_sanity_check(requested_level <= LVL_PML5, SCEC_SEPT_MANAGER_SOURCE, 1);



    // Get root PML EPT page address

    pt_pa.raw = septp.raw & IA32E_PAGING_STRUCT_ADDR_MASK;

    current_lvl = septp.fields.ept_pwl;

    // No need to check the HPA of PML5 in Shared EPTP, it is checked during TDHVPWR



    for (;current_lvl >= LVL_PT; current_lvl--)

    {

        pt_pa = set_hkid_to_pa(pt_pa, private_hkid);

        pt = map_pa((void*)(pt_pa.full_pa), TDX_RANGE_RW);

        pte = &(pt->sept[get_ept_entry_idx(gpa, current_lvl)]);



        // Update the output data - note the we read only from the cached entry

        cached_sept_entry->raw = pte->raw; // Atomic copy

        *level = current_lvl;



        // Check if it is the requested level - success

        if (current_lvl == requested_level)

        {

            break;

        }



        IF_RARE (is_secure_ept_entry_misconfigured(cached_sept_entry, current_lvl))

        {

            FATAL_ERROR();

        }



        // Check if entry not present, or a leaf - so can't walk any further.

        // In L2 SEPT guest-side walk mode, a L2_FREE state is checked

        // In any other walk mode, RWX bits are checked

        IF_RARE ((l2_sept_guest_side_walk && is_l2_sept_free(cached_sept_entry)) ||

                 (!l2_sept_guest_side_walk && (cached_sept_entry->rwx == 0))     ||

                  is_secure_ept_leaf_entry(cached_sept_entry))

        {

            break;

        }



        // Cannot continue to next level, this should be the last one

        IF_RARE (current_lvl == LVL_PT)

        {

            FATAL_ERROR();

        }



        // Continue to next level in the walk

        pt_pa.raw = cached_sept_entry->raw & IA32E_PAGING_STRUCT_ADDR_MASK;

        free_la(pt); // Not needed at that point

    }



    // Note that the caller should remember to free the

    // PTE pointer after he finishes to use it!



    return pte;

}



static void sept_set_leaf_no_lock_internal(ia32e_sept_t * ept_entry, uint64_t attributes, pa_t page_pa,

                                           uint64_t state_encoding, bool_t set_lock)

{

    ia32e_sept_t septe_value = {.raw = attributes};



    // Sanity check:  any attributes bit that is set to 1 must also be 1 in the MIGRATABLE_ATTRIBUTES_MASK

    tdx_debug_assert((attributes & (~SEPT_MIGRATABLE_ATTRIBUTES_MASK)) == 0);



    septe_value.raw |= state_encoding;

    septe_value.mt = MT_WB;

    septe_value.ipat = 1;

    septe_value.base = page_pa.page_4k_num;



    tdx_debug_assert(septe_value.leaf == 1);   // PS is part of the state encoding assigned above

    septe_value.base = page_pa.page_4k_num;



    septe_value.supp_ve = 1;

    septe_value.tdel = set_lock ? 1 : 0;



    atomic_mem_write_64b(&ept_entry->raw, septe_value.raw);

}



void sept_set_leaf_and_release_locks(ia32e_sept_t * ept_entry, uint64_t attributes,

                                     pa_t page_pa, uint64_t state_encoding)

{

    sept_set_leaf_no_lock_internal(ept_entry, attributes, page_pa, state_encoding, false);

}



void sept_set_leaf_and_keep_lock(ia32e_sept_t * ept_entry, uint64_t attributes,

                                 pa_t page_pa, uint64_t state_encoding)

{

    // Sanity check, entry should already be locked

    tdx_sanity_check(ept_entry->tdel, SCEC_SEPT_MANAGER_SOURCE, 3);



    sept_set_leaf_no_lock_internal(ept_entry, attributes, page_pa, state_encoding, true);

}



void sept_set_leaf_unlocked_entry(ia32e_sept_t * ept_entry, uint64_t attributes,

                                  pa_t page_pa, uint64_t state_encoding)

{

    // Sanity check: SEPT entry must be unlocked

    tdx_sanity_check(ept_entry->tdel == 0, SCEC_SEPT_MANAGER_SOURCE, 4);



    sept_set_leaf_no_lock_internal(ept_entry, attributes, page_pa, state_encoding, false);

}



void sept_set_mapped_non_leaf(ia32e_sept_t * ept_entry, pa_t page_pa, bool_t lock)

{

    ia32e_sept_t curr_entry = {.raw = SEPT_PERMISSIONS_RWX | SEPT_STATE_NL_MAPPED_MASK};



    tdx_debug_assert(curr_entry.leaf == 0);   // PS is part of the state encoding assigned above



    curr_entry.base = page_pa.page_4k_num;

    curr_entry.supp_ve = 1;

    curr_entry.tdel = lock;



    // One aligned assignment to make it atomic

    atomic_mem_write_64b(&ept_entry->raw, curr_entry.raw);

}



void sept_l2_set_leaf(ia32e_sept_t* l2_sept_entry_ptr, gpa_attr_single_vm_t gpa_attr_single_vm,

                      pa_t pa, bool_t is_l2_blocked)

{

    ia32e_sept_t tmp_sept = *l2_sept_entry_ptr;

    tmp_sept.l2_encoding.r = gpa_attr_single_vm.r;

    tmp_sept.l2_encoding.w = gpa_attr_single_vm.w;

    tmp_sept.l2_encoding.x = gpa_attr_single_vm.xs;

    tmp_sept.l2_encoding.xu = gpa_attr_single_vm.xu;

    tmp_sept.l2_encoding.vgp = gpa_attr_single_vm.vgp;

    tmp_sept.l2_encoding.pwa = gpa_attr_single_vm.pwa;

    tmp_sept.l2_encoding.sss = gpa_attr_single_vm.sss;

    tmp_sept.l2_encoding.sve = gpa_attr_single_vm.sve;

    tmp_sept.l2_encoding.hpa = pa.page_4k_num;



    tmp_sept.mt = MT_WB;

    tmp_sept.l2_encoding.tdwr = 0;

    tmp_sept.ipat = 1;



    sept_state_mask_t sept_state_mask = SEPT_STATE_L2_MAPPED_MASK;



    if (is_l2_blocked)

    {

        sept_state_mask = SEPT_STATE_L2_BLOCKED_MASK;

        tmp_sept.l2_encoding.mt0_tdrd = gpa_attr_single_vm.r;

        tmp_sept.l2_encoding.r = 0;

        tmp_sept.l2_encoding.tdwr = gpa_attr_single_vm.w;

        tmp_sept.l2_encoding.w = 0;

        tmp_sept.l2_encoding.mt1_tdxs = gpa_attr_single_vm.xs;

        tmp_sept.l2_encoding.x = 0;

        tmp_sept.l2_encoding.mt2_tdxu = gpa_attr_single_vm.xu;

        tmp_sept.l2_encoding.xu = 0;

    }



    sept_l2_update_state(&tmp_sept, sept_state_mask);



    atomic_mem_write_64b(&l2_sept_entry_ptr->raw, tmp_sept.raw);

}



void sept_l2_set_mapped_non_leaf(ia32e_sept_t * ept_entry, pa_t page_pa)

{

    ia32e_sept_t curr_entry = {.raw = SEPT_PERMISSIONS_RW_XS_XU | SEPT_STATE_L2_NL_MAPPED_MASK};



    tdx_debug_assert(curr_entry.leaf == 0);   // PS is part of the state encoding assigned above



    curr_entry.base = page_pa.page_4k_num;



    // One aligned assignment to make it atomic

    atomic_mem_write_64b(&ept_entry->raw, curr_entry.raw);

}



void set_arch_septe_details_in_vmm_regs(ia32e_sept_t sept_entry, ept_level_t level, tdx_module_local_t* local_data_ptr)

{

    ia32e_sept_t detailed_arch_sept_entry;

    sept_entry_arch_info_t detailed_arch_info;



    /* Build the architectural representation of the Secure EPT entry.

       See the table in the spec for details*/

    if (is_sept_free(&sept_entry))

    {

        detailed_arch_sept_entry.raw = 0;

        detailed_arch_sept_entry.supp_ve = 1;

    }

    else

    {

        detailed_arch_sept_entry.raw = sept_entry.raw;

        sept_cleanup_if_pending(&sept_entry, level);



        if (is_secure_ept_leaf_entry(&detailed_arch_sept_entry))

        {

            detailed_arch_sept_entry.raw &= SEPT_ARCH_ENTRY_LEAF_MASK;

        }

        else

        {

            detailed_arch_sept_entry.raw &= SEPT_ARCH_ENTRY_NON_LEAF_MASK;

        }

        // No need to restore the values of MT1 and MT2, they are not overwritten

    }



    // Build the architectural information of the Secure EPT entry

    detailed_arch_info.raw = 0;



    detailed_arch_info.state = sept_get_arch_state(sept_entry);

    detailed_arch_info.level = (uint8_t)level;   // Cast down is OK since level fits in 8 bits



    // Return the values as simple 64b

    local_data_ptr->vmm_regs.rcx = detailed_arch_sept_entry.raw;

    local_data_ptr->vmm_regs.rdx = detailed_arch_info.raw;

}



void set_arch_l2_septe_details_in_vmm_regs(ia32e_sept_t l2_sept_entry, uint16_t vm_id, bool_t is_debug,

                                           uint64_t level, tdx_module_local_t* local_data_ptr)

{

    ia32e_sept_t           detailed_arch_sept_entry;

    sept_entry_arch_info_t detailed_arch_info;



    // Build the architectural representation of the L2 Secure EPT entry.

    // See the table in the spec for details

    if (is_l2_sept_free(&l2_sept_entry))

    {

        detailed_arch_sept_entry.raw = 0;

        detailed_arch_sept_entry.supp_ve = 1;

    }

    else

    {

        // Create the architectural SEPT entry as reported to the user

        detailed_arch_sept_entry.raw = l2_sept_entry.raw;

        if (is_secure_ept_leaf_entry(&l2_sept_entry))

        {

            if (is_debug)

            {

                detailed_arch_sept_entry.raw &= L2_SEPT_ARCH_ENTRY_LEAF_DEBUG_MASK;   // Attribute bits are included

            }

            else if (is_l2_sept_mapped(&l2_sept_entry))

            {

                detailed_arch_sept_entry.raw &= L2_SEPT_ARCH_ENTRY_LEAF_MASK;   // Attribute bits are excluded

                detailed_arch_sept_entry.raw |= L2_SEPT_PERMISSIONS_MASK;       // Force RWXsXu to 1111

            }

            else   // L2_BLOCKED

            {

                detailed_arch_sept_entry.raw &= L2_SEPT_ARCH_ENTRY_LEAF_MASK;   // Attribute bits are excluded

            }

        }

        else

        {

            detailed_arch_sept_entry.raw &= L2_SEPT_ARCH_ENTRY_NON_LEAF_MASK;

        }

    }



    // Build the architectural information of the Secure EPT entry

    detailed_arch_info.raw = 0;

    detailed_arch_info.state = l2_sept_get_arch_state(l2_sept_entry);

    detailed_arch_info.level = (uint8_t)level;   // Cast down is OK since level fits in 8 bits

    detailed_arch_info.vm = vm_id;



    // Return the values as simple 64b

    local_data_ptr->vmm_regs.rcx = detailed_arch_sept_entry.raw;

    local_data_ptr->vmm_regs.rdx = detailed_arch_info.raw;

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

 * @file tdx_td_dispatcher.c

 * @brief VM Exit from TD entry point and API dispatcher

 */



#include "tdx_td_dispatcher.h"

#include "tdx_api_defs.h"

#include "data_structures/tdx_tdvps.h"

#include "accessors/ia32_accessors.h"

#include "accessors/vt_accessors.h"

#include "accessors/data_accessors.h"

#include "x86_defs/vmcs_defs.h"

#include "data_structures/tdx_local_data.h"

#include "tdx_td_api_handlers.h"

#include "auto_gen/tdx_error_codes_defs.h"

#include "helpers/helpers.h"

#include "td_dispatcher/vm_exits/td_vmexit.h"

#include "td_transitions/td_exit.h"

#include "td_transitions/td_exit_stepping.h"



#ifdef DEBUGFEATURE_TDX_DBG_TRACE

void tdx_failed_vmentry(void)

{

    uint64_t error_code = 0;



    ia32_vmread(VMX_VM_INSTRUCTION_ERRORCODE_ENCODE, &error_code);



    TDX_ERROR("VMENTRY failed - error code - %d\n", error_code);



    uint64_t val;

    platform_common_config_t* msrs = &get_global_data()->plt_common_config;



    ia32_vmread(VMX_VM_EXIT_CONTROL_ENCODE, &val);

    TDX_ERROR("VM_EXIT_CONTROL = 0x%llx, VMX_MSR = 0x%llx\n",

            val, msrs->ia32_vmx_true_exit_ctls.raw);

    uint64_t vm_exit_ctl = val;



    ia32_vmread(VMX_VM_ENTRY_CONTROL_ENCODE, &val);

    TDX_ERROR("VM_ENTRY_CONTROL = 0x%llx, VMX_MSR = 0x%llx\n",

            val, msrs->ia32_vmx_true_entry_ctls.raw);



    ia32_vmread(VMX_VM_EXECUTION_CONTROL_PIN_BASED_ENCODE, &val);

    TDX_ERROR("VM_PIN_BASED_CONTROL = 0x%llx, VMX_MSR = 0x%llx\n",

            val, msrs->ia32_vmx_true_pinbased_ctls.raw);

    uint64_t vm_ctl_pin_based = val;



    ia32_vmread(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, &val);

    TDX_ERROR("VM_PROC_BASED_CONTROL = 0x%llx, VMX_MSR = 0x%llx\n",

            val, msrs->ia32_vmx_true_procbased_ctls.raw);



    ia32_vmread(VMX_VM_EXECUTION_CONTROL_SECONDARY_PROC_BASED_ENCODE, &val);

    TDX_ERROR("VM_SEC_PROC_BASED_CONTROL = 0x%llx, VMX_MSR = 0x%llx\n",

            val, msrs->ia32_vmx_procbased_ctls2.raw);

    uint64_t vm_proc_based_ctl2 = val;



    ia32_vmread(VMX_VM_EXECUTION_CONTROL_TERTIARY_PROC_BASED_FULL_ENCODE, &val);

    TDX_ERROR("VM_TERT_PROC_BASED_CONTROL = 0x%llx, VMX_MSR = 0x%llx\n",

            val, msrs->ia32_vmx_procbased_ctls3);



    // Print and check posted interrupts settings

    ia32_vmread(VMX_POSTED_INTERRUPT_DESCRIPTOR_ADDRESS_FULL_ENCODE, &val);

    TDX_ERROR("POSTED_INTERRUPT_DESCRIPTOR_ADDRESS_FULL = 0x%llx\n", val);

    uint64_t vm_posted_int_desc = val;

    ia32_vmread(VMX_POSTED_INTERRUPT_NOTIFICATION_VECTOR_ENCODE, &val);

    TDX_ERROR("POSTED_INTERRUPT_NOTIFICATION_VECTOR = 0x%llx\n", val);

    uint64_t vm_posted_int_notif = val;



    ia32_vmx_basic_t ia32_vmx_basic;

    ia32_vmx_basic.raw = ia32_rdmsr(IA32_VMX_BASIC_MSR_ADDR);

    TDX_ERROR("ia32_vmx_basic = 0x%llx\n", ia32_vmx_basic.raw);

    VMX_GUEST_INTERRUPTIBILITY_ENCODE;

    if (vm_ctl_pin_based & 0x80) // poseted interrupts

    {

        if ((vm_proc_based_ctl2 & 0x200) == 0)

        {

            TDX_ERROR("THIS CONDITION IS NOT MET: The \"virtual-interrupt delivery\" VM-execution control is 1.\n");

        }

        if ((vm_exit_ctl & 0x8000) == 0)

        {

            TDX_ERROR("THIS CONDITION IS NOT MET: The \"acknowledge interrupt on exit\" VM-exit control is 1.\n");

        }

        if (vm_posted_int_notif > 255)

        {

            TDX_ERROR("THIS CONDITION IS NOT MET: The posted-interrupt notification vector has a value in the range 0–255 (bits 15:8 are all 0).\n");

        }

        if ((vm_posted_int_desc & 0X3F) != 0)

        {

            TDX_ERROR("THIS CONDITION IS NOT MET: Bits 5:0 of the posted-interrupt descriptor address are all 0.\n");

        }

        if ((ia32_vmx_basic.raw & BIT(48)) && (vm_posted_int_desc > 0xFFFFFFFF))

        {

            TDX_ERROR("THIS CONDITION IS NOT MET: If IA32_VMX_BASIC[48] is read as 1, this address must not set any bits in the range 63:32; see Appendix A.1\n");

        }

    }



    tdx_arch_fatal_error();

}

#endif



void tdx_return_to_td(bool_t launch_state, bool_t called_from_tdenter, gprs_state_t* gpr_state)

{

    // TDX Local data

    tdx_module_local_t* local_data_ptr = get_local_data();



    // Restore IA32_SPEC_CTRL

    if (!called_from_tdenter)

    {

        // TDENTER already loads the spec ctrl with safe checks

        wrmsr_opt(IA32_SPEC_CTRL_MSR_ADDR,

                  local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_spec_ctrl, TDX_MODULE_IA32_SPEC_CTRL);

    }



    // Check that we have no mapped keyholes left, beside the 2 that we store for TDR/TDVPR PAMT entries

    tdx_sanity_check(local_data_ptr->keyhole_state.total_ref_count == NUM_OF_PRESERVED_KEYHOLES,

                     SCEC_KEYHOLE_MANAGER_SOURCE, 30);



    local_data_ptr->current_td_vm_id = local_data_ptr->vp_ctx.tdvps->management.curr_vm;



    // Exit to TD

    tdx_tdentry_to_td(launch_state, gpr_state);

}



void bus_lock_exit(void)

{

    // TDX Local data

    tdx_module_local_t* local_data_ptr = get_local_data();



    if (local_data_ptr->vp_ctx.bus_lock_preempted)

    {

        /*

         * If we got here and BUS_LOCK_PREEMPTED is still set, it means that a bus lock preemption

         * has been indicated on VM exit (bit 26 of the exit reason) but the VM exit handler decided

         * not to do a TD exit.

         * In this case, we do an asynchronous TD exit here with a synthetic BUS_LOCK (74) exit reason.

         **/

        vm_vmexit_exit_reason_t vm_exit_reason = {.raw = 0};

        vm_exit_reason.basic_reason = VMEXIT_REASON_BUS_LOCK;



        async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, 0, 0, 0, 0);

    }

}



void check_pending_voe_on_debug_td_return(void)

{

    // TDX Local data

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    // If the TD is debuggable, check if a Vector-On-Entry (VOE) is being injected, and if so, if it

    // matches the TD VMCS' exception bitmap and #PF filtering set by the debugger.

    // If so, do a TD Exit with a synthetic EXCEPTION_OR_NMI exit reason.

    if (tdx_local_data_ptr->vp_ctx.tdcs->executions_ctl_fields.attributes.debug &&

        is_voe_in_exception_bitmap())

    {

        vmx_exit_inter_info_t vm_exit_inter_info;

        vm_vmexit_exit_reason_t vm_exit_reason;



        ia32_vmread(VMX_VM_ENTRY_INTR_INFO_ENCODE, &vm_exit_inter_info.raw);



        vm_exit_reason.raw = VMEXIT_REASON_EXCEPTION_OR_NMI;



        async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, 0, 0, 0, vm_exit_inter_info.raw);

    }

}



static void save_guest_td_gpr_state_on_td_vmexit(void)

{

    tdx_module_local_t* local_data_ptr = get_local_data();

    tdvps_t* tdvps_ptr = local_data_ptr->vp_ctx.tdvps;



    // GPR's saving: move them from local data area (already saved there by assembly prologue) to current TDVPS

    tdvps_ptr->guest_state.gpr_state.rax = local_data_ptr->td_regs.rax;

    tdvps_ptr->guest_state.gpr_state.rcx = local_data_ptr->td_regs.rcx;

    tdvps_ptr->guest_state.gpr_state.rdx = local_data_ptr->td_regs.rdx;

    tdvps_ptr->guest_state.gpr_state.rbx = local_data_ptr->td_regs.rbx;

    tdvps_ptr->guest_state.gpr_state.rbp = local_data_ptr->td_regs.rbp;

    tdvps_ptr->guest_state.gpr_state.rsi = local_data_ptr->td_regs.rsi;

    tdvps_ptr->guest_state.gpr_state.rdi = local_data_ptr->td_regs.rdi;

    tdvps_ptr->guest_state.gpr_state.r8  = local_data_ptr->td_regs.r8;

    tdvps_ptr->guest_state.gpr_state.r9  = local_data_ptr->td_regs.r9;

    tdvps_ptr->guest_state.gpr_state.r10 = local_data_ptr->td_regs.r10;

    tdvps_ptr->guest_state.gpr_state.r11 = local_data_ptr->td_regs.r11;

    tdvps_ptr->guest_state.gpr_state.r12 = local_data_ptr->td_regs.r12;

    tdvps_ptr->guest_state.gpr_state.r13 = local_data_ptr->td_regs.r13;

    tdvps_ptr->guest_state.gpr_state.r14 = local_data_ptr->td_regs.r14;

    tdvps_ptr->guest_state.gpr_state.r15 = local_data_ptr->td_regs.r15;

}





void td_generic_ve_exit(vm_vmexit_exit_reason_t vm_exit_reason, uint64_t exit_qualification)

{

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    tdvps_t* tdvps_p = tdx_local_data_ptr->vp_ctx.tdvps;



    tdx_inject_ve((uint32_t)vm_exit_reason.raw, exit_qualification, tdvps_p, 0, 0);

}





void td_call(tdx_module_local_t* tdx_local_data_ptr, bool_t* interrupt_occurred)

{

    api_error_type retval = UNINITIALIZE_ERROR;

    /**

     * Check CPU mode is 64b

     */

    TDX_LOG("TDCALL exit reason\n");



    if (!is_td_guest_in_64b_mode())

    {

        //Not in CPU 64b mode

        TDX_ERROR("Not in CPU mode 64bit. inject GP\n");

        inject_gp(0);

        return;

    }



    tdx_leaf_and_version_t leaf_opcode;

    leaf_opcode.raw = tdx_local_data_ptr->td_regs.rax;



    if ((leaf_opcode.reserved0 != 0) || (leaf_opcode.reserved1 != 0))

    {

        TDX_ERROR("Leaf and version not supported 0x%llx\n", leaf_opcode.raw);

        retval = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RAX);

        goto EXIT;

    }



    // Only a few functions have multiple versions

    if ((leaf_opcode.version > 0) &&

        (leaf_opcode.leaf != TDG_VM_RD_LEAF))

    {

        TDX_ERROR("Invalid version %d for leaf %d\n", leaf_opcode.version, leaf_opcode.leaf);

        retval = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RAX);

        goto EXIT;

    }



    switch (leaf_opcode.leaf)

    {

        case TDG_MEM_PAGE_ACCEPT_LEAF:

        {

            retval = tdg_mem_page_accept(tdx_local_data_ptr->td_regs.rcx, interrupt_occurred);

            break;

        }

        case TDG_MR_RTMR_EXTEND_LEAF:

        {

            retval = tdg_mr_rtmr_extend(tdx_local_data_ptr->td_regs.rcx, tdx_local_data_ptr->td_regs.rdx);

            break;

        }

        case TDG_VP_VEINFO_GET_LEAF:

        {

            retval = tdg_vp_veinfo_get();

            break;

        }

        case TDG_VP_INFO_LEAF:

        {

            retval = tdg_vp_info();

            break;

        }

        case TDG_MR_REPORT_LEAF:

        {

            retval = tdg_mr_report(tdx_local_data_ptr->td_regs.rcx,

                                   tdx_local_data_ptr->td_regs.rdx,

                                   tdx_local_data_ptr->td_regs.r8,

                                   interrupt_occurred);

            break;

        }

        case TDG_VP_CPUIDVE_SET_LEAF:

        {

            retval = tdg_vp_cpuidve_set(tdx_local_data_ptr->td_regs.rcx);

            break;

        }

        case TDG_VP_VMCALL_LEAF:

        {

            //Special case.  will (or may) not return to the TD but to go to VMM.

            retval = tdg_vp_vmcall(tdx_local_data_ptr->td_regs.rcx);

            break;

        }

        case TDG_VM_RD_LEAF:

        {

            retval = tdg_vm_rd(tdx_local_data_ptr->td_regs.rdx,

                           tdx_local_data_ptr->td_regs.rcx,

                           leaf_opcode.version);

            break;

        }

        case TDG_VM_WR_LEAF:

        {

            retval = tdg_vm_wr(tdx_local_data_ptr->td_regs.rdx,

                           tdx_local_data_ptr->td_regs.rcx,

                           tdx_local_data_ptr->td_regs.r8,

                           tdx_local_data_ptr->td_regs.r9,

                           leaf_opcode.version);

            break;

        }

        case TDG_SYS_RD_LEAF:

        {

            md_field_id_t field_code = {.raw = tdx_local_data_ptr->td_regs.rdx};

            retval = tdg_sys_rd(field_code);

            break;

        }

        case TDG_SYS_RDALL_LEAF:

        {

            md_field_id_t field_code = {.raw = tdx_local_data_ptr->td_regs.r8};

            retval = tdg_sys_rdall(tdx_local_data_ptr->td_regs.rdx, field_code);

            break;

        }

        case TDG_VP_RD_LEAF:

        {

            retval = tdg_vp_rd(tdx_local_data_ptr->td_regs.rdx);

            break;

        }

        case TDG_VP_WR_LEAF:

        {

            retval = tdg_vp_wr(tdx_local_data_ptr->td_regs.rdx,

                               tdx_local_data_ptr->td_regs.r8,

                               tdx_local_data_ptr->td_regs.r9);

            break;

        }

        case TDG_SERVTD_RD_LEAF:

        {

            retval = tdg_servtd_rd(tdx_local_data_ptr->td_regs.rcx,

                                   tdx_local_data_ptr->td_regs.rdx);

            break;

        }

        case TDG_SERVTD_WR_LEAF:

        {

            retval = tdg_servtd_wr(tdx_local_data_ptr->td_regs.rcx,

                                   tdx_local_data_ptr->td_regs.rdx,

                                   tdx_local_data_ptr->td_regs.r8,

                                   tdx_local_data_ptr->td_regs.r9);

            break;

        }

        case TDG_MR_VERIFYREPORT_LEAF:

        {

            retval = tdg_mr_verifyreport(tdx_local_data_ptr->td_regs.rcx);



            break;

        }

        case TDG_MEM_PAGE_ATTR_RD_LEAF:

        {

            retval = tdg_mem_page_attr_rd((pa_t)tdx_local_data_ptr->td_regs.rcx);

            break;

        }

        case TDG_MEM_PAGE_ATTR_WR_LEAF:

        {

            retval = tdg_mem_page_attr_wr(

                (page_info_api_input_t)tdx_local_data_ptr->td_regs.rcx,

                (gpa_attr_t)tdx_local_data_ptr->td_regs.rdx,

                (attr_flags_t)tdx_local_data_ptr->td_regs.r8);

            break;

        }

        case TDG_VP_ENTER_LEAF:

        {

            retval = tdg_vp_enter(tdx_local_data_ptr->td_regs.rcx,

                                  tdx_local_data_ptr->td_regs.rdx);

            break;

        }

        case TDG_VP_INVEPT_LEAF:

        {

            retval = tdg_vp_invept(tdx_local_data_ptr->td_regs.rcx);

            break;

        }

        case TDG_VP_INVVPID_LEAF:

        {

            retval = tdg_vp_invvpid(tdx_local_data_ptr->td_regs.rcx,

                                    tdx_local_data_ptr->td_regs.rdx, interrupt_occurred);

            break;

        }

        default:

        {

            TDX_ERROR("Invalid leaf number for TDCALL\n");

            retval = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RAX);

            break;

        }

    }



EXIT:



    tdx_sanity_check(retval != UNINITIALIZE_ERROR, SCEC_TD_DISPATCHER_SOURCE, 1);



    // Handling of stuck host-priority locks

    api_error_code_t error_code = { .raw = retval };

    error_code.details_l2 = 0;



    tdvps_t* tdvps_p = tdx_local_data_ptr->vp_ctx.tdvps;

    tdcs_t*  tdcs_p  = tdx_local_data_ptr->vp_ctx.tdcs;



    // Make sure the active VMCS is set to the current VM's VMCS.

    set_vm_vmcs_as_active(tdvps_p, tdvps_p->management.curr_vm);



    if (error_code.raw == TDX_OPERAND_BUSY_HOST_PRIORITY)

    {

        // TDCALL leaf function terminated due to host priority.

        // If this keeps happening for more than HP_LOCK_TIMEOUT TSC ticks,

        // TD exit to the host VMM with an error indication.



        // Convert the status to TDX_OPERAND_BUSY in order to be backward-compatible with older TDs

        error_code.raw = TDX_OPERAND_BUSY;

        error_code.details_l2 = ((api_error_code_t)retval).details_l2;

        retval = error_code.raw;



        if (!tdvps_p->management.hp_lock_busy)

        {

            // First time

            tdvps_p->management.hp_lock_busy = true;

            tdvps_p->management.hp_lock_busy_start = ia32_rdtsc();

        }

        else if (ia32_rdtsc() - tdvps_p->management.hp_lock_busy_start >= tdcs_p->executions_ctl_fields.hp_lock_timeout)

        {

            tdvps_p->management.hp_lock_busy = false;



            // Update the retval so that guest TD will know the lock reason failure

            tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = retval;

            async_tdexit_empty_reason(TDX_HOST_PRIORITY_BUSY_TIMEOUT);

        }

    }

    else

    {

        tdvps_p->management.hp_lock_busy = false;

    }



    if (*interrupt_occurred == false)

    {

        tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = retval;

    }

    else

    {

        // If TDCALL was interrupt we must clear blocking state

        clear_movss_sti_blocking();

    }

}



/**

 * @brief Handle VM entry failures per basic exit reason

 **/

static void handle_vm_entry_failures(tdx_module_local_t* tdx_local_data_ptr,

        vm_vmexit_exit_reason_t vm_exit_reason, vmx_exit_qualification_t vm_exit_qualification)

{

    if (vm_exit_reason.vmenter_fail != 0)

    {

        switch (vm_exit_reason.basic_reason)

        {

            case VMEXIT_REASON_FAILED_VMENTER_GS:

                if (tdx_local_data_ptr->vp_ctx.tdcs->executions_ctl_fields.attributes.debug)

                {

                    async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason,

                                       vm_exit_qualification.raw, 0, 0, 0);

                }

                else

                {

                    async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD, vm_exit_reason,

                                       vm_exit_qualification.raw, 0, 0, 0);

                }

                break;

            case VMEXIT_REASON_FAILED_VMENTER_MSR:

                // VM entry failure due to VM_ENTRY_FAILURE_MSR_LOADING is only applicable for MSR load lists.

                // We don't use them so this is unexpected and should be a fatal error.

                TDX_ERROR("VM entry failure due to VM_ENTRY_FAILURE_MSR_LOADING is not expected\n");

                FATAL_ERROR();

                break;

            case VMEXIT_REASON_FAILED_VMENTER_MC:

                // This VM entry failure was due to a #MC, disable the TD

                    async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE, vm_exit_reason,

                                       vm_exit_qualification.raw, 0, 0, 0);

                break;

                // No other exit reasons should happen on VM entry failure

            default:

                TDX_ERROR("Unexpected VMENTRY failure: Exit reason = %d, Exit qualification = %d\n",

                        vm_exit_reason.basic_reason, vm_exit_qualification.raw);



                FATAL_ERROR();

                break;

        }

        // Flow should never reach here

        tdx_sanity_check(0, SCEC_TD_DISPATCHER_SOURCE, 2);

    }

}



static void handle_idt_vectoring(tdx_module_local_t* tdx_local_data_ptr, vm_vmexit_exit_reason_t vm_exit_reason,

        vmx_exit_qualification_t vm_exit_qualification, vmx_idt_vectoring_info_t idt_vectoring_info)

{

    vmx_entry_inter_info_t vm_entry_inter_info;



    // Sanity check: only cases in TDX are task switch, EPT violation and

    //   EPT misconfiguration

    if ((vm_exit_reason.basic_reason != VMEXIT_REASON_TASK_SWITCH) &&

        (vm_exit_reason.basic_reason != VMEXIT_REASON_EPT_VIOLATION) &&

        (vm_exit_reason.basic_reason != VMEXIT_REASON_EPT_MISCONFIGURATION))

    {

        if (tdx_local_data_ptr->vp_ctx.tdcs->executions_ctl_fields.attributes.debug)

        {

            // if the TD is debuggable, other exit reasons can happen during IDT vectoring

            async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason,

                           vm_exit_qualification.raw, 0, 0, 0);

        }

        else

        {

            // otherwise, only the above exit reasons are expected to happen during IDT vectoring

            TDX_ERROR("Fatal error, IDT vectoring corrupted\n");

            FATAL_ERROR();

        }



    }



    // if a virtual NMI was re-injected, clear virtual NMI blocking

    if (idt_vectoring_info.interruption_type == VMEXIT_INTER_INFO_TYPE_NMI)

    {

        vmx_guest_inter_state_t guest_inter_state;

        ia32_vmread(VMX_GUEST_INTERRUPTIBILITY_ENCODE, &guest_inter_state.raw);

        guest_inter_state.blocking_by_nmi = 0;

        ia32_vmwrite(VMX_GUEST_INTERRUPTIBILITY_ENCODE, guest_inter_state.raw);

    }



    // Copy IDT vectoring fields to VM entry exception fields. On the next

    // VM entry, the CPU will inject a VOE.



    vm_entry_inter_info.raw = idt_vectoring_info.raw;

    vm_entry_inter_info.reserved = (uint32_t)0;

    ia32_vmwrite(VMX_VM_ENTRY_INTR_INFO_ENCODE, vm_entry_inter_info.raw);



    if (idt_vectoring_info.error_code_valid)

    {

        uint64_t idt_vectoring_error_code;

        ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_ERRORCODE_ENCODE, &idt_vectoring_error_code);

        ia32_vmwrite(VMX_VM_ENTRY_EXCEPTION_ERRORCODE_ENCODE, idt_vectoring_error_code);

    }



    uint64_t vm_exit_instruction_length;

    ia32_vmread(VMX_VM_EXIT_INSTRUCTION_LENGTH_ENCODE, &vm_exit_instruction_length);

    ia32_vmwrite(VMX_VM_ENTRY_INSTRUCTION_LENGTH_ENCODE, vm_exit_instruction_length);

}



stepping_filter_e tdx_td_l1_l2_dispatcher_common_prologue(tdx_module_local_t* local_data, uint16_t vm_id,

                                                          vm_vmexit_exit_reason_t* vm_exit_reason,

                                                          vmx_exit_qualification_t* vm_exit_qualification,

                                                          vmx_exit_inter_info_t* vm_exit_inter_info)

{

    TDX_LOG("TD Dispatcher Entry from VM %d\n", vm_id);



    // Save current time to verify on next TD entry and for TDEXIT filter checks

    local_data->vp_ctx.tdvps->management.last_exit_tsc = ia32_rdtsc();



    // Save TD GPR state to TDVPS.

    // DR's, XSTATE and XCR's, MSR's will be saved if exit to TD will be required later

    // In case of need of performance improvement - should be done only when actual vmexit to VMM happens

    save_guest_td_gpr_state_on_td_vmexit();



    local_data->vp_ctx.tdvps->guest_msr_state.ia32_spec_ctrl = ia32_rdmsr(IA32_SPEC_CTRL_MSR_ADDR);

    wrmsr_opt(IA32_SPEC_CTRL_MSR_ADDR, TDX_MODULE_IA32_SPEC_CTRL,

            local_data->vp_ctx.tdvps->guest_msr_state.ia32_spec_ctrl);



    // Clear NMI unblocking flag;

    // For L1 this is used only for L2 VM entries following L2 VM exits

    // For L2 it will be set later if required, and using on L2 VM entry

    local_data->vp_ctx.tdvps->management.nmi_unblocking_due_to_iret = false;



    // Get exit information

    ia32_vmread(VMX_VM_EXIT_REASON_ENCODE, &vm_exit_reason->raw);



    if (vm_exit_reason->vmenter_fail == 0)

    {

        // If no failed VMENTRY occurred then the VMCS is launched after a VMEXIT

        local_data->vp_ctx.tdvps->management.vm_launched[vm_id] = true;

    }



    ia32_vmread(VMX_VM_EXIT_QUALIFICATION_ENCODE, &vm_exit_qualification->raw);

    ia32_vmread(VMX_VM_EXIT_INTERRUPTION_INFO_ENCODE, &vm_exit_inter_info->raw);



    if (local_data->vp_ctx.tdr->management_fields.fatal)

    {

        // A #MC VM exit has occurred on another LP, indicating memory integrity error.

        // Do an async TD exit without accessing TD memory.

        async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE, *vm_exit_reason,

                                       vm_exit_qualification->raw, 0, 0, vm_exit_inter_info->raw);

    }



    // If a preempted bus lock has been reported in the exit reason, set the local data bus lock flag.

    // This flag is sticky bit; it gets reset only when reported on TD exit.

    if (vm_exit_reason->bus_lock_preempted)

    {

        local_data->vp_ctx.bus_lock_preempted = true;

    }



    // Sanity check

    if (!local_data->vp_ctx.tdcs->executions_ctl_fields.attributes.debug &&

        ((vm_exit_reason->reserved_0           != 0) ||

        (vm_exit_reason->pending_mtf          != 0) ||

        (vm_exit_reason->parallel             != 0) ||

        (vm_exit_reason->reserved_1           != 0)))

    {

        TDX_ERROR("Fatal error, exit reason corrupted - 0x%llx\n", vm_exit_reason->raw);

#ifdef DEBUGFEATURE_TDX_DBG_TRACE

        uint64_t idt_vectoring, activity, interruptibility, entry_int;



        ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_FIELD_ENCODE, &idt_vectoring);

        ia32_vmread(VMX_GUEST_SLEEP_STATE_ENCODE, &activity);

        ia32_vmread(VMX_GUEST_INTERRUPTIBILITY_ENCODE, &interruptibility);

        ia32_vmread(VMX_VM_ENTRY_INTR_INFO_ENCODE, &entry_int);



        TDX_ERROR("IDT vectoring = 0x%llx, activity state = 0x%llx\n",

                idt_vectoring, activity);

        TDX_ERROR("Interruptibility state = 0x%llx, Entry intr info = 0x%llx\n",

                interruptibility, entry_int);

#endif

        FATAL_ERROR();

    }



#ifdef DEBUGFEATURE_TDX_DBG_TRACE

    uint64_t guest_rip = 0, guest_cs_base = 0;



    ia32_vmread(VMX_GUEST_RIP_ENCODE, &guest_rip);

    ia32_vmread(VMX_GUEST_CS_BASE_ENCODE, &guest_cs_base);

    TDX_LOG("Exit reason = %d, Guest RIP = 0x%llx, CS Base = 0x%llx\n",

            vm_exit_reason->basic_reason, guest_rip, guest_cs_base);

    TDX_LOG("RAX = 0x%llx, RBX = 0x%llx, RCX = 0x%llx, RDX = 0x%llx\n",

            local_data->vp_ctx.tdvps->guest_state.gpr_state.rax,

            local_data->vp_ctx.tdvps->guest_state.gpr_state.rbx,

            local_data->vp_ctx.tdvps->guest_state.gpr_state.rcx,

            local_data->vp_ctx.tdvps->guest_state.gpr_state.rdx);

#endif



    // If the TD is debuggable, the host VMM can request all L2 exits to be converted to TD exits.

    if ((vm_id > 0) && local_data->vp_ctx.tdvps->management.l2_debug_ctls[vm_id].td_exit_on_l2_vm_exit)

    {

        tdx_debug_assert(local_data->vp_ctx.tdcs->executions_ctl_fields.attributes.debug == 1);

        async_tdexit_to_vmm(TDX_TD_EXIT_ON_L2_VM_EXIT, *vm_exit_reason, vm_exit_qualification->raw, 0, 0, vm_exit_inter_info->raw);

    }



    /*------------------------------

       Single/Zero Step Filtering

    ------------------------------*/

    stepping_filter_e vmexit_stepping_result = vmexit_stepping_filter(*vm_exit_reason,

                                                    *vm_exit_qualification, *vm_exit_inter_info);

    // if stepping cannot be done safely, kill the TD and exit

    if (vmexit_stepping_result == FILTER_FAIL_TDEXIT_WRONG_APIC_MODE)

    {

        async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD_WRONG_APIC_MODE, *vm_exit_reason,

                vm_exit_qualification->raw, 0, 0, vm_exit_inter_info->raw);

    }



    if (vmexit_stepping_result != FILTER_OK_CONTINUE)

    {

        return vmexit_stepping_result;

    }



    if (vm_id == 0) // Handle IDT vectoring only on L1 VM

    {

        vmx_idt_vectoring_info_t idt_vectoring_info;

        ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_FIELD_ENCODE, &idt_vectoring_info.raw);



        // VM Exits during Event Delivery via IDT in the Guest TD

        // If the VM exit happened while the CPU attempted to deliver a vectored

        // event via the guest's IDT, collect the information and set up for a

        // Vector-On-Entry (VOE) on the following VM entry.

        // Note that the VOE information may later be changed, e.g., if the flow needs to inject a #PF.



        if (idt_vectoring_info.valid == 1)

        {

            handle_idt_vectoring(local_data, *vm_exit_reason, *vm_exit_qualification,

                                idt_vectoring_info);

        }

    }



    return vmexit_stepping_result;

}



void tdx_td_dispatcher(void)

{

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    vm_vmexit_exit_reason_t vm_exit_reason;

    vmx_exit_qualification_t vm_exit_qualification;

    vmx_exit_inter_info_t vm_exit_inter_info;



    vmx_guest_inter_state_t guest_inter_state;

    vmx_procbased_ctls_t vm_procbased_ctls;



    td_param_attributes_t attr;



    bool_t interrupt_occurred = false;



    uint16_t vm_id = tdx_local_data_ptr->vp_ctx.tdvps->management.curr_vm;

   

    tdx_sanity_check((vm_id == tdx_local_data_ptr->current_td_vm_id) && (vm_id == 0),

                     SCEC_TD_DISPATCHER_SOURCE, 35);



    bhb_drain_sequence(get_global_data());



    stepping_filter_e vmexit_stepping_result;

    vmexit_stepping_result = tdx_td_l1_l2_dispatcher_common_prologue(tdx_local_data_ptr, 0, &vm_exit_reason,

                                    &vm_exit_qualification, &vm_exit_inter_info);



    if (vmexit_stepping_result != FILTER_OK_CONTINUE)

    {

        goto EXIT;

    }



    handle_vm_entry_failures(tdx_local_data_ptr, vm_exit_reason, vm_exit_qualification);



    attr = tdx_local_data_ptr->vp_ctx.tdcs->executions_ctl_fields.attributes;



    switch (vm_exit_reason.basic_reason)

    {

        case VMEXIT_REASON_IO_INSTRUCTION:

        case VMEXIT_REASON_HLT_INSTRUCTION:

        case VMEXIT_REASON_INVD_INSTRUCTION:

        case VMEXIT_REASON_VMCALL_INSTRUCTION:

        case VMEXIT_REASON_WBINVD_INSTRUCTION:

        case VMEXIT_REASON_PCONFIG:

        case VMEXIT_REASON_APIC_WRITE:

            td_generic_ve_exit(vm_exit_reason, vm_exit_qualification.raw);

            break;



        case VMEXIT_REASON_GETSEC_INSTRUCTION:

        case VMEXIT_REASON_RSM_INSTRUCTION:

        case VMEXIT_REASON_VMCLEAR_INSTRUCTION:

        case VMEXIT_REASON_VMLAUNCH_INSTRUCTION:

        case VMEXIT_REASON_VMPTRLD_INSTRUCTION:

        case VMEXIT_REASON_VMPTRST_INSTRUCTION:

        case VMEXIT_REASON_VMREAD_INSTRUCTION:

        case VMEXIT_REASON_VMRESUME_INSTRUCTION:

        case VMEXIT_REASON_VMWRITE_INSTRUCTION:

        case VMEXIT_REASON_VMXOFF_INSTRUCTION:

        case VMEXIT_REASON_VMXON_INSTRUCTION:

        case VMEXIT_REASON_INVLEPT:

        case VMEXIT_REASON_INVLVPID:

        case VMEXIT_REASON_VMFUNC_INSTRUCTION:

        case VMEXIT_REASON_ENCLS_INSTRUCTION:

        case VMEXIT_REASON_ENCLV_INSTRUCTION:

        case VMEXIT_REASON_ENQCMDS_PASID_TRANSLATION_FAILURE:

        case VMEXIT_REASON_SEAMCALL:

        case VMEXIT_REASON_MWAIT_INSTRUCTION:

        case VMEXIT_REASON_MONITOR_INSTRUCTION:

            inject_ud();

            break;



        // Unconditional #GP injection

        case VMEXIT_REASON_ENQCMD_PASID_TRANSLATION_FAILURE:

        {

            inject_gp(0);

            break;

        }



        case VMEXIT_REASON_TASK_SWITCH:

        case VMEXIT_REASON_BUS_LOCK:

        case VMEXIT_REASON_INIT_EVENT:

            async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason,

                    vm_exit_qualification.raw, 0, 0, 0);

            break;

        case VMEXIT_REASON_NOTIFICATION:

            if (vm_exit_qualification.notification.nmi_unblocking_due_to_iret)

            {

                ia32_vmread(VMX_GUEST_INTERRUPTIBILITY_ENCODE, &guest_inter_state.raw);

                guest_inter_state.blocking_by_nmi = 1;

                ia32_vmwrite(VMX_GUEST_INTERRUPTIBILITY_ENCODE, guest_inter_state.raw);

            }

            async_tdexit_to_vmm((vm_exit_qualification.notification.vm_context_invalid) ?

                                 TDX_NON_RECOVERABLE_TD : TDX_SUCCESS,

                                 vm_exit_reason, vm_exit_qualification.raw, 0, 0, 0);

            break;

        case VMEXIT_REASON_TRIPLE_FAULT:

            async_tdexit_to_vmm(TDX_NON_RECOVERABLE_VCPU,

                    vm_exit_reason, vm_exit_qualification.raw, 0, 0, 0);

            break;

        case VMEXIT_REASON_SMI_OTHER_EVENT:

            // If this exit was due to an MSMI, disable the TD.  Else, do a normal async TD exit.

            async_tdexit_to_vmm((vm_exit_qualification.smi.msmi) ?

                    TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE  : TDX_SUCCESS,

                    vm_exit_reason, vm_exit_qualification.raw, 0, 0, vm_exit_inter_info.raw);

            break;

        case VMEXIT_REASON_INTERRUPT:

        case VMEXIT_REASON_C_STATE_SMI:

            async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, vm_exit_qualification.raw, 0, 0, vm_exit_inter_info.raw);

            break;

        case VMEXIT_REASON_RDPMC_INSTRUCTION:

            td_rdpmc_exit(vm_exit_reason, vm_exit_qualification.raw);

            break;

        case VMEXIT_REASON_EPT_MISCONFIGURATION:

            td_ept_misconfiguration_exit(vm_exit_reason);

            break;

        case VMEXIT_REASON_CPUID_INSTRUCTION:

            td_cpuid_exit();

            break;

        case VMEXIT_REASON_EPT_VIOLATION:

            td_ept_violation_exit(vm_exit_qualification, vm_exit_reason);

            break;

        case VMEXIT_REASON_XSETBV_INSTRUCTION:

            td_xsetbv_instruction_exit();

            break;

        case VMEXIT_REASON_CR_ACCESS:

            if (!td_cr_access_exit(vm_exit_qualification))

            {

                // CR access VM exit can only fail for debug TDs, where the host VMM enabled exit on CR3, CR8 etc.

                if (attr.debug)

                {

                    async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, vm_exit_qualification.raw, 0, 0, 0);

                }

                else

                {

                    async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD, vm_exit_reason, vm_exit_qualification.raw, 0, 0, 0);

                }

            }

            break;

        case VMEXIT_REASON_EXCEPTION_OR_NMI:

            td_exception_or_nmi_exit(vm_exit_reason, vm_exit_qualification, vm_exit_inter_info);

            break;

        case VMEXIT_REASON_MSR_READ:

        case VMEXIT_REASON_MSR_WRITE:

        {

            td_msr_access_status_t status = (vm_exit_reason.basic_reason == VMEXIT_REASON_MSR_READ) ?

                                            td_rdmsr_exit() : td_wrmsr_exit();



            if (status != TD_MSR_ACCESS_SUCCESS)

            {

                if (status == TD_MSR_ACCESS_GP)

                {

                    inject_gp(0);

                }

                else

                {

                    tdx_sanity_check((status == TD_MSR_ACCESS_MSR_NON_ARCH_EXCEPTION), SCEC_TD_DISPATCHER_SOURCE, 3);

                    td_generic_ve_exit(vm_exit_reason, 0);

                }

            }

            break;

        }

        case VMEXIT_REASON_TDCALL:

            td_call(tdx_local_data_ptr, &interrupt_occurred);

            break;

        case VMEXIT_REASON_NMI_WINDOW:

            // NMI Window is open.  Inject an NMI if applicable

            td_nmi_exit(tdx_local_data_ptr);

            break;

        case VMEXIT_REASON_EPT_PML_FULL:

            // PML is only allowed for debuggable TDs

            if (attr.debug)

            {

                async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, vm_exit_qualification.raw, 0, 0, 0);

            }

            // otherwise, others are not expected

            FATAL_ERROR();

            break;

        case VMEXIT_REASON_LOADIWK_INSTRUCTION:

        case VMEXIT_REASON_RDTSC_INSTRUCTION:

        case VMEXIT_REASON_DR_ACCESS:

        case VMEXIT_REASON_PAUSE_INSTRUCTION:

        case VMEXIT_REASON_VIRTUALIZED_EOI:

        case VMEXIT_REASON_GDTR_IDTR_ACCESS:

        case VMEXIT_REASON_LDTR_TR_ACCESS:

        case VMEXIT_REASON_RDTSCP:

        case VMEXIT_REASON_FAILED_VMENTER_GS:

        case VMEXIT_REASON_FAILED_VMENTER_MSR:

        case VMEXIT_REASON_FAILED_VMENTER_MC:

        case VMEXIT_REASON_TPR_BELOW_THRESHOLD:

        case VMEXIT_REASON_SIPI_EVENT:

        case VMEXIT_REASON_SMI_IO_EVENT:

        case VMEXIT_REASON_INTERRUPT_WINDOW:

        case VMEXIT_REASON_INVLPG_INSTRUCTION:

        case VMEXIT_REASON_RDRAND_INSTRUCTION:

        case VMEXIT_REASON_INVPCID_INSTRUCTION:

            // Fatal error

        default:

            // If the TD is debuggable then other exit reasons are expected

            if (tdx_local_data_ptr->vp_ctx.attributes.debug)

            {

                async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, vm_exit_qualification.raw, 0, 0, 0);

            }

            else

            {

                async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD, vm_exit_reason, vm_exit_qualification.raw, 0, 0, 0);

            }



            // Otherwise, other exit reasons are not expected

            TDX_ERROR("Fatal/unknown exit reason %d \n", vm_exit_reason.basic_reason);

            FATAL_ERROR();



            break;

    }



    // Make sure the active VMCS is set to the current VM's VMCS.

    tdvps_t* tdvps_p = tdx_local_data_ptr->vp_ctx.tdvps;

    set_vm_vmcs_as_active(tdvps_p, tdvps_p->management.curr_vm);



    // Check if exception was injected

    // Entry Interrupt Info valid bit is cleared automatically on every VMEXIT

    vmx_entry_inter_info_t entry_intr_info;

    ia32_vmread(VMX_VM_ENTRY_INTR_INFO_ENCODE, &(entry_intr_info.raw));



    // Check if we need to advance guest rip or handle pend NMI

    if (!entry_intr_info.valid && !interrupt_occurred)

    {

        // If PEND_NMI was requested, and there's no pending #VE (which should be handled

        // by the guest TD before NMI), set NMI Window Exiting execution control so NMI

        // can be injected at the proper time.

        if (tdvps_p->management.pend_nmi && (tdvps_p->ve_info.valid == 0))

        {

            ia32_vmread(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, &vm_procbased_ctls.raw);

            vm_procbased_ctls.nmi_window_exiting = 1;

            ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, vm_procbased_ctls.raw);

        }



        advance_guest_rip();

    }



    bus_lock_exit();



EXIT:



    check_pending_voe_on_debug_td_return();



    //Return to TD

    tdx_return_to_td(true, false, &tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state);



    //Unreachable code. panic

    tdx_sanity_check(0, SCEC_TD_DISPATCHER_SOURCE, 0);

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

 * @file td_other_exits.c

 * @brief VM Exit handlers for various other small reasons

 */



#include "td_dispatcher/tdx_td_dispatcher.h"

#include "tdx_api_defs.h"

#include "data_structures/tdx_tdvps.h"

#include "accessors/ia32_accessors.h"

#include "accessors/vt_accessors.h"

#include "accessors/data_accessors.h"

#include "x86_defs/vmcs_defs.h"

#include "data_structures/tdx_local_data.h"

#include "tdx_td_api_handlers.h"

#include "auto_gen/tdx_error_codes_defs.h"

#include "vmm_dispatcher/tdx_vmm_dispatcher.h"

#include "helpers/helpers.h"

#include "memory_handlers/sept_manager.h"

#include "td_dispatcher/vm_exits/td_vmexit.h"

#include "td_transitions/td_exit.h"



void td_rdpmc_exit(vm_vmexit_exit_reason_t vm_exit_reason, uint64_t  vm_exit_qualification)

{

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    tdcs_t* tdcs_p = tdx_local_data_ptr->vp_ctx.tdcs;



    if (tdcs_p->executions_ctl_fields.attributes.perfmon == 0)

    {

        TDX_LOG("RDPMC exit - causes #GP");

        inject_gp(0);

        return;

    }

    // if TD is debuggable then TDEXIT

    if (tdx_local_data_ptr->vp_ctx.attributes.debug)

    {

        async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, vm_exit_qualification, 0, 0, 0);

    }

    else

    {

        // If ATTRIBUTES.PERFMON is set, there shouldn't be a VM exit

        FATAL_ERROR();

    }



}



void td_ept_misconfiguration_exit(vm_vmexit_exit_reason_t vm_exit_reason)

{

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    tdcs_t* tdcs_p = tdx_local_data_ptr->vp_ctx.tdcs;



    bool_t gpaw = tdcs_p->executions_ctl_fields.gpaw;

    pa_t gpa;



    ia32_vmread(VMX_GUEST_PHYSICAL_ADDRESS_INFO_FULL_ENCODE, &gpa.raw);



    bool_t shared_bit = get_gpa_shared_bit(gpa.raw, gpaw);



    if (shared_bit)

    {

        // Clear page offset

        gpa.low_12_bits = 0;

        async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, 0, 0, gpa.raw, 0);

    }

    else

    {

        // Fatal error - EPT misconfiguration is not expected for private GPA

        FATAL_ERROR();

    }

}



// CR0 bits that can be modified by LMSW

// For L2, only PE, MP, EM and TD bits can be modified

#define CR0_L1_LMSW_MASK 0xEULL



bool_t td_cr_access_exit(vmx_exit_qualification_t vm_exit_qualification)

{

    uint64_t   value;

    ia32_cr0_t cr0;

    cr_write_status_e status = CR_ACCESS_SUCCESS;



    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    tdvps_t* tdvps_p = tdx_local_data_ptr->vp_ctx.tdvps;

    tdcs_t* tdcs_p = tdx_local_data_ptr->vp_ctx.tdcs;



    switch (vm_exit_qualification.cr_access.access_type)

    {

        case VMEXIT_CR_ACCESS_MOV_TO_CR:

            if (vm_exit_qualification.cr_access.mov_cr_gpr == GPR_RSP_IDX)

            {

                ia32_vmread(VMX_GUEST_RSP_ENCODE, &value);

            }

            else

            {

                value = tdvps_p->guest_state.gpr_state.gprs[vm_exit_qualification.cr_access.mov_cr_gpr];

            }



            switch (vm_exit_qualification.cr_access.cr_num)

            {

                case 0:

                    // MOV to CR0

                    // All valid cases of accessing CR0 are controlled by the CR0 guest/host mask

                    // and CR0 read shadow fields of the TD VMCS, and do not cause a VM exit.

                    status = write_guest_cr0(value, false);

                    break;



                case 4:

                    // MOV to CR4

                    // All valid cases of accessing CR4 are controlled by the CR4 guest/host mask

                    // and CR4 read shadow fields of the TD VMCS, and do not cause a VM exit.

                    status = write_guest_cr4(value, tdcs_p, tdvps_p);

                    break;



                default:

                    // VM exits due to other CR accesses are not expected

                    return false;

            }



            if (status == CR_ACCESS_GP)

            {

                inject_gp(0);

                return true;

            }

            else if (status == CR_ACCESS_NON_ARCH)

            {

                tdx_inject_ve(VMEXIT_REASON_CR_ACCESS, vm_exit_qualification.raw, tdvps_p, 0, 0);

                return true;

            }



            break;



        case VMEXIT_CR_ACCESS_LMSW:



            // Architecturally, LMSW can only write CR0[3:1] (TS, EM, MP); write to CR0[0] (PE)

            // is ignored in protected mode.

            // Because of the setting of TD VMCS CR0 guest/host mask, guest TD attempts to

            // clear CR0.NE or CR0.PE to 0, or set CR0.CD, CR0.NW or any of the CR0 reserved bits

            // to 1 cause a VM exit.



            value = vm_exit_qualification.cr_access.lmsw_src_data;

            ia32_vmread(VMX_GUEST_CR0_ENCODE, &cr0.raw);



            // L1 is assumed to never run in real mode

            tdx_sanity_check(cr0.pe == 1, SCEC_TDEXIT_SOURCE, 3);



            ia32_vmwrite(VMX_GUEST_CR0_ENCODE, (value & CR0_L1_LMSW_MASK) | (cr0.raw & ~CR0_L1_LMSW_MASK));



            break;



        default:

            // VM exits due to other access types (MOV from CR, CLTS) are not expected

            return false;

    }



    return true;

}



void td_exception_or_nmi_exit(vm_vmexit_exit_reason_t vm_exit_reason,

                              vmx_exit_qualification_t vm_exit_qualification,

                              vmx_exit_inter_info_t vm_exit_inter_info)

{

    if (vm_exit_inter_info.interruption_type == VMEXIT_INTER_INFO_TYPE_NMI)

    {

        // This exit was due to an NMI

        async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason,

                            vm_exit_qualification.raw, 0, 0, vm_exit_inter_info.raw);

    }

    else if (vm_exit_inter_info.vector == E_MC)

    {

        // This exit was due to a #MC, disable the TD

        async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE, vm_exit_reason,

                            vm_exit_qualification.raw, 0, 0, vm_exit_inter_info.raw);

    }

    else if (get_local_data()->vp_ctx.tdcs->executions_ctl_fields.attributes.debug)

    {

        // If the TD is debuggable, it may exit due to any exception

        async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason,

                            vm_exit_qualification.raw, 0, 0, vm_exit_inter_info.raw);

    }

    else

    {

        // Currently we don't expect exits due to other exceptions

        // Fatal error

        FATAL_ERROR();

    }



}



void tdx_ept_violation_exit_to_vmm(pa_t gpa, vm_vmexit_exit_reason_t vm_exit_reason, uint64_t exit_qual, uint64_t ext_exit_qual)

{

    vmx_exit_qualification_t exit_qualification;

    exit_qualification.raw = exit_qual;



    // When exit is due to EPT violation, bits 12-7 of the exit qualification are cleared to 0.

    exit_qualification.ept_violation.gla_valid = 0;

    exit_qualification.ept_violation.page_walk_fault = 0;

    exit_qualification.ept_violation.user_mode_lin_addr = 0;

    exit_qualification.ept_violation.writable_lin_addr = 0;

    exit_qualification.ept_violation.execute_dis_lin_addr = 0;

    exit_qualification.ept_violation.nmi_unblocking_due_to_iret = 0;



    // When exit is due to EPT violation or EPT misconfiguration, format is similar to the

    // VMCS guest-physical address, except that bits 11:0 are cleared to 0.

    gpa.low_12_bits = 0;



    async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, exit_qualification.raw,

                        ext_exit_qual, gpa.raw, 0);

}



void tdx_ept_misconfig_exit_to_vmm(pa_t gpa)

{

    // When exit is due to EPT violation or EPT misconfiguration, format is similar to the

    // VMCS guest-physical address, except that bits 11:0 are cleared to 0.

    gpa.low_12_bits = 0;



    vm_vmexit_exit_reason_t vm_exit_reason = { .raw = 0 };

    vm_exit_reason.basic_reason = VMEXIT_REASON_EPT_MISCONFIGURATION;



    async_tdexit_to_vmm(TDX_SUCCESS, vm_exit_reason, 0, 0, gpa.raw, 0);

}



void tdx_inject_ve(uint64_t vm_exit_reason, uint64_t exit_qualification, tdvps_t* tdvps_p,

        uint64_t gpa, uint64_t gla)

{

    bool_t ve_info_mapped = false;

    tdvps_ve_info_t* ve_info_p;



    // Before we inject a #VE, reinject IDT vectoring events that happened during VM exit, if any

    tdx_debug_assert(tdvps_p->management.curr_vm == 0);

    {

        ve_info_p = &tdvps_p->ve_info;

    }



    // TDX-SEAM first checks VE_INFO.VALID to make sure VE_INFO does not contain information that

    // hasn’t been read yet using TDGVPVEINFOGET.

    // - If VE_INFO.VALID is 0, it copies the exit reason and exit qualification from the

    //   TD VMCS to VE_INFO, and injects a #VE to the guest TD, as described in ‎16.4.2.4.

    // - If VE_INFO.VALID is not 0, it injects a #GP(0) to the guest TD.



    if (ve_info_p->valid == 0)

    {

        uint64_t eptp_index;

        uint64_t length, info;



        ia32_vmread(VMX_EPTP_INDEX_ENCODE, &eptp_index);

        ia32_vmread(VMX_VM_EXIT_INSTRUCTION_LENGTH_ENCODE, &length);

        ia32_vmread(VMX_VM_EXIT_INSTRUCTION_INFO_ENCODE, &info);



        ve_info_p->exit_reason = (uint32_t)vm_exit_reason;

        ve_info_p->exit_qualification = exit_qualification;

        ve_info_p->gla = gla;

        ve_info_p->gpa = gpa;

        ve_info_p->eptp_index = (uint16_t)eptp_index;

        ve_info_p->instruction_length = (uint32_t)length;

        ve_info_p->instruction_info = (uint32_t)info;



        ve_info_p->valid = (uint32_t)VE_INFO_CONTENTS_VALID;



        inject_ve();

    }

    else

    {

        inject_df();

    }



    ia32_rflags_t rflags;



    ia32_vmread(VMX_GUEST_RFLAGS_ENCODE, &rflags.raw);

    rflags.rf = 1;

    ia32_vmwrite(VMX_GUEST_RFLAGS_ENCODE, rflags.raw);



    if (ve_info_mapped)

    {

        free_la(ve_info_p);

    }

}



void td_nmi_exit(tdx_module_local_t* tdx_local_data_ptr)

{

    vmx_entry_inter_info_t vm_entry_inter_info;

    vmx_procbased_ctls_t vm_procbased_ctls;



    if (tdx_local_data_ptr->vp_ctx.tdvps->management.pend_nmi &&

            tdx_local_data_ptr->vp_ctx.tdvps->ve_info.valid == 0)

    {

        /**

         * PEND_NMI was requested, and there's no pending #VE (which should be handled

         * by the guest TD before NMI).  Inject an NMI.

         */

        vm_entry_inter_info.raw = 0ULL;

        vm_entry_inter_info.vector = E_NMI;

        vm_entry_inter_info.interruption_type = VMEXIT_INTER_INFO_TYPE_NMI;

        vm_entry_inter_info.deliver_error_code = 0;

        vm_entry_inter_info.valid = 1;

        ia32_vmwrite(VMX_VM_ENTRY_INTR_INFO_ENCODE, vm_entry_inter_info.raw);



        tdx_local_data_ptr->vp_ctx.tdvps->management.pend_nmi = false;

    }



    // Clear the NMI Window Exiting VM execution control

    ia32_vmread(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, &vm_procbased_ctls.raw);

    vm_procbased_ctls.nmi_window_exiting = 0;

    ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, vm_procbased_ctls.raw);

}



void async_tdexit_ept_violation(pa_t gpa, ept_level_t req_level, ia32e_sept_t sept_entry,

                                ept_level_t ept_level, ia32e_sept_t* sept_entry_ptr, vmx_eeq_type_t eeq_type)

{

    vmx_ext_exit_qual_t eeq = {.raw = 0};

    tdaccept_vmx_eeq_info_t eeq_info = {.raw = 0};



    vmx_exit_qualification_t exit_qual = { .raw = 0 };



    // TDG.MEM.PAGE.ACCEPT and TDG.MEM.PAGE.ATTR.WR are both write operations

    exit_qual.ept_violation.data_write             = 1;

    exit_qual.ept_violation.gpa_readable           = sept_entry.r;

    exit_qual.ept_violation.gpa_writeable          = sept_entry.w;

    exit_qual.ept_violation.gpa_executable         = sept_entry.x;

    exit_qual.ept_violation.gpa_exec_for_ring3_lin = 0; // MBEC is not enabled for L1



    eeq_info.req_sept_level = req_level;

    eeq_info.err_sept_level = ept_level;

    eeq_info.err_sept_state = sept_get_arch_state(sept_entry);

    eeq_info.err_sept_is_leaf = is_secure_ept_leaf_entry(&sept_entry);



    eeq.type = eeq_type;

    eeq.info = eeq_info.raw;



    if (sept_entry_ptr != NULL)

    {

        free_la(sept_entry_ptr);

    }



    vm_vmexit_exit_reason_t vm_exit_reason = {.raw = 0};

    vm_exit_reason.basic_reason = VMEXIT_REASON_EPT_VIOLATION;



    tdx_ept_violation_exit_to_vmm(gpa, vm_exit_reason, exit_qual.raw, eeq.raw);

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

 * @file td_async_exit.c

 * @brief All the ways to transition from TD(VM) to VMM

 */



#include "td_dispatcher/tdx_td_dispatcher.h"

#include "tdx_api_defs.h"

#include "accessors/ia32_accessors.h"

#include "accessors/vt_accessors.h"

#include "accessors/data_accessors.h"

#include "x86_defs/vmcs_defs.h"

#include "data_structures/tdx_local_data.h"

#include "tdx_td_api_handlers.h"

#include "vmm_dispatcher/tdx_vmm_dispatcher.h"

#include "helpers/helpers.h"

#include "td_transitions/td_exit.h"

#include "memory_handlers/sept_manager.h"

#include "td_dispatcher/vm_exits/td_vmexit.h"

#include "helpers/virt_msr_helpers.h"



static void load_xmms_by_mask(tdvps_t* tdvps_ptr, uint16_t xmm_select)

{

    uint128_t xmms[16];



    basic_memset_to_zero(xmms, sizeof(xmms));



    // Copy the guest TD XMM's that should be passed to the VMM, otherwise they will be zeroed

    for (uint32_t i = 0; i < 16; i++)

    {

        if (xmm_select & (uint16_t)BIT(i))

        {

            xmms[i] = tdvps_ptr->guest_extension_state.xbuf.legacy_region.xmm[i];

        }

    }



    load_xmms_from_buffer(xmms);

    basic_memset_to_zero(xmms, sizeof(xmms));

}



// Clear DR if 'cur_value' != 0

static void init_all_dr_opt(tdvps_t* tdvps_ptr)

{

   if (tdvps_ptr->guest_state.dr0 != DR0_RESET_STATE)

   {

       ia32_load_dr0(DR0_RESET_STATE);

   }



   if (tdvps_ptr->guest_state.dr1 != DR1_RESET_STATE)

   {

       ia32_load_dr1(DR1_RESET_STATE);

   }



   if (tdvps_ptr->guest_state.dr2 != DR2_RESET_STATE)

   {

       ia32_load_dr2(DR2_RESET_STATE);

   }



   if (tdvps_ptr->guest_state.dr3 != DR3_RESET_STATE)

   {

       ia32_load_dr3(DR3_RESET_STATE);

   }



   if (tdvps_ptr->guest_state.dr6 != DR6_RESET_STATE)

   {

       ia32_load_dr6(DR6_RESET_STATE);

   }

}



// Clear MSR 'index' if 'cur_value' != 0

static void init_msr_opt(uint64_t addr, uint64_t cur_value)

{

    if (addr == IA32_FMASK_MSR_ADDR)

    {

        if (cur_value != IA32_FMASK_MSR_RESET_STATE)

        {

            ia32_wrmsr(IA32_FMASK_MSR_ADDR, IA32_FMASK_MSR_RESET_STATE);

        }

    }

    else if (addr == IA32_LBR_DEPTH_MSR_ADDR)

    {

        if (cur_value != IA32_LBR_DEPTH_MSR_RESET_STATE)

        {

            ia32_wrmsr(IA32_LBR_DEPTH_MSR_ADDR, IA32_LBR_DEPTH_MSR_RESET_STATE);

        }

    }

    else // All other MSR's are reset to 0

    {

        if (cur_value != 0)

        {

            ia32_wrmsr(addr, 0);

        }

    }

}



/*

 * Scrub CPU state that is not restored from TD VMCS host state by VM exit

 */

static void load_vmm_state_before_td_exit(tdx_module_local_t* local_data_ptr)

{

    tdx_module_global_t* global_data = get_global_data();



    // Clear CR2 to its INIT value

    ia32_load_cr2(CR2_RESET_STATE);



    // Debug state restoration

    init_all_dr_opt(local_data_ptr->vp_ctx.tdvps);



    wrmsr_opt(IA32_DS_AREA_MSR_ADDR, local_data_ptr->vmm_non_extended_state.ia32_ds_area, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_ds_area);



    if (local_data_ptr->vp_ctx.xfd_supported)

    {

        init_msr_opt(IA32_XFD_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_xfd);

        init_msr_opt(IA32_XFD_ERROR_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_xfd_err);

    }



    // Perfmon State

    if (local_data_ptr->vp_ctx.attributes.perfmon)

    {

        for (uint8_t i = 0; i < global_data->num_fixed_ctrs; i++)

        {

            if ((global_data->fc_bitmap & BIT(i)) != 0)

            {

                init_msr_opt(IA32_FIXED_CTR0_MSR_ADDR + i, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_fixed_ctr[i]);

            }

        }



        for (uint32_t i = 0; i < NUM_PMC; i++)

        {

            init_msr_opt(IA32_A_PMC0_MSR_ADDR + i, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_a_pmc[i]);

        }



        for (uint32_t i = 0; i < 2; i++)

        {

            init_msr_opt(IA32_OFFCORE_RSPx_MSR_ADDR + i, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_offcore_rsp[i]);

        }



        ia32_wrmsr(IA32_PERF_GLOBAL_STATUS_RESET_MSR_ADDR, ia32_rdmsr(IA32_PERF_GLOBAL_STATUS_MSR_ADDR));

        if (1 == global_data->plt_common_config.ia32_perf_capabilities.perf_metrics_available)

        {

            init_msr_opt(IA32_PERF_METRICS_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_perf_metrics);

        }

    }



    init_msr_opt(IA32_UARCH_MISC_CTL_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_uarch_misc_ctl);



    /*

     * Initialize the following MSRs:

     * IA32_STAR, IA32_LSTAR, IA32_FMASK, IA32_TSC_AUX,  & IA32_KERNEL_GS_BASE

     */



    init_msr_opt(IA32_TSC_AUX_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_tsc_aux);

    init_msr_opt(IA32_STAR_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_star);

    init_msr_opt(IA32_LSTAR_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_lstar);

    init_msr_opt(IA32_FMASK_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_fmask);

    init_msr_opt(IA32_KERNEL_GS_BASE_MSR_ADDR, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_kernel_gs_base);



    // Scrub of restore IA32_TSX_CTRL, if supported by the CPU

    if (local_data_ptr->vp_ctx.tdcs->executions_ctl_fields.cpuid_flags.tsx_supported)

    {

        // TSX is only enabled on the TD if IA32_TSX_CTRL is supported by the CPU

        ia32_wrmsr(IA32_TSX_CTRL_MSR_ADDR, 0);

    }

    else if ((global_data->hle_supported || global_data->rtm_supported) &&

             (global_data->plt_common_config.ia32_arch_capabilities.tsx_ctrl))

    {

        // The CPU supports TSX and the IA32_TSX_CTRL MSR; restore IA32_TSX_CTRL

        wrmsr_opt(IA32_TSX_CTRL_MSR_ADDR, local_data_ptr->vmm_non_extended_state.ia32_tsx_ctrl, IA32_TSX_CTRL_DISABLE_VALUE);

    }



    /*

     *  Use vmwrite to update the following SEAM-VMCS guest fields

     *  IA32_DEBUGCTL, IA32_PERF_GLOBAL_CTRL, IA32_RTIT_CTL, IA32_LBR_CTL and DR7

     */

    uint64_t debugctl_msr_value;

    ia32_vmread(VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE, &debugctl_msr_value);

    debugctl_msr_value = debugctl_msr_value & IA32_DEBUGCTLMSR_MASK_BITS_PRESERVED;

    ia32_vmwrite(VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE, debugctl_msr_value);

    if (local_data_ptr->vp_ctx.attributes.perfmon)

    {

        ia32_vmwrite(VMX_GUEST_IA32_PERF_GLOBAL_CONTROL_FULL_ENCODE, VMX_GUEST_IA32_PERF_GLOBAL_CONTROL_INIT_VALUE);

    }

    if (((ia32_xcr0_t)local_data_ptr->vp_ctx.xfam).pt)

    {

        ia32_vmwrite(VMX_GUEST_RTIT_CTL_FULL_ENCODE, VMX_GUEST_RTIT_CTL_INIT_VALUE);

    }

    if (((ia32_xcr0_t)local_data_ptr->vp_ctx.xfam).lbr)

    {

        ia32_vmwrite(VMX_GUEST_LBR_CTL_FULL_ENCODE, VMX_GUEST_LBR_CTL_INIT_VALUE);

    }

    ia32_vmwrite(VMX_GUEST_DR7_ENCODE, VMX_GUEST_DR7_INIT_VALUE);



}



static void save_guest_td_state_before_td_exit(tdcs_t* tdcs_ptr, tdx_module_local_t* local_data_ptr)

{

    tdx_module_global_t* global_data = get_global_data();



    tdvps_t* tdvps_ptr = local_data_ptr->vp_ctx.tdvps;



    // Extended state control



    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.xfd_supported)

    {

        tdvps_ptr->guest_msr_state.ia32_xfd = ia32_rdmsr(IA32_XFD_MSR_ADDR);

        tdvps_ptr->guest_msr_state.ia32_xfd_err = ia32_rdmsr(IA32_XFD_ERROR_MSR_ADDR);

    }



    // CR2 state

    tdvps_ptr->guest_state.cr2 = ia32_store_cr2();



    // XCR0 state

    tdvps_ptr->guest_state.xcr0 = ia32_xgetbv(0);



    // Debug state

    tdvps_ptr->guest_state.dr0 = ia32_store_dr0();

    tdvps_ptr->guest_state.dr1 = ia32_store_dr1();

    tdvps_ptr->guest_state.dr2 = ia32_store_dr2();

    tdvps_ptr->guest_state.dr3 = ia32_store_dr3();

    tdvps_ptr->guest_state.dr6 = ia32_store_dr6();



    tdvps_ptr->guest_msr_state.ia32_ds_area = ia32_rdmsr(IA32_DS_AREA_MSR_ADDR);

    if (((ia32_xcr0_t)tdvps_ptr->management.xfam).lbr)

    {

        tdvps_ptr->guest_msr_state.ia32_lbr_depth = ia32_rdmsr(IA32_LBR_DEPTH_MSR_ADDR);

    }



    // Perfmon State

    if (tdcs_ptr->executions_ctl_fields.attributes.perfmon)

    {

        tdvps_ptr->guest_msr_state.ia32_fixed_ctr_ctrl = ia32_rdmsr(IA32_FIXED_CTR_CTRL_MSR_ADDR);

        for (uint8_t i = 0; i < global_data->num_fixed_ctrs; i++)

        {

            if ((global_data->fc_bitmap & BIT(i)) != 0)

            {

                tdvps_ptr->guest_msr_state.ia32_fixed_ctr[i] = ia32_rdmsr(IA32_FIXED_CTR0_MSR_ADDR + i);

            }

        }



        for (uint32_t i = 0; i < NUM_PMC; i++)

        {

            tdvps_ptr->guest_msr_state.ia32_a_pmc[i] = ia32_rdmsr(IA32_A_PMC0_MSR_ADDR + i);

            tdvps_ptr->guest_msr_state.ia32_perfevtsel[i] = ia32_rdmsr(IA32_PERFEVTSEL0_MSR_ADDR + i);

        }



        for (uint32_t i = 0; i < 2; i++)

        {

            tdvps_ptr->guest_msr_state.ia32_offcore_rsp[i] = ia32_rdmsr(IA32_OFFCORE_RSPx_MSR_ADDR + i);

        }



        tdvps_ptr->guest_msr_state.ia32_perf_global_status = ia32_rdmsr(IA32_PERF_GLOBAL_STATUS_MSR_ADDR);

        if (1 == global_data->plt_common_config.ia32_perf_capabilities.perf_metrics_available)

        {

            tdvps_ptr->guest_msr_state.ia32_perf_metrics = ia32_rdmsr(IA32_PERF_METRICS_MSR_ADDR);

        }

        tdvps_ptr->guest_msr_state.ia32_pebs_enable = ia32_rdmsr(IA32_PEBS_ENABLE_MSR_ADDR);

        tdvps_ptr->guest_msr_state.ia32_pebs_data_cfg = ia32_rdmsr(IA32_PEBS_DATA_CFG_MSR_ADDR);

        tdvps_ptr->guest_msr_state.ia32_pebs_ld_lat = ia32_rdmsr(IA32_PEBS_LD_LAT_MSR_ADDR);

        // MSR_PEBS_FRONTEND exists only in big cores

        if (global_data->native_model_info.core_type == CORE_TYPE_BIGCORE)

        {

            tdvps_ptr->guest_msr_state.ia32_pebs_frontend = ia32_rdmsr(IA32_PEBS_FRONTEND_MSR_ADDR);

        }

    }

    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported)

    {

        tdvps_ptr->guest_msr_state.ia32_umwait_control= ia32_rdmsr(IA32_UMWAIT_CONTROL);

    }



    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.tsx_supported)

    {

        tdvps_ptr->guest_msr_state.ia32_tsx_ctrl = ia32_rdmsr(IA32_TSX_CTRL_MSR_ADDR);

    }



    tdvps_ptr->guest_msr_state.ia32_uarch_misc_ctl = ia32_rdmsr(IA32_UARCH_MISC_CTL_MSR_ADDR);



    // Save the following MSRs:

    // IA32_STAR, IA32_LSTAR,

    // IA32_FMASK, IA32_KERNEL_GS_BASE, IA32_TSC_AUX

    tdvps_ptr->guest_msr_state.ia32_star            = ia32_rdmsr(IA32_STAR_MSR_ADDR);

    tdvps_ptr->guest_msr_state.ia32_lstar           = ia32_rdmsr(IA32_LSTAR_MSR_ADDR);

    tdvps_ptr->guest_msr_state.ia32_fmask           = ia32_rdmsr(IA32_FMASK_MSR_ADDR);

    tdvps_ptr->guest_msr_state.ia32_kernel_gs_base  = ia32_rdmsr(IA32_KERNEL_GS_BASE_MSR_ADDR);

    tdvps_ptr->guest_msr_state.ia32_tsc_aux         = ia32_rdmsr(IA32_TSC_AUX_MSR_ADDR);

}



static void async_tdexit_internal(api_error_code_e tdexit_case,

                                  vm_vmexit_exit_reason_t vm_exit_reason,

                                  uint64_t exit_qualification,

                                  uint64_t extended_exit_qualification,

                                  uint64_t gpa,

                                  uint64_t vm_exit_interruption_information,

                                  bool_t check_bus_lock_preempted)

{

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();



    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;

    tdr_t* tdr_ptr = tdx_local_data_ptr->vp_ctx.tdr;

    uint8_t vcpu_state = tdvps_ptr->management.state;

    uint8_t last_td_exit = tdvps_ptr->management.last_td_exit;

    api_error_code_t error_code;



    error_code.raw = tdexit_case;



    if (check_bus_lock_preempted)

    {

        // Check the sticky BUS_LOCK_PREEMPTED flag, report and clear if true

        if (tdx_local_data_ptr->vp_ctx.bus_lock_preempted)

        {

            vm_exit_reason.bus_lock_preempted = true;

        }

    }



    tdx_local_data_ptr->vp_ctx.bus_lock_preempted = false;



    switch (tdexit_case)

    {

    case TDX_SUCCESS:

    case TDX_CROSS_TD_FAULT:

    case TDX_TD_EXIT_BEFORE_L2_ENTRY:

    case TDX_TD_EXIT_ON_L2_TO_L1:

    case TDX_TD_EXIT_ON_L2_VM_EXIT:

        // Update the VCPU state for the next TDHVPENTER

        vcpu_state = VCPU_READY;

        last_td_exit = LAST_EXIT_ASYNC_FAULT;

        break;



    case TDX_CROSS_TD_TRAP:

    case TDX_HOST_PRIORITY_BUSY_TIMEOUT:

        // Update the VCPU state for the next TDH_VP_ENTER

        vcpu_state = VCPU_READY;

        last_td_exit = LAST_EXIT_ASYNC_TRAP;

        break;



    case TDX_NON_RECOVERABLE_VCPU:

        // Mark the VCPU so it can't be re-entered

        vcpu_state = VCPU_DISABLED;

        break;



        // Fatal cases

    case TDX_NON_RECOVERABLE_TD:

    case TDX_NON_RECOVERABLE_TD_WRONG_APIC_MODE:

    case TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE:

    case TDX_NON_RECOVERABLE_TD_CORRUPTED_MD:

        // VCPU state and last TD-exit doesn't change - we will pass to td_vmexit_to_vmm

        // the current value written in the TDVPS

        tdr_ptr->management_fields.fatal = true;

        error_code.fatal = 1;

        break;

    default:

        FATAL_ERROR();

    }



    // Set TD exit information

    error_code.details_l2 = vm_exit_reason.raw & BIT_MASK_32BITS;

    tdx_local_data_ptr->vmm_regs.rax = error_code.raw;



    td_exit_qualification_t td_exit_qual = { .raw = exit_qualification };

    td_exit_qual.vm = tdvps_ptr->management.curr_vm;



    tdx_local_data_ptr->vmm_regs.rcx = td_exit_qual.raw;

    tdx_local_data_ptr->vmm_regs.rdx = extended_exit_qualification;

    tdx_local_data_ptr->vmm_regs.r8  = gpa;

    tdx_local_data_ptr->vmm_regs.r9  = vm_exit_interruption_information;

    tdx_local_data_ptr->vmm_regs.r10 = 0ULL;

    tdx_local_data_ptr->vmm_regs.r11 = 0ULL;

    tdx_local_data_ptr->vmm_regs.r12 = 0ULL;

    tdx_local_data_ptr->vmm_regs.r13 = 0ULL;

    tdx_local_data_ptr->vmm_regs.r14 = 0ULL;



    tdx_local_data_ptr->vmm_regs.r15 = 0ULL;

    tdx_local_data_ptr->vmm_regs.rbx = 0ULL;

    tdx_local_data_ptr->vmm_regs.rbp = 0ULL;

    tdx_local_data_ptr->vmm_regs.rsi = 0ULL;

    tdx_local_data_ptr->vmm_regs.rdi = 0ULL;



    ia32_xcr0_t xcr0 = { .raw = tdx_local_data_ptr->vp_ctx.xfam };

    xcr0.sse = 1;

    uint64_t scrub_mask = xcr0.raw;



    if (error_code.host_recoverability_hint)

    {

        tdx_debug_assert(tdvps_ptr->management.curr_vm == 0);

    }



    td_vmexit_to_vmm(vcpu_state, last_td_exit, scrub_mask,

                     0, (tdexit_case == TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE),

                     error_code.host_recoverability_hint);

}



void write_l2_enter_outputs(tdvps_t* tdvps_ptr, uint16_t vm_id)

{

    // HPA assumed to be correct since it is checked before L2 VM entry

    l2_enter_guest_state_t* guest_state = map_pa((void*)tdvps_ptr->management.l2_enter_guest_state_hpa[vm_id], TDX_RANGE_RW);



    tdx_memcpy(&guest_state->gpr_state, sizeof(guest_state->gpr_state),

               &tdvps_ptr->guest_state.gpr_state, sizeof(tdvps_ptr->guest_state.gpr_state));



    // Read RSP, RFLAGS, RIP and SSP from their respective L2 VMCS fields

    ia32_vmread(VMX_GUEST_RSP_ENCODE, &guest_state->gpr_state.rsp);

    ia32_vmread(VMX_GUEST_RFLAGS_ENCODE, &guest_state->rflags);

    ia32_vmread(VMX_GUEST_RIP_ENCODE, &guest_state->rip);

    ia32_vmread(VMX_GUEST_SSP_ENCODE, &guest_state->ssp);



    uint64_t val = 0;

    ia32_vmread(VMX_GUEST_INTERRUPT_STATUS_ENCODE, &val);

    guest_state->interrupt_status = (uint16_t)val;



    free_la(guest_state);

}



void async_tdexit_to_vmm(api_error_code_e tdexit_case,

                         vm_vmexit_exit_reason_t vm_exit_reason,

                         uint64_t exit_qualification,

                         uint64_t extended_exit_qualification,

                         uint64_t gpa,

                         uint64_t vm_exit_interruption_information)

{

    async_tdexit_internal(tdexit_case, vm_exit_reason, exit_qualification,

                          extended_exit_qualification, gpa, vm_exit_interruption_information, true);

}



void async_tdexit_cross_td(api_error_code_e tdexit_case,

                           api_error_code_e cross_td_status,

                           pa_t target_td)

{

    get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax = cross_td_status;

    vm_vmexit_exit_reason_t empty_reason = { .raw = 0 };



    async_tdexit_internal(tdexit_case, empty_reason, 0, cross_td_status, target_td.raw, 0, false);

}



void async_tdexit_empty_reason(api_error_code_e tdexit_case)

{

    vm_vmexit_exit_reason_t empty_reason = { .raw = 0 };



    async_tdexit_internal(tdexit_case, empty_reason, 0, 0, 0, 0, false);

}



void td_vmexit_to_vmm(uint8_t vcpu_state, uint8_t last_td_exit, uint64_t scrub_mask,

                      uint16_t xmm_select, bool_t is_td_dead, bool_t is_trap_exit)

{

    // Local data

    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    vp_ctx_t* vp_ctx = &tdx_local_data_ptr->vp_ctx;

    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;

    tdcs_t* tdcs_ptr = tdx_local_data_ptr->vp_ctx.tdcs;



    // Avoid accessing TD private memory and control structures (except TDR).

    // The TD is dead, no need so save its state.

    if (!is_td_dead)

    {

        // 1.  Save any guest state that it has not saved as part of the common guest-side operation, e.g.,

        //     the extended state per TDCS.XFAM

        save_guest_td_state_before_td_exit(tdcs_ptr, tdx_local_data_ptr);



        // 2.  Set TDVPS.STATE to one of the VCPU_READY sub states, as an indication to the next TD entry.

        tdvps_ptr->management.state = vcpu_state;

        tdvps_ptr->management.last_td_exit = last_td_exit;

        // At this point the VCPU state will no longer be accessed



        if ((tdvps_ptr->management.curr_vm != 0) && !is_trap_exit)

        {

            // On TD exit from L2 VM, write the output memory operands of TDG.VP.ENTER to memory.

            // This is done at this point, before the TLB tracking counter is decremented,

            // because after that the memory is not protected by TLB tracking and may not

            // be valid for writing anymore.

            write_l2_enter_outputs(tdvps_ptr, tdvps_ptr->management.curr_vm);

        }



        // Save Guest-TD XCR0 and XSS

        save_guest_td_extended_state(tdvps_ptr, tdx_local_data_ptr->vp_ctx.xfam);



        if (is_trap_exit)

        {

            // TDGVPVMCALL behaves as a trap-like TD exit.

            // TDX-SEAM advances the guest TD RIP (in TD VMCS) to the instruction following TDCALL.

            advance_guest_rip();

        }



        // 3.  Execute the TD exit TLB tracking sequence, adjusting the TDCS tracking counters.

        tdcs_epoch_tracking_fields_t* epoch_tracking = &tdcs_ptr->epoch_tracking;

        (void)_lock_xadd_16b(&epoch_tracking->epoch_and_refcount.refcount[tdvps_ptr->management.vcpu_epoch & 1], (uint16_t)-1);

    }



    // 4.  At this point TDR, TDCS and TDVPS will no longer be used during the flow.

    //     Release the shared lock on those control structures, which was acquired by TDHVPENTER.

    pamt_implicit_release_lock(vp_ctx->tdr_pamt_entry, TDX_LOCK_SHARED);

    pamt_unwalk(vp_ctx->tdvpr_pa, vp_ctx->tdvpr_pamt_block, vp_ctx->tdvpr_pamt_entry, TDX_LOCK_SHARED, PT_4KB);



    // Load host VMM state:

    set_seam_vmcs_as_active();



    // 5.  Load any host VMM state, which is not part of the output of TDHVPENTER, and that

    //     might have been modified by TDX-SEAM itself and by the guest TD, with synthetic INIT values.

    //

    // This is done before loading VMM state - to save additional XCR0/XSS save-restore

    initialize_extended_state(scrub_mask);



    // 6.  Restore host VMM CPU state from the TDX-SEAM LP-scope state save area.

    //     At this point, any flow that needed to update the host VMM state, e.g.,

    //     write to RDX as an output operand, has done so by updating the state save area.

    load_vmm_state_before_td_exit(tdx_local_data_ptr);



    // In case of TDGVPVMCALL, Guest XMM's will be passed down to VMM, based on XFAM.SSE bit

    // If the bit is 0 then they won't be zeroed by initialization

    // In case of Async TDEXIT, set XMM0-15 of the VMM to 0.

    if (last_td_exit == LAST_EXIT_TDVMCALL)

    {

        load_xmms_by_mask(tdvps_ptr, xmm_select);

    }



    // 7.   Run the common SEAMRET routine.

    tdx_vmm_post_dispatching();



    //unreachable Code. Panic

    tdx_sanity_check(0, SCEC_TDEXIT_SOURCE, 0);

}



static void td_l2_to_l1_exit_internal(api_error_code_e tdexit_case, vm_vmexit_exit_reason_t vm_exit_reason,

                      vmx_exit_qualification_t vm_exit_qualification, uint64_t extended_exit_qualification,

                      vmx_exit_inter_info_t vm_exit_inter_info,

                      uint32_t inter_error, uint64_t gla, uint64_t gpa, uint32_t idt_vectoring_info,

                      uint32_t idt_vectoring_err, uint32_t instr_info, uint32_t instr_length)

{

    tdx_module_local_t* ld_p = get_local_data();



    tdvps_t* tdvps_ptr = ld_p->vp_ctx.tdvps;

    uint16_t curr_vm = tdvps_ptr->management.curr_vm;

    api_error_code_t error_code;



    // If the TD is debuggable, the host VMM can request all L2->L1 exits to be converted to TD exits.

    if (tdvps_ptr->management.l2_debug_ctls[curr_vm].td_exit_on_l2_to_l1)

    {

        tdx_sanity_check(ld_p->vp_ctx.tdcs->executions_ctl_fields.attributes.debug, SCEC_TDEXIT_SOURCE, 1);

        async_tdexit_to_vmm(TDX_TD_EXIT_ON_L2_TO_L1, vm_exit_reason, vm_exit_qualification.raw, 0, 0, vm_exit_inter_info.raw);

    }



    write_l2_enter_outputs(tdvps_ptr, tdvps_ptr->management.curr_vm);



    error_code.raw = tdexit_case;

    error_code.details_l2 = vm_exit_reason.raw & BIT_MASK_32BITS;



    tdvps_ptr->guest_state.gpr_state.rax = error_code.raw;

    tdvps_ptr->guest_state.gpr_state.rbx = 0;

    tdvps_ptr->guest_state.gpr_state.rcx = vm_exit_qualification.raw;

    tdvps_ptr->guest_state.gpr_state.rdx = gla;



    l2_enter_seg_details_t cs_seg_details = { .raw = 0 };

    uint64_t val, cs_base;

    cs_seg_details.selector = (uint16_t)(ia32_vmread(VMX_GUEST_CS_SELECTOR_ENCODE, &val), val);

    cs_seg_details.ar = (uint16_t)(ia32_vmread(VMX_GUEST_CS_ARBYTE_ENCODE, &val), val);

    cs_seg_details.limit = (uint32_t)(ia32_vmread(VMX_GUEST_CS_LIMIT_ENCODE, &val), val);



    ia32_vmread(VMX_GUEST_CS_BASE_ENCODE, &cs_base);



    tdvps_ptr->guest_state.gpr_state.rsi = cs_seg_details.raw;

    tdvps_ptr->guest_state.gpr_state.rdi = cs_base;



    tdvps_ptr->guest_state.gpr_state.r8  = gpa;

    tdvps_ptr->guest_state.gpr_state.r9  = ((uint64_t)inter_error << 32) | vm_exit_inter_info.raw;

    tdvps_ptr->guest_state.gpr_state.r10 = ((uint64_t)idt_vectoring_err << 32) | idt_vectoring_info;

    tdvps_ptr->guest_state.gpr_state.r11 = ((uint64_t)instr_length << 32) + instr_info;



    l2_enter_additional_exit_info_t exit_info = { .raw = 0 };

    exit_info.cpl = get_guest_td_cpl();



    tdvps_ptr->guest_state.gpr_state.r12 = exit_info.raw;

    tdvps_ptr->guest_state.gpr_state.r13 = extended_exit_qualification;

    tdvps_ptr->guest_state.gpr_state.r14 = 0;

    tdvps_ptr->guest_state.gpr_state.r15 = 0;



    // Make L1 the current VM

    tdvps_ptr->management.curr_vm = 0;

    set_vm_vmcs_as_active(tdvps_ptr, tdvps_ptr->management.curr_vm);



    // If IA32_SPEC_CTRL is virtualized, write the VMCS' IA32_SPEC_CTRL shadow

    conditionally_write_vmcs_ia32_spec_ctrl_shadow(ld_p->vp_ctx.tdcs, tdvps_ptr->guest_msr_state.ia32_spec_ctrl);



    // Update L1's host state fields before entry

    update_host_state_in_td_vmcs(ld_p, tdvps_ptr, tdvps_ptr->management.curr_vm);



    // Advance L1 guest RIP to the next instruction, following the TDCALL(TDG.VP.VMCALL) which entered L2

    advance_guest_rip();



    // Restore IA32_SPEC_CTR, restore the guest GPRs and enter the guest TD

    if (tdvps_ptr->management.vm_launched[tdvps_ptr->management.curr_vm])

    {

        tdx_return_to_td(true, false, &tdvps_ptr->guest_state.gpr_state);

    }

    else

    {

        tdx_return_to_td(false, false, &tdvps_ptr->guest_state.gpr_state);

    }



    // Flow should never reach here

    tdx_sanity_check(0, SCEC_TDEXIT_SOURCE, 2);

}



void td_l2_to_l1_exit_with_exit_case(api_error_code_e tdexit_case, vm_vmexit_exit_reason_t vm_exit_reason,

                                     vmx_exit_qualification_t vm_exit_qualification, uint64_t extended_exit_qualification,

                                     vmx_exit_inter_info_t vm_exit_inter_info)

{

    uint64_t inter_error, gla, gpa, idt_vectoring_info, idt_vectoring_err, instr_info, instr_length;



    ia32_vmread(VMX_VM_EXIT_EXCEPTION_ERRORCODE_ENCODE, &inter_error);

    ia32_vmread(VMX_VM_EXIT_GUEST_LINEAR_ADDRESS_ENCODE, &gla);

    ia32_vmread(VMX_GUEST_PHYSICAL_ADDRESS_INFO_FULL_ENCODE, &gpa);

    ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_FIELD_ENCODE, &idt_vectoring_info);

    ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_ERRORCODE_ENCODE, &idt_vectoring_err);

    ia32_vmread(VMX_VM_EXIT_INSTRUCTION_INFO_ENCODE, &instr_info);

    ia32_vmread(VMX_VM_EXIT_INSTRUCTION_LENGTH_ENCODE, &instr_length);



    td_l2_to_l1_exit_internal(tdexit_case, vm_exit_reason, vm_exit_qualification, extended_exit_qualification,

                              vm_exit_inter_info, (uint32_t)inter_error, gla, gpa, (uint32_t)idt_vectoring_info,

                              (uint32_t)idt_vectoring_err, (uint32_t)instr_info, (uint32_t)instr_length);

}



void td_l2_to_l1_exit(vm_vmexit_exit_reason_t vm_exit_reason, vmx_exit_qualification_t vm_exit_qualification,

                      uint64_t extended_exit_qualification, vmx_exit_inter_info_t vm_exit_inter_info)

{

    td_l2_to_l1_exit_with_exit_case(TDX_SUCCESS, vm_exit_reason, vm_exit_qualification,

                                    extended_exit_qualification, vm_exit_inter_info);

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

 * @file td_exit_stepping.c

 * @brief All the ways to transition from TD(VM) to VMM

 */





#include "td_dispatcher/tdx_td_dispatcher.h"

#include "tdx_api_defs.h"

#include "data_structures/tdx_tdvps.h"

#include "accessors/ia32_accessors.h"

#include "accessors/vt_accessors.h"

#include "accessors/data_accessors.h"

#include "x86_defs/vmcs_defs.h"

#include "memory_handlers/sept_manager.h"

#include "data_structures/tdx_local_data.h"

#include "tdx_td_api_handlers.h"

#include "vmm_dispatcher/tdx_vmm_dispatcher.h"

#include "helpers/helpers.h"

#include "td_dispatcher/vm_exits/td_vmexit.h"

#include "td_transitions/td_exit_stepping.h"



#define ENABLE 1

#define DISABLE 0

#define BLOCK_EXTERNAL_INTERRUPTS 15



// returns true if a data breakpoint or single-step or RTM debug is pending

static bool_t is_pending_debug_exception()

{

    pending_debug_exception_t pde;



    ia32_vmread(VMX_GUEST_PND_DEBUG_EXCEPTION_ENCODE, &pde.raw);



    return (pde.enable != 0 || pde.bs != 0 || pde.rtm != 0);

}



static bool_t is_guest_blocked_by_sti(vmx_guest_inter_state_t guest_inter_state)

{

    return (bool_t)guest_inter_state.blocking_by_sti;

}



static bool_t is_code_breakpoint_on_next_rip(uint64_t guest_rip)

{

    dr7_t dr7;



   ia32_vmread(VMX_GUEST_DR7_ENCODE, &dr7.raw);



    // check if any breakpoint could is enabled

    if ((dr7.raw & 0xFF) == 0)

    {

        return false;

    }



    // check if DRi (i = 0..3) is enabled as code breakpoint and matches guest RIP

    if (   ((dr7.l0 || dr7.g0) && (dr7.ln0 == 0) && (dr7.rw0 == 0) && (ia32_store_dr0() == guest_rip))

        || ((dr7.l1 || dr7.g1) && (dr7.ln1 == 0) && (dr7.rw1 == 0) && (ia32_store_dr1() == guest_rip))

        || ((dr7.l2 || dr7.g2) && (dr7.ln2 == 0) && (dr7.rw2 == 0) && (ia32_store_dr2() == guest_rip))

        || ((dr7.l3 || dr7.g3) && (dr7.ln3 == 0) && (dr7.rw3 == 0) && (ia32_store_dr3() == guest_rip)))

    {

        return true;

    }



    return false;

}



static bool_t is_nmi_exiting(vm_vmexit_exit_reason_t vm_exit_reason, vmx_exit_inter_info_t vm_exit_inter_info)

{

    return ((vm_exit_reason.basic_reason == VMEXIT_REASON_EXCEPTION_OR_NMI) &&

            (vm_exit_inter_info.vector == E_NMI));

}



static bool_t is_intr_exiting(vm_vmexit_exit_reason_t vm_exit_reason)

{

    return vm_exit_reason.basic_reason == VMEXIT_REASON_INTERRUPT;

}



static bool_t is_mtf_exiting(vm_vmexit_exit_reason_t vm_exit_reason)

{

    return vm_exit_reason.basic_reason == VMEXIT_REASON_MTF;

}



static bool_t is_init_exiting(vm_vmexit_exit_reason_t vm_exit_reason)

{

    return vm_exit_reason.basic_reason == VMEXIT_REASON_INIT_EVENT ;

}



static bool_t is_smi_not_msmi_exiting(vm_vmexit_exit_reason_t vm_exit_reason,

                                      vmx_exit_qualification_t vm_exit_qualification)

{

    return ((vm_exit_reason.basic_reason == VMEXIT_REASON_SMI_OTHER_EVENT) &&

            (vm_exit_qualification.smi.msmi == 0));

}



static void set_mtf(uint32_t enable)

{

    vmx_procbased_ctls_t vm_procbased_ctls;

    ia32_vmread(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, &vm_procbased_ctls.raw);

    vm_procbased_ctls.monitor_trap_flag = enable;

    ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, vm_procbased_ctls.raw);

}



static void set_movss_blocking(vmx_guest_inter_state_t guest_inter_state)

{

    set_guest_pde_bs();



    guest_inter_state.blocking_by_mov_ss = 1;

    ia32_vmwrite(VMX_GUEST_INTERRUPTIBILITY_ENCODE, guest_inter_state.raw);

}



static uint64_t vcpu_rip_delta(tdx_module_local_t* local_data_p, uint64_t guest_rip)

{

    return (guest_rip > local_data_p->single_step_def_state.guest_rip_on_tdentry)?

        guest_rip - local_data_p->single_step_def_state.guest_rip_on_tdentry:

        local_data_p->single_step_def_state.guest_rip_on_tdentry - guest_rip;

}



static uint64_t vcpu_tsc_delta(tdx_module_local_t* local_data_p)

{

    return local_data_p->vp_ctx.tdvps->management.last_exit_tsc -

            local_data_p->single_step_def_state.last_entry_tsc;

}



static bool_t is_epf_expected(tdr_t* tdr_p, tdcs_t* tdcs_p, pa_t gpa)

{

    ept_walk_result_t walk_result;

    ia32e_eptp_t eptp = {.raw = tdcs_p->executions_ctl_fields.eptp.raw};

    uint16_t hkid = tdr_p->key_management_fields.hkid;

    access_rights_t access_rights = { .raw = 0x7 };



    pa_t page_hpa;

    ia32e_ept_t ept_entry_copy = {.raw = 0};

    access_rights_t accumulated_rwx;



    walk_result = gpa_translate(eptp, gpa, true, hkid, access_rights,

                                    &page_hpa, &ept_entry_copy, &accumulated_rwx);



    return ((walk_result != EPT_WALK_SUCCESS) && (walk_result != EPT_WALK_CONVERTIBLE_VIOLATION));

}



bool_t can_inject_epf_ve(vmx_exit_qualification_t last_exit_qualification, tdvps_t* tdvps_p)

{

    vmx_guest_inter_state_t last_guest_inter_state;

    vmx_idt_vectoring_info_t last_idt_vec_info;



    ia32_vmread(VMX_GUEST_INTERRUPTIBILITY_ENCODE, &last_guest_inter_state.raw);

    ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_FIELD_ENCODE, &last_idt_vec_info.raw);



    return ((last_guest_inter_state.blocking_by_nmi == 0)

        && (last_exit_qualification.ept_violation.nmi_unblocking_due_to_iret == 0)

        && (last_idt_vec_info.valid == 0)

        && (tdvps_p->ve_info.valid == 0));

}



stepping_filter_e vmexit_stepping_filter(

        vm_vmexit_exit_reason_t vm_exit_reason,

        vmx_exit_qualification_t vm_exit_qualification,

        vmx_exit_inter_info_t vm_exit_inter_info)

{

    tdx_module_local_t* ld_p = get_local_data();



    ia32_apic_base_t apic_base;



    // stop and reset EPF tracking if forward progress occurred

    uint64_t guest_rip;

    ia32_vmread(VMX_GUEST_RIP_ENCODE, &guest_rip);

    uint64_t rip_delta = vcpu_rip_delta(ld_p, guest_rip);



    if (rip_delta != 0)

    {

        // There was forward progress; stop and reset EPF tracking

        ld_p->vp_ctx.tdvps->management.last_epf_gpa_list_idx = 0;

        ld_p->vp_ctx.tdvps->management.possibly_epf_stepping = 0;

    }



    // If interruption type exiting happened, check if single stepping may be in progress

    if (is_intr_exiting(vm_exit_reason)

        || is_mtf_exiting(vm_exit_reason)

        || is_smi_not_msmi_exiting(vm_exit_reason, vm_exit_qualification)

        || is_nmi_exiting(vm_exit_reason, vm_exit_inter_info)

        || is_init_exiting(vm_exit_reason))

    {



        if (!ld_p->single_step_def_state.in_inst_step_mode)

        {

            if ((rip_delta > INTEL64_MAX_INST_LEN * 2) || (vcpu_tsc_delta(ld_p) > STEPPING_TSC_THRESHOLD))

            {

                return FILTER_OK_CONTINUE;

            }



            /*

             * Read APIC base.  Check that the local APIC mode is correct for later IPI injection.

             * If not, kill the TD.

             */

            apic_base.raw = ia32_rdmsr(IA32_APIC_BASE_MSR_ADDR);

            if (apic_base.enable == 0)

            {

                return FILTER_FAIL_TDEXIT_WRONG_APIC_MODE;

            }



            // start stepping mode

            ld_p->single_step_def_state.num_inst_step = (lfsr_get_random() & 0x1F) + 1;

            ld_p->single_step_def_state.in_inst_step_mode = true;



            // Block external interrupts during stepping by raising TPR to 15

            ld_p->single_step_def_state.saved_cr8 = ia32_store_cr8();

            ia32_load_cr8(BLOCK_EXTERNAL_INTERRUPTS);



            // if stepping started due to interrupt, push it back to APIC as self-IPI

            if (is_intr_exiting(vm_exit_reason))

            {

                send_self_ipi(APIC_DELIVERY_FIXED, vm_exit_inter_info.vector);

            }



            // enable MTF to start single stepping

            set_mtf(ENABLE);

        }



        // At this point, we are in stepping mode and interrupts are blocked



        // If NMI or INIT started the stepping, remember that

        // Note: no need to remember SMI (and PREQ) exiting because

        // uCode keeps it pending when delivering SMI exiting

        ld_p->single_step_def_state.nmi_exit_occured |= is_nmi_exiting(vm_exit_reason, vm_exit_inter_info);

        ld_p->single_step_def_state.init_exit_occured |= is_init_exiting(vm_exit_reason);



        // If stepping mode not done yet, resume the TD to execute next step

        if (ld_p->single_step_def_state.num_inst_step > 0)

        {

            vmx_guest_inter_state_t guest_inter_state;

            ia32_vmread(VMX_GUEST_INTERRUPTIBILITY_ENCODE, &guest_inter_state.raw);



            // Set MOVSS blocking to block external signals from causing TD VM exit

            // before the next TD instruction is executed, unless debug events are

            // pending to be delivered, or a code breakpoint is set on the next vCPU instruction

            if (!is_pending_debug_exception() && !is_code_breakpoint_on_next_rip(guest_rip) &&

                !is_guest_blocked_by_sti(guest_inter_state))

            {

                set_movss_blocking(guest_inter_state);

            }



            ld_p->single_step_def_state.num_inst_step -= 1;

            return FILTER_OK_RESUME_TD;

        }

    }



    // At this point, a non-interruption type exiting happened (including EPF), or stepping is over



    // End stepping mode if needed

    if (ld_p->single_step_def_state.in_inst_step_mode)

    {

        // If NMI started the stepping, and current exiting is not NMI,

        // push a new NMI into local APIC

        if (ld_p->single_step_def_state.nmi_exit_occured &&

                !is_nmi_exiting(vm_exit_reason, vm_exit_inter_info))

        {

            send_self_ipi(APIC_DELIVERY_NMI, 0);

        }



        // If INIT started the stepping, and current exiting is not INIT,

        // push a new INIT into local APIC

        if (ld_p->single_step_def_state.init_exit_occured && !is_init_exiting(vm_exit_reason))

        {

            send_self_ipi(APIC_DELIVERY_INIT, 0);

        }



        // Restore TPR to unblock external interrupts

        ia32_load_cr8(ld_p->single_step_def_state.saved_cr8);



        // Clear MTF to stop single stepping

        set_mtf(DISABLE);



        // Reset stepping mode variables

        ld_p->single_step_def_state.in_inst_step_mode = false;

        ld_p->single_step_def_state.num_inst_step = 0;

        ld_p->single_step_def_state.nmi_exit_occured = false;

        ld_p->single_step_def_state.init_exit_occured = false;

        ld_p->single_step_def_state.saved_cr8 = 0;



        // If the exit reason was MTF, re-enter the TD to consume pending interrupts

        // OPEN: in tight loops and rep string instructions,

        // this may lead to indefinite delay in interruption delivery

        if (is_mtf_exiting(vm_exit_reason))

        {

            // reset time stamp to avoid restarting stepping mode when

            // the pending interruption is consumed

            ld_p->single_step_def_state.last_entry_tsc = 0;

            return FILTER_OK_RESUME_TD;

        }

    }



    return FILTER_OK_CONTINUE;

}





stepping_filter_e td_entry_stepping_filter(pa_t* faulting_gpa, tdvps_t* tdvps_p, tdr_t* tdr_p, tdcs_t* tdcs_p,

                                           bool_t* is_sept_tree_locked)

{

    // capture guest RIP, to be checked at next TD exiting

    uint64_t guest_rip;

    ia32_vmread(VMX_GUEST_RIP_ENCODE, &guest_rip);

    get_local_data()->single_step_def_state.guest_rip_on_tdentry = guest_rip;



    // if LAST_EPF_GPA_LIST is empty, everything is OK, otherwise a zero-step attack is suspected

    if (tdvps_p->management.last_epf_gpa_list_idx == 0)

    {

        return FILTER_OK_CONTINUE;

    }



    // Acquire Secure-EPT lock as exclusive

    if (acquire_sharex_lock_ex(&tdcs_p->executions_ctl_fields.secure_ept_lock) != LOCK_RET_SUCCESS)

    {

        return FILTER_FAIL_SEPT_TREE_BUSY;

    }



    *is_sept_tree_locked = true;



    // if another EPF on private GPA is pending to happen, fail TD entry

    for (uint32_t i = 0; i < tdvps_p->management.last_epf_gpa_list_idx; i++)

    {

        pa_t last_epf_gpa = {.raw = tdvps_p->last_epf_gpa_list[i]};

        if (is_epf_expected(tdr_p, tdcs_p, last_epf_gpa))

        {

            *faulting_gpa = last_epf_gpa;

            release_sharex_lock_ex(&tdcs_p->executions_ctl_fields.secure_ept_lock);

            *is_sept_tree_locked = false;

            return FILTER_FAIL_TDENTER_EPFS;

        }

    }



    // notify the TD about the suspected zero-step attack using #VE

    // if the TD has asked for notification, and the last TD VM exit was due to EPF on a private GPA,

    // and #VE can be injected at this time

    if (tdcs_p->executions_ctl_fields.notify_enables.notify_ept_faults == 1) // Bit 0 - notify when zero-step attack is suspected

    {

        return FILTER_OK_NOTIFY_EPS_FAULT;

    }



    return FILTER_OK_CONTINUE;

}



void td_exit_epf_stepping_log(pa_t gpa)

{

    tdx_module_local_t* ld_p = get_local_data();

    tdvps_t* tdvps_p = ld_p->vp_ctx.tdvps;



    uint64_t guest_rip;

    uint8_t  i;



    ia32_vmread(VMX_GUEST_RIP_ENCODE, &guest_rip);



    if (guest_rip != ld_p->single_step_def_state.guest_rip_on_tdentry)

    {

        // There was forward progress; stop and reset EPF tracking

        tdvps_p->management.last_epf_gpa_list_idx = 0;

        tdvps_p->management.possibly_epf_stepping = 0;

    }



    // track EPT violation faults

    if (tdvps_p->management.possibly_epf_stepping < STEPPING_EPF_THRESHOLD)

    {

        tdvps_p->management.possibly_epf_stepping++;

    }

    else

    {

        // We reached the threshold; too many EPT violations for the same RIP

        if (tdvps_p->management.last_epf_gpa_list_idx < EPF_GPA_LIST_SIZE)

        {

            // lookup for this private GPA in the list

            for (i = 0; i < tdvps_p->management.last_epf_gpa_list_idx; i++)

            {

                if (tdvps_p->last_epf_gpa_list[i] == gpa.raw)

                {

                    break;

                }

            }



            if (i == tdvps_p->management.last_epf_gpa_list_idx)

            {

                // this is a new GPA - add to list

                tdvps_p->last_epf_gpa_list[i] = gpa.raw;

                tdvps_p->management.last_epf_gpa_list_idx++;

            }

        }

    }

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

 * @file tdh_vp_enter

 * @brief TDHVPENTER API handler

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



_STATIC_INLINE_ void guest_ext_state_load_failure()

{

    vm_vmexit_exit_reason_t vm_exit_reason = { .raw = 0 };

    vm_exit_reason.basic_reason = VMEXIT_REASON_FAILED_VMENTER_GS;



    vmx_ext_exit_qual_t eeq = { .raw = 0 };

    eeq.type = VMX_EEQ_TD_ENTRY_XSTATE_LOAD_FAILURE;



    async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE,

            vm_exit_reason, 0, eeq.raw, 0, 0);

}



// Before using the first safe_wrmsr - save MSR(NON_FAULTING_MSR_ADDR) - 0x8b in the local data

// and it will be restored in case of #GP.

static __attribute__((noinline)) void safe_wrmsr(uint64_t addr, uint64_t value)

{

    IF_RARE (!ia32_safe_wrmsr(addr, value))

    {

        TDX_ERROR("WRMSR(0x%llx) with value 0x%llx caused #GP\n", addr, value);



        vm_vmexit_exit_reason_t vm_exit_reason = { .raw = 0 };

        vm_exit_reason.basic_reason = VMEXIT_REASON_FAILED_VMENTER_MSR;



        vmx_ext_exit_qual_t eeq = { .raw = 0 };

        eeq.type = VMX_EEQ_TD_ENTRY_MSR_LOAD_FAILURE;

        eeq.info = addr;



        ia32_wrmsr(NON_FAULTING_MSR_ADDR, get_local_data()->non_faulting_msr_value);



        async_tdexit_to_vmm(TDX_NON_RECOVERABLE_TD_NON_ACCESSIBLE,

                vm_exit_reason, 0, eeq.raw, 0, 0);

    }

}



static __attribute__((noinline)) void safe_xrstors(const void* xsave_area, uint64_t xfam)

{

    IF_RARE (!ia32_safe_xrstors(xsave_area, xfam))

    {

        TDX_ERROR("XRSTORS with XFAM 0x%llx caused #GP\n", xfam);

        guest_ext_state_load_failure();

    }

}



_STATIC_INLINE_ void ia32_perf_global_status_write(uint64_t reset_command, uint64_t set_command)

{

    // IA32_PERF_GLOBAL_STATUS is written in a special way, using the RESET and SET command MSRs

    safe_wrmsr(IA32_PERF_GLOBAL_STATUS_RESET_MSR_ADDR, reset_command);

    safe_wrmsr(IA32_PERF_GLOBAL_STATUS_SET_MSR_ADDR, set_command);

}



_STATIC_INLINE_ void restore_guest_td_extended_state(tdvps_t* tdvps_ptr)

{

    uint64_t xstate_bv = tdvps_ptr->guest_extension_state.xbuf.xsave_header.xstate_bv;

    uint64_t xcomp_bv = tdvps_ptr->guest_extension_state.xbuf.xsave_header.xcomp_bv;



    // Check for XBUFF header corruption before trying to use SAFE_XRSTORS

    // Checks are done according to SDM Volume 1, Chapter 13.12

    // A #GP occurs in the following cases:

    //  - XCOMP_BV[63] = 0.

    //  - XCOMP_BV sets a bit in the range 62:0 that is not set in XCR0 | IA32_XSS

    //    (in our case XCR0 | IA32_XSS is just the XFAM)

    //  - XSTATE_BV sets a bit(including bit 63) that is not set in XCOMP_BV.

    //  - Bytes 63 : 16 of the XSAVE header are not all 0.



    if (((xcomp_bv & BIT(63)) == 0) ||

        ((xcomp_bv & ~BIT(63) & ~(tdvps_ptr->management.xfam)) != 0) ||

        ((xstate_bv & ~xcomp_bv) != 0) ||

        (!tdx_memcmp_to_zero(tdvps_ptr->guest_extension_state.xbuf.xsave_header.reserved,

                             sizeof(tdvps_ptr->guest_extension_state.xbuf.xsave_header.reserved))))

    {

        TDX_ERROR("Failed checks on XBUFF header. xcomp_bv = 0x%llx, xstate_bv = 0x%llx, xfam = 0x%llx\n",

                xcomp_bv, xstate_bv, tdvps_ptr->management.xfam);

        guest_ext_state_load_failure();

    }



    // Set Guest XCR0 and XSS context for restoring the state

    ia32_xsetbv(0, tdvps_ptr->management.xfam & XCR0_USER_BIT_MASK);

    ia32_wrmsr(IA32_XSS_MSR_ADDR, tdvps_ptr->management.xfam & XCR0_SUPERVISOR_BIT_MASK);



    safe_xrstors(&tdvps_ptr->guest_extension_state.xbuf, tdvps_ptr->management.xfam);

}



static void emulate_ept_violation_td_exit(tdx_module_local_t* local_data_ptr, pa_t faulting_gpa,

                                          tdvps_t* tdvps_ptr, uint16_t vm_id)

{

    faulting_gpa.low_12_bits = 0;



    // VMX qualification = write access (bit 1 set)

    vmx_exit_qualification_t qualification;

    qualification.raw = 0;

    qualification.ept_violation.data_write = 1;



    td_exit_qualification_t exit_qualification;

    exit_qualification.raw = qualification.raw;

    exit_qualification.vm = vm_id;



    // Emulate an Async TDEXIT

    initialize_extended_state(local_data_ptr->vp_ctx.xfam);



    tdvps_ptr->management.state = VCPU_READY;

    tdvps_ptr->management.last_td_exit = LAST_EXIT_ASYNC_FAULT;



    // Set TD exit information

    local_data_ptr->vmm_regs.rcx = exit_qualification.raw;

    local_data_ptr->vmm_regs.rdx = 0; // No TDX extended qualification

    local_data_ptr->vmm_regs.r8 = faulting_gpa.raw;

    local_data_ptr->vmm_regs.r9 = 0; // No VMX interruption information



    // Other GPRs return 0

    local_data_ptr->vmm_regs.rbx = 0;

    local_data_ptr->vmm_regs.rsi = 0;

    local_data_ptr->vmm_regs.rdi = 0;

    local_data_ptr->vmm_regs.r10 = 0;

    local_data_ptr->vmm_regs.r11 = 0;

    local_data_ptr->vmm_regs.r12 = 0;

    local_data_ptr->vmm_regs.r13 = 0;

    local_data_ptr->vmm_regs.r14 = 0;

    local_data_ptr->vmm_regs.r15 = 0;

}



static void save_xmms_by_mask(tdvps_t* tdvps_ptr, uint16_t xmm_select)

{

    uint128_t xmms[16];



    store_xmms_in_buffer(xmms);



    // Copy the required VMM XMM's to the guest XMM's

    for (uint32_t i = 0; i < 16; i++)

    {

        if (xmm_select & (uint16_t)BIT(i))

        {

            tdvps_ptr->guest_extension_state.xbuf.legacy_region.xmm[i] = xmms[i];



        }

    }



    basic_memset_to_zero(xmms, sizeof(xmms));



    if (xmm_select != 0)

    {

        tdvps_ptr->guest_extension_state.xbuf.xsave_header.xstate_bv |= BIT(1);

    }



}



static void save_regs_after_tdvmcall(tdvps_t* tdvps_ptr, tdvmcall_control_t control, 

                    uint64_t gprs[16])

{

    uint64_t mask;

    uint32_t i;



    /* Save XMM registers selected by guest RCX to TDVPS.

     * Later on the whole state of XMMs, MXCSR and optionally YMMs and ZMMs is

     * restored from TDVPS.

     */

    save_xmms_by_mask(tdvps_ptr, control.xmm_select);



    /* Save VMM GPRs selected by guest RCX to TDVPS.

     * RAX and RCX are not copied, start from RDX.

     */

    mask = 0x0004;

    for (i = 2; i < 16; i++)

    {

        if ((control.gpr_select & mask) != 0)

        {

            gprs[i] = get_local_data()->vmm_regs.gprs[i];

        }       

        mask <<= 1;

    }



    gprs[0] = TDX_SUCCESS;   // RAX

    gprs[1] = control.raw;   // RCX

}



static void set_l2_exit_host_routing(tdvps_t* tdvps_ptr)

{

    if (tdvps_ptr->management.l2_exit_host_routed == HOST_ROUTED_NONE)

    {

        if (tdvps_ptr->management.last_td_exit == LAST_EXIT_TDVMCALL)

        {

            tdvps_ptr->management.l2_exit_host_routed = HOST_ROUTED_TDVMCALL;

        }

        else

        {

            tdvps_ptr->management.l2_exit_host_routed = HOST_ROUTED_ASYNC;

        }

    }

}



static void restore_guest_td_state_before_td_entry(tdcs_t* tdcs_ptr, tdvps_t* tdvps_ptr)

{

    tdx_module_global_t* global_data = get_global_data();



    // Save MSR (NON_FAULTING_MSR_ADDR) value before the first usage of safe_wrmsr

    get_local_data()->non_faulting_msr_value = ia32_rdmsr(NON_FAULTING_MSR_ADDR);



    // CR2 state restoration

    ia32_load_cr2(tdvps_ptr->guest_state.cr2);



    // Debug state restoration

    ia32_load_dr0(tdvps_ptr->guest_state.dr0);

    ia32_load_dr1(tdvps_ptr->guest_state.dr1);

    ia32_load_dr2(tdvps_ptr->guest_state.dr2);

    ia32_load_dr3(tdvps_ptr->guest_state.dr3);

    ia32_load_dr6(tdvps_ptr->guest_state.dr6);



    safe_wrmsr(IA32_DS_AREA_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_ds_area);



    //  Restore IA32_LBR_DEPTH from TDVPS.IA32_LBR_DEPTH. This MSR is not restored by XRSTORS

    //  like other LBR MSRs. On XRSTORS, if the saved value matches current value, then

    //  only LBRs 0..DEPTH-1 are restored, otherwise all IA32_LBR_TOS, IA32_LBR_x_*

    //  MSRs, and IA32_LER_* MSRs are cleared.

    if (((ia32_xcr0_t)tdvps_ptr->management.xfam).lbr)

    {

        safe_wrmsr(IA32_LBR_DEPTH_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_lbr_depth);

    }



    // Perfmon State

    if (tdcs_ptr->executions_ctl_fields.attributes.perfmon)

    {

        safe_wrmsr(IA32_FIXED_CTR_CTRL_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_fixed_ctr_ctrl);

        for (uint8_t i = 0; i < global_data->num_fixed_ctrs; i++)

        {

            if ((global_data->fc_bitmap & BIT(i)) != 0)

            {

                safe_wrmsr(IA32_FIXED_CTR0_MSR_ADDR + i, tdvps_ptr->guest_msr_state.ia32_fixed_ctr[i]);

            }

        }



        for (uint32_t i = 0; i < NUM_PMC; i++)

        {

            safe_wrmsr(IA32_A_PMC0_MSR_ADDR + i, tdvps_ptr->guest_msr_state.ia32_a_pmc[i]);

            safe_wrmsr(IA32_PERFEVTSEL0_MSR_ADDR + i, tdvps_ptr->guest_msr_state.ia32_perfevtsel[i]);

        }



        for (uint32_t i = 0; i < 2; i++)

        {

            safe_wrmsr(IA32_OFFCORE_RSPx_MSR_ADDR + i, tdvps_ptr->guest_msr_state.ia32_offcore_rsp[i]);

        }



        ia32_perf_global_status_write(ia32_rdmsr(IA32_PERF_GLOBAL_STATUS_MSR_ADDR),

                tdvps_ptr->guest_msr_state.ia32_perf_global_status);

        safe_wrmsr(IA32_PEBS_ENABLE_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_pebs_enable);

        if (global_data->plt_common_config.ia32_perf_capabilities.perf_metrics_available)

        {

            safe_wrmsr(IA32_PERF_METRICS_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_perf_metrics);

        }

        safe_wrmsr(IA32_PEBS_DATA_CFG_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_pebs_data_cfg);

        safe_wrmsr(IA32_PEBS_LD_LAT_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_pebs_ld_lat);

        // MSR_PEBS_FRONTEND exists only in big cores

        if (global_data->native_model_info.core_type == CORE_TYPE_BIGCORE)

        {

            safe_wrmsr(IA32_PEBS_FRONTEND_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_pebs_frontend);

        }

    }



    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported)

    {

        safe_wrmsr(IA32_UMWAIT_CONTROL, tdvps_ptr->guest_msr_state.ia32_umwait_control);

    }



    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.tsx_supported)

    {

        safe_wrmsr(IA32_TSX_CTRL_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_tsx_ctrl);

    }

    else if (get_global_data()->plt_common_config.ia32_arch_capabilities.tsx_ctrl)

    {

        // Read the host VMM value of IA32_TSX_CTRL

        ia32_tsx_ctrl_t tsx_ctrl = { .raw = ia32_rdmsr(IA32_TSX_CTRL_MSR_ADDR) };

        get_local_data()->vmm_non_extended_state.ia32_tsx_ctrl = tsx_ctrl.raw; // Will be used on TD exit



        // Optimize by disabling TSX only if not disabled by the host VMM

        if (!tsx_ctrl.rtm_disable || tsx_ctrl.rsvd)

        {

            safe_wrmsr(IA32_TSX_CTRL_MSR_ADDR, IA32_TSX_CTRL_DISABLE_VALUE);

        }

    }



    safe_wrmsr(IA32_UARCH_MISC_CTL_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_uarch_misc_ctl);



    // Unconditionally restore the following MSRs from TDVP:

    // IA32_STAR, IA32_SPEC_CTRL, IA32_LSTAR, IA32_FMASK, IA32_KERNEL_GS_BASE, IA32_TSC_AUX

    safe_wrmsr(IA32_TSC_AUX_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_tsc_aux);

    safe_wrmsr(IA32_STAR_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_star);

    safe_wrmsr(IA32_LSTAR_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_lstar);

    safe_wrmsr(IA32_FMASK_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_fmask);

    safe_wrmsr(IA32_KERNEL_GS_BASE_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_kernel_gs_base);



    // Restore CPU extended state, based on XFAM

    restore_guest_td_extended_state(tdvps_ptr);



    // Extended state control

    ia32_xsetbv(0, tdvps_ptr->guest_state.xcr0);

    safe_wrmsr(IA32_XSS_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_xss);



    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.xfd_supported)

    {

        safe_wrmsr(IA32_XFD_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_xfd);

        safe_wrmsr(IA32_XFD_ERROR_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_xfd_err);

    }



    // Restore IA32_SPEC_CTRL - safely, instead of restoring it as usual in tdx_return_to_td

    if (tdvps_ptr->guest_msr_state.ia32_spec_ctrl != TDX_MODULE_IA32_SPEC_CTRL)

    {

        safe_wrmsr(IA32_SPEC_CTRL_MSR_ADDR, tdvps_ptr->guest_msr_state.ia32_spec_ctrl);

    }

}



static api_error_type handle_stepping_filter(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, tdvps_t* tdvps_ptr,

                                             vm_vmexit_exit_reason_t exit_reason, pa_t* gpa,

                                             bool_t* is_sept_locked, stepping_filter_e* filter_result)

{

    // if too many EPFs on private GPAs have already detected on current instruction, fake TDEXIT due to EPF

    *filter_result = td_entry_stepping_filter(gpa, tdvps_ptr, tdr_ptr, tdcs_ptr, is_sept_locked);



    if (*filter_result == FILTER_FAIL_SEPT_TREE_BUSY)

    {

        // The filter could not acquire the SEPT tree lock, raise "busy" error



        tdx_debug_assert(*is_sept_locked == false);



        // decrement the TLB tracker that was incremented at the beginning of TDENTER

        revert_tlb_tracking_state(tdcs_ptr, tdvps_ptr);



        TDX_WARN("Failed to acquire SEPT lock during TD Entry stepping filter\n");

        return api_error_with_operand_id(TDX_OPERAND_BUSY, OPERAND_ID_SEPT_TREE);

    }

    else if (*filter_result == FILTER_OK_NOTIFY_EPS_FAULT)

    {

        // We need to notify the TD by injecting a #VE. (if coming from L1) or L2->L1 exit (if coming from L2).

        // Read the current VM's VMCS

        bool_t shared_bit = get_gpa_shared_bit(gpa->raw, tdcs_ptr->executions_ctl_fields.gpaw);



        if ((exit_reason.basic_reason == VMEXIT_REASON_EPT_VIOLATION) && !shared_bit)

        {

            if (tdvps_ptr->management.curr_vm != 0)

            {

                // If last TD exit was from L2, we do an L2->L1 exit.

                // Tag this as L2_EXIT_HOST_ROUTED_*, which is handled below.

                // This flag remains sticky until actual L1 entry.

                // If the last TD exit was from L1, we inject a #VE below.

                set_l2_exit_host_routing(tdvps_ptr);

            }

        }

        else // TD notification (#VE or L2->L1 exit) should not be delivered

        {

            *filter_result = FILTER_OK_CONTINUE;

        }

    }



    // This is the only path on which SEPT lock will remain locked.

    // On the two possible errors above it will be unlocked



    return FILTER_OK_CONTINUE;

}



_STATIC_INLINE_ void set_l2_to_l1_async_exit_gprs(tdvps_t* tdvps_p, vm_vmexit_exit_reason_t exit_reason,

        vmx_exit_qualification_t exit_qualification, pa_t faulting_gpa)

{

    api_error_code_t error_code;



    tdx_debug_assert(tdvps_p->management.l2_exit_host_routed != HOST_ROUTED_NONE);

    error_code.raw = tdvps_p->management.l2_exit_host_routed == HOST_ROUTED_ASYNC ? TDX_L2_EXIT_HOST_ROUTED_ASYNC : TDX_L2_EXIT_HOST_ROUTED_TDVMCALL;

    error_code.details_l2 = (uint32_t)exit_reason.raw;



    tdvps_p->guest_state.gpr_state.rax = error_code.raw;

    tdvps_p->guest_state.gpr_state.rbx = 0;

    tdvps_p->guest_state.gpr_state.rcx = exit_qualification.raw;



    uint64_t guest_la;

    ia32_vmread(VMX_VM_EXIT_GUEST_LINEAR_ADDRESS_ENCODE, &guest_la);



    tdvps_p->guest_state.gpr_state.rdx = guest_la;



    l2_enter_seg_details_t cs_seg_details = { .raw = 0 };

    uint64_t val, cs_base;

    cs_seg_details.selector = (uint16_t)(ia32_vmread(VMX_GUEST_CS_SELECTOR_ENCODE, &val), val);

    cs_seg_details.ar = (uint16_t)(ia32_vmread(VMX_GUEST_CS_ARBYTE_ENCODE, &val), val);

    cs_seg_details.limit = (uint32_t)(ia32_vmread(VMX_GUEST_CS_LIMIT_ENCODE, &val), val);



    ia32_vmread(VMX_GUEST_CS_BASE_ENCODE, &cs_base);



    tdvps_p->guest_state.gpr_state.rsi = cs_seg_details.raw;

    tdvps_p->guest_state.gpr_state.rdi = cs_base;

    tdvps_p->guest_state.gpr_state.r8  = faulting_gpa.raw;



    uint64_t inter_error = 0, inter_info = 0;

    ia32_vmread(VMX_VM_EXIT_INTERRUPTION_INFO_ENCODE, &inter_info);

    ia32_vmread(VMX_VM_EXIT_EXCEPTION_ERRORCODE_ENCODE, &inter_error);

    tdvps_p->guest_state.gpr_state.r9  = (inter_error << 32) | inter_info;



    uint64_t idt_vec_error = 0, idt_vec_info = 0;

    ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_FIELD_ENCODE, &idt_vec_info);

    ia32_vmread(VMX_VM_EXIT_IDT_VECTOR_ERRORCODE_ENCODE, &idt_vec_error);

    tdvps_p->guest_state.gpr_state.r10 = (idt_vec_error << 32) | idt_vec_info;



    uint64_t instr_len = 0, instr_info = 0;

    ia32_vmread(VMX_VM_EXIT_INSTRUCTION_LENGTH_ENCODE, &instr_len);

    ia32_vmread(VMX_VM_EXIT_INSTRUCTION_INFO_ENCODE, &instr_info);

    tdvps_p->guest_state.gpr_state.r11 = (instr_len << 32) | instr_info;



    l2_enter_additional_exit_info_t exit_info = { .raw = 0 };

    exit_info.cpl = get_guest_td_cpl();



    tdvps_p->guest_state.gpr_state.r12 = exit_info.raw;

    tdvps_p->guest_state.gpr_state.r13 = 0;

    tdvps_p->guest_state.gpr_state.r14 = 0;

    tdvps_p->guest_state.gpr_state.r15 = 0;

}



static api_error_type handle_l2_entry(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, tdvps_t* tdvps_ptr,

        vm_vmexit_exit_reason_t* exit_reason, vmx_exit_qualification_t* exit_qualification, pa_t* faulting_gpa)

{

    if (tdvps_ptr->management.l2_exit_host_routed == HOST_ROUTED_NONE)

    {

        // We're reentering into L2.

        // If the L2 was in the middle of IDT vectoring when the VM exit happened, re-inject it as VOE.

        // Don't do this if resuming L1 - in that case it's the L1 VMM's responsibility.

        (void)reinject_idt_vectoring_event_if_any();

    }



    // Check if a Vector-On-Entry (VOE) is being injected.

    // This includes VOE set by the above IDT vectoring re-injections.

    // If so, check if it matches the VMCS' exception bitmap and #PF filtering set by the L1 VMM.

    if (is_voe_in_exception_bitmap())

    {

        // Convert the VOE fields in the L2 VMCS to exit information fields and mark this as an L2->L1 exit

        convert_l2_voe_to_l1_exit();

        // Update the VMCS fields that we already read, but changed in convert_l2_voe_to_l1_exit

        exit_reason->raw = VMEXIT_REASON_EXCEPTION_OR_NMI;

        exit_qualification->raw = 0;



        set_l2_exit_host_routing(tdvps_ptr);

    }



    // Emulate Virtual L2->L1 Exit

    if (tdvps_ptr->management.l2_exit_host_routed != HOST_ROUTED_NONE)

    {

        // There's a sticky indication of host routing.

        // This means we have a TD entry to L1 after a TD exit from L2, which hasn't been

        // completed yet (there might have been previous attempts which failed).



        if (tdvps_ptr->management.last_td_exit == LAST_EXIT_TDVMCALL)

        {

            /*

             *  Last TD exit was a TDG.VP.VMCALL done by L2.  GPR and XMM state passed from the host

             *  VMM to the guest TD are selected by guest RCX, saved by TDG.VP.VMCALL.

             *  We're resuming L1.  From L1's perspective, it should look as if TDG.VP.VMCALL has terminated

             *  successfully in L2, and then an asynchronous exit happened from L2.  Therefore, do the following:

             *

             *    1.  Save the L2 GPR and XMM image to TDPVS

             *    2.  Do an EPT walk to make sure the TDG.VP.VMCALL guest state output buffer in memory is accessible

             *       2.1.  If failed, emulate an EPT violation from L2

             *    3.  Save the TDG.VP.VMCALL guest state output buffer (same as how it's done on TD exit from L2)

             */



            // Save the GPR and XMM from the host VMM into TDVPS.  This is the output state of TDG.VP.VMCALL.

            tdvmcall_control_t control;



            control.raw = tdvps_ptr->guest_state.gpr_state.rcx;

            save_regs_after_tdvmcall(tdvps_ptr, control, tdvps_ptr->guest_state.gpr_state.gprs);



            // At this point the VCPU state is as if L2's TDG.VP.VMCALL was completed and an asynchronous exit happened

            tdvps_ptr->management.last_td_exit = LAST_EXIT_ASYNC_FAULT;

        }



        if (tdvps_ptr->management.l2_exit_host_routed == HOST_ROUTED_TDVMCALL)

        {

            // There's a sticky indication of host routing of TDG.VP.VMCALL results.

            // This means we have a TD entry to L1 after a synchronous TD exit from L2, which hasn't been

            // completed yet (previous might have been previous attempts which failed).



            // Translate soft-translated GPAs, if required

            if (!translate_l2_enter_guest_state_gpa(tdr_ptr, tdcs_ptr, tdvps_ptr,

                                tdvps_ptr->management.curr_vm, &faulting_gpa->raw))

            {

                // Address translation failed.  Emulate an EPT violation TD exit from L2

                // decrement the TLB tracker that was incremented at the beginning of TDENTER

                revert_tlb_tracking_state(tdcs_ptr, tdvps_ptr);



                // Emulate a TD exit.

                // Note that the sticky host routing indication remains.

                // It will be handled on the next TD entry.

                emulate_ept_violation_td_exit(get_local_data(), *faulting_gpa, tdvps_ptr, tdvps_ptr->management.curr_vm);



                TDX_ERROR("Failed to translate L2 GPA - 0x%llx\n", faulting_gpa->raw);

                return VMEXIT_REASON_EPT_VIOLATION;

            }



            // Address translation succeeded.  Write the output of TDG.VP.VMCALL

            write_l2_enter_outputs(tdvps_ptr, tdvps_ptr->management.curr_vm);

        }



        // Update the GPR image in TDVPS to emulate TDG.VP.ENTER output on L2->L1 exit

        set_l2_to_l1_async_exit_gprs(tdvps_ptr, *exit_reason, *exit_qualification, *faulting_gpa);



        // At this point we can clear the sticky flag, since the saved L1 state indicates the proper exit from L2

        tdvps_ptr->management.l2_exit_host_routed = HOST_ROUTED_NONE;



        // Make L1 (VM #0) the current VM

        set_vm_vmcs_as_active(tdvps_ptr, 0);



        // Advance L1 guest RIP to the next instruction, following the TDCALL(TDG.VP.VMCALL) which entered L2

        advance_guest_rip();



        tdvps_ptr->management.curr_vm = 0;

    }



    return TDX_SUCCESS;

}



api_error_type tdh_vp_enter(uint64_t vcpu_handle_and_flags)

{

    // Local data for return values and global data

    tdx_module_local_t  * local_data_ptr = get_local_data();

    tdx_module_global_t * global_data_ptr = get_global_data();



    // TDVPR related variables

    pa_t                  tdvpr_pa;                    // TDVPR physical address

    tdvps_t             * tdvps_ptr = NULL;            // Pointer to the TDVPS (multi-page linear address)

    pamt_block_t          tdvpr_pamt_block;            // TDVPR PAMT block

    pamt_entry_t        * tdvpr_pamt_entry_ptr;        // Pointer to the TDVPR PAMT entry

    bool_t                tdvpr_locked_flag = false;   // Indicate TDVPR is locked



    // TDR related variables

    pa_t                  tdr_pa;                      // TDR physical address

    tdr_t               * tdr_ptr;                     // Pointer to the TDR page (linear address)

    pamt_entry_t        * tdr_pamt_entry_ptr;          // Pointer to the TDR PAMT entry

    bool_t                tdr_locked_flag = false;     // Indicate TDVPR is locked



    tdcs_t              * tdcs_ptr = NULL;             // Pointer to the TDCS page (linear address)

    bool_t                op_state_locked_flag = false;



    uint16_t              td_hkid;

    tdvmcall_control_t    control;

    bool_t                td_vmcs_loaded = false;      // Indicates whether TD VMCS was loaded

    vcpu_and_flags_t      vcpu_and_flags = { .raw = vcpu_handle_and_flags };

    bool_t                is_sept_locked = false;

    api_error_type        return_val = UNINITIALIZE_ERROR;



    ia32_misc_enable_t misc_enable = { .raw = ia32_rdmsr(IA32_MISC_ENABLES_MSR_ADDR) };



    // Boot NT4 bit should not be set

    if (misc_enable.limit_cpuid_maxval)

    {

        return_val = TDX_LIMIT_CPUID_MAXVAL_SET;

        goto EXIT_FAILURE;

    }



    if (vcpu_and_flags.reserved_0 || vcpu_and_flags.reserved_1)

    {

        return_val = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX);

        TDX_ERROR("Input VCPU handle and flags has reserved bits sets - 0x%llx\n", vcpu_and_flags.raw);

        goto EXIT_FAILURE;

    }



    tdvpr_pa.raw = 0;

    tdvpr_pa.page_4k_num = vcpu_and_flags.tdvpra_hpa_51_12;



    // Check and lock the TDVPR page

    return_val = check_and_lock_explicit_4k_private_hpa(tdvpr_pa,

                                                         OPERAND_ID_RCX,

                                                         TDX_LOCK_SHARED,

                                                         PT_TDVPR,

                                                         &tdvpr_pamt_block,

                                                         &tdvpr_pamt_entry_ptr,

                                                         &tdvpr_locked_flag);



    IF_RARE (return_val != TDX_SUCCESS)

    {

        TDX_ERROR("Failed to check/lock a TDVPR (0x%llx) - error = %llx\n", tdvpr_pa.raw, return_val);

        goto EXIT_FAILURE;

    }



    // Get and lock the owner TDR page

    // TDR is mapped in static keyhole range, and thus doesn't need to be freed

    tdr_pa = get_pamt_entry_owner(tdvpr_pamt_entry_ptr);

    return_val = lock_and_map_implicit_tdr(tdr_pa,

                                           OPERAND_ID_TDR,

                                           TDX_RANGE_RW,

                                           TDX_LOCK_SHARED,

                                           &tdr_pamt_entry_ptr,

                                           &tdr_locked_flag,

                                           &tdr_ptr);



    IF_RARE (return_val != TDX_SUCCESS)

    {

        TDX_ERROR("Failed to lock/map a TDR - error = %lld\n", return_val);

        goto EXIT_FAILURE;

    }



    // Map the TDCS structure and check the state

    return_val = check_state_map_tdcs_and_lock(tdr_ptr, TDX_RANGE_RW, TDX_LOCK_SHARED,

                                               false, TDH_VP_ENTER_LEAF, &tdcs_ptr);



    if (return_val != TDX_SUCCESS)

    {

        TDX_ERROR("State check or TDCS lock failure - error = %llx\n", return_val);

        goto EXIT_FAILURE;

    }

    op_state_locked_flag = true;



    // Get the TD's ephemeral HKID

    td_hkid = tdr_ptr->key_management_fields.hkid;



    // Map the TDVPS structure

    // TDVPS is mapped in static keyhole range, and thus doesn't need to be freed

    tdvps_ptr = map_tdvps(tdvpr_pa, td_hkid, tdcs_ptr->management_fields.num_l2_vms, TDX_RANGE_RW);



    if (tdvps_ptr == NULL)

    {

        TDX_ERROR("TDVPS mapping failed\n");

        return_val = TDX_TDCX_NUM_INCORRECT;

        goto EXIT_FAILURE;

    }



    // Associate the VCPU

    bool_t new_associate_flag = false;

    return_val = check_and_associate_vcpu(tdvps_ptr, tdcs_ptr, &new_associate_flag, false);



    IF_RARE (return_val != TDX_SUCCESS)

    {

        TDX_ERROR("Failed to associate VCPU - error = %llx\n", return_val);

        goto EXIT_FAILURE;

    }



    set_vm_vmcs_as_active(tdvps_ptr, tdvps_ptr->management.curr_vm);

    td_vmcs_loaded = true;



    if ((vcpu_and_flags.host_recoverability_hint) && (tdvps_ptr->management.last_td_exit != LAST_EXIT_ASYNC_TRAP))

    {

        return_val = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX);

        TDX_ERROR("Host recoverability is set, but last exit wasn't ASYNC_TRAP - %d\n", tdvps_ptr->management.last_td_exit);

        goto EXIT_FAILURE;

    }



    if (vcpu_and_flags.resume_l1)

    {

        // Resume to L1 is only supported on exit from L2

        if (tdvps_ptr->management.curr_vm == 0)

        {

            return_val = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX);

            TDX_ERROR("Resume to L1 is only supported on exit from L2\n");

            goto EXIT_FAILURE;

        }



        // RESUME_L1 is sticky; the internal flag is cleared later, only if actual L1 entry happens

        set_l2_exit_host_routing(tdvps_ptr);

    }



    // We read TSC below.  Compare IA32_TSC_ADJUST to the value sampled on TDHSYSINIT

    // to make sure the host VMM doesn't play any trick on us.

    IF_RARE (ia32_rdmsr(IA32_TSC_ADJ_MSR_ADDR) != global_data_ptr->plt_common_config.ia32_tsc_adjust)

    {

        return_val = api_error_with_operand_id(TDX_INCONSISTENT_MSR, IA32_TSC_ADJ_MSR_ADDR);

        TDX_ERROR("Inconsistent IA32_TSC_ADJUST MSR!\n");

        goto EXIT_FAILURE;

    }



    // Read TSC and verify that it is higher than LAST_EXIT_TSC.

    // Do the calculation as signed 64b, works even if TSC rolls over.

    IF_RARE (((int64_t)(ia32_rdtsc() - tdvps_ptr->management.last_exit_tsc)) < 0)

    {

        return_val = TDX_TSC_ROLLBACK;

        TDX_ERROR("TSC is lower than LAST_EXIT_TSC!\n");

        goto EXIT_FAILURE;

    }



    // If MONITOR/MWAIT support is enabled, then MONITOR_FSM must be enabled

    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.monitor_mwait_supported &&

        !misc_enable.enable_monitor_fsm)

    {

        return_val = api_error_with_operand_id(TDX_INCORRECT_MSR_VALUE, IA32_MISC_ENABLES_MSR_ADDR);

        TDX_ERROR("If MONITOR/MWAIT support is enabled, then MONITOR_FSM must be enabled\n");

        goto EXIT_FAILURE;

    }



    // Save the VMM value of IA32_DS_AREA

    local_data_ptr->vmm_non_extended_state.ia32_ds_area = ia32_rdmsr(IA32_DS_AREA_MSR_ADDR);



    // Update the TLB tracking state. This is done as a critical section,

    // allowing concurrent TDHVPENTERs, but no concurrent TDHMEMTRACK

    IF_RARE (!adjust_tlb_tracking_state(tdr_ptr, tdcs_ptr, tdvps_ptr, new_associate_flag))

    {

        TDX_ERROR("Failed to acquire global lock for TD epoch\n");

        return_val = api_error_with_operand_id(TDX_OPERAND_BUSY, OPERAND_ID_TD_EPOCH);

        goto EXIT_FAILURE;

    }



    stepping_filter_e filter_result = FILTER_OK_CONTINUE;



    // Sample current VMCS state for handling stepping filter FILTER_OK_NOTIFY_EPS_FAULT case

    vm_vmexit_exit_reason_t exit_reason;

    vmx_exit_qualification_t exit_qualification;

    pa_t faulting_gpa;



    ia32_vmread(VMX_VM_EXIT_REASON_ENCODE, &exit_reason.raw);

    ia32_vmread(VMX_VM_EXIT_QUALIFICATION_ENCODE, &exit_qualification.raw);

    ia32_vmread(VMX_GUEST_PHYSICAL_ADDRESS_INFO_FULL_ENCODE, &faulting_gpa.raw);



    IF_RARE ((return_val = handle_stepping_filter(tdr_ptr, tdcs_ptr, tdvps_ptr, exit_reason, &faulting_gpa,

                                                  &is_sept_locked, &filter_result)) != TDX_SUCCESS)

    {

        TDX_ERROR("Failed handling stepping filter - error = %llx\n", return_val);

        goto EXIT_FAILURE;

    }



    if (tdvps_ptr->management.curr_vm != 0)

    {

        return_val = handle_l2_entry(tdr_ptr, tdcs_ptr, tdvps_ptr,

                                           &exit_reason, &exit_qualification, &faulting_gpa);



        IF_RARE (return_val != TDX_SUCCESS)

        {

            TDX_ERROR("Failed to handle L2 entry\n");

            goto EXIT_FAILURE;

        }

    }

    // If the stepping filter above indicated a #VE injection, inject it now to the L1 VMM

    // being entered, with the values sampled above from the VMCS of the VM that previously exited.

    else if ((filter_result == FILTER_OK_NOTIFY_EPS_FAULT) && can_inject_epf_ve(exit_qualification, tdvps_ptr))

    {

        tdx_debug_assert(tdvps_ptr->management.curr_vm == 0);

        tdx_inject_ve((uint32_t)exit_reason.raw, exit_qualification.raw, tdvps_ptr, faulting_gpa.raw, 0);

    }

    

    /*-------------------------------------------------------------------------------------

    At this point we're at the VM to be entered - if there was an L2->L1 virtual exit

    then the state of L1 is after the L2->L1 exit.

    If the stepping filter above indicated too many EPT violations on private GPA,

    emulate an EPT violation TD exit; do not do an actual VM entry so the VM is not

    exposed to the 0-step attack.

    -------------------------------------------------------------------------------------*/



    if (filter_result == FILTER_FAIL_TDENTER_EPFS)

    {

        tdx_debug_assert(is_sept_locked == false);



        // decrement the TLB tracker that was incremented at the beginning of TDENTER

        revert_tlb_tracking_state(tdcs_ptr, tdvps_ptr);



        emulate_ept_violation_td_exit(get_local_data(), faulting_gpa, tdvps_ptr, tdvps_ptr->management.curr_vm);



        TDX_ERROR("Too many EPT violation on private GPA - 0x%llx\n", faulting_gpa.raw);

        return_val = VMEXIT_REASON_EPT_VIOLATION;

        goto EXIT_FAILURE;

    }



    // Translate soft-translated GPAs, if required

    if ((tdvps_ptr->management.curr_vm != 0) &&

        !translate_gpas(tdr_ptr, tdcs_ptr, tdvps_ptr, tdvps_ptr->management.curr_vm, &faulting_gpa.raw))

    {

        // decrement the TLB tracker that was incremented at the beginning of TDENTER

        revert_tlb_tracking_state(tdcs_ptr, tdvps_ptr);



        emulate_ept_violation_td_exit(get_local_data(), faulting_gpa, tdvps_ptr, tdvps_ptr->management.curr_vm);

        TDX_ERROR("EPT violation due GPA (0x%llx) translation\n", faulting_gpa.raw);



        return_val = VMEXIT_REASON_EPT_VIOLATION;

        goto EXIT_FAILURE;

    }



    // ALL CHECKS PASSED:



    /* OP_STATE has been locked in a temporary mode; it is released before

       entering non-root mode. */

    tdx_debug_assert(op_state_locked_flag);

    release_sharex_lock_hp_sh(&(tdcs_ptr->management_fields.op_state_lock));

    op_state_locked_flag = false;



    // If the current VCPU to be executed on this LP is not the same as the last one,

    // issue an indirect branch prediction barrier (IBPB) command

    if (tdvpr_pa.raw != local_data_ptr->vp_ctx.last_tdvpr_pa.raw)

    {

        // The TD ASID (Address Space Identifier) does not distinguish between different VCPUs of the same TD.

        // Therefore, when switching VCPU of the same TD on the same LP we should invalidate EPT.

        // Practically, we do this on every VCPU switch (even not of the same TD).

        // This is because it is difficult to track the history of TD execution on an LP

        // (i.e., we should check for every TD/VCPU combination in the past).

        flush_all_td_asids(tdr_ptr, tdcs_ptr);



        // Issue an indirect branch prediction barrier (IBPB) command, since the CPU does not

        // distinguish between VCPUs for its branch prediction.

        ia32_pred_cmd_t pred_cmd = { .raw = 0 };

        pred_cmd.ibpb = 1;

        ia32_wrmsr(IA32_PRED_CMD_MSR_ADDR, pred_cmd.raw);

        local_data_ptr->vp_ctx.last_tdvpr_pa.raw = tdvpr_pa.raw;

    }



    // Save the TDR, TDCS and TDVPS linear pointers for use after every VM exit

    local_data_ptr->vp_ctx.tdr               = tdr_ptr;

    local_data_ptr->vp_ctx.tdr_pamt_entry    = tdr_pamt_entry_ptr;

    local_data_ptr->vp_ctx.tdr_pa            = tdr_pa;



    local_data_ptr->vp_ctx.tdvps             = tdvps_ptr;

    local_data_ptr->vp_ctx.tdvpr_pamt_entry  = tdvpr_pamt_entry_ptr;

    local_data_ptr->vp_ctx.tdvpr_pamt_block  = tdvpr_pamt_block;

    local_data_ptr->vp_ctx.tdvpr_pa          = tdvpr_pa;



    local_data_ptr->vp_ctx.tdcs              = tdcs_ptr;



    // Save some other TD state to avoid accessing TDCS and TDVPS in case of a

    // memory integrity error

    local_data_ptr->vp_ctx.attributes = tdcs_ptr->executions_ctl_fields.attributes;

    local_data_ptr->vp_ctx.xfam = tdvps_ptr->management.xfam;

    local_data_ptr->vp_ctx.xfd_supported = tdcs_ptr->executions_ctl_fields.cpuid_flags.xfd_supported;

    local_data_ptr->vp_ctx.ia32_perf_global_status = tdvps_ptr->guest_msr_state.ia32_perf_global_status;



    // Restore Guest Extended State

    if (tdvps_ptr->management.last_td_exit == LAST_EXIT_TDVMCALL)

    {

        // Last TD exit was a TDGVPVMCALL. GPR and XMM state passed from the host

        // VMM to the guest TD are selected by guest RCX, saved by TDGVPVMCALL.

        control.raw = tdvps_ptr->guest_state.gpr_state.rcx;



        save_regs_after_tdvmcall(tdvps_ptr, control, tdvps_ptr->guest_state.gpr_state.gprs);

    }

    else if (tdvps_ptr->management.last_td_exit == LAST_EXIT_ASYNC_TRAP)

    {

        // Following a trap-like TD exit, update the guest's TDCALL completion status with

        // the host hint bit.

        api_error_code_t guest_tdcall_status;

        guest_tdcall_status.raw = tdvps_ptr->guest_state.gpr_state.rax;

        guest_tdcall_status.host_recoverability_hint = vcpu_and_flags.host_recoverability_hint;

        tdvps_ptr->guest_state.gpr_state.rax = guest_tdcall_status.raw;

    }



    if (tdvps_ptr->management.curr_vm == 0)

    {

        vmx_procbased_ctls_t vm_procbased_ctls;

        /* If PEND_NMI was requested, and there's no pending #VE (which should be handled

           by the guest TD before NMI), set NMI Window Exiting execution control so NMI

           can be injected at the proper time. */

        if (tdvps_ptr->management.pend_nmi && (tdvps_ptr->ve_info.valid == 0))

        {

            ia32_vmread(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, &vm_procbased_ctls.raw);

            vm_procbased_ctls.nmi_window_exiting = 1;

            ia32_vmwrite(VMX_VM_EXECUTION_CONTROL_PROC_BASED_ENCODE, vm_procbased_ctls.raw);

        }

    }

    else // Reentering into L2

    {

        // If NMI unblocking by IRET was indicated during VM exit, re-block NMI

        if (tdvps_ptr->management.nmi_unblocking_due_to_iret)

        {

            set_guest_inter_blocking_by_nmi();

        }

    }



    // Set the guest TD's IA32_DEBUGCTL.ENABLE_UNCORE_PMI to the VMM's value.

    ia32_debugctl_t debugctl;

    ia32_vmread(VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE, &debugctl.raw);

    debugctl.en_uncore_pmi = local_data_ptr->ia32_debugctl_value.en_uncore_pmi;

    ia32_vmwrite(VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE, debugctl.raw);



    if (tdvps_ptr->management.curr_vm != 0)

    {

        // Set the VMX preemption timer, if TSC deadline is enabled

        set_vmx_preemption_timer(tdvps_ptr, tdvps_ptr->management.curr_vm);

    }



    // If the SEPT lock was acquired by the TDENTER stepping filter, release it now

    // SEPT lock will be acquired by TDENTER stepping filter only if it didn't return

    // FILTER_FAIL_TDENTER_SEPT_BUSY or FILTER_FAIL_TDENTER_EPFS

    if (is_sept_locked)

    {

        release_sharex_lock_ex(&tdcs_ptr->executions_ctl_fields.secure_ept_lock);

    }



    // If IA32_SPEC_CTRL is virtualized, write the VMCS' IA32_SPEC_CTRL shadow

    conditionally_write_vmcs_ia32_spec_ctrl_shadow(tdcs_ptr, tdvps_ptr->guest_msr_state.ia32_spec_ctrl);



    // Restore other Guest state (GPRs, DRs, MSRs) in TDVPS

    restore_guest_td_state_before_td_entry(tdcs_ptr, tdvps_ptr);



    update_host_state_in_td_vmcs(local_data_ptr, tdvps_ptr, tdvps_ptr->management.curr_vm);



    local_data_ptr->single_step_def_state.last_entry_tsc = ia32_rdtsc();



    tdvps_ptr->management.state = VCPU_ACTIVE;



    if (tdvps_ptr->management.vm_launched[tdvps_ptr->management.curr_vm])

    {

        tdx_return_to_td(true, true, &tdvps_ptr->guest_state.gpr_state);

    }

    else

    {

        tdx_return_to_td(false, true, &tdvps_ptr->guest_state.gpr_state);

    }



    // Flow should never reach here

    tdx_sanity_check(0, SCEC_SEAMCALL_SOURCE(TDH_VP_ENTER_LEAF), 0);



EXIT_FAILURE:



    if (is_sept_locked)

    {

        release_sharex_lock_ex(&tdcs_ptr->executions_ctl_fields.secure_ept_lock);

    }



    // Check if we need to load the SEAM VMCS

    IF_COMMON (td_vmcs_loaded)

    {

        set_seam_vmcs_as_active();

    }



    // Release all acquired locks and free keyhole mappings

    IF_COMMON (tdcs_ptr != NULL)

    {

        IF_COMMON (op_state_locked_flag)

        {

            release_sharex_lock_hp_sh(&(tdcs_ptr->management_fields.op_state_lock));

        }

        free_la(tdcs_ptr);

    }



    IF_COMMON (tdr_locked_flag)

    {

        pamt_implicit_release_lock(tdr_pamt_entry_ptr, TDX_LOCK_SHARED);

        free_la(tdr_ptr);

    }



    IF_COMMON (tdvpr_locked_flag)

    {

        pamt_unwalk(tdvpr_pa, tdvpr_pamt_block, tdvpr_pamt_entry_ptr, TDX_LOCK_SHARED, PT_4KB);

        if (tdvps_ptr != NULL)

        {

            free_la(tdvps_ptr);

        }

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

 * @file tdx_vmm_dispatcher.c

 * @brief VMM dispatcher and return sequence

 */

#include "vmm_dispatcher/tdx_vmm_dispatcher.h"

#include "accessors/ia32_accessors.h"

#include "accessors/vt_accessors.h"

#include "accessors/data_accessors.h"

#include "x86_defs/vmcs_defs.h"

#include "auto_gen/tdx_error_codes_defs.h"

#include "data_structures/tdx_global_data.h"

#include "data_structures/tdx_local_data.h"

#include "tdx_vmm_api_handlers.h"

#include "debug/tdx_debug.h"

#include "helpers/helpers.h"

#include "metadata_handlers/metadata_generic.h"



_STATIC_INLINE_ void mark_lp_as_busy(void)

{

    get_local_data()->lp_is_busy = true;

}



_STATIC_INLINE_ void mark_lp_as_free(void)

{

    get_local_data()->lp_is_busy = false;

}



void tdx_vmm_dispatcher(void)

{

    // Must be first thing to do before accessing local/global data or sysinfo table

    tdx_module_local_t* local_data = init_data_fast_ref_ptrs();



    TDX_LOG("Module entry start\n");



    vm_vmexit_exit_reason_t exit_reason;

    ia32_vmread(VMX_VM_EXIT_REASON_ENCODE, &exit_reason.raw);



    tdx_sanity_check(exit_reason.basic_reason == VMEXIT_REASON_SEAMCALL, SCEC_VMM_DISPATCHER_SOURCE, 2);



    tdx_module_global_t * global_data = get_global_data();

    // Get leaf code from RAX in local data (saved on entry)

    tdx_leaf_and_version_t leaf_opcode;

    leaf_opcode.raw = local_data->vmm_regs.rax;



    ia32_core_capabilities_t core_capabilities;



    TDX_LOG("leaf_opcode = 0x%llx\n", leaf_opcode);



    bhb_drain_sequence(global_data);



    mark_lp_as_busy();



    // Save IA32_SPEC_CTRL and set speculative execution variant 4 defense

    // using Speculative Store Bypass Disable (SSBD), which delays speculative

    // execution of a load until the addresses for all older stores are known.

    local_data->vmm_non_extended_state.ia32_spec_ctrl = ia32_rdmsr(IA32_SPEC_CTRL_MSR_ADDR);

    wrmsr_opt(IA32_SPEC_CTRL_MSR_ADDR, TDX_MODULE_IA32_SPEC_CTRL, local_data->vmm_non_extended_state.ia32_spec_ctrl);



    // All IA32_DEBGCTL bits have been cleared by SEAMCALL.

    // Set IA32_DEBUGCTL.ENABLE_UNCORE_PMI to the VMM's value, all other bits remain 0.

    ia32_debugctl_t debugctl;

    ia32_vmread(VMX_GUEST_IA32_DEBUGCTLMSR_FULL_ENCODE, &debugctl.raw);

    local_data->ia32_debugctl_value.raw = 0;

    local_data->ia32_debugctl_value.en_uncore_pmi = debugctl.en_uncore_pmi;

    wrmsr_opt(IA32_DEBUGCTL_MSR_ADDR, local_data->ia32_debugctl_value.raw, debugctl.raw);



    // If simplified LAM is supported, save & disable its state

    if (local_data->lp_is_init)

    {

        core_capabilities.raw = global_data->plt_common_config.ia32_core_capabilities.raw;

    }

    else

    {

        core_capabilities.raw = ia32_rdmsr(IA32_CORE_CAPABILITIES);

    }



    local_data->vmm_non_extended_state.ia32_lam_enable = 0;

    if (core_capabilities.lam_supported != 0)

    {

        local_data->vmm_non_extended_state.ia32_lam_enable = ia32_rdmsr(IA32_LAM_ENABLE_MSR_ADDR);

        if (local_data->vmm_non_extended_state.ia32_lam_enable != 0)

        {

            ia32_wrmsr(IA32_LAM_ENABLE_MSR_ADDR, 0);

        }

    }



    if ((leaf_opcode.reserved0 != 0) || (leaf_opcode.reserved1 != 0))

    {

        TDX_ERROR("Leaf and version not supported 0x%llx\n", leaf_opcode.raw);

        // update RAX in local data with error code

        local_data->vmm_regs.rax = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RAX);

        goto EXIT;

    }



    // Only a few functions have multiple versions

    if (leaf_opcode.version > 0)

    {

        switch (leaf_opcode.leaf)

        {

            case TDH_MEM_PAGE_PROMOTE_LEAF:

            case TDH_MEM_SEPT_ADD_LEAF:

            case TDH_MEM_SEPT_REMOVE_LEAF:

            case TDH_MNG_RD_LEAF:

            case TDH_VP_RD_LEAF:

            case TDH_VP_INIT_LEAF:

                break;

            default:

                TDX_ERROR("Version greater than zero not supported for current leaf 0x%llx\n", leaf_opcode.raw);

                // update RAX in local data with error code

                local_data->vmm_regs.rax = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RAX);

                goto EXIT;

        }

    }



    if (SYS_SHUTDOWN == global_data->global_state.sys_state)

    {

        if (leaf_opcode.leaf != TDH_SYS_LP_SHUTDOWN_LEAF)

        {

            TDX_ERROR("Module in shutdown state\n");

            // update RAX in local data with error code

            local_data->vmm_regs.rax = TDX_SYS_SHUTDOWN;

            goto EXIT;

        }

    }



    // Check if module is in ready state, if not

    // only some leaf functions are allowed to run

    if ((global_data->global_state.sys_state != SYS_READY)     &&

        (leaf_opcode.leaf != TDH_SYS_INFO_LEAF)                &&

        (leaf_opcode.leaf != TDH_SYS_RD_LEAF)                  &&

        (leaf_opcode.leaf != TDH_SYS_RDALL_LEAF)               &&

        (leaf_opcode.leaf != TDH_SYS_INIT_LEAF)                &&

        (leaf_opcode.leaf != TDH_SYS_LP_INIT_LEAF)             &&

        (leaf_opcode.leaf != TDH_SYS_CONFIG_LEAF)              &&

        (leaf_opcode.leaf != TDH_SYS_KEY_CONFIG_LEAF)          &&

        (leaf_opcode.leaf != TDH_SYS_LP_SHUTDOWN_LEAF)         &&

        (leaf_opcode.leaf != TDH_SYS_UPDATE_LEAF)

#ifdef DEBUGFEATURE_TDX_DBG_TRACE

        && (leaf_opcode.leaf != TDDEBUGCONFIG_LEAF)

#endif

        )

    {

        TDX_ERROR("Module system not ready, can't execute leaf 0x%llx\n", leaf_opcode.leaf);

        // update RAX in local data with error code

        local_data->vmm_regs.rax = TDX_SYS_NOT_READY;

        goto EXIT;

    }



    // switch over leaf opcodes

    switch (leaf_opcode.leaf)

    {

#ifdef DEBUGFEATURE_TDX_DBG_TRACE

    case TDDEBUGCONFIG_LEAF:

    {

        local_data->vmm_regs.rax = td_debug_config(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx,

                                                   local_data->vmm_regs.r8);

        break;

    }

#endif

    case TDH_MNG_ADDCX_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_add_cx(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MEM_PAGE_ADD_LEAF:

    {

        page_info_api_input_t gpa_page_info;

        gpa_page_info.raw = local_data->vmm_regs.rcx;

        local_data->vmm_regs.rax = tdh_mem_page_add(gpa_page_info,

                                               local_data->vmm_regs.rdx,

                                               local_data->vmm_regs.r8,

                                               local_data->vmm_regs.r9);

        break;

    }

    case TDH_MEM_SEPT_ADD_LEAF:

    {

        page_info_api_input_t sept_level_and_gpa;

        sept_level_and_gpa.raw = local_data->vmm_regs.rcx;



        td_handle_and_flags_t target_tdr_and_flags = { .raw = local_data->vmm_regs.rdx };



        local_data->vmm_regs.rax = tdh_mem_sept_add(sept_level_and_gpa,

                                                    target_tdr_and_flags,

                                                    local_data->vmm_regs.r8,

                                                    leaf_opcode.version);

        break;

    }

    case TDH_VP_ADDCX_LEAF:

    {

        local_data->vmm_regs.rax = tdh_vp_addcx(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MEM_PAGE_RELOCATE:

    {

        local_data->vmm_regs.rax = tdh_mem_page_relocate(local_data->vmm_regs.rcx,

                local_data->vmm_regs.rdx, local_data->vmm_regs.r8);



        break;

    }

    case TDH_MEM_PAGE_AUG_LEAF:

    {

        page_info_api_input_t gpa_page_info;

        gpa_page_info.raw = local_data->vmm_regs.rcx;

        local_data->vmm_regs.rax = tdh_mem_page_aug(gpa_page_info,

                                               local_data->vmm_regs.rdx,

                                               local_data->vmm_regs.r8);

        break;

    }

    case TDH_MEM_RANGE_BLOCK_LEAF:

    {

        page_info_api_input_t page_info;

        page_info.raw = local_data->vmm_regs.rcx;



        local_data->vmm_regs.rax = tdh_mem_range_block(page_info, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MNG_KEY_CONFIG_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_key_config(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MNG_CREATE_LEAF:

    {

        hkid_api_input_t hkid_info;

        hkid_info.raw = local_data->vmm_regs.rdx;



        local_data->vmm_regs.rax = tdh_mng_create(local_data->vmm_regs.rcx, hkid_info);

        break;

    }

    case TDH_VP_CREATE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_vp_create(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MNG_INIT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_init(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_VP_INIT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_vp_init(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MNG_RD_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_rd(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx,

                                              leaf_opcode.version);

        break;

    }

    case TDH_MEM_RD_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mem_rd(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MNG_WR_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_wr(local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.rdx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9);

        break;

    }

    case TDH_MEM_WR_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mem_wr(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx,

                                                    local_data->vmm_regs.r8);

        break;

    }

    case TDH_MEM_PAGE_DEMOTE_LEAF:

    {

        page_info_api_input_t page_info;

        page_info.raw = local_data->vmm_regs.rcx;



        td_handle_and_flags_t target_tdr_and_flags = { .raw = local_data->vmm_regs.rdx };



        local_data->vmm_regs.rax = tdh_mem_page_demote(page_info, target_tdr_and_flags);

        break;

    }

    case TDH_VP_ENTER_LEAF:

    {

        local_data->vmm_regs.rax = tdh_vp_enter(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MR_EXTEND_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mr_extend(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MR_FINALIZE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mr_finalize(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_VP_FLUSH_LEAF:

    {

        local_data->vmm_regs.rax = tdh_vp_flush(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MNG_VPFLUSHDONE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_vpflushdone(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MNG_KEY_FREEID_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_key_freeid(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MEM_PAGE_PROMOTE_LEAF:

    {

        page_info_api_input_t page_info;

        page_info.raw = local_data->vmm_regs.rcx;



        local_data->vmm_regs.rax = tdh_mem_page_promote(page_info, local_data->vmm_regs.rdx, leaf_opcode.version);

        break;

    }

    case TDH_PHYMEM_PAGE_RDMD_LEAF:

    {

        local_data->vmm_regs.rax = tdh_phymem_page_rdmd(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MEM_SEPT_RD_LEAF:

    {

        page_info_api_input_t sept_page_info;

        sept_page_info.raw = local_data->vmm_regs.rcx;



        local_data->vmm_regs.rax = tdh_mem_sept_rd(sept_page_info, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_VP_RD_LEAF:

    {

        md_field_id_t field_code = {.raw = local_data->vmm_regs.rdx};

        local_data->vmm_regs.rax = tdh_vp_rd(local_data->vmm_regs.rcx, field_code, leaf_opcode.version);

        break;

    }

    case TDH_MNG_KEY_RECLAIMID_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mng_key_reclaimid(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_PHYMEM_PAGE_RECLAIM_LEAF:

    {

        local_data->vmm_regs.rax = tdh_phymem_page_reclaim(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MEM_PAGE_REMOVE_LEAF:

    {

        page_info_api_input_t page_info;

        page_info.raw = local_data->vmm_regs.rcx;



        local_data->vmm_regs.rax = tdh_mem_page_remove(page_info, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_MEM_SEPT_REMOVE_LEAF:

    {

        page_info_api_input_t sept_page_info;

        sept_page_info.raw = local_data->vmm_regs.rcx;



        local_data->vmm_regs.rax = tdh_mem_sept_remove(sept_page_info, local_data->vmm_regs.rdx,

                                                       leaf_opcode.version);

        break;

    }

    case TDH_SYS_CONFIG_LEAF:

    {

        hkid_api_input_t global_private_hkid;

        global_private_hkid.raw = local_data->vmm_regs.r8;



        local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,

                                                 local_data->vmm_regs.rdx,

                                                 global_private_hkid);

        break;

    }

    case TDH_SYS_KEY_CONFIG_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_key_config();

        break;

    }

    case TDH_SYS_INFO_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_info(local_data->vmm_regs.rcx,

                                               local_data->vmm_regs.rdx,

                                               local_data->vmm_regs.r8,

                                               local_data->vmm_regs.r9);

        break;

    }

    case TDH_SYS_INIT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_init();

        break;

    }

    case TDH_SYS_RD_LEAF:

    {

        md_field_id_t field_code = {.raw = local_data->vmm_regs.rdx};

        local_data->vmm_regs.rax = tdh_sys_rd(field_code);

        break;

    }

    case TDH_SYS_LP_INIT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_lp_init();

        break;

    }

    case TDH_SYS_TDMR_INIT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_tdmr_init(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_SYS_RDALL_LEAF:

    {

        md_field_id_t field_code = {.raw = local_data->vmm_regs.r8};

        local_data->vmm_regs.rax = tdh_sys_rdall(local_data->vmm_regs.rdx, field_code);

        break;

    }

    case TDH_SYS_LP_SHUTDOWN_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_lp_shutdown();

        break;

    }

    case TDH_SYS_SHUTDOWN_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_shutdown(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_SYS_UPDATE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_sys_update();

        break;

    }

    case TDH_MEM_TRACK_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mem_track(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_MEM_RANGE_UNBLOCK_LEAF:

    {

        page_info_api_input_t page_info;

        page_info.raw = local_data->vmm_regs.rcx;



        local_data->vmm_regs.rax = tdh_mem_range_unblock(page_info, local_data->vmm_regs.rdx);

        break;

    }

    case TDH_PHYMEM_CACHE_WB_LEAF:

    {

        local_data->vmm_regs.rax = tdh_phymem_cache_wb(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_PHYMEM_PAGE_WBINVD_LEAF:

    {

        local_data->vmm_regs.rax = tdh_phymem_page_wbinvd(local_data->vmm_regs.rcx);

        break;

    }

    case TDH_VP_WR_LEAF:

    {

        md_field_id_t field_code = {.raw = local_data->vmm_regs.rdx};

        local_data->vmm_regs.rax = tdh_vp_wr(local_data->vmm_regs.rcx,

                                             field_code,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9);

        break;

    }

    case TDH_SERVTD_BIND_LEAF:

    {

        servtd_attributes_t servtd_attr = {.raw = local_data->vmm_regs.r10};

        local_data->vmm_regs.rax = tdh_servtd_bind(local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.rdx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             servtd_attr);

        break;

    }

    case TDH_SERVTD_PREBIND_LEAF:

    {

        servtd_attributes_t servtd_attr = {.raw = local_data->vmm_regs.r10};

        local_data->vmm_regs.rax = tdh_servtd_prebind(local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.rdx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             servtd_attr);

        break;

    }

    case TDH_EXPORT_ABORT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_abort(

                                         local_data->vmm_regs.rcx,

                                         local_data->vmm_regs.r8,

                                         local_data->vmm_regs.r10);



        break;

    }

    case TDH_EXPORT_BLOCKW_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_blockw((gpa_list_info_t)local_data->vmm_regs.rcx,

                                                     local_data->vmm_regs.rdx);



        break;

    }

    case TDH_EXPORT_RESTORE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_restore((gpa_list_info_t)local_data->vmm_regs.rcx,

                                                      local_data->vmm_regs.rdx);



        break;

    }

    case TDH_EXPORT_PAUSE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_pause(local_data->vmm_regs.rcx);



        break;

    }

    case TDH_EXPORT_TRACK_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_track(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_EXPORT_STATE_IMMUTABLE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_state_immutable(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_EXPORT_STATE_TD_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_state_td(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_EXPORT_STATE_VP_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_state_vp(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_EXPORT_UNBLOCKW_LEAF:

    {

        local_data->vmm_regs.rax = tdh_export_unblockw(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.rdx);



        break;

    }

    case TDH_IMPORT_TRACK_LEAF:

    {

        local_data->vmm_regs.rax = tdh_import_track(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_IMPORT_STATE_IMMUTABLE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_import_state_immutable(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_IMPORT_STATE_TD_LEAF:

    {

        local_data->vmm_regs.rax = tdh_import_state_td(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_IMPORT_STATE_VP_LEAF:

    {

        local_data->vmm_regs.rax = tdh_import_state_vp(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.r8,

                                             local_data->vmm_regs.r9,

                                             local_data->vmm_regs.r10);



        break;

    }

    case TDH_MIG_STREAM_CREATE_LEAF:

    {

        local_data->vmm_regs.rax = tdh_mig_stream_create(

                                             local_data->vmm_regs.rcx,

                                             local_data->vmm_regs.rdx);

        break;

    }

    case TDH_IMPORT_ABORT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_import_abort(local_data->vmm_regs.rcx,

                                            local_data->vmm_regs.r8,

                                            local_data->vmm_regs.r10);



        break;

    }

    case TDH_IMPORT_COMMIT_LEAF:

    {

        local_data->vmm_regs.rax = tdh_import_commit(local_data->vmm_regs.rcx);



        break;

    }

    case TDH_IMPORT_END_LEAF:

    {

        local_data->vmm_regs.rax = tdh_import_end(local_data->vmm_regs.rcx);



        break;

    }

    case TDH_EXPORT_MEM_LEAF:

    {

        gpa_list_info_t gpa_list_info = { .raw = local_data->vmm_regs.rcx};

        local_data->vmm_regs.rax = tdh_export_mem(

                                            gpa_list_info,

                                            local_data->vmm_regs.rdx,

                                            local_data->vmm_regs.r8,

                                            local_data->vmm_regs.r9,

                                            local_data->vmm_regs.r10,

                                            local_data->vmm_regs.r11,

                                            local_data->vmm_regs.r12);

        break;

    }

    case TDH_IMPORT_MEM_LEAF:

    {

        gpa_list_info_t gpa_list_info = { .raw = local_data->vmm_regs.rcx};

        local_data->vmm_regs.rax = tdh_import_mem(

                                            gpa_list_info,

                                            local_data->vmm_regs.rdx,

                                            local_data->vmm_regs.r8,

                                            local_data->vmm_regs.r9,

                                            local_data->vmm_regs.r10,

                                            local_data->vmm_regs.r11,

                                            local_data->vmm_regs.r12,

                                            local_data->vmm_regs.r13);

        break;

    }

    default:

    {

        TDX_ERROR("tdx_vmm_dispatcher - TDX_OPERAND_INVALID - invalid leaf = %d\n", leaf_opcode);

        local_data->vmm_regs.rax = api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RAX);

        break;

    }

    }



    tdx_sanity_check(local_data->vmm_regs.rax != UNINITIALIZE_ERROR, SCEC_VMM_DISPATCHER_SOURCE, 1);



    IF_RARE (local_data->reset_avx_state)

    {

        // Current IPP crypto lib uses SSE state only (XMM's), so we only clear them

        clear_xmms();

        local_data->reset_avx_state = false;

    }



EXIT:

    // No return after calling the post dispatching operations

    // Eventually call SEAMRET

    tdx_vmm_post_dispatching();

}





void tdx_vmm_post_dispatching(void)

{

    advance_guest_rip();



    tdx_module_local_t* local_data_ptr = get_local_data();



    // Restore IA32_SPEC_CTRL

    wrmsr_opt(IA32_SPEC_CTRL_MSR_ADDR, local_data_ptr->vmm_non_extended_state.ia32_spec_ctrl,

                                       TDX_MODULE_IA32_SPEC_CTRL);



    // If simplified LAM was saved & disabled, restore its state

    if (local_data_ptr->vmm_non_extended_state.ia32_lam_enable != 0)

    {

        ia32_wrmsr(IA32_LAM_ENABLE_MSR_ADDR, local_data_ptr->vmm_non_extended_state.ia32_lam_enable);

    }



    mark_lp_as_free();



    // Check that we have no mapped keyholes left

    tdx_sanity_check(local_data_ptr->keyhole_state.total_ref_count == 0, SCEC_KEYHOLE_MANAGER_SOURCE, 20);



    TDX_LOG("tdx_vmm_post_dispatching - preparing to do SEAMRET\n");



    tdx_seamret_to_vmm(); // Restore GPRs and SEAMRET



    // Shouldn't reach here:

    tdx_sanity_check(0, SCEC_VMM_DISPATCHER_SOURCE, 0);

}

int main() {

    // before_target methods

    init_tdx_general();

    init_vmm_dispatcher();

    tdh_vp_enter__common_precond();



    // Target method

    tdh_vp_enter__free_entry();



    // after_target methods

    tdh_vp_enter__post_cover_unsuccess();



    return 0;

}

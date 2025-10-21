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

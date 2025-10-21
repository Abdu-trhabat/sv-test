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
 * @file tdx_local_data_invariants.h
 * @brief TDX local data invariants
 */
#ifndef __TDX_LOCAL_DATA_INVARIANTS_H_INCLUDED__
#define __TDX_LOCAL_DATA_INVARIANTS_H_INCLUDED__

#include "data_structures/tdx_local_data.h"

/**
 * Field predicates for lp_info_t
 */
static inline bool_t lp_info_t_has_valid_lp(const lp_info_t* lp_info_ptr) {
    return lp_info_ptr->lp <= 256;
}

static inline bool_t lp_info_t_has_valid_core(const lp_info_t* lp_info_ptr) {
    return lp_info_ptr->core <= 128;
}

static inline bool_t lp_info_t_has_valid_pkg(const lp_info_t* lp_info_ptr) {
    return lp_info_ptr->pkg <= MAX_PKGS;
}

static inline bool_t lp_info_t_has_valid_lp_id(const lp_info_t* lp_info_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for lp_info_t
 * @param lp_info_ptr Pointer to the lp_info_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_lp_info_t(const lp_info_t* lp_info_ptr) {
    return (
        lp_info_t_has_valid_lp(lp_info_ptr) &&
        lp_info_t_has_valid_core(lp_info_ptr) &&
        lp_info_t_has_valid_pkg(lp_info_ptr) &&
        lp_info_t_has_valid_lp_id(lp_info_ptr)
    );
}

/**
 * Field predicates for non_extended_state_t
 */

#if 0
static inline bool_t non_extended_state_t_has_valid_ia32_spec_ctrl(const non_extended_state_t* non_extended_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t non_extended_state_t_has_valid_ia32_lam_enable(const non_extended_state_t* non_extended_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t non_extended_state_t_has_valid_ia32_ds_area(const non_extended_state_t* non_extended_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t non_extended_state_t_has_valid_ia32_tsx_ctrl(const non_extended_state_t* non_extended_state_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for non_extended_state_t
 * @param non_extended_state_ptr Pointer to the non_extended_state_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_non_extended_state_t(const non_extended_state_t* non_extended_state_ptr) {
#if 0
    return (
        non_extended_state_t_has_valid_ia32_spec_ctrl(non_extended_state_ptr) &&
        non_extended_state_t_has_valid_ia32_lam_enable(non_extended_state_ptr) &&
        non_extended_state_t_has_valid_ia32_ds_area(non_extended_state_ptr) &&
        non_extended_state_t_has_valid_ia32_tsx_ctrl(non_extended_state_ptr)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for keyhole_entry_t
 */
static inline bool_t keyhole_entry_t_has_valid_mapped_pa(const keyhole_entry_t* keyhole_entry_ptr) {
    return keyhole_entry_ptr->mapped_pa < BIT(MAX_PA);
}

static inline bool_t keyhole_entry_t_has_valid_lru_next(const keyhole_entry_t* keyhole_entry_ptr) {
    return keyhole_entry_ptr->lru_next <= MAX_KEYHOLE_PER_LP;
}

static inline bool_t keyhole_entry_t_has_valid_lru_prev(const keyhole_entry_t* keyhole_entry_ptr) {
    return keyhole_entry_ptr->lru_prev <= MAX_KEYHOLE_PER_LP;
}

static inline bool_t keyhole_entry_t_has_valid_hash_list_next(const keyhole_entry_t* keyhole_entry_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t keyhole_entry_t_has_valid_state(const keyhole_entry_t* keyhole_entry_ptr) {
    return (
        keyhole_entry_ptr->state == KH_ENTRY_FREE ||
        keyhole_entry_ptr->state == KH_ENTRY_MAPPED ||
        keyhole_entry_ptr->state == KH_ENTRY_CAN_BE_REMOVED
    );
}

#if 0
static inline bool_t keyhole_entry_t_has_valid_is_writable(const keyhole_entry_t* keyhole_entry_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t keyhole_entry_t_has_valid_is_wb_memtype(const keyhole_entry_t* keyhole_entry_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t keyhole_entry_t_has_valid_ref_count(const keyhole_entry_t* keyhole_entry_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for keyhole_entry_t
 * @param keyhole_entry_ptr Pointer to the keyhole_entry_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_keyhole_entry_t(const keyhole_entry_t* keyhole_entry_ptr) {
    return (
        keyhole_entry_t_has_valid_mapped_pa(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_lru_next(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_lru_prev(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_hash_list_next(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_state(keyhole_entry_ptr) // &&
        //keyhole_entry_t_has_valid_is_writable(keyhole_entry_ptr) &&
        //keyhole_entry_t_has_valid_is_wb_memtype(keyhole_entry_ptr) &&
        //keyhole_entry_t_has_valid_ref_count(keyhole_entry_ptr)
    );
}

/**
 * Field predicates for keyhole_state_t
 */
static inline bool_t keyhole_state_t_has_valid_keyhole_array(const keyhole_state_t* keyhole_state_ptr) {
#ifdef TDXFV_ENABLE_LOOP_IN_HARNESS
    bool_t all_keyhole_entries_valid = true;
    for (int i = 0; i < MAX_KEYHOLE_PER_LP; i++) {
        all_keyhole_entries_valid &= fv_invariant_keyhole_entry_t(&keyhole_state_ptr->keyhole_array[i]);
    }
    return all_keyhole_entries_valid;
#else
    return fv_invariant_keyhole_entry_t(&keyhole_state_ptr->keyhole_array[0]);
#endif
}

static inline bool_t keyhole_state_t_has_valid_hash_table(const keyhole_state_t* keyhole_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t keyhole_state_t_has_valid_lru_head(const keyhole_state_t* keyhole_state_ptr) {
    return keyhole_state_ptr->lru_head <= MAX_KEYHOLE_PER_LP;
}

static inline bool_t keyhole_state_t_has_valid_lru_tail(const keyhole_state_t* keyhole_state_ptr) {
    return keyhole_state_ptr->lru_tail <= MAX_KEYHOLE_PER_LP;
}

static inline bool_t keyhole_state_t_has_valid_total_ref_count(const keyhole_state_t* keyhole_state_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for keyhole_state_t
 * @param keyhole_state_ptr Pointer to the keyhole_state_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_keyhole_state_t(const keyhole_state_t* keyhole_state_ptr) {
    return (
        keyhole_state_t_has_valid_keyhole_array(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_hash_table(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_lru_head(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_lru_tail(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_total_ref_count(keyhole_state_ptr)
    );
}

/**
 * Field predicates for vp_ctx_t
 */

#if 0
static inline bool_t vp_ctx_t_has_valid_tdr(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_tdr_pamt_entry(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_tdr_pa(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_tdvps(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_tdvpr_pamt_entry(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_tdvpr_pamt_block(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_tdvpr_pa(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_tdcs(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_last_tdvpr_pa(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_attributes(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_xfam(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_xfd_supported(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_ia32_perf_global_status(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_bus_lock_preempted(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vp_ctx_t_has_valid_active_vmcs(const vp_ctx_t* vp_ctx_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for vp_ctx_t
 * @param vp_ctx_ptr Pointer to the vp_ctx_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_vp_ctx_t(const vp_ctx_t* vp_ctx_ptr) {
#if 0
    return (
        vp_ctx_t_has_valid_tdr(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_tdr_pamt_entry(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_tdr_pa(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_tdvps(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_tdvpr_pamt_entry(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_tdvpr_pamt_block(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_tdvpr_pa(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_tdcs(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_last_tdvpr_pa(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_attributes(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_xfam(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_xfd_supported(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_ia32_perf_global_status(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_bus_lock_preempted(vp_ctx_ptr) &&
        vp_ctx_t_has_valid_active_vmcs(vp_ctx_ptr)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for stepping_t
 */

#if 0
static inline bool_t stepping_t_has_valid_in_inst_step_mode(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t stepping_t_has_valid_num_inst_step(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t stepping_t_has_valid_saved_cr8(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t stepping_t_has_valid_nmi_exit_occured(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t stepping_t_has_valid_init_exit_occured(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t stepping_t_has_valid_lfsr_value(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t stepping_t_has_valid_last_entry_tsc(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t stepping_t_has_valid_guest_rip_on_tdentry(const stepping_t* stepping_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for stepping_t
 * @param stepping_ptr Pointer to the stepping_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_stepping_t(const stepping_t* stepping_ptr) {
#if 0
    return (
        stepping_t_has_valid_in_inst_step_mode(stepping_ptr) &&
        stepping_t_has_valid_num_inst_step(stepping_ptr) &&
        stepping_t_has_valid_saved_cr8(stepping_ptr) &&
        stepping_t_has_valid_nmi_exit_occured(stepping_ptr) &&
        stepping_t_has_valid_init_exit_occured(stepping_ptr) &&
        stepping_t_has_valid_lfsr_value(stepping_ptr) &&
        stepping_t_has_valid_last_entry_tsc(stepping_ptr) &&
        stepping_t_has_valid_guest_rip_on_tdentry(stepping_ptr)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for tdx_module_local_t
 */
static inline bool_t tdx_module_local_t_has_valid_vmm_regs(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_td_regs(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_current_td_vm_id(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_lp_info(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_lp_info_t(&tdx_module_local_ptr->lp_info);
}

static inline bool_t tdx_module_local_t_has_valid_lp_is_init(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_lp_is_busy(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_ia32_debugctl_value(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_non_faulting_msr_value(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_reset_avx_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_vp_ctx(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_vp_ctx_t(&tdx_module_local_ptr->vp_ctx);
}

static inline bool_t tdx_module_local_t_has_valid_single_step_def_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_stepping_t(&tdx_module_local_ptr->single_step_def_state);
}

static inline bool_t tdx_module_local_t_has_valid_vmm_non_extended_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_non_extended_state_t(&tdx_module_local_ptr->vmm_non_extended_state);
}

static inline bool_t tdx_module_local_t_has_valid_keyhole_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_keyhole_state_t(&tdx_module_local_ptr->keyhole_state);
}

static inline bool_t tdx_module_local_t_has_valid_local_data_fast_ref_ptr(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_global_data_fast_ref_ptr(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_sysinfo_fast_ref_ptr(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_host_rsp(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_host_ssp(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_local_t_has_valid_host_gs_base(const tdx_module_local_t* tdx_module_local_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for tdx_module_local_t
 * @param tdx_module_local_ptr Pointer to the tdx_module_local_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdx_module_local_t(const tdx_module_local_t* tdx_module_local_ptr) {
    return (
        tdx_module_local_t_has_valid_vmm_regs(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_td_regs(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_current_td_vm_id(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_lp_info(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_lp_is_init(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_lp_is_busy(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_ia32_debugctl_value(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_non_faulting_msr_value(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_reset_avx_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_vp_ctx(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_single_step_def_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_vmm_non_extended_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_keyhole_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_local_data_fast_ref_ptr(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_global_data_fast_ref_ptr(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_sysinfo_fast_ref_ptr(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_host_rsp(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_host_ssp(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_host_gs_base(tdx_module_local_ptr)
    );
}

#endif // __TDX_LOCAL_DATA_INVARIANTS_H_INCLUDED__

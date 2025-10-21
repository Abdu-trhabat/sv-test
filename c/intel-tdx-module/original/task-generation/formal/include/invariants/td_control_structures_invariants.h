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
 * @file td_control_structures_invariants.h
 * @brief TD control structures invariants
 */
#ifndef __TD_CONTROL_STRUCTURES_INVARIANTS_H_INCLUDED__
#define __TD_CONTROL_STRUCTURES_INVARIANTS_H_INCLUDED__

#include "data_structures/td_control_structures.h"

/**
 * Field predicates for tdr_td_management_fields_t
 */

#if 0
static inline bool_t tdr_td_management_fields_t_has_valid_fatal(const tdr_td_management_fields_t* management_fields_ptr) {
    return true;
}
#endif

static inline bool_t tdr_td_management_fields_t_has_valid_num_tdcx(const tdr_td_management_fields_t* management_fields_ptr) {
    return (
        management_fields_ptr->num_tdcx >= MIN_NUM_TDCS_PAGES &&
        management_fields_ptr->num_tdcx <= MAX_NUM_TDCS_PAGES
    );
}

#if 0
static inline bool_t tdr_td_management_fields_t_has_valid_chldcnt(const tdr_td_management_fields_t* management_fields_ptr) {
    return true;
}
#endif

static inline bool_t tdr_td_management_fields_t_has_valid_lifecycle_state(const tdr_td_management_fields_t* management_fields_ptr) {
    return (
        management_fields_ptr->lifecycle_state == TD_HKID_ASSIGNED ||
        management_fields_ptr->lifecycle_state == TD_KEYS_CONFIGURED ||
        management_fields_ptr->lifecycle_state == TD_BLOCKED ||
        management_fields_ptr->lifecycle_state == TD_TEARDOWN
    );
}

static inline bool_t tdr_td_management_fields_t_has_valid_tdcx_pa(const tdr_td_management_fields_t* management_fields_ptr) {
    _Static_assert(MAX_NUM_TDCS_PAGES == 9, "MAX_NUM_TDCS_PAGES changed, update invariant");
    return (
        (management_fields_ptr->tdcx_pa[0] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[0] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[1] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[1] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[2] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[2] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[3] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[3] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[4] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[4] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[5] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[5] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[6] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[6] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[7] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[7] < BIT(MAX_PA) &&
        (management_fields_ptr->tdcx_pa[8] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[8] < BIT(MAX_PA)
    );
}

static inline bool_t tdr_td_management_fields_t_has_valid_td_uuid(const tdr_td_management_fields_t* management_fields_ptr) {
    return true;
}

/**
 * @brief Invariant function for tdr_td_management_fields_t
 * @param management_fields_ptr Pointer to the tdr_td_management_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdr_td_management_fields_t(const tdr_td_management_fields_t* management_fields_ptr) {
    return (
        //tdr_td_management_fields_t_has_valid_fatal(management_fields_ptr) &&
        tdr_td_management_fields_t_has_valid_num_tdcx(management_fields_ptr) &&
        //tdr_td_management_fields_t_has_valid_chldcnt(management_fields_ptr) &&
        tdr_td_management_fields_t_has_valid_lifecycle_state(management_fields_ptr) &&
        tdr_td_management_fields_t_has_valid_tdcx_pa(management_fields_ptr) &&
        tdr_td_management_fields_t_has_valid_td_uuid(management_fields_ptr)
    );
}

/**
 * Field predicates for tdr_key_managment_fields_t
 */
static inline bool_t tdr_key_managment_fields_t_has_valid_hkid(const tdr_key_managment_fields_t* key_management_fields_ptr) {
    return key_management_fields_ptr->hkid <= MAX_HKIDS;
}

static inline bool_t tdr_key_managment_fields_t_has_valid_pkg_config_bitmap(const tdr_key_managment_fields_t* key_management_fields_ptr) {
    return true;
}

/**
 * @brief Invariant function for tdr_key_managment_fields_t
 * @param key_management_fields_ptr Pointer to the tdr_key_managment_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdr_key_managment_fields_t(const tdr_key_managment_fields_t* key_management_fields_ptr) {
    return (
        tdr_key_managment_fields_t_has_valid_hkid(key_management_fields_ptr) &&
        tdr_key_managment_fields_t_has_valid_pkg_config_bitmap(key_management_fields_ptr)
    );
}

/**
 * Field predicates for tdr_td_preserving_fields_t
 */

#if 0
static inline bool_t tdr_td_preserving_fields_t_has_valid_handoff_version(const tdr_td_preserving_fields_t* preserving_fields_ptr) {
    return true;
}

static inline bool_t tdr_td_preserving_fields_t_has_valid_seamdb_index(const tdr_td_preserving_fields_t* preserving_fields_ptr) {
    return true;
}

static inline bool_t tdr_td_preserving_fields_t_has_valid_seamdb_nonce(const tdr_td_preserving_fields_t* preserving_fields_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for tdr_td_preserving_fields_t
 * @param preserving_fields_ptr Pointer to the tdr_td_preserving_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdr_td_preserving_fields_t(const tdr_td_preserving_fields_t* preserving_fields_ptr) {
#if 0
    return (
        tdr_td_preserving_fields_t_has_valid_handoff_version(preserving_fields_ptr) &&
        tdr_td_preserving_fields_t_has_valid_seamdb_index(preserving_fields_ptr) &&
        tdr_td_preserving_fields_t_has_valid_seamdb_nonce(preserving_fields_ptr)
    );
#else
    return true;
#endif
}

/**
 * Field predicates for tdr_t
 */
static inline bool_t tdr_t_has_valid_management_fields(const tdr_t* tdr_ptr) {
    return fv_invariant_tdr_td_management_fields_t(&tdr_ptr->management_fields);
}

static inline bool_t tdr_t_has_valid_key_management_fields(const tdr_t* tdr_ptr) {
    return fv_invariant_tdr_key_managment_fields_t(&tdr_ptr->key_management_fields);
}

static inline bool_t tdr_t_has_valid_td_preserving_fields(const tdr_t* tdr_ptr) {
    return fv_invariant_tdr_td_preserving_fields_t(&tdr_ptr->td_preserving_fields);
}

/**
 * @brief Invariant function for tdr_t
 * @param tdr_ptr Pointer to the tdr_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdr_t(const tdr_t* tdr_ptr) {
    return (
        tdr_t_has_valid_management_fields(tdr_ptr) &&
        tdr_t_has_valid_key_management_fields(tdr_ptr) &&
        tdr_t_has_valid_td_preserving_fields(tdr_ptr)
    );
}

/**
 * Field predicates for tdcs_management_fields_t
 */
static inline bool_t tdcs_management_fields_t_has_valid_num_vcpus(const tdcs_management_fields_t* management_fields_ptr) {
    return management_fields_ptr->num_vcpus <= MAX_VCPUS_PER_TD;
}

static inline bool_t tdcs_management_fields_t_has_valid_num_assoc_vcpus(const tdcs_management_fields_t* management_fields_ptr) {
    return management_fields_ptr->num_assoc_vcpus <= management_fields_ptr->num_vcpus;
}

static inline bool_t tdcs_management_fields_t_has_valid_op_state(const tdcs_management_fields_t* management_fields_ptr) {
    return (
        management_fields_ptr->op_state == OP_STATE_UNINITIALIZED ||
        management_fields_ptr->op_state == OP_STATE_INITIALIZED ||
        management_fields_ptr->op_state == OP_STATE_RUNNABLE ||
        management_fields_ptr->op_state == OP_STATE_LIVE_EXPORT ||
        management_fields_ptr->op_state == OP_STATE_PAUSED_EXPORT ||
        management_fields_ptr->op_state == OP_STATE_POST_EXPORT ||
        management_fields_ptr->op_state == OP_STATE_MEMORY_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_STATE_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_POST_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_LIVE_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_FAILED_IMPORT
    );
}

#if 0
static inline bool_t tdcs_management_fields_t_has_valid_op_state_lock(const tdcs_management_fields_t* management_fields_ptr) {
    return true;
}
#endif

static inline bool_t tdcs_management_fields_t_has_valid_num_l2_vms(const tdcs_management_fields_t* management_fields_ptr) {
    return management_fields_ptr->num_l2_vms <= MAX_VMS;
}

/**
 * @brief Invariant function for tdcs_management_fields_t
 * @param management_fields_ptr Pointer to the tdcs_management_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_management_fields_t(const tdcs_management_fields_t* management_fields_ptr) {
    return (
        tdcs_management_fields_t_has_valid_num_vcpus(management_fields_ptr) &&
        tdcs_management_fields_t_has_valid_num_assoc_vcpus(management_fields_ptr) &&
        tdcs_management_fields_t_has_valid_op_state(management_fields_ptr) &&
        //tdcs_management_fields_t_has_valid_op_state_lock(management_fields_ptr) &&
        tdcs_management_fields_t_has_valid_num_l2_vms(management_fields_ptr)
    );
}

/**
 * Field predicates for epoch_and_refcount_t
 */

#if 0
static inline bool_t epoch_and_refcount_t_has_valid_td_epoch(const epoch_and_refcount_t* epoch_and_refcount_ptr) {
    return true;
}

static inline bool_t epoch_and_refcount_t_has_valid_refcount(const epoch_and_refcount_t* epoch_and_refcount_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for epoch_and_refcount_t
 * @param epoch_and_refcount_ptr Pointer to the epoch_and_refcount_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_epoch_and_refcount_t(const epoch_and_refcount_t* epoch_and_refcount_ptr) {
#if 0
    return (
        epoch_and_refcount_t_has_valid_td_epoch(epoch_and_refcount_ptr) &&
        epoch_and_refcount_t_has_valid_refcount(epoch_and_refcount_ptr)
    );
#else
    return true;
#endif
}

/**
 * Field predicates for tdcs_epoch_tracking_fields_t
 */
static inline bool_t tdcs_epoch_tracking_fields_t_has_valid_epoch_and_refcount(const tdcs_epoch_tracking_fields_t* epoch_tracking_fields_ptr) {
    return fv_invariant_epoch_and_refcount_t(&epoch_tracking_fields_ptr->epoch_and_refcount);
}

static inline bool_t tdcs_epoch_tracking_fields_t_has_valid_epoch_lock(const tdcs_epoch_tracking_fields_t* epoch_tracking_fields_ptr) {
    return true;
}

/**
 * @brief Invariant function for tdcs_epoch_tracking_fields_t
 * @param epoch_tracking_fields_ptr Pointer to the tdcs_epoch_tracking_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_epoch_tracking_fields_t(const tdcs_epoch_tracking_fields_t* epoch_tracking_fields_ptr) {
    return (
        tdcs_epoch_tracking_fields_t_has_valid_epoch_and_refcount(epoch_tracking_fields_ptr) &&
        tdcs_epoch_tracking_fields_t_has_valid_epoch_lock(epoch_tracking_fields_ptr)
    );
}

/**
 * Field predicates for cpuid_flags_t
 */

#if 0
static inline bool_t cpuid_flags_t_has_valid_monitor_mwait_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_dca_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_tsc_deadline_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_tsx_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_waitpkg_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_tme_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_pconfig_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_xfd_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_ddpd_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_la57_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_fred_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}

static inline bool_t cpuid_flags_t_has_valid_perfmon_ext_leaf_supported(const cpuid_flags_t* cpuid_flags_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for cpuid_flags_t
 * @param cpuid_flags_ptr Pointer to the cpuid_flags_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_cpuid_flags_t(const cpuid_flags_t* cpuid_flags_ptr) {
#if 0 
    return (
        cpuid_flags_t_has_valid_monitor_mwait_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_dca_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_tsc_deadline_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_tsx_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_waitpkg_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_tme_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_pconfig_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_xfd_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_ddpd_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_la57_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_fred_supported(cpuid_flags_ptr) &&
        cpuid_flags_t_has_valid_perfmon_ext_leaf_supported(cpuid_flags_ptr)
    );
#else
    return true;
#endif
}

/**
 * Field predicates for notify_enables_t
 */
static inline bool_t notify_enables_t_has_valid_notify_ept_faults(const notify_enables_t* notify_enables_ptr) {
    return true;
}

/**
 * @brief Invariant function for notify_enables_t
 * @param notify_enables_ptr Pointer to the notify_enables_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_notify_enables_t(const notify_enables_t* notify_enables_ptr) {
    return notify_enables_t_has_valid_notify_ept_faults(notify_enables_ptr);
}

/**
 * Field predicates for vm_ctls_t
 */
static inline bool_t vm_ctls_t_has_valid_ept_violation_on_l2_sept_walk_failure(const vm_ctls_t* vm_ctls_ptr) {
    return true;
}

/**
 * @brief Invariant function for vm_ctls_t
 * @param vm_ctls_ptr Pointer to the vm_ctls_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_vm_ctls_t(const vm_ctls_t* vm_ctls_ptr) {
    return vm_ctls_t_has_valid_ept_violation_on_l2_sept_walk_failure(vm_ctls_ptr);
}

/**
 * Field predicates for td_ctls_t
 */
static inline bool_t td_ctls_t_has_valid_pending_ve_disable(const td_ctls_t* td_ctls_ptr) {
    return true;
}

static inline bool_t td_ctls_t_has_valid_enum_topology(const td_ctls_t* td_ctls_ptr) {
    return true;
}

/**
 * @brief Invariant function for td_ctls_t
 * @param td_ctls_ptr Pointer to the td_ctls_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_td_ctls_t(const td_ctls_t* td_ctls_ptr) {
    return (
        td_ctls_t_has_valid_pending_ve_disable(td_ctls_ptr) &&
        td_ctls_t_has_valid_enum_topology(td_ctls_ptr)
    );
}

/**
 * Field predicates for tdcs_execution_control_fields_t
 */
static inline bool_t tdcs_execution_control_fields_t_has_valid_attributes(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_xfam(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        ((execution_control_fields_ptr->xfam & ~TDX_XFAM_FIXED0) == 0) && 
        ((execution_control_fields_ptr->xfam & TDX_XFAM_FIXED1) == TDX_XFAM_FIXED1)
    );
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_max_vcpus(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return execution_control_fields_ptr->max_vcpus <= MAX_VCPUS_PER_TD;
}

#if 0
static inline bool_t tdcs_execution_control_fields_t_has_valid_gpaw(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_eptp(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_secure_ept_lock(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_tsc_offset(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}
#endif

static inline bool_t tdcs_execution_control_fields_t_has_valid_tsc_multiplier(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        execution_control_fields_ptr->tsc_multiplier >= 4 &&
        execution_control_fields_ptr->tsc_multiplier <= 400
    );
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_tsc_frequency(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        execution_control_fields_ptr->tsc_frequency >= VIRT_TSC_FREQUENCY_MIN &&
        execution_control_fields_ptr->tsc_frequency <= VIRT_TSC_FREQUENCY_MAX
    );
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_cpuid_flags(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return fv_invariant_cpuid_flags_t(&execution_control_fields_ptr->cpuid_flags);
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_xbuff_size(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_notify_enables(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return fv_invariant_notify_enables_t(&execution_control_fields_ptr->notify_enables);
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_hp_lock_timeout(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        execution_control_fields_ptr->hp_lock_timeout >= MIN_HP_LOCK_TIMEOUT_USEC &&
        execution_control_fields_ptr->hp_lock_timeout <= MAX_HP_LOCK_TIMEOUT_USEC
    );
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_vm_ctls(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    _Static_assert(MAX_VMS == 4, "MAX_VMS changed, update invariant");
    return (
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[0]) &&
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[1]) &&
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[2]) &&
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[3])
    );
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_ia32_spec_ctrl_mask(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_config_flags(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        ((execution_control_fields_ptr->config_flags.raw & ~CONFIG_FLAGS_FIXED0) == 0) && 
        ((execution_control_fields_ptr->config_flags.raw & CONFIG_FLAGS_FIXED1) == CONFIG_FLAGS_FIXED1)
    );
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_td_ctls(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return fv_invariant_td_ctls_t(&execution_control_fields_ptr->td_ctls);
}

#if 0
static inline bool_t tdcs_execution_control_fields_t_has_valid_topology_enum_configured(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_cpuid_valid(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}

static inline bool_t tdcs_execution_control_fields_t_has_valid_xbuff_offsets(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for tdcs_execution_control_fields_t
 * @param execution_control_fields_ptr Pointer to the tdcs_execution_control_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_execution_control_fields_t(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        tdcs_execution_control_fields_t_has_valid_attributes(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_xfam(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_max_vcpus(execution_control_fields_ptr) &&
        //tdcs_execution_control_fields_t_has_valid_gpaw(execution_control_fields_ptr) &&
        //tdcs_execution_control_fields_t_has_valid_eptp(execution_control_fields_ptr) &&
        //tdcs_execution_control_fields_t_has_valid_secure_ept_lock(execution_control_fields_ptr) &&
        //tdcs_execution_control_fields_t_has_valid_tsc_offset(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_tsc_multiplier(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_tsc_frequency(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_cpuid_flags(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_xbuff_size(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_notify_enables(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_hp_lock_timeout(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_vm_ctls(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_ia32_spec_ctrl_mask(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_config_flags(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_td_ctls(execution_control_fields_ptr) // &&
        //tdcs_execution_control_fields_t_has_valid_topology_enum_configured(execution_control_fields_ptr) &&
        //tdcs_execution_control_fields_t_has_valid_cpuid_valid(execution_control_fields_ptr) &&
        //tdcs_execution_control_fields_t_has_valid_xbuff_offsets(execution_control_fields_ptr)
    );
}

/**
 * Field predicates for tdcs_measurement_fields_t
 */

#if 0
static inline bool_t tdcs_measurement_fields_t_has_valid_mr_td(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_mr_config_id(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_mr_owner(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_mr_owner_config(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_rtmr(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_last_teeinfo_hash(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_rtmr_lock(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_last_teeinfo_hash_valid(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}

static inline bool_t tdcs_measurement_fields_t_has_valid_td_sha_ctx(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for tdcs_measurement_fields_t
 * @param measurement_fields_ptr Pointer to the tdcs_measurement_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_measurement_fields_t(const tdcs_measurement_fields_t* measurement_fields_ptr) {
#if 0
    return (
        tdcs_measurement_fields_t_has_valid_mr_td(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_mr_config_id(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_mr_owner(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_mr_owner_config(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_rtmr(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_last_teeinfo_hash(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_rtmr_lock(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_last_teeinfo_hash_valid(measurement_fields_ptr) &&
        tdcs_measurement_fields_t_has_valid_td_sha_ctx(measurement_fields_ptr)
    );
#else
    return true;
#endif
}

/**
 * Field predicates for tdcs_migration_fields_t
 */

#if 0
static inline bool_t tdcs_migration_fields_t_has_valid_mig_dec_key_set(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_export_count(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_import_count(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_epoch(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_bw_epoch(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_total_mb_count(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_dec_key(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_dec_working_key(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_enc_key(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_enc_working_key(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_version(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_working_version(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_dirty_count(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}
#endif

static inline bool_t tdcs_migration_fields_t_has_valid_mig_count(const tdcs_migration_fields_t* migration_fields_ptr) {
    return migration_fields_ptr->mig_count <= MAX_MIGS;
}

static inline bool_t tdcs_migration_fields_t_has_valid_num_migs(const tdcs_migration_fields_t* migration_fields_ptr) {
    return (
        migration_fields_ptr->num_migs >= MIN_MIGS &&
        migration_fields_ptr->num_migs <= MAX_MIGS
    );
}

static inline bool_t tdcs_migration_fields_t_has_valid_num_migrated_vcpus(const tdcs_migration_fields_t* migration_fields_ptr) {
    return migration_fields_ptr->num_migrated_vcpus <= MAX_VCPUS_PER_TD;
}

#if 0
static inline bool_t tdcs_migration_fields_t_has_valid_preimport_uuid(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}

static inline bool_t tdcs_migration_fields_t_has_valid_mig_lock(const tdcs_migration_fields_t* migration_fields_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for tdcs_migration_fields_t
 * @param migration_fields_ptr Pointer to the tdcs_migration_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_migration_fields_t(const tdcs_migration_fields_t* migration_fields_ptr) {
    return (
        //tdcs_migration_fields_t_has_valid_mig_dec_key_set(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_export_count(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_import_count(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_epoch(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_bw_epoch(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_total_mb_count(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_dec_key(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_dec_working_key(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_enc_key(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_enc_working_key(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_version(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_working_version(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_dirty_count(migration_fields_ptr) &&
        tdcs_migration_fields_t_has_valid_mig_count(migration_fields_ptr) &&
        tdcs_migration_fields_t_has_valid_num_migs(migration_fields_ptr) &&
        tdcs_migration_fields_t_has_valid_num_migrated_vcpus(migration_fields_ptr) // &&
        //tdcs_migration_fields_t_has_valid_preimport_uuid(migration_fields_ptr) &&
        //tdcs_migration_fields_t_has_valid_mig_lock(migration_fields_ptr)
    );
}

/**
 * Field predicates for tdcs_virt_msrs_t
 */

#if 0
static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_basic(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_misc(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr0_fixed0(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr0_fixed1(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr4_fixed0(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr4_fixed1(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_procbased_ctls2(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_ept_vpid_cap(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_pinbased_ctls(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_procbased_ctls(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_exit_ctls(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_entry_ctls(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_vmfunc(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_procbased_ctls3(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_exit_ctls2(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}

static inline bool_t tdcs_virt_msrs_t_has_valid_virt_ia32_arch_capabilities(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for tdcs_virt_msrs_t
 * @param virt_msrs_ptr Pointer to the tdcs_virt_msrs_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_virt_msrs_t(const tdcs_virt_msrs_t* virt_msrs_ptr) {
#if 0
    return (
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_basic(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_misc(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr0_fixed0(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr0_fixed1(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr4_fixed0(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_cr4_fixed1(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_procbased_ctls2(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_ept_vpid_cap(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_pinbased_ctls(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_procbased_ctls(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_exit_ctls(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_true_entry_ctls(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_vmfunc(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_procbased_ctls3(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_vmx_exit_ctls2(virt_msrs_ptr) &&
        tdcs_virt_msrs_t_has_valid_virt_ia32_arch_capabilities(virt_msrs_ptr)
    );
#else
    return true;
#endif
}

/**
 * Field predicates for servtd_binding_t
 */

#if 0
static inline bool_t servtd_binding_t_has_valid_state(const servtd_binding_t* servtd_binding_ptr) {
    return true;
}

static inline bool_t servtd_binding_t_has_valid_type(const servtd_binding_t* servtd_binding_ptr) {
    return true;
}

static inline bool_t servtd_binding_t_has_valid_attributes(const servtd_binding_t* servtd_binding_ptr) {
    return true;
}

static inline bool_t servtd_binding_t_has_valid_uuid(const servtd_binding_t* servtd_binding_ptr) {
    return true;
}

static inline bool_t servtd_binding_t_has_valid_info_hash(const servtd_binding_t* servtd_binding_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for servtd_binding_t
 * @param servtd_binding_ptr Pointer to the servtd_binding_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_servtd_binding_t(const servtd_binding_t* servtd_binding_ptr) {
#if 0
    return (
        servtd_binding_t_has_valid_state(servtd_binding_ptr) &&
        servtd_binding_t_has_valid_type(servtd_binding_ptr) &&
        servtd_binding_t_has_valid_attributes(servtd_binding_ptr) &&
        servtd_binding_t_has_valid_uuid(servtd_binding_ptr) &&
        servtd_binding_t_has_valid_info_hash(servtd_binding_ptr)
    );
#else
    return true;
#endif
}

/**
 * Field predicates for tdcs_service_td_fields_t
 */
static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_hash(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return true;
}

static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_num(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return service_td_fields_ptr->servtd_num <= MAX_SERV_TDS;
}

static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_bindings_lock(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return true;
}

static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_bindings_table(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    _Static_assert(MAX_SERV_TDS == 1, "MAX_SERV_TDS changed, update invariant");
    return fv_invariant_servtd_binding_t(&service_td_fields_ptr->servtd_bindings_table[0]);
}

/**
 * @brief Invariant function for tdcs_service_td_fields_t
 * @param service_td_fields_ptr Pointer to the tdcs_service_td_fields_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_service_td_fields_t(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return (
        tdcs_service_td_fields_t_has_valid_servtd_hash(service_td_fields_ptr) &&
        tdcs_service_td_fields_t_has_valid_servtd_num(service_td_fields_ptr) &&
        tdcs_service_td_fields_t_has_valid_servtd_bindings_lock(service_td_fields_ptr) &&
        tdcs_service_td_fields_t_has_valid_servtd_bindings_table(service_td_fields_ptr)
    );
}

/**
 * Field predicates for tdcs_t
 */
static inline bool_t tdcs_t_has_valid_management_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_management_fields_t(&tdcs_ptr->management_fields);
}

static inline bool_t tdcs_t_has_valid_executions_ctl_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_execution_control_fields_t(&tdcs_ptr->executions_ctl_fields);
}

static inline bool_t tdcs_t_has_valid_epoch_tracking(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_epoch_tracking_fields_t(&tdcs_ptr->epoch_tracking);
}

static inline bool_t tdcs_t_has_valid_measurement_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_measurement_fields_t(&tdcs_ptr->measurement_fields);
}

static inline bool_t tdcs_t_has_valid_migration_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_migration_fields_t(&tdcs_ptr->migration_fields);
}

static inline bool_t tdcs_t_has_valid_virt_msrs(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_virt_msrs_t(&tdcs_ptr->virt_msrs);
}

static inline bool_t tdcs_t_has_valid_cpuid_config_vals(const tdcs_t* tdcs_ptr) {
    return true;
}

static inline bool_t tdcs_t_has_valid_service_td_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_service_td_fields_t(&tdcs_ptr->service_td_fields);
}

#if 0
static inline bool_t tdcs_t_has_valid_x2apic_ids(const tdcs_t* tdcs_ptr) {
    return true;
}

static inline bool_t tdcs_t_has_valid_MSR_BITMAPS(const tdcs_t* tdcs_ptr) {
    return true;
}

static inline bool_t tdcs_t_has_valid_sept_root_page(const tdcs_t* tdcs_ptr) {
    return true;
}

static inline bool_t tdcs_t_has_valid_zero_page(const tdcs_t* tdcs_ptr) {
    return true;
}

static inline bool_t tdcs_t_has_valid_migsc_links_page(const tdcs_t* tdcs_ptr) {
    return true;
}

static inline bool_t tdcs_t_has_valid_L2_SEPT_ROOT_pages(const tdcs_t* tdcs_ptr) {
    return true;
}
#endif

/**
 * @brief Invariant function for tdcs_t
 * @param tdcs_ptr Pointer to the tdcs_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdcs_t(const tdcs_t* tdcs_ptr) {
    return (
        tdcs_t_has_valid_management_fields(tdcs_ptr) &&
        tdcs_t_has_valid_executions_ctl_fields(tdcs_ptr) &&
        tdcs_t_has_valid_epoch_tracking(tdcs_ptr) &&
        tdcs_t_has_valid_measurement_fields(tdcs_ptr) &&
        tdcs_t_has_valid_migration_fields(tdcs_ptr) &&
        tdcs_t_has_valid_virt_msrs(tdcs_ptr) &&
        tdcs_t_has_valid_cpuid_config_vals(tdcs_ptr) &&
        tdcs_t_has_valid_service_td_fields(tdcs_ptr) // &&
        //tdcs_t_has_valid_x2apic_ids(tdcs_ptr) &&
        //tdcs_t_has_valid_MSR_BITMAPS(tdcs_ptr) &&
        //tdcs_t_has_valid_sept_root_page(tdcs_ptr) &&
        //tdcs_t_has_valid_zero_page(tdcs_ptr) &&
        //tdcs_t_has_valid_migsc_links_page(tdcs_ptr) &&
        //tdcs_t_has_valid_L2_SEPT_ROOT_pages(tdcs_ptr)
    );
}

#endif // __TD_CONTROL_STRUCTURES_INVARIANTS_H_INCLUDED__

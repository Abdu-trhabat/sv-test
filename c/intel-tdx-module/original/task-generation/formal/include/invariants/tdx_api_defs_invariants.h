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
 * @file tdx_api_defs_invariants.h
 * @brief TDX API Definitions Invariants
 */

#ifndef __TDX_API_DEFS_INVARIANTS_H_INCLUDED__
#define __TDX_API_DEFS_INVARIANTS_H_INCLUDED__

#include "tdx_api_defs.h"

/**
 * @brief Invariant function for tdx_leaf_and_version_t
 * @param leaf_and_version Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_tdx_leaf_and_version_t(const tdx_leaf_and_version_t* leaf_and_version) {
    return true;
}

/**
 * @brief Invariant function for page_info_api_input_t
 * @param page_info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_page_info_api_input_t(const page_info_api_input_t* page_info) {
    return true;
}

/**
 * @brief Invariant function for hkid_api_input_t
 * @param hkid_input Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_hkid_api_input_t(const hkid_api_input_t* hkid_input) {
    return true;
}

/**
 * @brief Invariant function for page_size_api_input_t
 * @param page_size Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_page_size_api_input_t(const page_size_api_input_t* page_size) {
    return true;
}

/**
 * @brief Invariant function for tdvmcall_control_t
 * @param control Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_tdvmcall_control_t(const tdvmcall_control_t* control) {
    return true;
}

/**
 * @brief Invariant function for vmcs_field_code_t
 * @param field_code Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_vmcs_field_code_t(const vmcs_field_code_t* field_code) {
    return true;
}

/**
 * @brief Invariant function for cpuid_values_field_code_t
 * @param field_code Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_cpuid_values_field_code_t(const cpuid_values_field_code_t* field_code) {
    return true;
}

/**
 * @brief Invariant function for md_field_id_t
 * @param field_id Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_md_field_id_t(const md_field_id_t* field_id) {
    return true;
}

/**
 * @brief Invariant function for cpuid_config_leaf_subleaf_t
 * @param leaf_subleaf Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_cpuid_config_leaf_subleaf_t(const cpuid_config_leaf_subleaf_t* leaf_subleaf) {
    return true;
}

/**
 * @brief Invariant function for cpuid_config_return_values_t
 * @param return_values Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_cpuid_config_return_values_t(const cpuid_config_return_values_t* return_values) {
    return true;
}

/**
 * @brief Invariant function for cpuid_config_t
 * @param config Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_cpuid_config_t(const cpuid_config_t* config) {
    return true;
}

/**
 * @brief Invariant function for td_param_attributes_t
 * @param attributes Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_param_attributes_t(const td_param_attributes_t* attributes) {
    return true;
}

/**
 * @brief Invariant function for eptp_controls_t
 * @param controls Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_eptp_controls_t(const eptp_controls_t* controls) {
    return true;
}

/**
 * @brief Invariant function for config_flags_t
 * @param flags Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_config_flags_t(const config_flags_t* flags) {
    return true;
}

/**
 * @brief Invariant function for td_params_t
 * @param params Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_params_t(const td_params_t* params) {
    return true;
}

/**
 * @brief Invariant function for cmr_info_entry_t
 * @param entry Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_cmr_info_entry_t(const cmr_info_entry_t* entry) {
    return true;
}

/**
 * @brief Invariant function for tdsysinfo_attributes_t
 * @param attributes Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_tdsysinfo_attributes_t(const tdsysinfo_attributes_t* attributes) {
    return true;
}

/**
 * @brief Invariant function for td_sys_info_t
 * @param info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_sys_info_t(const td_sys_info_t* info) {
    return true;
}

/**
 * @brief Invariant function for td_gpaw_t
 * @param gpaw Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_gpaw_t(const td_gpaw_t* gpaw) {
    return true;
}

/**
 * @brief Invariant function for td_num_of_vcpus_t
 * @param num_vcpus Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_num_of_vcpus_t(const td_num_of_vcpus_t* num_vcpus) {
    return true;
}

/**
 * @brief Invariant function for tdg_commands_available_t
 * @param commands Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_tdg_commands_available_t(const tdg_commands_available_t* commands) {
    return true;
}

/**
 * @brief Invariant function for td_report_type_t
 * @param report_type Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_report_type_t(const td_report_type_t* report_type) {
    return true;
}

/**
 * @brief Invariant function for report_mac_struct_t
 * @param report_mac Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_report_mac_struct_t(const report_mac_struct_t* report_mac) {
    return true;
}

/**
 * @brief Invariant function for tee_tcb_info_t
 * @param tee_tcb_info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_tee_tcb_info_t(const tee_tcb_info_t* tee_tcb_info) {
    return true;
}

/**
 * @brief Invariant function for td_info_t
 * @param td_info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_info_t(const td_info_t* td_info) {
    return true;
}

/**
 * @brief Invariant function for td_report_t
 * @param td_report Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_report_t(const td_report_t* td_report) {
    return true;
}

/**
 * @brief Invariant function for td_report_data_t
 * @param td_report_data Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_report_data_t(const td_report_data_t* td_report_data) {
    return true;
}

/**
 * @brief Invariant function for api_error_code_t
 * @param error_code Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_api_error_code_t(const api_error_code_t* error_code) {
    return true;
}

/**
 * Field predicates for tdmr_info_entry_t
 */

static inline bool_t tdmr_info_entry_t_has_valid_tdmr_base(const tdmr_info_entry_t* tdmr_info) {
    // Must be 1GB aligned and HKID bits must be 0
    return (tdmr_info->tdmr_base & 0x3FFFFFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_tdmr_size(const tdmr_info_entry_t* tdmr_info) {
    // Must be 1GB aligned
    return (tdmr_info->tdmr_size & 0x3FFFFFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_pamt_1g_base(const tdmr_info_entry_t* tdmr_info) {
    // Must be 4KB aligned and HKID bits must be 0
    return (tdmr_info->pamt_1g_base & 0xFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_pamt_1g_size(const tdmr_info_entry_t* tdmr_info) {
    // Must be 4KB aligned
    return (tdmr_info->pamt_1g_size & 0xFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_pamt_2m_base(const tdmr_info_entry_t* tdmr_info) {
    // Must be 4KB aligned and HKID bits must be 0
    return (tdmr_info->pamt_2m_base & 0xFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_pamt_2m_size(const tdmr_info_entry_t* tdmr_info) {
    // Must be 4KB aligned
    return (tdmr_info->pamt_2m_size & 0xFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_pamt_4k_base(const tdmr_info_entry_t* tdmr_info) {
    // Must be 4KB aligned and HKID bits must be 0
    return (tdmr_info->pamt_4k_base & 0xFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_pamt_4k_size(const tdmr_info_entry_t* tdmr_info) {
    // Must be 4KB aligned
    return (tdmr_info->pamt_4k_size & 0xFFF) == 0;
}

static inline bool_t tdmr_info_entry_t_has_valid_rsvd_areas(const tdmr_info_entry_t* tdmr_info) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdmr_info_entry_t_has_valid_ranges(const tdmr_info_entry_t* tdmr_info) {
    // 1g, 2m, and 4k are within the tdmr range
    // 1g, 2m, and 4k do not overlap with each other
    // Note: assume 1g < 2m < 4k for simplicity
    return (
        tdmr_info->pamt_1g_base >= tdmr_info->tdmr_base &&
        (tdmr_info->pamt_1g_base + tdmr_info->pamt_1g_size) <= tdmr_info->pamt_2m_base &&
        (tdmr_info->pamt_2m_base + tdmr_info->pamt_2m_size) <= tdmr_info->pamt_4k_base &&
        (tdmr_info->pamt_4k_base + tdmr_info->pamt_4k_size) <= (tdmr_info->tdmr_base + tdmr_info->tdmr_size)
    );
}

/**
 * @brief Invariant function for tdmr_info_entry_t
 * @param tdmr_info Pointer to the structure to check
 * @return True if all fields meet their constraints
 */
static inline bool_t fv_invariant_tdmr_info_entry_t(const tdmr_info_entry_t* tdmr_info) {
    return (
        tdmr_info_entry_t_has_valid_tdmr_base(tdmr_info) &&
        tdmr_info_entry_t_has_valid_tdmr_size(tdmr_info) &&
        tdmr_info_entry_t_has_valid_pamt_1g_base(tdmr_info) &&
        tdmr_info_entry_t_has_valid_pamt_1g_size(tdmr_info) &&
        tdmr_info_entry_t_has_valid_pamt_2m_base(tdmr_info) &&
        tdmr_info_entry_t_has_valid_pamt_2m_size(tdmr_info) &&
        tdmr_info_entry_t_has_valid_pamt_4k_base(tdmr_info) &&
        tdmr_info_entry_t_has_valid_pamt_4k_size(tdmr_info) &&
        tdmr_info_entry_t_has_valid_rsvd_areas(tdmr_info) &&
        tdmr_info_entry_t_has_valid_ranges(tdmr_info)
    );
}

/**
 * @brief Invariant function for tdaccept_vmx_eeq_info_t
 * @param info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_tdaccept_vmx_eeq_info_t(const tdaccept_vmx_eeq_info_t* info) {
    return true;
}

/**
 * @brief Invariant function for vcpu_and_flags_t
 * @param vcpu_flags Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_vcpu_and_flags_t(const vcpu_and_flags_t* vcpu_flags) {
    return true;
}

/**
 * @brief Invariant function for gpa_list_info_t
 * @param gpa_list_info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gpa_list_info_t(const gpa_list_info_t* gpa_list_info) {
    return true;
}

/**
 * @brief Invariant function for gpa_list_entry_t
 * @param gpa_list_entry Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gpa_list_entry_t(const gpa_list_entry_t* gpa_list_entry) {
    return true;
}

/**
 * @brief Invariant function for tdx_features_enum0_t
 * @param features Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_tdx_features_enum0_t(const tdx_features_enum0_t* features) {
    return true;
}

/**
 * @brief Invariant function for gprs_state_t
 * @param gprs_state Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gprs_state_t(const gprs_state_t* gprs_state) {
    return true;
}

/**
 * @brief Invariant function for l2_enter_guest_state_t
 * @param guest_state Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_l2_enter_guest_state_t(const l2_enter_guest_state_t* guest_state) {
    return true;
}

/**
 * @brief Invariant function for td_exit_qualification_t
 * @param exit_qualification Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_exit_qualification_t(const td_exit_qualification_t* exit_qualification) {
    return true;
}

/**
 * @brief Invariant function for l2_enter_seg_details_t
 * @param seg_details Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_l2_enter_seg_details_t(const l2_enter_seg_details_t* seg_details) {
    return true;
}

/**
 * @brief Invariant function for l2_enter_additional_exit_info_t
 * @param exit_info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_l2_enter_additional_exit_info_t(const l2_enter_additional_exit_info_t* exit_info) {
    return true;
}

/**
 * @brief Invariant function for td_handle_and_flags_t
 * @param handle_flags Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_td_handle_and_flags_t(const td_handle_and_flags_t* handle_flags) {
    return true;
}

/**
 * @brief Invariant function for gpa_mapping_and_flags_t
 * @param mapping_flags Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gpa_mapping_and_flags_t(const gpa_mapping_and_flags_t* mapping_flags) {
    return true;
}

/**
 * @brief Invariant function for gpa_attr_single_vm_t
 * @param attr Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gpa_attr_single_vm_t(const gpa_attr_single_vm_t* attr) {
    return true;
}

/**
 * @brief Invariant function for gpa_attr_t
 * @param attr Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gpa_attr_t(const gpa_attr_t* attr) {
    return true;
}

/**
 * @brief Invariant function for gla_list_entry_t
 * @param entry Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gla_list_entry_t(const gla_list_entry_t* entry) {
    return true;
}

/**
 * @brief Invariant function for gla_list_info_t
 * @param info Pointer to the structure to check
 * @return Always returns true (placeholder)
 */
static inline bool_t fv_invariant_gla_list_info_t(const gla_list_info_t* info) {
    return true;
}

#endif // __TDX_API_DEFS_INVARIANTS_H_INCLUDED__

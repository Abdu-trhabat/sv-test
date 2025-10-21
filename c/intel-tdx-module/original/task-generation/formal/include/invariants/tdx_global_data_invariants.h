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
 * @file tdx_global_data_invariants.h
 * @brief TDX global data invariants
 */
#ifndef __TDX_GLOBAL_DATA_INVARIANTS_H_INCLUDED__
#define __TDX_GLOBAL_DATA_INVARIANTS_H_INCLUDED__

#include "data_structures/tdx_global_data.h"

/**
 * Field predicates for xsave_area_no_extended_t
 */

#if 0
static inline bool_t xsave_area_no_extended_t_has_valid_legacy_region(const xsave_area_no_extended_t* xsave_area) {
    // Assuming fv_invariant_xsave_legacy_region_t is defined elsewhere
    // return fv_invariant_xsave_legacy_region_t(&xsave_area->legacy_region);
    return true; // Placeholder for detailed condition
}

static inline bool_t xsave_area_no_extended_t_has_valid_xsave_header(const xsave_area_no_extended_t* xsave_area) {
    // Assuming fv_invariant_xsave_header_t is defined elsewhere
    // return fv_invariant_xsave_header_t(&xsave_area->xsave_header);
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for xsave_area_no_extended_t
 * @param xsave_area Pointer to the xsave_area_no_extended_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_xsave_area_no_extended_t(const xsave_area_no_extended_t* xsave_area)
{
#if 0
    return (
        xsave_area_no_extended_t_has_valid_legacy_region(xsave_area) &&
        xsave_area_no_extended_t_has_valid_xsave_header(xsave_area)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for tdx_global_state_t
 */
static inline bool_t tdx_global_state_t_has_valid_sys_state(const tdx_global_state_t* global_state) {
    // Check if sys_state is a valid enumeration value
    return (
        global_state->sys_state == SYSINIT_PENDING ||
        global_state->sys_state == SYSINIT_DONE ||
        global_state->sys_state == SYSCONFIG_DONE ||
        global_state->sys_state == SYS_READY ||
        global_state->sys_state == SYS_SHUTDOWN
    );
}

/**
 * @brief Invariant function for tdx_global_state_t
 * @param global_state Pointer to the tdx_global_state_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdx_global_state_t(const tdx_global_state_t* global_state)
{
    return tdx_global_state_t_has_valid_sys_state(global_state);
}

/**
 * Field predicates for kot_entry_t
 */
static inline bool_t kot_entry_t_has_valid_wbinvd_bitmap(const kot_entry_t* kot_entry) {
    return true; // Placeholder for detailed condition
}

static inline bool_t kot_entry_t_has_valid_state(const kot_entry_t* kot_entry) {
    return (
        kot_entry->state == KOT_STATE_HKID_FREE ||
        kot_entry->state == KOT_STATE_HKID_ASSIGNED ||
        kot_entry->state == KOT_STATE_HKID_FLUSHED ||
        kot_entry->state == KOT_STATE_HKID_RESERVED
    );
}

/**
 * @brief Invariant function for kot_entry_t
 * @param kot_entry Pointer to the kot_entry_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_kot_entry_t(const kot_entry_t* kot_entry)
{
    return (
        kot_entry_t_has_valid_wbinvd_bitmap(kot_entry) &&
        kot_entry_t_has_valid_state(kot_entry)
    );
}

/**
 * Field predicates for kot_t
 */
static inline bool_t kot_t_has_valid_lock(const kot_t* kot) {
    // Assuming fv_invariant_sharex_lock_t is defined elsewhere
    // return fv_invariant_sharex_lock_t(&kot->lock);
    return true; // Placeholder for detailed condition
}

static inline bool_t kot_t_has_valid_entries(const kot_t* kot) {
#ifdef TDXFV_ENABLE_LOOP_IN_HARNESS
    bool_t all_entries_valid = true;
    for (uint32_t i = 0; i < MAX_HKIDS; i++) {
        all_entries_valid &= fv_invariant_kot_entry_t(&kot->entries[i]);
    }
    return all_entries_valid;
#else
    return fv_invariant_kot_entry_t(&kot->entries[0]);
#endif
}

/**
 * @brief Invariant function for kot_t
 * @param kot Pointer to the kot_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_kot_t(const kot_t* kot)
{
    return (
        kot_t_has_valid_lock(kot) &&
        kot_t_has_valid_entries(kot)
    );
}

/**
 * Field predicates for wbt_entry_t
 */

#if 0
static inline bool_t wbt_entry_t_has_valid_intr_point(const wbt_entry_t* wbt_entry) {
    return true; // Placeholder for detailed condition
}

static inline bool_t wbt_entry_t_has_valid_hkid_flushed(const wbt_entry_t* wbt_entry) {
    return true; // Placeholder for detailed condition
}

static inline bool_t wbt_entry_t_has_valid_entry_lock(const wbt_entry_t* wbt_entry) {
    // Assuming fv_invariant_mutex_lock_t is defined elsewhere
    // return fv_invariant_mutex_lock_t(&wbt_entry->entry_lock);
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for wbt_entry_t
 * @param wbt_entry Pointer to the wbt_entry_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_wbt_entry_t(const wbt_entry_t* wbt_entry)
{
#if 0
    return (
        wbt_entry_t_has_valid_intr_point(wbt_entry) &&
        wbt_entry_t_has_valid_hkid_flushed(wbt_entry) &&
        wbt_entry_t_has_valid_entry_lock(wbt_entry)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for tdmr_entry_t
 */
static inline bool_t tdmr_entry_t_has_valid_base(const tdmr_entry_t* tdmr_entry) {
    // Base should be page-aligned (4KB)
    // Base should be less than the maximum physical address (MAX_PA)
    return (
        (tdmr_entry->base & 0xFFF) == 0 &&
        tdmr_entry->base < BIT(MAX_PA)
    );
}

static inline bool_t tdmr_entry_t_has_valid_size(const tdmr_entry_t* tdmr_entry) {
    // Size should be page-aligned (4KB)
    // Size does not exceed available physical address space    
    return (
        (tdmr_entry->size & 0xFFF) == 0 &&
        tdmr_entry->size <= (BIT(MAX_PA) - tdmr_entry->base)
    );
}

static inline bool_t tdmr_entry_t_has_valid_last_initialized(const tdmr_entry_t* tdmr_entry) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdmr_entry_t_has_valid_pamt_bases(const tdmr_entry_t* tdmr_entry) {
    // PAMT bases should be page-aligned
    // PAMT bases should be within the TDMR size
    // PAMT bases should not overlap
    return (
        (tdmr_entry->pamt_1g_base & 0xFFF) == 0 &&
        (tdmr_entry->pamt_2m_base & 0xFFF) == 0 &&
        (tdmr_entry->pamt_4k_base & 0xFFF) == 0 &&
        tdmr_entry->pamt_1g_base >= tdmr_entry->base &&
        tdmr_entry->pamt_2m_base >= tdmr_entry->base &&
        tdmr_entry->pamt_4k_base >= tdmr_entry->base &&
        tdmr_entry->pamt_1g_base < tdmr_entry->base + tdmr_entry->size &&
        tdmr_entry->pamt_2m_base < tdmr_entry->base + tdmr_entry->size &&
        tdmr_entry->pamt_4k_base < tdmr_entry->base + tdmr_entry->size &&
        (tdmr_entry->pamt_1g_base == 0 || tdmr_entry->pamt_1g_base != tdmr_entry->pamt_2m_base) &&
        (tdmr_entry->pamt_1g_base == 0 || tdmr_entry->pamt_1g_base != tdmr_entry->pamt_4k_base) &&
        (tdmr_entry->pamt_2m_base == 0 || tdmr_entry->pamt_2m_base != tdmr_entry->pamt_1g_base) &&
        (tdmr_entry->pamt_2m_base == 0 || tdmr_entry->pamt_2m_base != tdmr_entry->pamt_4k_base) &&
        (tdmr_entry->pamt_4k_base == 0 || tdmr_entry->pamt_4k_base != tdmr_entry->pamt_1g_base) &&
        (tdmr_entry->pamt_4k_base == 0 || tdmr_entry->pamt_4k_base != tdmr_entry->pamt_2m_base)
    );
}

static inline bool_t tdmr_entry_t_has_valid_num_of_pamt_blocks(const tdmr_entry_t* tdmr_entry) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdmr_entry_t_has_valid_num_of_rsvd_areas(const tdmr_entry_t* tdmr_entry) {
    // Should not exceed MAX_RESERVED_AREAS
    return (tdmr_entry->num_of_rsvd_areas <= MAX_RESERVED_AREAS);
}

static inline bool_t tdmr_entry_t_has_valid_rsvd_areas(const tdmr_entry_t* tdmr_entry) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdmr_entry_t_has_valid_lock(const tdmr_entry_t* tdmr_entry) {
    // Assuming fv_invariant_mutex_lock_t is defined elsewhere
    // return fv_invariant_mutex_lock_t(&tdmr_entry->lock);
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for tdmr_entry_t
 * @param tdmr_entry Pointer to the tdmr_entry_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdmr_entry_t(const tdmr_entry_t* tdmr_entry)
{
    return (
        tdmr_entry_t_has_valid_base(tdmr_entry) &&
        tdmr_entry_t_has_valid_size(tdmr_entry) &&
        tdmr_entry_t_has_valid_last_initialized(tdmr_entry) &&
        tdmr_entry_t_has_valid_pamt_bases(tdmr_entry) &&
        tdmr_entry_t_has_valid_num_of_pamt_blocks(tdmr_entry) &&
        tdmr_entry_t_has_valid_num_of_rsvd_areas(tdmr_entry) &&
        tdmr_entry_t_has_valid_rsvd_areas(tdmr_entry) &&
        tdmr_entry_t_has_valid_lock(tdmr_entry)
    );
}

/**
 * Field predicates for platform_common_config_t
 */

#if 0
static inline bool_t platform_common_config_t_has_valid_ia32_tsc_adjust(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_ia32_vmx_basic(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_ia32_vmx_misc(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_vmx_ctls(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_ia32_vmx_ept_vpid_cap(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_cr_fixed(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_ia32_mtrrcap(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_capabilities(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_tme(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_ia32_misc_package_ctls(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}

static inline bool_t platform_common_config_t_has_valid_smrr(const platform_common_config_t* platform_config) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for platform_common_config_t
 * @param platform_config Pointer to the platform_common_config_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_platform_common_config_t(const platform_common_config_t* platform_config)
{
#if 0
    return (
        platform_common_config_t_has_valid_ia32_tsc_adjust(platform_config) &&
        platform_common_config_t_has_valid_ia32_vmx_basic(platform_config) &&
        platform_common_config_t_has_valid_ia32_vmx_misc(platform_config) &&
        platform_common_config_t_has_valid_vmx_ctls(platform_config) &&
        platform_common_config_t_has_valid_ia32_vmx_ept_vpid_cap(platform_config) &&
        platform_common_config_t_has_valid_cr_fixed(platform_config) &&
        platform_common_config_t_has_valid_ia32_mtrrcap(platform_config) &&
        platform_common_config_t_has_valid_capabilities(platform_config) &&
        platform_common_config_t_has_valid_tme(platform_config) &&
        platform_common_config_t_has_valid_ia32_misc_package_ctls(platform_config) &&
        platform_common_config_t_has_valid_smrr(platform_config)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for td_vmcs_values_t
 */

#if 0
static inline bool_t td_vmcs_values_t_has_valid_pinbased_ctls(const td_vmcs_values_t* td_vmcs_values) {
    return true; // Placeholder for detailed condition
}

static inline bool_t td_vmcs_values_t_has_valid_procbased_ctls(const td_vmcs_values_t* td_vmcs_values) {
    return true; // Placeholder for detailed condition
}

static inline bool_t td_vmcs_values_t_has_valid_procbased_ctls2(const td_vmcs_values_t* td_vmcs_values) {
    return true; // Placeholder for detailed condition
}

static inline bool_t td_vmcs_values_t_has_valid_procbased_ctls3(const td_vmcs_values_t* td_vmcs_values) {
    return true; // Placeholder for detailed condition
}

static inline bool_t td_vmcs_values_t_has_valid_exit_ctls(const td_vmcs_values_t* td_vmcs_values) {
    return true; // Placeholder for detailed condition
}

static inline bool_t td_vmcs_values_t_has_valid_entry_ctls(const td_vmcs_values_t* td_vmcs_values) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for td_vmcs_values_t
 * @param td_vmcs_values Pointer to the td_vmcs_values_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_td_vmcs_values_t(const td_vmcs_values_t* td_vmcs_values)
{
#if 0
    return (
        td_vmcs_values_t_has_valid_pinbased_ctls(td_vmcs_values) &&
        td_vmcs_values_t_has_valid_procbased_ctls(td_vmcs_values) &&
        td_vmcs_values_t_has_valid_procbased_ctls2(td_vmcs_values) &&
        td_vmcs_values_t_has_valid_procbased_ctls3(td_vmcs_values) &&
        td_vmcs_values_t_has_valid_exit_ctls(td_vmcs_values) &&
        td_vmcs_values_t_has_valid_entry_ctls(td_vmcs_values)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for vmcs_fields_info_t
 */

#if 0
static inline bool_t vmcs_fields_info_t_has_valid_encoding(const vmcs_fields_info_t* vmcs_fields_info) {
    return true; // Placeholder for detailed condition
}

static inline bool_t vmcs_fields_info_t_has_valid_value(const vmcs_fields_info_t* vmcs_fields_info) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for vmcs_fields_info_t
 * @param vmcs_fields_info Pointer to the vmcs_fields_info_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_vmcs_fields_info_t(const vmcs_fields_info_t* vmcs_fields_info)
{
#if 0
    return (
        vmcs_fields_info_t_has_valid_encoding(vmcs_fields_info) &&
        vmcs_fields_info_t_has_valid_value(vmcs_fields_info)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for vmcs_host_values_t
 */
static inline bool_t vmcs_host_values_t_has_valid_fields(const vmcs_host_values_t* vmcs_host_values) {
    return (
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CR0) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CR3) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CR4) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->SS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->FS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->GS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->TR) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IA32_S_CET) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IA32_PAT) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IA32_EFER) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->FS_BASE) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IDTR_BASE) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->GDTR_BASE)
    );
}

/**
 * @brief Invariant function for vmcs_host_values_t
 * @param vmcs_host_values Pointer to the vmcs_host_values_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_vmcs_host_values_t(const vmcs_host_values_t* vmcs_host_values)
{
    return vmcs_host_values_t_has_valid_fields(vmcs_host_values);
}

/**
 * Field predicates for xsave_component_info_t
 */

#if 0
static inline bool_t xsave_component_info_t_has_valid_size(const xsave_component_info_t* xsave_component_info) {
    return true; // Placeholder for detailed condition
}

static inline bool_t xsave_component_info_t_has_valid_align(const xsave_component_info_t* xsave_component_info) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for xsave_component_info_t
 * @param xsave_component_info Pointer to the xsave_component_info_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_xsave_component_info_t(const xsave_component_info_t* xsave_component_info)
{
#if 0
    return (
        xsave_component_info_t_has_valid_size(xsave_component_info) &&
        xsave_component_info_t_has_valid_align(xsave_component_info)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for tdx_module_global_t
 * Note: This is a large structure, so we'll check some key fields
 */
static inline bool_t tdx_module_global_t_has_valid_xbuf(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_xsave_area_no_extended_t(&tdx_module_global->xbuf);
}

static inline bool_t tdx_module_global_t_has_valid_global_lock(const tdx_module_global_t* tdx_module_global) {
    // return fv_invariant_sharex_lock_t(&tdx_module_global->global_lock);
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_global_state(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_tdx_global_state_t(&tdx_module_global->global_state);
}

static inline bool_t tdx_module_global_t_has_valid_kot(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_kot_t(&tdx_module_global->kot);
}

static inline bool_t tdx_module_global_t_has_valid_wbt_entries(const tdx_module_global_t* tdx_module_global) {
    _Static_assert(MAX_PKGS == 8, "MAX_PKGS changed, update invariant accordingly");
    return (
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[0]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[1]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[2]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[3]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[4]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[5]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[6]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[7])
    );
}

static inline bool_t tdx_module_global_t_has_valid_tdmr_table(const tdx_module_global_t* tdx_module_global) {
#ifdef TDXFV_ENABLE_LOOP_IN_HARNESS
    bool_t all_entries_valid = true;
    for (uint32_t i = 0; i < MAX_TDMRS; i++) {
        all_entries_valid &= fv_invariant_tdmr_entry_t(&tdx_module_global->tdmr_table[i]);
    }
    return all_entries_valid;
#else
    return fv_invariant_tdmr_entry_t(&tdx_module_global->tdmr_table[0]);
#endif
}

static inline bool_t tdx_module_global_t_has_valid_plt_common_config(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_platform_common_config_t(&tdx_module_global->plt_common_config);
}

static inline bool_t tdx_module_global_t_has_valid_xsave_comp(const tdx_module_global_t* tdx_module_global) {
    _Static_assert(XCR0_MAX_VALID_BIT == 18, "XCR0_MAX_VALID_BIT changed, update invariant accordingly");
    return (
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[0]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[1]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[2]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[3]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[4]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[5]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[6]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[7]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[8]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[9]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[10]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[11]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[12]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[13]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[14]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[15]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[16]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[17])
    );
}

static inline bool_t tdx_module_global_t_has_valid_td_vmcs_values(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_td_vmcs_values_t(&tdx_module_global->td_vmcs_values);
}

static inline bool_t tdx_module_global_t_has_valid_l2_vmcs_values(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_td_vmcs_values_t(&tdx_module_global->l2_vmcs_values);
}

static inline bool_t tdx_module_global_t_has_valid_seam_vmcs_host_values(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_vmcs_host_values_t(&tdx_module_global->seam_vmcs_host_values);
}

static inline bool_t tdx_module_global_t_has_valid_hkid_mask(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_hkid_start_bit(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->hkid_start_bit < 64; // Must be a valid bit position
}

static inline bool_t tdx_module_global_t_has_valid_max_pa(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->max_pa >= 0 && tdx_module_global->max_pa <= MAX_PA; // Max physical address bits
}

static inline bool_t tdx_module_global_t_has_valid_num_of_lps(const tdx_module_global_t* tdx_module_global) {
    // Based on (2024) TDX-capable systems
    return tdx_module_global->num_of_lps >= 0 && tdx_module_global->num_of_lps <= 256;
}

static inline bool_t tdx_module_global_t_has_valid_num_of_pkgs(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_pkgs >= 0 && tdx_module_global->num_of_pkgs <= MAX_PKGS;
}

static inline bool_t tdx_module_global_t_has_valid_num_of_init_lps(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_init_lps <= tdx_module_global->num_of_lps;
}

static inline bool_t tdx_module_global_t_has_valid_num_of_init_pkgs(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_init_pkgs <= tdx_module_global->num_of_pkgs;
}

static inline bool_t tdx_module_global_t_has_valid_module_hv(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_min_update_hv(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_no_downgrade(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_num_handoff_pages(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_handoff_pages >= TDX_MIN_HANDOFF_PAGES;
}

static inline bool_t tdx_module_global_t_has_valid_seamdb_index(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_seamdb_nonce(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_pkg_config_bitmap(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_private_hkid_min(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->private_hkid_min < MAX_HKIDS;
}

static inline bool_t tdx_module_global_t_has_valid_private_hkid_max(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->private_hkid_max < MAX_HKIDS && 
           tdx_module_global->private_hkid_max >= tdx_module_global->private_hkid_min;
}

static inline bool_t tdx_module_global_t_has_valid_hkid(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->hkid < MAX_HKIDS;
}

static inline bool_t tdx_module_global_t_has_valid_num_of_tdmr_entries(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_tdmr_entries <= MAX_TDMRS;
}

static inline bool_t tdx_module_global_t_has_valid_seamrr_base(const tdx_module_global_t* tdx_module_global) {
    // SEAMRR base should be page-aligned
    // SEAMRR base should be less than the maximum physical address (MAX_PA)
    return (
        (tdx_module_global->seamrr_base & 0xFFF) == 0 && 
        tdx_module_global->seamrr_base < BIT(MAX_PA)
    );
}

static inline bool_t tdx_module_global_t_has_valid_seamrr_size(const tdx_module_global_t* tdx_module_global) {
    // SEAMRR size should be page-aligned
    // SEAMRR size should not exceed the maximum physical address space
    return (
        (tdx_module_global->seamrr_size & 0xFFF) == 0 && 
        tdx_module_global->seamrr_size <= (BIT(MAX_PA) - tdx_module_global->seamrr_base)
    );
}

static inline bool_t tdx_module_global_t_has_valid_num_of_cached_sub_blocks(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_x2apic_shift_and_mask(const tdx_module_global_t* tdx_module_global) {
    return (
        tdx_module_global->x2apic_core_id_shift_count < 32 && 
        tdx_module_global->x2apic_pkg_id_shift_count < 32
    );
}

static inline bool_t tdx_module_global_t_has_valid_feature_flags(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_clock_frequencies(const tdx_module_global_t* tdx_module_global) {
    return (
        tdx_module_global->crystal_clock_frequency > 0 && 
        tdx_module_global->native_tsc_frequency > 0
    );
}

static inline bool_t tdx_module_global_t_has_valid_xsave_masks(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_cpuid_values(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_cpuid_leaf_values(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_perfmon_values(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_fixed_bits(const tdx_module_global_t* tdx_module_global) {
    return (~tdx_module_global->attributes_fixed0 & tdx_module_global->attributes_fixed1) == 0;
}

static inline bool_t tdx_module_global_t_has_valid_tdmr_info_copy(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_seam_capabilities(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_seamverifyreport_available(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_rdseed_values(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_sha384_method(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_platform_info(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

#ifdef DEBUGFEATURE_TDX_DBG_TRACE
static inline bool_t tdx_module_global_t_has_valid_debug_control(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdx_module_global_t_has_valid_trace_buffer(const tdx_module_global_t* tdx_module_global) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for tdx_module_global_t
 * @param tdx_module_global Pointer to the tdx_module_global_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdx_module_global_t(const tdx_module_global_t* tdx_module_global)
{
    return (
        tdx_module_global_t_has_valid_xbuf(tdx_module_global) &&
        tdx_module_global_t_has_valid_global_lock(tdx_module_global) &&
        tdx_module_global_t_has_valid_hkid_mask(tdx_module_global) &&
        tdx_module_global_t_has_valid_hkid_start_bit(tdx_module_global) &&
        tdx_module_global_t_has_valid_max_pa(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_lps(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_pkgs(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_init_lps(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_init_pkgs(tdx_module_global) &&
        tdx_module_global_t_has_valid_module_hv(tdx_module_global) &&
        tdx_module_global_t_has_valid_min_update_hv(tdx_module_global) &&
        tdx_module_global_t_has_valid_no_downgrade(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_handoff_pages(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamdb_index(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamdb_nonce(tdx_module_global) &&
        tdx_module_global_t_has_valid_pkg_config_bitmap(tdx_module_global) &&
        tdx_module_global_t_has_valid_private_hkid_min(tdx_module_global) &&
        tdx_module_global_t_has_valid_private_hkid_max(tdx_module_global) &&
        tdx_module_global_t_has_valid_hkid(tdx_module_global) &&
        tdx_module_global_t_has_valid_global_state(tdx_module_global) &&
        tdx_module_global_t_has_valid_kot(tdx_module_global) &&
        tdx_module_global_t_has_valid_wbt_entries(tdx_module_global) &&
        tdx_module_global_t_has_valid_tdmr_table(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_tdmr_entries(tdx_module_global) &&
        tdx_module_global_t_has_valid_plt_common_config(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamrr_base(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamrr_size(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_cached_sub_blocks(tdx_module_global) &&
        tdx_module_global_t_has_valid_x2apic_shift_and_mask(tdx_module_global) &&
        tdx_module_global_t_has_valid_feature_flags(tdx_module_global) &&
        tdx_module_global_t_has_valid_clock_frequencies(tdx_module_global) &&
        tdx_module_global_t_has_valid_xsave_masks(tdx_module_global) &&
        tdx_module_global_t_has_valid_xsave_comp(tdx_module_global) &&
        tdx_module_global_t_has_valid_cpuid_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_cpuid_leaf_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_td_vmcs_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_l2_vmcs_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_seam_vmcs_host_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_perfmon_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_fixed_bits(tdx_module_global) &&
        tdx_module_global_t_has_valid_tdmr_info_copy(tdx_module_global) &&
        tdx_module_global_t_has_valid_seam_capabilities(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamverifyreport_available(tdx_module_global) &&
        tdx_module_global_t_has_valid_rdseed_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_sha384_method(tdx_module_global) &&
        tdx_module_global_t_has_valid_platform_info(tdx_module_global)
#ifdef DEBUGFEATURE_TDX_DBG_TRACE
        && tdx_module_global_t_has_valid_debug_control(tdx_module_global)
        && tdx_module_global_t_has_valid_trace_buffer(tdx_module_global)
#endif
    );
}

#endif // __TDX_GLOBAL_DATA_INVARIANTS_H_INCLUDED__
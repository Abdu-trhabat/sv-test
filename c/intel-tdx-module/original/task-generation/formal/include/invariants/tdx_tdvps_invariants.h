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
 * @file tdx_tdvps_invariants.h
 * @brief tdvps invariants
 */
#ifndef __TDX_TDVPS_INVARIANTS_H_INCLUDED__
#define __TDX_TDVPS_INVARIANTS_H_INCLUDED__

#include "data_structures/tdx_tdvps.h"

/**
 * Field predicates for l2_vcpu_ctrl_t
 */

#if 0
static inline bool_t l2_vcpu_ctrl_t_has_valid_enable_shared_eptp(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vcpu_ctrl_t_has_valid_enable_tdvmcall(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vcpu_ctrl_t_has_valid_enable_extended_ve(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vcpu_ctrl_t_has_valid_reserved(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t l2_vcpu_ctrl_t_has_valid_raw(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return (l2_vcpu_ctrl_ptr->raw & ~ALLOWED_L2_VCPU_CTLS) == 0;
}

/**
 * @brief Invariant function for l2_vcpu_ctrl_t
 * @param l2_vcpu_ctrl_ptr Pointer to the l2_vcpu_ctrl_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_l2_vcpu_ctrl_t(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return (
        //l2_vcpu_ctrl_t_has_valid_enable_shared_eptp(l2_vcpu_ctrl_ptr) &&
        //l2_vcpu_ctrl_t_has_valid_enable_tdvmcall(l2_vcpu_ctrl_ptr) &&
        //l2_vcpu_ctrl_t_has_valid_enable_extended_ve(l2_vcpu_ctrl_ptr) &&
        //l2_vcpu_ctrl_t_has_valid_reserved(l2_vcpu_ctrl_ptr) &&
        l2_vcpu_ctrl_t_has_valid_raw(l2_vcpu_ctrl_ptr)
    );
}

/**
 * Field predicates for l2_vm_debug_ctls_t
 */

#if 0
static inline bool_t l2_vm_debug_ctls_t_has_valid_td_exit_on_l1_to_l2(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vm_debug_ctls_t_has_valid_td_exit_on_l2_to_l1(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vm_debug_ctls_t_has_valid_td_exit_on_l2_vm_exit(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vm_debug_ctls_t_has_valid_reserved(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    // return (l2_vm_debug_ctls_ptr->reserved == 0);
    return true;
}
#endif

static inline bool_t l2_vm_debug_ctls_t_has_valid_raw(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    return (l2_vm_debug_ctls_ptr->raw & ~ALLOWED_L2_VM_DEBUG_CTLS) == 0;
}

/**
 * @brief Invariant function for l2_vm_debug_ctls_t
 * @param l2_vm_debug_ctls_ptr Pointer to the l2_vm_debug_ctls_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_l2_vm_debug_ctls_t(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    return (
        //l2_vm_debug_ctls_t_has_valid_td_exit_on_l1_to_l2(l2_vm_debug_ctls_ptr) &&
        //l2_vm_debug_ctls_t_has_valid_td_exit_on_l2_to_l1(l2_vm_debug_ctls_ptr) &&
        //l2_vm_debug_ctls_t_has_valid_td_exit_on_l2_vm_exit(l2_vm_debug_ctls_ptr) &&
        //l2_vm_debug_ctls_t_has_valid_reserved(l2_vm_debug_ctls_ptr) &&
        l2_vm_debug_ctls_t_has_valid_raw(l2_vm_debug_ctls_ptr)
    );
}

/**
 * Field predicates for tdvps_ve_info_t
 */
static inline bool_t tdvps_ve_info_t_has_valid_exit_reason(const tdvps_ve_info_t* ve_info_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_ve_info_t_has_valid_valid(const tdvps_ve_info_t* ve_info_ptr) {
    return (
        ve_info_ptr->valid == TDVPS_VE_INFO_VALID_CONTENT || 
        ve_info_ptr->valid == TDVPS_VE_INFO_NOT_VALID
    );
}

#if 0
static inline bool_t tdvps_ve_info_t_has_valid_exit_qualification(const tdvps_ve_info_t* ve_info_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_ve_info_t_has_valid_gla(const tdvps_ve_info_t* ve_info_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_ve_info_t_has_valid_gpa(const tdvps_ve_info_t* ve_info_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_ve_info_t_has_valid_eptp_index(const tdvps_ve_info_t* ve_info_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_ve_info_t_has_valid_inst_len_and_info(const tdvps_ve_info_t* ve_info_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for tdvps_ve_info_t
 * @param ve_info_ptr Pointer to the tdvps_ve_info_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_ve_info_t(const tdvps_ve_info_t* ve_info_ptr) {
    return (
        tdvps_ve_info_t_has_valid_exit_reason(ve_info_ptr) &&
        tdvps_ve_info_t_has_valid_valid(ve_info_ptr) // &&
        //tdvps_ve_info_t_has_valid_exit_qualification(ve_info_ptr) &&
        //tdvps_ve_info_t_has_valid_gla(ve_info_ptr) &&
        //tdvps_ve_info_t_has_valid_gpa(ve_info_ptr) &&
        //tdvps_ve_info_t_has_valid_eptp_index(ve_info_ptr) &&
        //tdvps_ve_info_t_has_valid_inst_len_and_info(ve_info_ptr)
    );
}

/**
 * Field predicates for vcpu_state_t
 */
static inline bool_t vcpu_state_t_has_valid_vmxip(const vcpu_state_t* vcpu_state_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for vcpu_state_t
 * @param vcpu_state_ptr Pointer to the vcpu_state_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_vcpu_state_t(const vcpu_state_t* vcpu_state_ptr) {
    return vcpu_state_t_has_valid_vmxip(vcpu_state_ptr);
}

/**
 * Field predicates for tdvps_management_t
 */
static inline bool_t tdvps_management_t_has_valid_state(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->state == VCPU_UNINITIALIZED ||
        management_ptr->state == VCPU_READY ||
        management_ptr->state == VCPU_ACTIVE ||
        management_ptr->state == VCPU_DISABLED ||
        management_ptr->state == VCPU_IMPORT
    );
}

static inline bool_t tdvps_management_t_has_valid_last_td_exit(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->last_td_exit == LAST_EXIT_ASYNC_FAULT ||
        management_ptr->last_td_exit == LAST_EXIT_ASYNC_TRAP ||
        management_ptr->last_td_exit == LAST_EXIT_TDVMCALL
    );
}

static inline bool_t tdvps_management_t_has_valid_vcpu_index(const tdvps_management_t* management_ptr) {
    return management_ptr->vcpu_index < MAX_VCPUS;
}

static inline bool_t tdvps_management_t_has_valid_num_tdvps_pages(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->num_tdvps_pages >= MIN_TDVPS_PAGES && 
        management_ptr->num_tdvps_pages <= MAX_TDVPS_PAGES
    );
}

static inline bool_t tdvps_management_t_has_valid_tdvps_pa(const tdvps_management_t* management_ptr) {
    _Static_assert(MAX_TDVPS_PAGES == 15, "MAX_TDVPS_PAGES changed, update invariant");
    return (
        ((management_ptr->tdvps_pa[0] & 0xFFF) == 0) && (management_ptr->tdvps_pa[0] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[1] & 0xFFF) == 0) && (management_ptr->tdvps_pa[1] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[2] & 0xFFF) == 0) && (management_ptr->tdvps_pa[2] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[3] & 0xFFF) == 0) && (management_ptr->tdvps_pa[3] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[4] & 0xFFF) == 0) && (management_ptr->tdvps_pa[4] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[5] & 0xFFF) == 0) && (management_ptr->tdvps_pa[5] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[6] & 0xFFF) == 0) && (management_ptr->tdvps_pa[6] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[7] & 0xFFF) == 0) && (management_ptr->tdvps_pa[7] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[8] & 0xFFF) == 0) && (management_ptr->tdvps_pa[8] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[9] & 0xFFF) == 0) && (management_ptr->tdvps_pa[9] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[10] & 0xFFF) == 0) && (management_ptr->tdvps_pa[10] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[11] & 0xFFF) == 0) && (management_ptr->tdvps_pa[11] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[12] & 0xFFF) == 0) && (management_ptr->tdvps_pa[12] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[13] & 0xFFF) == 0) && (management_ptr->tdvps_pa[13] < BIT(MAX_PA)) &&
        ((management_ptr->tdvps_pa[14] & 0xFFF) == 0) && (management_ptr->tdvps_pa[14] < BIT(MAX_PA))
    );
}

static inline bool_t tdvps_management_t_has_valid_assoc_lpid(const tdvps_management_t* management_ptr) {
    // 0xFFFFFFFF is a special value indicating no association
    return true;
}

static inline bool_t tdvps_management_t_has_valid_vcpu_epoch(const tdvps_management_t* management_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_management_t_has_valid_cpuid_controls(const tdvps_management_t* management_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_management_t_has_valid_curr_vm(const tdvps_management_t* management_ptr) {
    return management_ptr->curr_vm < MAX_VMS;
}

static inline bool_t tdvps_management_t_has_valid_l2_exit_host_routed(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->l2_exit_host_routed == HOST_ROUTED_NONE ||
        management_ptr->l2_exit_host_routed == HOST_ROUTED_ASYNC ||
        management_ptr->l2_exit_host_routed == HOST_ROUTED_TDVMCALL
    );
}

static inline bool_t tdvps_management_t_has_valid_l2_ctls(const tdvps_management_t* management_ptr) {
    _Static_assert(MAX_VMS == 4, "MAX_VMS changed, update invariant");
    return (
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[0]) &&
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[1]) &&
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[2]) &&
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[3])
    );
}

static inline bool_t tdvps_management_t_has_valid_l2_debug_ctls(const tdvps_management_t* management_ptr) {
    _Static_assert(MAX_VMS == 4, "MAX_VMS changed, update invariant");
    return (
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[0]) &&
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[1]) &&
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[2]) &&
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[3])
    );
}

/**
 * @brief Invariant function for tdvps_management_t
 * @param management_ptr Pointer to the tdvps_management_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_management_t(const tdvps_management_t* management_ptr) {
    return (
        tdvps_management_t_has_valid_state(management_ptr) &&
        tdvps_management_t_has_valid_last_td_exit(management_ptr) &&
        tdvps_management_t_has_valid_vcpu_index(management_ptr) &&
        tdvps_management_t_has_valid_num_tdvps_pages(management_ptr) &&
        tdvps_management_t_has_valid_tdvps_pa(management_ptr) &&
        tdvps_management_t_has_valid_assoc_lpid(management_ptr) &&
        tdvps_management_t_has_valid_vcpu_epoch(management_ptr) &&
        tdvps_management_t_has_valid_cpuid_controls(management_ptr) &&
        tdvps_management_t_has_valid_curr_vm(management_ptr) &&
        tdvps_management_t_has_valid_l2_exit_host_routed(management_ptr) &&
        tdvps_management_t_has_valid_l2_ctls(management_ptr) &&
        tdvps_management_t_has_valid_l2_debug_ctls(management_ptr)
    );
}

/**
 * Field predicates for cpuid_control_t
 */

#if 0
static inline bool_t cpuid_control_t_has_valid_supervisor_ve(const cpuid_control_t* cpuid_control_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t cpuid_control_t_has_valid_user_ve(const cpuid_control_t* cpuid_control_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t cpuid_control_t_has_valid_reserved(const cpuid_control_t* cpuid_control_ptr) {
    // return cpuid_control_ptr->reserved == 0;
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for cpuid_control_t
 * @param cpuid_control_ptr Pointer to the cpuid_control_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_cpuid_control_t(const cpuid_control_t* cpuid_control_ptr) {
#if 0
    return (
        cpuid_control_t_has_valid_supervisor_ve(cpuid_control_ptr) &&
        cpuid_control_t_has_valid_user_ve(cpuid_control_ptr) &&
        cpuid_control_t_has_valid_reserved(cpuid_control_ptr)
    );
#else
    return true;
#endif
}

/**
 * Field predicates for tdvps_guest_state_t
 */

#if 0
static inline bool_t tdvps_guest_state_t_has_valid_gpr_state(const tdvps_guest_state_t* guest_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_state_t_has_valid_debug_registers(const tdvps_guest_state_t* guest_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_state_t_has_valid_xcr0(const tdvps_guest_state_t* guest_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_state_t_has_valid_cr2(const tdvps_guest_state_t* guest_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_state_t_has_valid_iwk_keys(const tdvps_guest_state_t* guest_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_state_t_has_valid_iwk_flags(const tdvps_guest_state_t* guest_state_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t tdvps_guest_state_t_has_valid_vcpu_state_details(const tdvps_guest_state_t* guest_state_ptr) {
    return fv_invariant_vcpu_state_t(&guest_state_ptr->vcpu_state_details);
}

/**
 * @brief Invariant function for tdvps_guest_state_t
 * @param guest_state_ptr Pointer to the tdvps_guest_state_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_guest_state_t(const tdvps_guest_state_t* guest_state_ptr) {
    return (
        //tdvps_guest_state_t_has_valid_gpr_state(guest_state_ptr) &&
        //tdvps_guest_state_t_has_valid_debug_registers(guest_state_ptr) &&
        //tdvps_guest_state_t_has_valid_xcr0(guest_state_ptr) &&
        //tdvps_guest_state_t_has_valid_cr2(guest_state_ptr) &&
        //tdvps_guest_state_t_has_valid_iwk_keys(guest_state_ptr) &&
        //tdvps_guest_state_t_has_valid_iwk_flags(guest_state_ptr) &&
        tdvps_guest_state_t_has_valid_vcpu_state_details(guest_state_ptr)
    );
}

/**
 * Field predicates for tdvps_guest_msr_state_t
 */

#if 0
static inline bool_t tdvps_guest_msr_state_t_has_valid_ia32_spec_ctrl(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_msr_state_t_has_valid_ia32_umwait_control(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_msr_state_t_has_valid_ia32_tsx_ctrl(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_msr_state_t_has_valid_performance_msrs(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_msr_state_t_has_valid_ia32_xfd(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_msr_state_t_has_valid_ia32_xfd_err(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_msr_state_t_has_valid_ia32_xss(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_guest_msr_state_t_has_valid_syscall_msrs(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for tdvps_guest_msr_state_t
 * @param guest_msr_state_ptr Pointer to the tdvps_guest_msr_state_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_guest_msr_state_t(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
#if 0
    return (
        tdvps_guest_msr_state_t_has_valid_ia32_spec_ctrl(guest_msr_state_ptr) &&
        tdvps_guest_msr_state_t_has_valid_ia32_umwait_control(guest_msr_state_ptr) &&
        tdvps_guest_msr_state_t_has_valid_ia32_tsx_ctrl(guest_msr_state_ptr) &&
        tdvps_guest_msr_state_t_has_valid_performance_msrs(guest_msr_state_ptr) &&
        tdvps_guest_msr_state_t_has_valid_ia32_xfd(guest_msr_state_ptr) &&
        tdvps_guest_msr_state_t_has_valid_ia32_xfd_err(guest_msr_state_ptr) &&
        tdvps_guest_msr_state_t_has_valid_ia32_xss(guest_msr_state_ptr) &&
        tdvps_guest_msr_state_t_has_valid_syscall_msrs(guest_msr_state_ptr)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for tdvps_td_vmcs_t
 */
static inline bool_t tdvps_td_vmcs_t_has_valid_td_vmcs(const tdvps_td_vmcs_t* td_vmcs_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for tdvps_td_vmcs_t
 * @param td_vmcs_ptr Pointer to the tdvps_td_vmcs_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_td_vmcs_t(const tdvps_td_vmcs_t* td_vmcs_ptr) {
    return tdvps_td_vmcs_t_has_valid_td_vmcs(td_vmcs_ptr);
}

/**
 * Field predicates for tdvps_vapic_t
 */
static inline bool_t tdvps_vapic_t_has_valid_apic(const tdvps_vapic_t* vapic_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for tdvps_vapic_t
 * @param vapic_ptr Pointer to the tdvps_vapic_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_vapic_t(const tdvps_vapic_t* vapic_ptr) {
    return tdvps_vapic_t_has_valid_apic(vapic_ptr);
}

/**
 * Field predicates for tdvps_guest_extension_state_t
 */
static inline bool_t tdvps_guest_extension_state_t_has_valid_xbuf(const tdvps_guest_extension_state_t* guest_extension_state_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for tdvps_guest_extension_state_t
 * @param guest_extension_state_ptr Pointer to the tdvps_guest_extension_state_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_guest_extension_state_t(const tdvps_guest_extension_state_t* guest_extension_state_ptr) {
    return tdvps_guest_extension_state_t_has_valid_xbuf(guest_extension_state_ptr);
}

/**
 * Field predicates for l2_vm_ctrl_t
 */

#if 0
static inline bool_t l2_vm_ctrl_t_has_valid_l2_vmcs(const l2_vm_ctrl_t* l2_vm_ctrl_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vm_ctrl_t_has_valid_l2_msr_bitmaps(const l2_vm_ctrl_t* l2_vm_ctrl_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t l2_vm_ctrl_t_has_valid_l2_shadow_msr_bitmaps(const l2_vm_ctrl_t* l2_vm_ctrl_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for l2_vm_ctrl_t
 * @param l2_vm_ctrl_ptr Pointer to the l2_vm_ctrl_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_l2_vm_ctrl_t(const l2_vm_ctrl_t* l2_vm_ctrl_ptr) {
#if 0
    return (
        l2_vm_ctrl_t_has_valid_l2_vmcs(l2_vm_ctrl_ptr) &&
        l2_vm_ctrl_t_has_valid_l2_msr_bitmaps(l2_vm_ctrl_ptr) &&
        l2_vm_ctrl_t_has_valid_l2_shadow_msr_bitmaps(l2_vm_ctrl_ptr)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for tdvps_t
 */
static inline bool_t tdvps_t_has_valid_ve_info(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_ve_info_t(&tdvps_ptr->ve_info);
}

static inline bool_t tdvps_t_has_valid_management(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_management_t(&tdvps_ptr->management);
}

static inline bool_t tdvps_t_has_valid_last_epf_gpa_list(const tdvps_t* tdvps_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t tdvps_t_has_valid_cpuid_control(const tdvps_t* tdvps_ptr) {
#ifdef TDXFV_ENABLE_LOOP_IN_HARNESS
    bool_t all_cpuid_controls_valid = true;
    for (uint32_t i = 0; i < NUM_OF_CPUID_CTRL_ENTRIES; i++) {
        all_cpuid_controls_valid &= fv_invariant_cpuid_control_t(&tdvps_ptr->cpuid_control[i]);
    }
    return all_cpuid_controls_valid;
#else
    return fv_invariant_cpuid_control_t(&tdvps_ptr->cpuid_control[0]);
#endif
}

static inline bool_t tdvps_t_has_valid_guest_state(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_guest_state_t(&tdvps_ptr->guest_state);
}

static inline bool_t tdvps_t_has_valid_guest_msr_state(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_guest_msr_state_t(&tdvps_ptr->guest_msr_state);
}

static inline bool_t tdvps_t_has_valid_td_vmcs(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_td_vmcs_t(&tdvps_ptr->td_vmcs);
}

static inline bool_t tdvps_t_has_valid_vapic(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_vapic_t(&tdvps_ptr->vapic);
}

static inline bool_t tdvps_t_has_valid_guest_extension_state(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_guest_extension_state_t(&tdvps_ptr->guest_extension_state);
}

static inline bool_t tdvps_t_has_valid_l2_vm_ctrl(const tdvps_t* tdvps_ptr) {
    _Static_assert(MAX_L2_VMS == 3, "MAX_L2_VMS changed, update invariant");
    return (
        fv_invariant_l2_vm_ctrl_t(&tdvps_ptr->l2_vm_ctrl[0]) &&
        fv_invariant_l2_vm_ctrl_t(&tdvps_ptr->l2_vm_ctrl[1]) &&
        fv_invariant_l2_vm_ctrl_t(&tdvps_ptr->l2_vm_ctrl[2])
    );
}

/**
 * @brief Invariant function for tdvps_t
 * @param tdvps_ptr Pointer to the tdvps_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_tdvps_t(const tdvps_t* tdvps_ptr) {
    return (
        tdvps_t_has_valid_ve_info(tdvps_ptr) &&
        tdvps_t_has_valid_management(tdvps_ptr) &&
        tdvps_t_has_valid_last_epf_gpa_list(tdvps_ptr) &&
        tdvps_t_has_valid_cpuid_control(tdvps_ptr) &&
        tdvps_t_has_valid_guest_state(tdvps_ptr) &&
        tdvps_t_has_valid_guest_msr_state(tdvps_ptr) &&
        tdvps_t_has_valid_td_vmcs(tdvps_ptr) &&
        tdvps_t_has_valid_vapic(tdvps_ptr) &&
        tdvps_t_has_valid_guest_extension_state(tdvps_ptr) &&
        tdvps_t_has_valid_l2_vm_ctrl(tdvps_ptr)
    );
}

/**
 * Field predicates for attr_flags_t
 */
static inline bool_t attr_flags_t_has_valid_vm_arr(const attr_flags_t* attr_flags_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t attr_flags_t_has_valid_gpa_attr(const attr_flags_t* attr_flags_ptr) {
    return true; // Placeholder for detailed condition
}

/**
 * @brief Invariant function for attr_flags_t
 * @param attr_flags_ptr Pointer to the attr_flags_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_attr_flags_t(const attr_flags_t* attr_flags_ptr) {
    return (
        attr_flags_t_has_valid_vm_arr(attr_flags_ptr) &&
        attr_flags_t_has_valid_gpa_attr(attr_flags_ptr)
    );
}

#endif // __TDX_TDVPS_INVARIANTS_H_INCLUDED__
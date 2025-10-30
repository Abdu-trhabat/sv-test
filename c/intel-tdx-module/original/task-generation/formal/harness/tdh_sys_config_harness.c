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
 * @file tdh_sys_config_harness.c
 * @brief TDHSYSCONFIG API handler FV harness
 */

#include "tdx_api_defs.h"
#include "tdx_basic_defs.h"
#include "tdx_basic_types.h"
#include "tdx_vmm_api_handlers.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "data_structures/tdx_global_data.h"
#include "memory_handlers/pamt_manager.h"
#include "data_structures/loader_data.h"
#include "accessors/data_accessors.h"
#include "helpers/helpers.h"
#include "memory_handlers/keyhole_manager.h"
#include "auto_gen/cpuid_configurations.h"

#include "fv_utils.h"
#include "fv_env.h"
#include "fv_nondets.h"

#define FV_MAX_TDMRS MAX_TDMRS

void tdh_sys_config__call() {
    tdx_module_local_t* local_data = get_local_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;
    
    local_data->vmm_regs.rax = tdh_sys_config(
        local_data->vmm_regs.rcx,
        local_data->vmm_regs.rdx,
        global_private_hkid
    );
}

static inline void tdh_sys_config__common_precond() {
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = get_local_data()->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_SYS_CONFIG_LEAF);

    tdmr_info_entry_t** tdmr_array = TDXFV_malloc(sizeof(tdmr_info_entry_t*) * MAX_TDMRS);
    for (int i = 0; i < FV_MAX_TDMRS; i++) {
        tdmr_array[i] = TDXFV_malloc(sizeof(tdmr_info_entry_t));
        TDXFV_NONDET_struct_tdmr_info_entry_t(tdmr_array[i]);
    }
    TDXFV_ASSUME(
        get_local_data()->vmm_regs.rcx == (uint64_t)tdmr_array
    );
}

void tdh_sys_config__free() {
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) get_local_data()->vmm_regs.rcx;
    for (int i = 0; i < FV_MAX_TDMRS; i++) {
        free(tdmr_array[i]);
    }
    free(tdmr_array);
}

static inline bool_t tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_info_entry_t* tdmr_entry, uint8_t idx) {
    return (
        // reserved areas are sorted
        (tdmr_entry->rsvd_areas[idx-1].offset <= tdmr_entry->rsvd_areas[idx].offset) &&
        // null reserved area (size == 0) only followed by null reserved area
        ((tdmr_entry->rsvd_areas[idx-1].size != 0) || (tdmr_entry->rsvd_areas[idx].size == 0)) &&
        // reserved areas not overlap
        (tdmr_entry->rsvd_areas[idx-1].offset + tdmr_entry->rsvd_areas[idx-1].size <= tdmr_entry->rsvd_areas[idx].offset)
    );
}

static inline bool_t tdmr_info_entry_rsvd_is_valid_containment(tdmr_info_entry_t* tdmr_entry, uint8_t idx) {
    return (
        (tdmr_entry->rsvd_areas[idx].offset >= tdmr_entry->tdmr_base) &&
        (tdmr_entry->rsvd_areas[idx].offset + tdmr_entry->rsvd_areas[idx].size < (tdmr_entry->tdmr_base + tdmr_entry->tdmr_size))
    );
}

bool_t tdmr_info_entry_is_valid(tdmr_info_entry_t* tdmr_entry) {

    bool_t base_and_size_are_valid = (
        (tdmr_entry->tdmr_base % _1GB == 0) &&
        (tdmr_entry->tdmr_size > 0) &&
        (tdmr_entry->tdmr_size % _1GB == 0) &&
        (tdmr_entry->tdmr_base < BIT(MAX_PA))
    );

    bool_t pamt_bases_are_valid = (
        (tdmr_entry->pamt_1g_base < BIT(MAX_PA)) &&
        (tdmr_entry->pamt_2m_base < BIT(MAX_PA)) &&
        (tdmr_entry->pamt_4k_base < BIT(MAX_PA))
    );

    pa_t tdmr_base_pa = (pa_t) tdmr_entry->tdmr_base;
    pa_t pamt_1g_pa = (pa_t) tdmr_entry->pamt_1g_base;
    pa_t pamt_2m_pa = (pa_t) tdmr_entry->pamt_2m_base;
    pa_t pamt_4k_pa = (pa_t) tdmr_entry->pamt_4k_base;
    bool_t pas_are_valid = (
        ((tdmr_base_pa.full_pa * get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0 &&
        ((pamt_1g_pa.full_pa * get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0 &&
        ((pamt_2m_pa.full_pa * get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0 &&
        ((pamt_4k_pa.full_pa * get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0
    );

    _Static_assert(MAX_RESERVED_AREAS == 16, "MAX_RESERVED_AREAS changed, update the harness accordingly");
    bool_t reserved_areas_are_valid = (
        // tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 0) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 1) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 2) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 3) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 4) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 5) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 6) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 7) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 8) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 9) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 10) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 11) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 12) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 13) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 14) &&
        tdmr_info_entry_rsvd_is_valid_pairwise(tdmr_entry, 15)
    );

    bool_t reserved_areas_containment = (
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 0) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 1) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 2) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 3) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 4) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 5) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 6) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 7) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 8) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 9) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 10) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 11) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 12) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 13) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 14) &&
        tdmr_info_entry_rsvd_is_valid_containment(tdmr_entry, 15)
    );

    return (
        base_and_size_are_valid &&
        pamt_bases_are_valid &&
        pas_are_valid &&
        reserved_areas_are_valid &&
        reserved_areas_containment
    );
}

static inline bool_t input_r8_is_valid() {
    hkid_api_input_t global_private_hkid = { .raw = get_local_data()->vmm_regs.r8 };
    return (
        (global_private_hkid.reserved == 0) &&
        (global_private_hkid.hkid >= get_global_data()->private_hkid_min) &&
        (global_private_hkid.hkid <= get_global_data()->private_hkid_max)
    );
}

static inline bool_t input_rdx_is_valid() {
    return (
        (get_local_data()->vmm_regs.rdx >= 1) && 
        (get_local_data()->vmm_regs.rdx <= 64)
    );
}

static inline bool_t input_rcx_is_valid() {
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) get_local_data()->vmm_regs.rcx;
    bool_t input_tdmr_is_valid = true;
    for (int idx = 0; idx < FV_MAX_TDMRS; idx++) {
        input_tdmr_is_valid &= tdmr_info_entry_is_valid(tdmr_array[idx]);
    }

    bool_t input_tdmr_not_overlapping = true;
    for (int idx = 1; idx < FV_MAX_TDMRS; idx++) {
        input_tdmr_not_overlapping &= (
            tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base &&
            tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base
        );
    }

    return (
        input_tdmr_is_valid &&
        input_tdmr_not_overlapping
    );
}

static inline bool_t state_sys_state_is_valid() {
    return (
        get_global_data()->global_state.sys_state == SYSINIT_DONE
    );
}

static inline bool_t state_lp_state_is_valid() {
    return (
        get_global_data()->num_of_init_lps == get_global_data()->num_of_lps
    );
}

static inline bool_t all_conditions_valid() {
    return (
        input_r8_is_valid() &&
        input_rdx_is_valid() &&
        input_rcx_is_valid() &&
        state_sys_state_is_valid() &&
        state_lp_state_is_valid()
    );
}

static inline void tdh_sys_config__common_postcond() {
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

void tdh_sys_config__expected__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(all_conditions_valid());
}

void tdh_sys_config__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdh_sys_config__common_postcond();
}

void tdh_sys_config__unexpected__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(!all_conditions_valid());
}

void tdh_sys_config__unexpected__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
    tdh_sys_config__common_postcond();
}

void tdh_sys_config__unconstrained__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(true);
}

// Special test cases
void tdh_sys_config__invalid_input_hkid__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(
        !input_r8_is_valid() && // invalid input R8 (HKID)
        input_rdx_is_valid() &&
        input_rcx_is_valid() &&
        state_sys_state_is_valid() &&
        state_lp_state_is_valid()
    );
}

void tdh_sys_config__invalid_input_hkid__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_R8)) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_config__common_postcond();
}

void tdh_sys_config__invalid_input_num_ptr__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(
        input_r8_is_valid() &&
        !input_rdx_is_valid() && // invalid input RDX (number of pointers)
        input_rcx_is_valid() &&
        state_sys_state_is_valid() &&
        state_lp_state_is_valid()
    );
}

void tdh_sys_config__invalid_input_num_ptr__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RDX)) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_config__common_postcond();
}

void tdh_sys_config__invalid_state_sys_state__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(
        input_r8_is_valid() &&
        input_rdx_is_valid() &&
        input_rcx_is_valid() &&
        !state_sys_state_is_valid() && // invalid state SYS_STATE
        state_lp_state_is_valid()
    );
}

void tdh_sys_config__invalid_state_sys_state__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_SYS_CONFIG_NOT_PENDING) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_config__common_postcond();
}

void tdh_sys_config__invalid_state_lp_state__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(
        input_r8_is_valid() &&
        input_rdx_is_valid() &&
        input_rcx_is_valid() &&
        state_sys_state_is_valid() &&
        !state_lp_state_is_valid() // invalid state LP_STATE
    );
}

void tdh_sys_config__invalid_state_lp_state__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_SYS_CONFIG_NOT_PENDING) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_config__common_postcond();
}

void tdh_sys_config__invalid_state_tdmr_info__precond() {
    tdh_sys_config__common_precond();
    TDXFV_ASSUME(
        input_r8_is_valid() &&
        input_rdx_is_valid() &&
        !input_rcx_is_valid() && // invalid input RCX (TDMR info)
        state_sys_state_is_valid() &&
        state_lp_state_is_valid()
    );
}

void tdh_sys_config__invalid_state_tdmr_info__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_INVALID_PAMT) ||
        (local_data->vmm_regs.rax == TDX_INVALID_RESERVED_IN_TDMR) ||
        (local_data->vmm_regs.rax == TDX_INVALID_TDMR) ||
        (local_data->vmm_regs.rax == TDX_NON_ORDERED_RESERVED_IN_TDMR) ||
        (local_data->vmm_regs.rax == TDX_NON_ORDERED_TDMR) ||
        (local_data->vmm_regs.rax == TDX_PAMT_OUTSIDE_CMRS) ||
        (local_data->vmm_regs.rax == TDX_PAMT_OVERLAP) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY) ||
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX))
    );
    tdh_sys_config__common_postcond();
}
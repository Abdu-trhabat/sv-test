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
 * @file tdh_mng_create_harness.c
 * @brief TDHMNGCREATE API handler FV harness
 */

#include "tdx_vmm_api_handlers.h"
#include "tdx_basic_defs.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "x86_defs/x86_defs.h"
#include "data_structures/td_control_structures.h"
#include "memory_handlers/keyhole_manager.h"
#include "memory_handlers/pamt_manager.h"
#include "helpers/helpers.h"
#include "accessors/data_accessors.h"
#include "accessors/ia32_accessors.h"

#include "fv_utils.h"
#include "fv_env.h"

void tdh_mng_create__call() {
    tdx_module_local_t* local_data = get_local_data();
    hkid_api_input_t hkid_info = { .raw = local_data->vmm_regs.rdx };
    
    local_data->vmm_regs.rax = tdh_mng_create(local_data->vmm_regs.rcx, hkid_info);
}

static inline void tdh_mng_create__common_precond() {
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = get_local_data()->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_MNG_CREATE_LEAF);

    // TODO tdr (rcx) allocation and initialization for valid entry
}

static inline bool_t input_rcx_is_valid() {
    pa_t pa = { .raw = get_local_data()->vmm_regs.rcx };
    return (
        ((get_local_data()->vmm_regs.rcx & (_4KB - 1)) == 0) &&
        (((pa.full_pa & get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0) &&
        (get_local_data()->vmm_regs.rcx < BIT(MAX_PA))
    );
}

static inline bool_t input_rdx_is_valid() {
    hkid_api_input_t hkid_info = { .raw = get_local_data()->vmm_regs.rdx };
    return (
        (hkid_info.reserved == 0) &&
        (hkid_info.hkid >= get_global_data()->private_hkid_min) &&
        (hkid_info.hkid <= get_global_data()->private_hkid_max)
    );
}

static inline bool_t state_kot_entry_is_valid() {
    if (input_rdx_is_valid()) {
        hkid_api_input_t hkid_info = { .raw = get_local_data()->vmm_regs.rdx };
        return get_global_data()->kot.entries[hkid_info.hkid].state == KOT_STATE_HKID_FREE;
    }
    return true;
}

static inline bool_t state_tdr_page_is_valid() {
    return get_local_data()->vp_ctx.tdr_pamt_entry->pt == PT_TDR;
}

static inline bool_t all_conditions_valid() {
    return (
        input_rcx_is_valid() &&
        input_rdx_is_valid() &&
        state_kot_entry_is_valid() &&
        state_tdr_page_is_valid()
    );
}

static inline void tdh_mng_create__common_postcond() {
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

void tdh_mng_create__expected__precond() {
    tdh_mng_create__common_precond();
    TDXFV_ASSUME(all_conditions_valid());
}

void tdh_mng_create__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdh_mng_create__common_postcond();
}

void tdh_mng_create__unexpected__precond() {
    tdh_mng_create__common_precond();
    TDXFV_ASSUME(!all_conditions_valid());
}

void tdh_mng_create__unexpected__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
    tdh_mng_create__common_postcond();
}

void tdh_mng_create__unconstrained__precond() {
    tdh_mng_create__common_precond();
    TDXFV_ASSUME(true);
}

// Special test cases
void tdh_mng_create__invalid_input_rcx__precond() {
    tdh_mng_create__common_precond();
    TDXFV_ASSUME(
        !input_rcx_is_valid() && // invalid input rcx
        input_rdx_is_valid() &&
        state_kot_entry_is_valid() &&
        state_tdr_page_is_valid()
    );
}

void tdh_mng_create__invalid_input_rcx__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX)) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    tdh_mng_create__common_postcond();
}

void tdh_mng_create__invalid_input_rdx__precond() {
    tdh_mng_create__common_precond();
    TDXFV_ASSUME(
        input_rcx_is_valid() &&
        !input_rdx_is_valid() && // invalid input rdx
        state_kot_entry_is_valid() &&
        state_tdr_page_is_valid()
    );
}

void tdh_mng_create__invalid_input_rdx__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RDX)) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    tdh_mng_create__common_postcond();
}

void tdh_mng_create__invalid_state_kot_entry__precond() {
    tdh_mng_create__common_precond();
    TDXFV_ASSUME(
        input_rcx_is_valid() &&
        input_rdx_is_valid() &&
        !state_kot_entry_is_valid() && // invalid kot entry
        state_tdr_page_is_valid()
    );
}

void tdh_mng_create__invalid_state_kot_entry__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_HKID_NOT_FREE) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    tdh_mng_create__common_postcond();
}

void tdh_mng_create__invalid_state_tdr_page__precond() {
    tdh_mng_create__common_precond();
    TDXFV_ASSUME(
        input_rcx_is_valid() &&
        input_rdx_is_valid() &&
        state_kot_entry_is_valid() &&
        !state_tdr_page_is_valid() // invalid tdr page state
    );
}

void tdh_mng_create__invalid_state_tdr_page__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_PAGE_METADATA_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    tdh_mng_create__common_postcond();
}

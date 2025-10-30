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
 * @file tdh_phymem_page_reclaim_harness.c
 * @brief TDHPHYMEMPAGERECLAIM API handler FV harness
 */

#include "tdx_vmm_api_handlers.h"
#include "tdx_basic_defs.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "x86_defs/x86_defs.h"
#include "data_structures/tdx_local_data.h"
#include "data_structures/td_control_structures.h"
#include "memory_handlers/keyhole_manager.h"
#include "memory_handlers/pamt_manager.h"
#include "helpers/helpers.h"
#include "accessors/data_accessors.h"

#include "fv_utils.h"
#include "fv_env.h"
#include "fv_nondets.h"

pamt_block_t reclaimed_page_pamt_block;
pamt_entry_t reclaimed_page_pamt_entry;
page_size_t reclaimed_page_leaf_size;
pamt_entry_t* reclaimed_page_pamt_entry_ptr;
pa_t page_owner_pa;

void tdh_phymem_page_reclaim__call() {
    tdx_module_local_t* local_data = get_local_data();
    
    local_data->vmm_regs.rax = tdh_phymem_page_reclaim(local_data->vmm_regs.rcx);
}

static inline void tdh_phymem_page_reclaim__common_precond() {
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = get_local_data()->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_PHYMEM_PAGE_RECLAIM_LEAF);

    TDXFV_NONDET_struct_pamt_block_t(&reclaimed_page_pamt_block);
    TDXFV_NONDET_struct_pamt_entry_t(&reclaimed_page_pamt_entry);
    reclaimed_page_leaf_size = TDXFV_NONDET_page_size_t();
    reclaimed_page_pamt_entry_ptr = NULL;
}

static inline bool_t input_pa_is_valid() {
    pa_t pa = { .raw = get_local_data()->vmm_regs.rcx };
    return (
        ((get_local_data()->vmm_regs.rcx & (_4KB - 1)) == 0) &&
        (((pa.full_pa & get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0) &&
        (get_local_data()->vmm_regs.rcx < BIT(MAX_PA))
    );
}

static inline bool_t state_pamt_metadata_is_valid() {
    pa_t reclaimed_page_pa = (pa_t) get_local_data()->vmm_regs.rcx;
    bool_t pamt_get_block_result = pamt_get_block(reclaimed_page_pa, &reclaimed_page_pamt_block);
    if (!pamt_get_block_result) {
        return false;
    }
    api_error_code_e pamt_walk_result = pamt_walk(
        reclaimed_page_pa, reclaimed_page_pamt_block, TDX_LOCK_EXCLUSIVE, 
        &reclaimed_page_leaf_size, false, false, &reclaimed_page_pamt_entry_ptr
    );
    if (!(
        (pamt_walk_result == TDX_SUCCESS) &&
        (reclaimed_page_pamt_entry_ptr != NULL)
    )) {
        return false;
    }
    return (
        (reclaimed_page_pamt_entry_ptr->pt != PT_NDA) && 
        (reclaimed_page_pamt_entry_ptr->pt != PT_RSVD)
    );
}

static inline bool_t state_lifecycle_is_valid() {
    if (reclaimed_page_pamt_entry_ptr == NULL) {
        return false;
    }
    tdr_t* tdr_ptr = NULL;
    if (reclaimed_page_pamt_entry_ptr->pt != PT_TDR){
        page_owner_pa = get_pamt_entry_owner(reclaimed_page_pamt_entry_ptr);
        pamt_entry_t* tdr_pamt_entry_ptr = NULL; // dummy
        bool_t tdr_locked_flag = false; // dummy
        api_error_type map_result = lock_and_map_implicit_tdr(
            page_owner_pa, OPERAND_ID_TDR, 1, TDX_LOCK_SHARED, &tdr_pamt_entry_ptr, &tdr_locked_flag, &tdr_ptr
        );
        if (!(map_result == TDX_SUCCESS && tdr_ptr != NULL)) {
            return false;
        }
    } else {
        tdr_ptr = map_pa_with_global_hkid((void*)get_local_data()->vmm_regs.rcx, 1);
    }
    return (tdr_ptr->management_fields.lifecycle_state == TD_TEARDOWN);
}

static inline bool_t state_child_count_is_valid() {
    if (reclaimed_page_pamt_entry_ptr == NULL) {
        return false;
    }
    if (reclaimed_page_pamt_entry_ptr->pt != PT_TDR){
        return true;
    }
    tdr_t* tdr_ptr = map_pa_with_global_hkid((void*)get_local_data()->vmm_regs.rcx, 1);
    return (tdr_ptr->management_fields.chldcnt == 0);
}

#if 0
    pa_t reclaimed_page_pa = (pa_t) local_data->vmm_regs.rcx;
    pamt_entry_t* reclaimed_page_pamt_entry_ptr = NULL;
    bool_t pamt_get_block_result = pamt_get_block(reclaimed_page_pa, &reclaimed_page_pamt_block);
    TDXFV_ASSUME(pamt_get_block_result == true); // borrowing impl helper
    api_error_code_e pamt_walk_result = pamt_walk(reclaimed_page_pa, reclaimed_page_pamt_block, TDX_LOCK_EXCLUSIVE, 
                                                  &reclaimed_page_leaf_size, false, false, &reclaimed_page_pamt_entry_ptr);
    TDXFV_ASSUME(pamt_walk_result == TDX_SUCCESS); // borrowing impl helper
    TDXFV_ASSUME((reclaimed_page_pamt_entry_ptr->pt != PT_NDA) && (reclaimed_page_pamt_entry_ptr->pt != PT_RSVD));  

    tdr_t* tdr_ptr = NULL;
    if (reclaimed_page_pamt_entry_ptr->pt != PT_TDR){
        pa_t page_owner_pa = get_pamt_entry_owner(reclaimed_page_pamt_entry_ptr);
        pamt_entry_t* tdr_pamt_entry_ptr = NULL; // dummy
        bool_t tdr_locked_flag = false; // dummy
        api_error_type map_result = lock_and_map_implicit_tdr(page_owner_pa, OPERAND_ID_TDR, 1, TDX_LOCK_SHARED, &tdr_pamt_entry_ptr, &tdr_locked_flag, &tdr_ptr);
        TDXFV_ASSUME(map_result == TDX_SUCCESS); // XXX potential overconstrain
        TDXFV_ASSUME(tdr_ptr->management_fields.lifecycle_state == TD_TEARDOWN);
    } else {
        tdr_ptr = map_pa_with_global_hkid((void*)local_data->vmm_regs.rcx, 1);
        TDXFV_ASSUME(tdr_ptr->management_fields.lifecycle_state == TD_TEARDOWN);
        TDXFV_ASSUME(tdr_ptr->management_fields.chldcnt == 0);
    }
#endif

static inline bool_t all_conditions_valid() {
    return (
        input_pa_is_valid() &&
        state_pamt_metadata_is_valid() &&
        state_lifecycle_is_valid() &&
        state_child_count_is_valid()
    );
}

static inline void tdh_phymem_page_reclaim__common_postcond() {
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
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rcx == shadow_vmm_regs_precall.rcx);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdx == shadow_vmm_regs_precall.rdx);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsp == shadow_vmm_regs_precall.rsp);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rbp == shadow_vmm_regs_precall.rbp);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rsi == shadow_vmm_regs_precall.rsi);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rdi == shadow_vmm_regs_precall.rdi);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r8 == shadow_vmm_regs_precall.r8);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r9 == shadow_vmm_regs_precall.r9);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r10 == shadow_vmm_regs_precall.r10);
    //TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r11 == shadow_vmm_regs_precall.r11);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r12 == shadow_vmm_regs_precall.r12);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r13 == shadow_vmm_regs_precall.r13);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r14 == shadow_vmm_regs_precall.r14);
    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.r15 == shadow_vmm_regs_precall.r15);
}

void tdh_phymem_page_reclaim__expected__precond() {
    tdh_phymem_page_reclaim__common_precond();
    TDXFV_ASSUME(all_conditions_valid());
}

void tdh_phymem_page_reclaim__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdh_phymem_page_reclaim__common_postcond();
}

void tdh_phymem_page_reclaim__unexpected__precond() {
    tdh_phymem_page_reclaim__common_precond();
    TDXFV_ASSUME(!all_conditions_valid());
}

void tdh_phymem_page_reclaim__unexpected__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
    TDXFV_ASSERT(
        (local_data->vmm_regs.rcx == reclaimed_page_pamt_entry_ptr->pt) ||
        (local_data->vmm_regs.rcx == 0)
    );
    TDXFV_ASSERT(
        (local_data->vmm_regs.rdx == page_owner_pa.raw) ||
        (local_data->vmm_regs.rdx == 0)
    );
    TDXFV_ASSERT(
        (
            ((local_data->vmm_regs.r8 >> 3) == 0) &&
            ((local_data->vmm_regs.r8 & 7) == (uint64_t) reclaimed_page_leaf_size)
        ) ||
        (local_data->vmm_regs.r8 == 0)
    );
    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r11 == 0);
    tdh_phymem_page_reclaim__common_postcond();
}

void tdh_phymem_page_reclaim__unconstrained__precond() {
    tdh_phymem_page_reclaim__common_precond();
    TDXFV_ASSUME(true);
}

// Special test cases
void tdh_phymem_page_reclaim__invalid_input_pa__precond() {
    tdh_phymem_page_reclaim__common_precond();
    TDXFV_ASSUME(
        !input_pa_is_valid() && // invalid input PA
        state_pamt_metadata_is_valid() &&
        state_lifecycle_is_valid() &&
        state_child_count_is_valid()
    );
}

void tdh_phymem_page_reclaim__invalid_input_pa__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX)) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == reclaimed_page_pamt_entry_ptr->pt);
    TDXFV_ASSERT(local_data->vmm_regs.rdx == page_owner_pa.raw);
    TDXFV_ASSERT((local_data->vmm_regs.r8 >> 3) == 0);
    TDXFV_ASSERT((local_data->vmm_regs.r8 & 7) == (uint64_t) reclaimed_page_leaf_size);
    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r11 == 0);
    tdh_phymem_page_reclaim__common_postcond();
}

void tdh_phymem_page_reclaim__invalid_state_pamt_metadata__precond() {
    tdh_phymem_page_reclaim__common_precond();
    TDXFV_ASSUME(
        input_pa_is_valid() &&
        !state_pamt_metadata_is_valid() // invalid PAMT metadata
        //state_lifecycle_is_valid() &&
        //state_child_count_is_valid()

    );
}

void tdh_phymem_page_reclaim__invalid_state_pamt_metadata__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_PAGE_METADATA_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == 0);
    TDXFV_ASSERT(local_data->vmm_regs.rdx == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r8 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r11 == 0);
    tdh_phymem_page_reclaim__common_postcond();
}

void tdh_phymem_page_reclaim__invalid_state_lifecycle__precond() {
    tdh_phymem_page_reclaim__common_precond();
    TDXFV_ASSUME(
        input_pa_is_valid() &&
        state_pamt_metadata_is_valid() &&
        !state_lifecycle_is_valid() && // invalid lifecycle state
        state_child_count_is_valid()
    );
}

void tdh_phymem_page_reclaim__invalid_state_lifecycle__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_LIFECYCLE_STATE_INCORRECT) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == reclaimed_page_pamt_entry_ptr->pt);
    TDXFV_ASSERT(local_data->vmm_regs.rdx == page_owner_pa.raw);
    TDXFV_ASSERT((local_data->vmm_regs.r8 >> 3) == 0);
    TDXFV_ASSERT((local_data->vmm_regs.r8 & 7) == (uint64_t) reclaimed_page_leaf_size);
    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r11 == 0);
    tdh_phymem_page_reclaim__common_postcond();
}

void tdh_phymem_page_reclaim__invalid_state_child_count__precond() {
    tdh_phymem_page_reclaim__common_precond();
    TDXFV_ASSUME(
        input_pa_is_valid() &&
        state_pamt_metadata_is_valid() &&
        state_lifecycle_is_valid() &&
        !state_child_count_is_valid() // invalid child count
    );
}

void tdh_phymem_page_reclaim__invalid_state_child_count__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_TD_ASSOCIATED_PAGES_EXIST) ||
        ((local_data->vmm_regs.rax >> 32) == (TDX_OPERAND_BUSY >> 32))
    );
    TDXFV_ASSERT(local_data->vmm_regs.rcx == reclaimed_page_pamt_entry_ptr->pt);
    TDXFV_ASSERT(local_data->vmm_regs.rdx == page_owner_pa.raw);
    TDXFV_ASSERT((local_data->vmm_regs.r8 >> 3) == 0);
    TDXFV_ASSERT((local_data->vmm_regs.r8 & 7) == (uint64_t) reclaimed_page_leaf_size);
    TDXFV_ASSERT(local_data->vmm_regs.r9 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r10 == 0);
    TDXFV_ASSERT(local_data->vmm_regs.r11 == 0);
    tdh_phymem_page_reclaim__common_postcond();
}

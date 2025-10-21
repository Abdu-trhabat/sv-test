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
 * @file tdg_servd_rd_wr_harness.c
 * @brief TDGSERVTDRDWR API handler FV harness
 */

#include "tdx_td_api_handlers.h"
#include "tdx_basic_defs.h"
#include "tdx_basic_types.h"
#include "tdx_api_defs.h"
#include "auto_gen/tdx_error_codes_defs.h"
#include "data_structures/tdx_local_data.h"
#include "x86_defs/x86_defs.h"
#include "accessors/data_accessors.h"
#include "helpers/helpers.h"
#include "helpers/migration.h"
#include "common/metadata_handlers/metadata_generic.h"
#include "td_transitions/td_exit.h"

#include "fv_utils.h"
#include "fv_env.h"
#include "fv_nondets.h"
#include "invariants/td_control_structures_invariants.h"

tdr_t* target_tdr_ptr;
pamt_entry_t * target_tdr_pamt_entry_ptr;
tdcs_t* target_tdcs_ptr;

void tdg_servtd_wr__call() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = tdg_servtd_wr(
        tdx_local_data_ptr->td_regs.rcx,
        tdx_local_data_ptr->td_regs.rdx,
        tdx_local_data_ptr->td_regs.r8,
        tdx_local_data_ptr->td_regs.r9
    );
}

static inline void tdg_servtd_wr__common_precond() {
    tdx_leaf_and_version_t leaf_opcode = { .raw = get_local_data()->td_regs.rax };
    TDXFV_ASSUME(leaf_opcode.leaf == TDG_SERVTD_WR_LEAF);

    target_tdr_ptr = NULL;
    target_tdr_pamt_entry_ptr = NULL;
    target_tdcs_ptr = NULL;

    // Borrowing implementation from tdg_servtd_wr to allocate the target TD's TDR and TDCS
    pa_t target_tdr_pa;
    uint64_t target_slot;
    break_servtd_binding_handle(
        (servtd_binding_handle_t) get_local_data()->td_regs.rcx,
        get_local_data()->vp_ctx.tdr->management_fields.td_uuid,
        &target_tdr_pa, 
        &target_slot
    );

    if (target_slot < MAX_SERV_TDS) {
        pamt_block_t target_tdr_pamt_block;
        bool_t target_tdr_locked_flag = false;
        api_error_type map_tdr_status = othertd_check_lock_and_map_explicit_tdr(
            target_tdr_pa,
            OPERAND_ID_TDR,
            TDX_RANGE_RW,
            TDX_LOCK_SHARED,
            PT_TDR,
            &target_tdr_pamt_block,
            &target_tdr_pamt_entry_ptr,
            &target_tdr_locked_flag,
            &target_tdr_ptr
        );

        tdr_t* tmp_target_tdr_ptr = TDXFV_malloc(sizeof(tdr_t));
        TDXFV_NONDET_struct_tdr_t(tmp_target_tdr_ptr);
        TDXFV_ASSUME(fv_invariant_tdr_t(tmp_target_tdr_ptr));
        TDXFV_ASSUME_EQ_PTR(target_tdr_ptr, tmp_target_tdr_ptr);

        if (map_tdr_status == TDX_SUCCESS) {
            api_error_type map_tdcs_status = othertd_check_state_map_tdcs_and_lock(
                target_tdr_ptr,
                TDX_RANGE_RW,
                TDX_LOCK_SHARED,
                true,
                TDG_SERVTD_WR_LEAF,
                true,
                &target_tdcs_ptr
            );

            if (map_tdcs_status == TDX_SUCCESS) {
                tdcs_t* tmp_target_tdcs_ptr = TDXFV_malloc(sizeof(tdcs_t));
                TDXFV_NONDET_struct_tdcs_t(tmp_target_tdcs_ptr);
                TDXFV_ASSUME(fv_invariant_tdcs_t(tmp_target_tdcs_ptr));
                TDXFV_ASSUME_EQ_PTR(target_tdcs_ptr, tmp_target_tdcs_ptr);
            }
        }
    }
}

void tdg_servtd_wr__free() {
    if (target_tdr_ptr != NULL) {
        free(target_tdr_ptr);
    }
    if (target_tdcs_ptr != NULL) {
        free(target_tdcs_ptr);
    }
}

static inline bool_t input_field_is_valid() {
    md_field_id_t field_code = { .raw = get_local_data()->td_regs.rdx };
    
    bool_t field_identifier_is_special_case = (
        ((get_local_data()->td_regs.rdx | (0x7ULL << 52)) == -1)
    );
    bool_t field_identifier_is_valid = (
        (field_code.reserved_0 == 0) &&
        (field_code.reserved_1 == 0) &&
        (field_code.reserved_2 == 0) &&
        (field_code.reserved_3 == 0) &&
        (field_code.last_element_in_field == 0) &&
        (field_code.last_field_in_sequence == 0)
    );
    
    return (field_identifier_is_special_case || field_identifier_is_valid);
}

static inline void tdg_servtd_wr__common_postcond() {
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

    //tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbx == shadow_guest_gpr_state_precall.rbx);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rcx == shadow_guest_gpr_state_precall.rcx);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx == shadow_guest_gpr_state_precall.rdx);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsp == shadow_guest_gpr_state_precall.rsp);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbp == shadow_guest_gpr_state_precall.rbp);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsi == shadow_guest_gpr_state_precall.rsi);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdi == shadow_guest_gpr_state_precall.rdi);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8  == shadow_guest_gpr_state_precall.r8);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r9  == shadow_guest_gpr_state_precall.r9);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r10 == shadow_guest_gpr_state_precall.r10);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r11 == shadow_guest_gpr_state_precall.r11);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r12 == shadow_guest_gpr_state_precall.r12);
    //TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r13 == shadow_guest_gpr_state_precall.r13);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r14 == shadow_guest_gpr_state_precall.r14);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r15 == shadow_guest_gpr_state_precall.r15);

    TDXFV_ASSERT(tdx_local_data_ptr->vmm_regs.rax == shadow_vmm_regs_precall.rax);
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

void tdg_servtd_wr__expected__precond() {
    tdg_servtd_wr__common_precond();
    TDXFV_ASSUME(input_field_is_valid());
}

void tdg_servtd_wr__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdg_servtd_wr__common_postcond();
}

void tdg_servtd_wr__unexpected__precond() {
    tdg_servtd_wr__common_precond();
    TDXFV_ASSUME(!input_field_is_valid());
}

void tdg_servtd_wr__unexpected__postcond() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax != TDX_SUCCESS);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 == 0);
    tdg_servtd_wr__common_postcond();
}

void tdg_servtd_wr__unconstrained__precond() {
    tdg_servtd_wr__common_precond();
    TDXFV_ASSUME(true);
}

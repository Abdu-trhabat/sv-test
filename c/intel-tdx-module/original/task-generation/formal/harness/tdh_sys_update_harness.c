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
 * @file tdh_sys_update_harness.c
 * @brief TDH_SYS_UPDATE API handler FV harness
 */

#include "tdx_api_defs.h"
#include "tdx_basic_defs.h"
#include "tdx_basic_types.h"
#include "tdx_vmm_api_handlers.h"
#include "auto_gen/tdx_error_codes_defs.h"

#include "data_structures/tdx_global_data.h"
#include "helpers/tdx_locks.h"
#include "helpers/helpers.h"
#include "accessors/data_accessors.h"
#include "accessors/vt_accessors.h"

#include "fv_utils.h"
#include "fv_env.h"

void tdh_sys_update__call() {
    tdx_module_local_t* local_data = get_local_data();
    
    local_data->vmm_regs.rax = tdh_sys_update();
}

static inline void tdh_sys_update__common_precond() {
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = get_local_data()->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_SYS_UPDATE_LEAF);
}

static inline bool_t state_sys_state_is_valid() {
    return (get_global_data()->global_state.sys_state == SYSINIT_DONE);
}

static inline bool_t state_lp_state_is_valid() {
    return (get_global_data()->num_of_init_lps == get_global_data()->num_of_lps);
}

static inline bool_t state_handoff_data_is_valid() {
    return (((handoff_data_header_t*) get_sysinfo_table()->data_rgn_base)->valid == true);
}

static inline bool_t state_handoff_version_is_valid() {
    return (
        (((handoff_data_header_t*) get_sysinfo_table()->data_rgn_base)->hv >= get_global_data()->min_update_hv) &&
        (((handoff_data_header_t*) get_sysinfo_table()->data_rgn_base)->hv <= get_global_data()->module_hv)
    );
}

static inline bool_t all_conditions_valid() {
    return (
        state_sys_state_is_valid() &&
        state_lp_state_is_valid() &&
        state_handoff_data_is_valid() &&
        state_handoff_version_is_valid()
    );
}

static inline void tdh_sys_update__common_postcond() {
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

void tdh_sys_update__expected__precond() {
    tdh_sys_update__common_precond();
    TDXFV_ASSUME(all_conditions_valid());
}

void tdh_sys_update__expected__postcond() {
#ifdef TDXFV_CHECK_TDX_SUCCESS
    TDXFV_ASSERT(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
#else
    TDXFV_ASSERT(true);
#endif
    tdh_sys_update__common_postcond();
}

void tdh_sys_update__unexpected__precond() {
    tdh_sys_update__common_precond();
    TDXFV_ASSUME(!all_conditions_valid());
}

void tdh_sys_update__unexpected__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
    tdh_sys_update__common_postcond();
}

void tdh_sys_update__unconstrained__precond() {
    tdh_sys_update__common_precond();
    TDXFV_ASSUME(true);
}

// Special test cases
void tdh_sys_update__invalid_state_sys_state__precond() {
    tdh_sys_update__common_precond();
    TDXFV_ASSUME(
        !state_sys_state_is_valid() && // invalid system state
        state_lp_state_is_valid() &&
        state_handoff_data_is_valid() &&
        state_handoff_version_is_valid()
    );
}

void tdh_sys_update__invalid_state_sys_state__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_SYS_STATE_INCORRECT) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_update__common_postcond();
}

void tdh_sys_update__invalid_state_lp_state__precond() {
    tdh_sys_update__common_precond();
    TDXFV_ASSUME(
        state_sys_state_is_valid() &&
        !state_lp_state_is_valid() && // invalid LP state
        state_handoff_data_is_valid() &&
        state_handoff_version_is_valid()
    );
}

void tdh_sys_update__invalid_state_lp_state__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_SYS_STATE_INCORRECT) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_update__common_postcond();
}

void tdh_sys_update__invalid_state_handoff_data__precond() {
    tdh_sys_update__common_precond();
    TDXFV_ASSUME(
        state_sys_state_is_valid() &&
        state_lp_state_is_valid() &&
        !state_handoff_data_is_valid() && // invalid handoff data
        state_handoff_version_is_valid()
    );
}

void tdh_sys_update__invalid_state_handoff_data__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_SYS_INVALID_HANDOFF) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_update__common_postcond();
}

void tdh_sys_update__invalid_state_handoff_version__precond() {
    tdh_sys_update__common_precond();
    TDXFV_ASSUME(
        state_sys_state_is_valid() &&
        state_lp_state_is_valid() &&
        state_handoff_data_is_valid() &&
        !state_handoff_version_is_valid() // invalid handoff version
    );
}

void tdh_sys_update__invalid_state_handoff_version__postcond() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSERT(
        (local_data->vmm_regs.rax == TDX_SYS_INVALID_HANDOFF) ||
        (local_data->vmm_regs.rax == TDX_SYS_BUSY)
    );
    tdh_sys_update__common_postcond();
}

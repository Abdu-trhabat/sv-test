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

void tdh_sys_update__common_precond() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_SYS_UPDATE_LEAF);
}

void tdh_sys_update__invalid_state_sys_state(){
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    // Task-specific precondition
    TDXFV_ASSUME(global_data->global_state.sys_state != SYSINIT_DONE); // invalid sys_state
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data_fv.num_of_lps);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->valid == true);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv >= global_data_fv.min_update_hv);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv <= global_data_fv.module_hv);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_update();

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_SYS_STATE_INCORRECT);
}

void tdh_sys_update__invalid_state_lp_state(){
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    // Task-specific precondition
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    TDXFV_ASSUME(global_data->num_of_init_lps != global_data_fv.num_of_lps); // LP not init
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->valid == true);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv >= global_data_fv.min_update_hv);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv <= global_data_fv.module_hv);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_update();

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_SYS_STATE_INCORRECT);
}

void tdh_sys_update__invalid_state_handoff_data(){
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    // Task-specific precondition
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data_fv.num_of_lps);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->valid != true); // invalid handoff data
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv >= global_data_fv.min_update_hv);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv <= global_data_fv.module_hv);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_update();

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_SYS_INVALID_HANDOFF);
}

void tdh_sys_update__invalid_state_handoff_version(){
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    // Task-specific precondition
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data_fv.num_of_lps);
    TDXFV_ASSUME(((handoff_data_header_t*) sysinfo_table->data_rgn_base)->valid == true);
    TDXFV_ASSUME(
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv < global_data_fv.min_update_hv) ||
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv > global_data_fv.module_hv)
    ); // invalid handoff version

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_update();

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_SYS_INVALID_HANDOFF);
}

void tdh_sys_update__invalid_entry(){
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    // Task-specific precondition
    TDXFV_ASSUME(
        (global_data->global_state.sys_state != SYSINIT_DONE) ||
        (global_data->num_of_init_lps != global_data_fv.num_of_lps) ||
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->valid != true) ||
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv < global_data_fv.min_update_hv) ||
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv > global_data_fv.module_hv)
    );

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_update();

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
}

void tdh_sys_update__valid_entry(){
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();

    // Task-specific precondition
    TDXFV_ASSUME(
        (global_data->global_state.sys_state == SYSINIT_DONE) &&
        (global_data->num_of_init_lps == global_data_fv.num_of_lps) &&
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->valid == true) &&
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv >= global_data_fv.min_update_hv) &&
        (((handoff_data_header_t*) sysinfo_table->data_rgn_base)->hv <= global_data_fv.module_hv)
    );

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_update();

    // Task-specific postcondition
}

void tdh_sys_update__free_entry(){
    tdx_module_local_t* local_data = get_local_data();

    // Task-specific precondition

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_update();

    // Task-specific postcondition
}

void tdh_sys_update__post_cover_success(){
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax == TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_sys_update__post_cover_unsuccess(){
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax != TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_sys_update__common_postcond() {
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

    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax == shadow_guest_gpr_state_precall.rax);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbx == shadow_guest_gpr_state_precall.rbx);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rcx == shadow_guest_gpr_state_precall.rcx);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx == shadow_guest_gpr_state_precall.rdx);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsp == shadow_guest_gpr_state_precall.rsp);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbp == shadow_guest_gpr_state_precall.rbp);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsi == shadow_guest_gpr_state_precall.rsi);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdi == shadow_guest_gpr_state_precall.rdi);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8  == shadow_guest_gpr_state_precall.r8);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r9  == shadow_guest_gpr_state_precall.r9);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r10 == shadow_guest_gpr_state_precall.r10);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r11 == shadow_guest_gpr_state_precall.r11);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r12 == shadow_guest_gpr_state_precall.r12);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r13 == shadow_guest_gpr_state_precall.r13);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r14 == shadow_guest_gpr_state_precall.r14);
    TDXFV_ASSERT(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r15 == shadow_guest_gpr_state_precall.r15);

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

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
 * @file initialization.c
 * @brief Initialization and definition of FV setup global variables
 */

#include "accessors/data_accessors.h"

#include "fv_utils.h"
#include "fv_env.h"
#include "fv_nondets.h"


//
// TDX Module variables
//

tdx_module_local_t local_data_fv;
tdx_module_global_t global_data_fv;
sysinfo_table_t sysinfo_table_fv;

tdr_t tdr_fv;
tdcs_t tdcs_fv;
tdvps_t tdvps_fv;
tdmr_info_entry_t tdmr_info_fv[MAX_TDMRS];

//
// Shadow variables
//

gprs_state_t shadow_td_regs_precall;
gprs_state_t shadow_vmm_regs_precall;
gprs_state_t shadow_guest_gpr_state_precall;

bool_t fv_is_called_by_host;
bool_t fv_is_called_by_guest;

//
// Initialization methods
//

void init_tdx_general() {
    // Initialize global variables with non-deterministic values
    TDXFV_NONDET_struct_tdx_module_local_t(&local_data_fv);
    TDXFV_NONDET_struct_tdx_module_global_t(&global_data_fv);
    TDXFV_NONDET_struct_sysinfo_table_t(&sysinfo_table_fv);

    TDXFV_NONDET_struct_tdr_t(&tdr_fv);
    TDXFV_NONDET_struct_tdcs_t(&tdcs_fv);
    TDXFV_NONDET_struct_tdvps_t(&tdvps_fv);
    for (int i = 0; i < MAX_TDMRS; i++) {
        TDXFV_NONDET_struct_tdmr_info_entry_t(&(tdmr_info_fv[i]));
    }

    TDXFV_NONDET_struct_gprs_state_t(&shadow_td_regs_precall);
    TDXFV_NONDET_struct_gprs_state_t(&shadow_vmm_regs_precall);
    TDXFV_NONDET_struct_gprs_state_t(&shadow_guest_gpr_state_precall);

    // Borrow init triggered by the first call of VMM dispatcher
    init_data_fast_ref_ptrs();

    tdx_module_local_t* local_data_ptr = get_local_data();

    TDXFV_ASSUME(local_data_ptr->local_data_fast_ref_ptr == &local_data_fv);
    TDXFV_ASSUME(local_data_ptr->sysinfo_fast_ref_ptr == &sysinfo_table_fv);
    TDXFV_ASSUME(local_data_ptr->global_data_fast_ref_ptr == &global_data_fv);
    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdr == &tdr_fv);
    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdvps == &tdvps_fv);
    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdcs == &tdcs_fv);

    tdx_module_global_t* global_data_ptr = get_global_data();
    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();

    // Ref: tdx_init_global_data()
    TDXFV_ASSUME(global_data_ptr->num_of_lps == sysinfo_table_ptr->mcheck_fields.tot_num_lps);
    TDXFV_ASSUME(global_data_ptr->num_of_pkgs == sysinfo_table_ptr->mcheck_fields.tot_num_sockets);

    // Ref: tdh_sys_init() - XXX not true for early-stage ABIs
    TDXFV_ASSUME(global_data_ptr->hkid_mask == BITS(MAX_PA - 1, global_data_ptr->hkid_start_bit));

    // Ref: associate_vcpu_initial()
    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdvps->management.last_seamdb_index == global_data_ptr->seamdb_index);
    TDXFV_ASSUME(local_data_ptr->vp_ctx.tdvps->management.assoc_lpid == local_data_ptr->lp_info.lp_id);

    // Misc. modeling
    fv_is_called_by_host = TDXFV_NONDET_bool();
    fv_is_called_by_guest = TDXFV_NONDET_bool();
    tdxfv_abst_exception_init();
    tdxfv_abst_msr_init();
    tdxfv_abst_vcpu_init();
}

void init_vmm_dispatcher() {
    tdx_module_local_t* local_data = init_data_fast_ref_ptrs();
    tdx_module_global_t* global_data = get_global_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;

    // selected conditions from tdx_vmm_dispatcher
    TDXFV_ASSUME((leaf_opcode.reserved0 == 0) && (leaf_opcode.reserved1 == 0));
    TDXFV_ASSUME((leaf_opcode.version == 0) || (
        (leaf_opcode.leaf == TDH_MEM_PAGE_PROMOTE_LEAF) ||
        (leaf_opcode.leaf == TDH_MEM_SEPT_ADD_LEAF) ||
        (leaf_opcode.leaf == TDH_MEM_SEPT_REMOVE_LEAF) ||
        (leaf_opcode.leaf == TDH_MNG_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_VP_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_VP_INIT_LEAF)
    ));

    TDXFV_ASSUME((SYS_SHUTDOWN != global_data->global_state.sys_state) || 
        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF));

    TDXFV_ASSUME((global_data->global_state.sys_state == SYS_READY) ||
        (leaf_opcode.leaf == TDH_SYS_INFO_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_RDALL_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_INIT_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_LP_INIT_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_CONFIG_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_KEY_CONFIG_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_UPDATE_LEAF)
    );

    // Shadow variables
    shadow_td_regs_precall= local_data->td_regs;
    shadow_vmm_regs_precall = local_data->vmm_regs;
    shadow_guest_gpr_state_precall = local_data->vp_ctx.tdvps->guest_state.gpr_state;
    fv_is_called_by_host = true;
    fv_is_called_by_guest = false;
}

void init_tdcall() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    // Selected ops/conditions from td dispatcher (pre tdcall)
    uint16_t vm_id = tdx_local_data_ptr->vp_ctx.tdvps->management.curr_vm;
    TDXFV_ASSUME((vm_id == tdx_local_data_ptr->current_td_vm_id) && (vm_id == 0));

    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;
    tdvps_ptr->guest_state.gpr_state.rax = tdx_local_data_ptr->td_regs.rax;
    tdvps_ptr->guest_state.gpr_state.rcx = tdx_local_data_ptr->td_regs.rcx;
    tdvps_ptr->guest_state.gpr_state.rdx = tdx_local_data_ptr->td_regs.rdx;
    tdvps_ptr->guest_state.gpr_state.rbx = tdx_local_data_ptr->td_regs.rbx;
    tdvps_ptr->guest_state.gpr_state.rbp = tdx_local_data_ptr->td_regs.rbp;
    tdvps_ptr->guest_state.gpr_state.rsi = tdx_local_data_ptr->td_regs.rsi;
    tdvps_ptr->guest_state.gpr_state.rdi = tdx_local_data_ptr->td_regs.rdi;
    tdvps_ptr->guest_state.gpr_state.r8  = tdx_local_data_ptr->td_regs.r8;
    tdvps_ptr->guest_state.gpr_state.r9  = tdx_local_data_ptr->td_regs.r9;
    tdvps_ptr->guest_state.gpr_state.r10 = tdx_local_data_ptr->td_regs.r10;
    tdvps_ptr->guest_state.gpr_state.r11 = tdx_local_data_ptr->td_regs.r11;
    tdvps_ptr->guest_state.gpr_state.r12 = tdx_local_data_ptr->td_regs.r12;
    tdvps_ptr->guest_state.gpr_state.r13 = tdx_local_data_ptr->td_regs.r13;
    tdvps_ptr->guest_state.gpr_state.r14 = tdx_local_data_ptr->td_regs.r14;
    tdvps_ptr->guest_state.gpr_state.r15 = tdx_local_data_ptr->td_regs.r15;

    // Selected ops/conditions from tdcall
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = tdx_local_data_ptr->td_regs.rax;
    TDXFV_ASSUME((leaf_opcode.reserved0 == 0) && (leaf_opcode.reserved1 == 0));
    TDXFV_ASSUME((leaf_opcode.version == 0) || (leaf_opcode.leaf == TDG_VM_RD_LEAF));

    // Shadow variables
    shadow_td_regs_precall= tdx_local_data_ptr->td_regs;
    shadow_vmm_regs_precall = tdx_local_data_ptr->vmm_regs;
    shadow_guest_gpr_state_precall = tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state;
    fv_is_called_by_host = false;
    fv_is_called_by_guest = true;
}

void insert_error() {
    TDXFV_ASSERT(false);
}

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
#include "data_structures/loader_data.h"

#include "fv_utils.h"
#include "fv_env.h"
#include "fv_nondets.h"

//
// TDX state variables
//

tdx_module_local_t* local_data_fv_ptr;
tdx_module_global_t* global_data_fv_ptr;
sysinfo_table_t* sysinfo_table_fv_ptr;

tdr_t* tdr_fv_ptr;
tdcs_t* tdcs_fv_ptr;
tdvps_t* tdvps_fv_ptr;

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

void init_vmm_dispatcher() {
    fv_is_called_by_host = true;
    fv_is_called_by_guest = false;

    // selected conditions from tdx_vmm_dispatcher
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;

    bool_t lp_is_busy = local_data->lp_is_busy == true;

    bool_t leaf_opcode_reserved_is_valid = (
        (leaf_opcode.reserved0 == 0) &&
        (leaf_opcode.reserved1 == 0)
    );

    bool_t leaf_opcode_with_multi_versions = (
        (leaf_opcode.version == 0) ||
        (leaf_opcode.leaf == TDH_MEM_PAGE_PROMOTE_LEAF) ||
        (leaf_opcode.leaf == TDH_MEM_SEPT_ADD_LEAF) ||
        (leaf_opcode.leaf == TDH_MEM_SEPT_REMOVE_LEAF) ||
        (leaf_opcode.leaf == TDH_MNG_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_VP_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_VP_INIT_LEAF)
    );

    bool_t module_in_shutdown_state = (
        (global_data->global_state.sys_state != SYS_SHUTDOWN) ||
        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF)
    );

    bool_t module_not_in_ready_state = (
        (global_data->global_state.sys_state == SYS_READY) ||
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

    TDXFV_ASSUME(
        lp_is_busy &&
        leaf_opcode_reserved_is_valid &&
        leaf_opcode_with_multi_versions &&
        module_in_shutdown_state &&
        module_not_in_ready_state
    );
}

void init_tdcall() {
    fv_is_called_by_host = false;
    fv_is_called_by_guest = true;

    // Selected conditions from td dispatcher
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();

    bool_t valid_vm_id = (
        tdx_local_data_ptr->vp_ctx.tdvps->management.curr_vm == tdx_local_data_ptr->current_td_vm_id
    );

    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;
    bool_t save_td_gpr_state = (
        tdvps_ptr->guest_state.gpr_state.rax == tdx_local_data_ptr->td_regs.rax &&
        tdvps_ptr->guest_state.gpr_state.rcx == tdx_local_data_ptr->td_regs.rcx &&
        tdvps_ptr->guest_state.gpr_state.rdx == tdx_local_data_ptr->td_regs.rdx &&
        tdvps_ptr->guest_state.gpr_state.rbx == tdx_local_data_ptr->td_regs.rbx &&
        tdvps_ptr->guest_state.gpr_state.rbp == tdx_local_data_ptr->td_regs.rbp &&
        tdvps_ptr->guest_state.gpr_state.rsi == tdx_local_data_ptr->td_regs.rsi &&
        tdvps_ptr->guest_state.gpr_state.rdi == tdx_local_data_ptr->td_regs.rdi &&
        tdvps_ptr->guest_state.gpr_state.r8  == tdx_local_data_ptr->td_regs.r8 &&
        tdvps_ptr->guest_state.gpr_state.r9  == tdx_local_data_ptr->td_regs.r9 &&
        tdvps_ptr->guest_state.gpr_state.r10 == tdx_local_data_ptr->td_regs.r10 &&
        tdvps_ptr->guest_state.gpr_state.r11 == tdx_local_data_ptr->td_regs.r11 &&
        tdvps_ptr->guest_state.gpr_state.r12 == tdx_local_data_ptr->td_regs.r12 &&
        tdvps_ptr->guest_state.gpr_state.r13 == tdx_local_data_ptr->td_regs.r13 &&
        tdvps_ptr->guest_state.gpr_state.r14 == tdx_local_data_ptr->td_regs.r14 &&
        tdvps_ptr->guest_state.gpr_state.r15 == tdx_local_data_ptr->td_regs.r15
    );

    // Selected conditions from tdcall
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = tdx_local_data_ptr->td_regs.rax;

    bool_t leaf_opcode_reserved_is_valid = (
        (leaf_opcode.reserved0 == 0) &&
        (leaf_opcode.reserved1 == 0)
    );

    bool_t leaf_opcode_with_multi_versions = (
        (leaf_opcode.version == 0) ||
        (leaf_opcode.leaf == TDG_VM_RD_LEAF)
    );

    TDXFV_ASSUME(
        valid_vm_id &&
        save_td_gpr_state &&
        leaf_opcode_reserved_is_valid &&
        leaf_opcode_with_multi_versions
    );
}

void init_handoff_data_region()
{
    //  1. Allocate handoff data region based on the symbolic value of #handoff pages in global module
    //  Size: (#handoff pages + 1) * TDX page size in bytes (4 KB)
    tdx_module_global_t *global_data = get_global_data();
    size_t data_rgn_size = (global_data->num_handoff_pages + 1) * TDX_PAGE_SIZE_IN_BYTES;
    // Although data_rgn_size is symbolic because # of handoff pages is symbolic, KLEE will pick one concrete value for malloc
    void *data_rgn_base = TDXFV_malloc(data_rgn_size);
    // Make the content in the data region symbolic (for KLEE, it picks a fixed size)
    TDXFV_NONDET_array_1D_unsigned_char(data_rgn_base, data_rgn_size);

    // 2. Constrain the metadata in sysinfo_table using assume
    sysinfo_table_t *sysinfo_table = get_sysinfo_table();
    TDXFV_ASSUME_EQ_PTR(sysinfo_table->data_rgn_base, (uint64_t)(data_rgn_base));
    TDXFV_ASSUME(sysinfo_table->data_rgn_size == (uint64_t)(data_rgn_size));

    // 3. Constrain the header of the handoff data using assume
    handoff_data_header_t *handoff_data_header = (handoff_data_header_t *)sysinfo_table->data_rgn_base;
    TDXFV_ASSUME(handoff_data_header->size == sysinfo_table->data_rgn_size - sizeof(handoff_data_header_t));
}

void free_handoff_data_region()
{
    sysinfo_table_t *sysinfo_table = get_sysinfo_table();
    free((void *)(sysinfo_table->data_rgn_base));
}

// TDH.MEM.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : No
//   TDMR  : Yes
void init_tdh_mem_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdmr_info();
#endif
    init_vmm_dispatcher();
}

void close_tdh_mem_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdmr_info();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdh_mem_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.MR.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : No
//   TDMR  : No (except TDH.MR.EXTEND)
void init_tdh_mr_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
#endif
    init_vmm_dispatcher();
}

void close_tdh_mr_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdh_mr_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.VP.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : Yes
//   TDMR  : No
void init_tdh_vp_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
#endif
    init_vmm_dispatcher();
}

void close_tdh_vp_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdh_vp_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.MNG.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : No
//   TDMR  : No
void init_tdh_mng_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
#endif
    init_vmm_dispatcher();
}

void close_tdh_mng_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdh_mng_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.PHYMEM.*
//   TDR   : No
//   TDCS  : No
//   TDVPS : No
//   TDMR  : No (except TDH.PHYMEM.PAGE.RDMD, TDH.PHYMEM.PAGE.RECLAIM)
void init_tdh_phymem_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
#endif
    init_vmm_dispatcher();
}

void close_tdh_phymem_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
#endif
    fv_teardown_module_state();
}

void close_tdh_phymem_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
#endif
    fv_teardown_with_check_module_state();
}

void init_tdh_phymem_reclaim() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdmr_info();
#endif
    init_vmm_dispatcher();
}

void close_tdh_phymem_reclaim() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdmr_info();
#endif
    fv_teardown_module_state();
}

void close_tdh_phymem_reclaim_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdmr_info();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.SYS.*
//   TDR   : No
//   TDCS  : No
//   TDVPS : No
//   TDMR  : No (except TDH.SYS.CONFIG, TDH.SYS.TDMR.INIT)
void init_tdh_sys_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
#endif
    init_vmm_dispatcher();
}

void close_tdh_sys_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
#endif
    fv_teardown_module_state();
}

void close_tdh_sys_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
#endif
    fv_teardown_with_check_module_state();
}

void init_tdh_sys_config() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdmr_info();
#endif
    init_vmm_dispatcher();
}

void close_tdh_sys_config() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdmr_info();
#endif
    fv_teardown_module_state();
}

void close_tdh_sys_config_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdmr_info();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.SERVTD.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : No
//   TDMR  : No
void init_tdh_servtd_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
#endif
    init_vmm_dispatcher();
}

void close_tdh_servtd_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdh_servtd_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.EXPORT.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : No (except TDH.EXPORT.STATE.VP)
//   TDMR  : No
void init_tdh_export_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
#endif
    init_vmm_dispatcher();
}

void close_tdh_export_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdh_export_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDH.IMPORT.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : No (except TDH.IMPORT.STATE.VP)
//   TDMR  : No
void init_tdh_import_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
#endif
    init_vmm_dispatcher();
}

void close_tdh_import_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdh_import_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDG.VP.*
//   TDR   : No
//   TDCS  : Yes
//   TDVPS : Yes
//   TDMR  : No
void init_tdg_vp_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
#endif
    init_tdcall();
}

void close_tdg_vp_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdg_vp_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDG.MR.*
//   TDR   : No
//   TDCS  : No (except TDG.MR.REPORT, TDG.MR.RTMR.EXTEND, TDG.MR.KEY.GET)
//   TDVPS : No (TBD)
//   TDMR  : No
void init_tdg_mr_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdvps();
#endif
    init_tdcall();
}

void close_tdg_mr_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdvps();
#endif
    fv_teardown_module_state();
}

void close_tdg_mr_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdvps();
#endif
    fv_teardown_with_check_module_state();
}

void init_tdg_mr_report() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
#endif
    init_tdcall();
}

void close_tdg_mr_report() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#endif
    fv_teardown_module_state();
}

void close_tdg_mr_report_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#endif
    fv_teardown_with_check_module_state();
}

// TDG.MEM.PAGE.*
//   TDR   : No
//   TDCS  : No
//   TDVPS : No (TBD)
//   TDMR  : Yes
void init_tdg_mem_page_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#endif
    init_tdcall();
}

void close_tdg_mem_page_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
#endif
    fv_teardown_module_state();
}

void close_tdg_mem_page_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
#endif
    fv_teardown_with_check_module_state();
}

// TDG.VM.*
//   TDR   : No
//   TDCS  : Yes
//   TDVPS : No (TBD)
//   TDMR  : No
void init_tdg_vm_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdcs();
    fv_setup_tdvps();
#endif
    init_tdcall();
}

void close_tdg_vm_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdvps();
    fv_teardown_tdcs();
#endif
    fv_teardown_module_state();
}

void close_tdg_vm_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
#endif
    fv_teardown_with_check_module_state();
}

// TDG.SYS.*
//   TDR   : No
//   TDCS  : No
//   TDVPS : No (TBD)
//   TDMR  : No
void init_tdg_sys_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdvps();
#endif
    init_tdcall();
}

void close_tdg_sys_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdvps();
#endif
    fv_teardown_module_state();
}

void close_tdg_sys_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdvps();
#endif
    fv_teardown_with_check_module_state();
}

// TDG.SERVTD.*
//   TDR   : Yes
//   TDCS  : Yes
//   TDVPS : No (TBD)
//   TDMR  : No
void init_tdg_servtd_xxx() {
    fv_setup_module_state();
#ifdef TDXFV_EAGER_INIT
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    fv_setup_tdmr_info();
#else
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
#endif
    init_tdcall();
}

void close_tdg_servtd_xxx() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_tdmr_info();
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
#else
    fv_teardown_tdvps();
    fv_teardown_tdcs();
#endif
    fv_teardown_module_state();
}

void close_tdg_servtd_xxx_with_check() {
#ifdef TDXFV_EAGER_INIT
    fv_teardown_with_check_tdmr_info();
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_tdr();
#else
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
#endif
    fv_teardown_with_check_module_state();
}

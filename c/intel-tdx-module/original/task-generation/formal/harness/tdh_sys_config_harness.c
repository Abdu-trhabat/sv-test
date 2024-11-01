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

void tdh_sys_config__common_precond() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    TDXFV_ASSUME(leaf_opcode.leaf == TDH_SYS_CONFIG_LEAF);

    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int i = 0; i < MAX_TDMRS; i++) {
        tdmr_array[i] = &(tdmr_info_fv[i]);
    }
}

void tdh_sys_config__invalid_input_hkid() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition
    // invalid input R8 (HKID)
    TDXFV_ASSUME(!(global_private_hkid.reserved == 0) ||
                 !((global_private_hkid.hkid >= global_data->private_hkid_min) && (global_private_hkid.hkid <= global_data->private_hkid_max))
    );

    // valid input RDX
    TDXFV_ASSUME((local_data->vmm_regs.rdx >= 1) && (local_data->vmm_regs.rdx <= 64));

    // valid state TDMR
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int idx = 0; idx < local_data->vmm_regs.rdx; idx++) {
        TDXFV_ASSUME((tdmr_array[idx]->tdmr_base % _1GB) == 0);

        TDXFV_ASSUME((tdmr_array[idx]->tdmr_size > 0) && ((tdmr_array[idx]->tdmr_size % _1GB) == 0));

        TDXFV_ASSUME(tdmr_array[idx]->tdmr_base < BIT(MAX_PA));
        pa_t tdmr_base_pa = (pa_t) tdmr_array[idx]->tdmr_base;
        TDXFV_ASSUME(((tdmr_base_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_1g_base < BIT(MAX_PA));
        pa_t pamt_1g_pa = (pa_t) tdmr_array[idx]->pamt_1g_base;
        TDXFV_ASSUME(((pamt_1g_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_2m_base < BIT(MAX_PA));
        pa_t pamt_2m_pa = (pa_t) tdmr_array[idx]->pamt_2m_base;
        TDXFV_ASSUME(((pamt_2m_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_4k_base < BIT(MAX_PA));
        pa_t pamt_4k_pa = (pa_t) tdmr_array[idx]->pamt_4k_base;
        TDXFV_ASSUME(((pamt_4k_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        for (int rsv_idx = 1; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // reserved areas are sorted
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
            // null reserved area (size == 0) only followed by null reserved area
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx-1].size != 0) || (tdmr_array[idx]->rsvd_areas[rsv_idx].size == 0));
            // reserved areas not overlap
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset + tdmr_array[idx]->rsvd_areas[rsv_idx-1].size <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
        }

        for (int rsv_idx = 0; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // containment
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].size >= 0);
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].offset >= tdmr_array[idx]->tdmr_base);
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx].offset + tdmr_array[idx]->rsvd_areas[rsv_idx].size) < 
                         (tdmr_array[idx]->tdmr_base + tdmr_array[idx]->tdmr_size));
        }
    }
    // TDMRs don't overlap
    for (int idx = 1; idx < local_data->vmm_regs.rdx; idx++) { 
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base);
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base);
    }

    // valid state sys_state
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    // valid state lp_stae
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data->num_of_lps);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_R8));
}

void tdh_sys_config__invalid_input_num_ptr() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition
    // valid input R8
    TDXFV_ASSUME(global_private_hkid.reserved == 0);
    TDXFV_ASSUME((global_private_hkid.hkid >= global_data->private_hkid_min) && (global_private_hkid.hkid <= global_data->private_hkid_max));

    // invalid input RDX (number of pointers)
    TDXFV_ASSUME(!((local_data->vmm_regs.rdx >= 1) && (local_data->vmm_regs.rdx <= 64)));

    // valid state TDMR
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int idx = 0; idx < local_data->vmm_regs.rdx; idx++) {
        TDXFV_ASSUME((tdmr_array[idx]->tdmr_base % _1GB) == 0);

        TDXFV_ASSUME((tdmr_array[idx]->tdmr_size > 0) && ((tdmr_array[idx]->tdmr_size % _1GB) == 0));

        TDXFV_ASSUME(tdmr_array[idx]->tdmr_base < BIT(MAX_PA));
        pa_t tdmr_base_pa = (pa_t) tdmr_array[idx]->tdmr_base;
        TDXFV_ASSUME(((tdmr_base_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_1g_base < BIT(MAX_PA));
        pa_t pamt_1g_pa = (pa_t) tdmr_array[idx]->pamt_1g_base;
        TDXFV_ASSUME(((pamt_1g_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_2m_base < BIT(MAX_PA));
        pa_t pamt_2m_pa = (pa_t) tdmr_array[idx]->pamt_2m_base;
        TDXFV_ASSUME(((pamt_2m_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_4k_base < BIT(MAX_PA));
        pa_t pamt_4k_pa = (pa_t) tdmr_array[idx]->pamt_4k_base;
        TDXFV_ASSUME(((pamt_4k_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        for (int rsv_idx = 1; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // reserved areas are sorted
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
            // null reserved area (size == 0) only followed by null reserved area
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx-1].size != 0) || (tdmr_array[idx]->rsvd_areas[rsv_idx].size == 0));
            // reserved areas not overlap
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset + tdmr_array[idx]->rsvd_areas[rsv_idx-1].size <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
        }

        for (int rsv_idx = 0; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // containment
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].size >= 0);
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].offset >= tdmr_array[idx]->tdmr_base);
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx].offset + tdmr_array[idx]->rsvd_areas[rsv_idx].size) < 
                         (tdmr_array[idx]->tdmr_base + tdmr_array[idx]->tdmr_size));
        }
    }
    // TDMRs don't overlap
    for (int idx = 1; idx < local_data->vmm_regs.rdx; idx++) { 
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base);
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base);
    }

    // valid state sys_state
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    // valid state lp_stae
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data->num_of_lps);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RDX));
}

void tdh_sys_config__invalid_state_sys_state() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition
    // valid input R8
    TDXFV_ASSUME(global_private_hkid.reserved == 0);
    TDXFV_ASSUME((global_private_hkid.hkid >= global_data->private_hkid_min) && (global_private_hkid.hkid <= global_data->private_hkid_max));

    // valid input RDX
    TDXFV_ASSUME((local_data->vmm_regs.rdx >= 1) && (local_data->vmm_regs.rdx <= 64));

    // valid state TDMR
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int idx = 0; idx < local_data->vmm_regs.rdx; idx++) {
        TDXFV_ASSUME((tdmr_array[idx]->tdmr_base % _1GB) == 0);

        TDXFV_ASSUME((tdmr_array[idx]->tdmr_size > 0) && ((tdmr_array[idx]->tdmr_size % _1GB) == 0));

        TDXFV_ASSUME(tdmr_array[idx]->tdmr_base < BIT(MAX_PA));
        pa_t tdmr_base_pa = (pa_t) tdmr_array[idx]->tdmr_base;
        TDXFV_ASSUME(((tdmr_base_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_1g_base < BIT(MAX_PA));
        pa_t pamt_1g_pa = (pa_t) tdmr_array[idx]->pamt_1g_base;
        TDXFV_ASSUME(((pamt_1g_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_2m_base < BIT(MAX_PA));
        pa_t pamt_2m_pa = (pa_t) tdmr_array[idx]->pamt_2m_base;
        TDXFV_ASSUME(((pamt_2m_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_4k_base < BIT(MAX_PA));
        pa_t pamt_4k_pa = (pa_t) tdmr_array[idx]->pamt_4k_base;
        TDXFV_ASSUME(((pamt_4k_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        for (int rsv_idx = 1; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // reserved areas are sorted
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
            // null reserved area (size == 0) only followed by null reserved area
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx-1].size != 0) || (tdmr_array[idx]->rsvd_areas[rsv_idx].size == 0));
            // reserved areas not overlap
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset + tdmr_array[idx]->rsvd_areas[rsv_idx-1].size <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
        }

        for (int rsv_idx = 0; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // containment
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].size >= 0);
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].offset >= tdmr_array[idx]->tdmr_base);
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx].offset + tdmr_array[idx]->rsvd_areas[rsv_idx].size) < 
                         (tdmr_array[idx]->tdmr_base + tdmr_array[idx]->tdmr_size));
        }
    }
    // TDMRs don't overlap
    for (int idx = 1; idx < local_data->vmm_regs.rdx; idx++) { 
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base);
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base);
    }

    // invalid state sys_state
    TDXFV_ASSUME(global_data->global_state.sys_state != SYSINIT_DONE);
    // valid state lp_stae
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data->num_of_lps);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_SYS_CONFIG_NOT_PENDING);
}

void tdh_sys_config__invalid_state_lp_state() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition
    // valid input R8
    TDXFV_ASSUME(global_private_hkid.reserved == 0);
    TDXFV_ASSUME((global_private_hkid.hkid >= global_data->private_hkid_min) && (global_private_hkid.hkid <= global_data->private_hkid_max));

    // valid input RDX
    TDXFV_ASSUME((local_data->vmm_regs.rdx >= 1) && (local_data->vmm_regs.rdx <= 64));

    // valid state TDMR
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int idx = 0; idx < local_data->vmm_regs.rdx; idx++) {
        TDXFV_ASSUME((tdmr_array[idx]->tdmr_base % _1GB) == 0);

        TDXFV_ASSUME((tdmr_array[idx]->tdmr_size > 0) && ((tdmr_array[idx]->tdmr_size % _1GB) == 0));

        TDXFV_ASSUME(tdmr_array[idx]->tdmr_base < BIT(MAX_PA));
        pa_t tdmr_base_pa = (pa_t) tdmr_array[idx]->tdmr_base;
        TDXFV_ASSUME(((tdmr_base_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_1g_base < BIT(MAX_PA));
        pa_t pamt_1g_pa = (pa_t) tdmr_array[idx]->pamt_1g_base;
        TDXFV_ASSUME(((pamt_1g_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_2m_base < BIT(MAX_PA));
        pa_t pamt_2m_pa = (pa_t) tdmr_array[idx]->pamt_2m_base;
        TDXFV_ASSUME(((pamt_2m_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_4k_base < BIT(MAX_PA));
        pa_t pamt_4k_pa = (pa_t) tdmr_array[idx]->pamt_4k_base;
        TDXFV_ASSUME(((pamt_4k_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        for (int rsv_idx = 1; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // reserved areas are sorted
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
            // null reserved area (size == 0) only followed by null reserved area
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx-1].size != 0) || (tdmr_array[idx]->rsvd_areas[rsv_idx].size == 0));
            // reserved areas not overlap
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset + tdmr_array[idx]->rsvd_areas[rsv_idx-1].size <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
        }

        for (int rsv_idx = 0; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // containment
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].size >= 0);
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].offset >= tdmr_array[idx]->tdmr_base);
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx].offset + tdmr_array[idx]->rsvd_areas[rsv_idx].size) < 
                         (tdmr_array[idx]->tdmr_base + tdmr_array[idx]->tdmr_size));
        }
    }
    // TDMRs don't overlap
    for (int idx = 1; idx < local_data->vmm_regs.rdx; idx++) { 
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base);
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base);
    }

    // valid state sys_state
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    // invalid state lp_stae
    TDXFV_ASSUME(global_data->num_of_init_lps != global_data->num_of_lps);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax == TDX_SYS_CONFIG_NOT_PENDING);
}

void tdh_sys_config__invalid_state_tdmr_info() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition
    // valid input R8
    TDXFV_ASSUME(global_private_hkid.reserved == 0);
    TDXFV_ASSUME((global_private_hkid.hkid >= global_data->private_hkid_min) && (global_private_hkid.hkid <= global_data->private_hkid_max));

    // valid input RDX
    TDXFV_ASSUME((local_data->vmm_regs.rdx >= 1) && (local_data->vmm_regs.rdx <= 64));

    // invalid state TDMR
    // TODO more fine-grained scenarios
    bool_t precond = true;
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int idx = 0; idx < local_data->vmm_regs.rdx; idx++) {
        precond = precond && ((tdmr_array[idx]->tdmr_base % _1GB) == 0);

        precond = precond && ((tdmr_array[idx]->tdmr_size > 0) && ((tdmr_array[idx]->tdmr_size % _1GB) == 0));

        precond = precond && (tdmr_array[idx]->tdmr_base < BIT(MAX_PA));
        pa_t tdmr_base_pa = (pa_t) tdmr_array[idx]->tdmr_base;
        precond = precond && (((tdmr_base_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        precond = precond && (tdmr_array[idx]->pamt_1g_base < BIT(MAX_PA));
        pa_t pamt_1g_pa = (pa_t) tdmr_array[idx]->pamt_1g_base;
        precond = precond && (((pamt_1g_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        precond = precond && (tdmr_array[idx]->pamt_2m_base < BIT(MAX_PA));
        pa_t pamt_2m_pa = (pa_t) tdmr_array[idx]->pamt_2m_base;
        precond = precond && (((pamt_2m_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        precond = precond && (tdmr_array[idx]->pamt_4k_base < BIT(MAX_PA));
        pa_t pamt_4k_pa = (pa_t) tdmr_array[idx]->pamt_4k_base;
        precond = precond && (((pamt_4k_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        for (int rsv_idx = 1; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // reserved areas are sorted
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
            // null reserved area (size == 0) only followed by null reserved area
            precond = precond && ((tdmr_array[idx]->rsvd_areas[rsv_idx-1].size != 0) || (tdmr_array[idx]->rsvd_areas[rsv_idx].size == 0));
            // reserved areas not overlap
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset + tdmr_array[idx]->rsvd_areas[rsv_idx-1].size <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
        }

        for (int rsv_idx = 0; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // containment
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx].size >= 0);
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx].offset >= tdmr_array[idx]->tdmr_base);
            precond = precond && ((tdmr_array[idx]->rsvd_areas[rsv_idx].offset + tdmr_array[idx]->rsvd_areas[rsv_idx].size) < 
                         (tdmr_array[idx]->tdmr_base + tdmr_array[idx]->tdmr_size));
        }
    }
    // TDMRs overlap
    for (int idx = 1; idx < local_data->vmm_regs.rdx; idx++) { 
        precond = precond && (tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base);
        precond = precond && (tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base);
    }
    TDXFV_ASSUME(precond == false);

    // valid state sys_state
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    // valid state lp_stae
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data->num_of_lps);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
    TDXFV_ASSERT((local_data->vmm_regs.rax == TDX_INVALID_PAMT) ||
                 (local_data->vmm_regs.rax == TDX_INVALID_RESERVED_IN_TDMR) ||
                 (local_data->vmm_regs.rax == TDX_INVALID_TDMR) ||
                 (local_data->vmm_regs.rax == TDX_NON_ORDERED_RESERVED_IN_TDMR) ||
                 (local_data->vmm_regs.rax == TDX_NON_ORDERED_TDMR) ||
                 (local_data->vmm_regs.rax == TDX_PAMT_OUTSIDE_CMRS) ||
                 (local_data->vmm_regs.rax == TDX_PAMT_OVERLAP) ||
                 (local_data->vmm_regs.rax == api_error_with_operand_id(TDX_OPERAND_INVALID, OPERAND_ID_RCX))
    );
}

void tdh_sys_config__invalid_entry() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition
    bool_t precond = true;
    // input R8
    precond = precond && (global_private_hkid.reserved == 0);
    precond = precond && ((global_private_hkid.hkid >= global_data->private_hkid_min) && (global_private_hkid.hkid <= global_data->private_hkid_max));

    // input RDX
    precond = precond && ((local_data->vmm_regs.rdx >= 1) && (local_data->vmm_regs.rdx <= 64));

    // state TDMR (pointed by input RCX)
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int idx = 0; idx < local_data->vmm_regs.rdx; idx++) {
        precond = precond && ((tdmr_array[idx]->tdmr_base % _1GB) == 0);

        precond = precond && ((tdmr_array[idx]->tdmr_size > 0) && ((tdmr_array[idx]->tdmr_size % _1GB) == 0));

        precond = precond && (tdmr_array[idx]->tdmr_base < BIT(MAX_PA));
        pa_t tdmr_base_pa = (pa_t) tdmr_array[idx]->tdmr_base;
        precond = precond && (((tdmr_base_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        precond = precond && (tdmr_array[idx]->pamt_1g_base < BIT(MAX_PA));
        pa_t pamt_1g_pa = (pa_t) tdmr_array[idx]->pamt_1g_base;
        precond = precond && (((pamt_1g_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        precond = precond && (tdmr_array[idx]->pamt_2m_base < BIT(MAX_PA));
        pa_t pamt_2m_pa = (pa_t) tdmr_array[idx]->pamt_2m_base;
        precond = precond && (((pamt_2m_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        precond = precond && (tdmr_array[idx]->pamt_4k_base < BIT(MAX_PA));
        pa_t pamt_4k_pa = (pa_t) tdmr_array[idx]->pamt_4k_base;
        precond = precond && (((pamt_4k_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        for (int rsv_idx = 1; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // reserved areas are sorted
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
            // null reserved area (size == 0) only followed by null reserved area
            precond = precond && ((tdmr_array[idx]->rsvd_areas[rsv_idx-1].size != 0) || (tdmr_array[idx]->rsvd_areas[rsv_idx].size == 0));
            // reserved areas not overlap
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset + tdmr_array[idx]->rsvd_areas[rsv_idx-1].size <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
        }

        for (int rsv_idx = 0; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // containment
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx].size >= 0);
            precond = precond && (tdmr_array[idx]->rsvd_areas[rsv_idx].offset >= tdmr_array[idx]->tdmr_base);
            precond = precond && ((tdmr_array[idx]->rsvd_areas[rsv_idx].offset + tdmr_array[idx]->rsvd_areas[rsv_idx].size) < 
                         (tdmr_array[idx]->tdmr_base + tdmr_array[idx]->tdmr_size));
        }
    }
    // TDMRs overlap
    for (int idx = 1; idx < local_data->vmm_regs.rdx; idx++) { 
        precond = precond && (tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base);
        precond = precond && (tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base);
    }

    // state sys_state
    precond = precond && (global_data->global_state.sys_state == SYSINIT_DONE);
    // state lp_stae
    precond = precond && (global_data->num_of_init_lps == global_data->num_of_lps);

    TDXFV_ASSUME(precond == false);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
    TDXFV_ASSERT(local_data->vmm_regs.rax != TDX_SUCCESS);
}

void tdh_sys_config__valid_entry() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition
    // valid input R8
    TDXFV_ASSUME(global_private_hkid.reserved == 0);
    TDXFV_ASSUME((global_private_hkid.hkid >= global_data->private_hkid_min) && (global_private_hkid.hkid <= global_data->private_hkid_max));

    // valid input RDX
    TDXFV_ASSUME((local_data->vmm_regs.rdx >= 1) && (local_data->vmm_regs.rdx <= 64));

    // valid state TDMR
    tdmr_info_entry_t** tdmr_array = (tdmr_info_entry_t**) local_data->vmm_regs.rcx;
    for (int idx = 0; idx < local_data->vmm_regs.rdx; idx++) {
        TDXFV_ASSUME((tdmr_array[idx]->tdmr_base % _1GB) == 0);

        TDXFV_ASSUME((tdmr_array[idx]->tdmr_size > 0) && ((tdmr_array[idx]->tdmr_size % _1GB) == 0));

        TDXFV_ASSUME(tdmr_array[idx]->tdmr_base < BIT(MAX_PA));
        pa_t tdmr_base_pa = (pa_t) tdmr_array[idx]->tdmr_base;
        TDXFV_ASSUME(((tdmr_base_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_1g_base < BIT(MAX_PA));
        pa_t pamt_1g_pa = (pa_t) tdmr_array[idx]->pamt_1g_base;
        TDXFV_ASSUME(((pamt_1g_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_2m_base < BIT(MAX_PA));
        pa_t pamt_2m_pa = (pa_t) tdmr_array[idx]->pamt_2m_base;
        TDXFV_ASSUME(((pamt_2m_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        TDXFV_ASSUME(tdmr_array[idx]->pamt_4k_base < BIT(MAX_PA));
        pa_t pamt_4k_pa = (pa_t) tdmr_array[idx]->pamt_4k_base;
        TDXFV_ASSUME(((pamt_4k_pa.full_pa * global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);

        for (int rsv_idx = 1; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // reserved areas are sorted
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
            // null reserved area (size == 0) only followed by null reserved area
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx-1].size != 0) || (tdmr_array[idx]->rsvd_areas[rsv_idx].size == 0));
            // reserved areas not overlap
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx-1].offset + tdmr_array[idx]->rsvd_areas[rsv_idx-1].size <= tdmr_array[idx]->rsvd_areas[rsv_idx].offset);
        }

        for (int rsv_idx = 0; rsv_idx < MAX_RESERVED_AREAS; rsv_idx++) {
            // containment
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].size >= 0);
            TDXFV_ASSUME(tdmr_array[idx]->rsvd_areas[rsv_idx].offset >= tdmr_array[idx]->tdmr_base);
            TDXFV_ASSUME((tdmr_array[idx]->rsvd_areas[rsv_idx].offset + tdmr_array[idx]->rsvd_areas[rsv_idx].size) < 
                         (tdmr_array[idx]->tdmr_base + tdmr_array[idx]->tdmr_size));
        }
    }
    // TDMRs don't overlap
    for (int idx = 1; idx < local_data->vmm_regs.rdx; idx++) { 
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base < tdmr_array[idx]->tdmr_base);
        TDXFV_ASSUME(tdmr_array[idx-1]->tdmr_base + tdmr_array[idx-1]->tdmr_size <= tdmr_array[idx]->tdmr_base);
    }

    // valid state sys_state
    TDXFV_ASSUME(global_data->global_state.sys_state == SYSINIT_DONE);
    // valid state lp_stae
    TDXFV_ASSUME(global_data->num_of_init_lps == global_data->num_of_lps);

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
}

void tdh_sys_config__free_entry() {
    tdx_module_local_t* local_data = get_local_data();
    hkid_api_input_t global_private_hkid;
    global_private_hkid.raw = local_data->vmm_regs.r8;

    // Task-specific precondition

    // Call ABI function
    local_data->vmm_regs.rax = tdh_sys_config(local_data->vmm_regs.rcx,
                                              local_data->vmm_regs.rdx,
                                              global_private_hkid);

    // Task-specific postcondition
}

void tdh_sys_config__post_cover_success() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax == TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_sys_config__post_cover_unsuccess() {
    tdx_module_local_t* local_data = get_local_data();
    TDXFV_ASSUME(local_data->vmm_regs.rax != TDX_SUCCESS);

    TDXFV_ASSERT(false);
}

void tdh_sys_config__common_postcond() {
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
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
 * @file misc_invariants.h
 * @brief Miscellaneous invariants
 */
#ifndef __MISC_INVARIANTS_H_INCLUDED_
#define __MISC_INVARIANTS_H_INCLUDED_

#include "accessors/data_accessors.h"
#include "data_structures/loader_data.h"

#include "fv_utils.h"
#include "fv_env.h"
#include "fv_nondets.h"


static inline bool_t fv_invariant_init_data_fast_ref_ptrs() {
    tdx_module_global_t* global_data_ptr = get_global_data();
    tdx_module_local_t* local_data_ptr = get_local_data();
    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();

    // Ref: init_data_fast_ref_ptrs()
    bool_t is_valid_fast_ref_ptrs =
        (local_data_ptr->local_data_fast_ref_ptr == local_data_ptr) &&
        (local_data_ptr->sysinfo_fast_ref_ptr == sysinfo_table_ptr) &&
        (local_data_ptr->global_data_fast_ref_ptr == global_data_ptr) &&
        (calculate_global_data(sysinfo_table_ptr) == global_data_ptr);
    
    return is_valid_fast_ref_ptrs;
}

static inline bool_t fv_invariant_tdh_sys_init() {
    tdx_module_global_t* global_data_ptr = get_global_data();
    tdx_module_local_t* local_data_ptr = get_local_data();
    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();

    // Ref: check_key_management_config()
    bool_t is_valid_key_management_config = 
        (global_data_ptr->hkid_start_bit <= MAX_PA) &&
        (global_data_ptr->hkid_mask == BITS(MAX_PA - 1, global_data_ptr->hkid_start_bit)) &&
        (global_data_ptr->private_hkid_min == global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids + 1) &&
        (global_data_ptr->private_hkid_max ==
            global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids +
            global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_tdx_priv_kids) &&
        (global_data_ptr->private_hkid_max < MAX_HKIDS);

    // Ref: check_module_build_time_defs()
    bool_t is_valid_module_build_time_defs =
        (global_data_ptr->module_hv == sysinfo_table_ptr->module_hv) &&
        (global_data_ptr->min_update_hv == sysinfo_table_ptr->min_update_hv) &&
        (global_data_ptr->no_downgrade == sysinfo_table_ptr->no_downgrade) &&
        (global_data_ptr->num_handoff_pages == sysinfo_table_ptr->num_handoff_pages) &&
        ((global_data_ptr->num_handoff_pages + 1) >= TDX_MIN_HANDOFF_PAGES);

    // Ref: tdx_init_global_data()
    bool_t is_valid_tdx_init_global_data =
        (global_data_ptr->num_of_lps == sysinfo_table_ptr->mcheck_fields.tot_num_lps) &&
        (global_data_ptr->num_of_pkgs == sysinfo_table_ptr->mcheck_fields.tot_num_sockets) &&
        (global_data_ptr->seamrr_base == (global_data_ptr->seamrr_base | IA32_SEAMRR_BASE_AND_MASK_MASK)) &&
        (
            global_data_ptr->seamrr_size == BIT(25) ||
            global_data_ptr->seamrr_size == BIT(26) ||
            global_data_ptr->seamrr_size == BIT(27) ||
            global_data_ptr->seamrr_size == BIT(28) ||
            global_data_ptr->seamrr_size == BIT(29) ||
            global_data_ptr->seamrr_size == BIT(30) ||
            global_data_ptr->seamrr_size == BIT(31) ||
            global_data_ptr->seamrr_size == BIT(32) ||
            global_data_ptr->seamrr_size == BIT(33) ||
            global_data_ptr->seamrr_size == BIT(34) ||
            global_data_ptr->seamrr_size == BIT(35) ||
            global_data_ptr->seamrr_size == BIT(36) ||
            global_data_ptr->seamrr_size == BIT(37) ||
            global_data_ptr->seamrr_size == BIT(38) ||
            global_data_ptr->seamrr_size == BIT(39) ||
            global_data_ptr->seamrr_size == BIT(40) ||
            global_data_ptr->seamrr_size == BIT(41) ||
            global_data_ptr->seamrr_size == BIT(42) ||
            global_data_ptr->seamrr_size == BIT(43) ||
            global_data_ptr->seamrr_size == BIT(44) ||
            global_data_ptr->seamrr_size == BIT(45) ||
            global_data_ptr->seamrr_size == BIT(46) ||
            global_data_ptr->seamrr_size == BIT(47) ||
            global_data_ptr->seamrr_size == BIT(48) ||
            global_data_ptr->seamrr_size == BIT(49) ||
            global_data_ptr->seamrr_size == BIT(50) ||
            global_data_ptr->seamrr_size == BIT(51)
        ) &&
        (global_data_ptr->xbuf.xsave_header.xcomp_bv == BIT(63)) &&
        (global_data_ptr->num_rdseed_retries == 6) &&
        (global_data_ptr->num_rdseed_pauses == 32);

    // others
    bool_t is_valid_tdh_sys_init_misc =
        ((global_data_ptr->attributes_fixed0 == TDX_ATTRIBUTES_FIXED0) ||
         (global_data_ptr->attributes_fixed0 == (TDX_ATTRIBUTES_FIXED0 & ~TDX_ATTRIBUTES_LASS_SUPPORT))) &&
        (global_data_ptr->attributes_fixed1 == TDX_ATTRIBUTES_FIXED1) &&
        (global_data_ptr->config_flags_fixed0.raw == CONFIG_FLAGS_FIXED0);

    // TDH.SYS.INIT should be the first function called by VMM (after loading) for global initialization
    // TDH.SYS.INIT is the only function allowed in the SYSINIT_PENDING state.
    return (global_data_ptr->global_state.sys_state == SYSINIT_PENDING) || (
        is_valid_key_management_config &&
        is_valid_module_build_time_defs &&
        is_valid_tdx_init_global_data &&
        is_valid_tdh_sys_init_misc
    );
}

static inline bool_t fv_invariant_misc() {
    return (
        fv_invariant_init_data_fast_ref_ptrs() &&
        fv_invariant_tdh_sys_init()
    );
}

#endif // __MISC_INVARIANTS_H_INCLUDED_
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
 * @file loader_data_invariants.h
 * @brief Loader data invariants
 */
#ifndef __LOADER_DATA_INVARIANTS_H_INCLUDED__
#define __LOADER_DATA_INVARIANTS_H_INCLUDED__

#include "data_structures/loader_data.h"

/**
 * Field predicates for sysinfo_table_t
 */

#if 0
static inline bool_t sysinfo_table_has_valid_version(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t sysinfo_table_has_valid_tot_num_lps(const sysinfo_table_t* sysinfo_table) {
    return sysinfo_table->mcheck_fields.tot_num_lps <= 256 * MAX_PKGS;
}

static inline bool_t sysinfo_table_has_valid_tot_num_sockets(const sysinfo_table_t* sysinfo_table) {
    return sysinfo_table->mcheck_fields.tot_num_sockets <= MAX_PKGS;
}

#if 0
static inline bool_t sysinfo_table_has_valid_socket_cpuid_table(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}

static inline bool_t sysinfo_table_has_valid_smrr2_not_supported(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}

static inline bool_t sysinfo_table_has_valid_tdx_without_integrity(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}

static inline bool_t sysinfo_table_has_valid_canary(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}

static inline bool_t sysinfo_table_has_valid_cmr_data(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t sysinfo_table_has_valid_seam_status(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->seam_status == 0 ||  // NOT_LOADED
        sysinfo_table->seam_status == 1 ||  // LOADED
        sysinfo_table->seam_status == 2     // LOAD_IN_PROG
    );
}

static inline bool_t sysinfo_table_has_valid_code_rgn_base(const sysinfo_table_t* sysinfo_table) {
    // Must be non-zero and aligned to at least 4KB
    return (
        sysinfo_table->code_rgn_base != 0 && 
        (sysinfo_table->code_rgn_base & 0xFFF) == 0
    );
}

static inline bool_t sysinfo_table_has_valid_code_rgn_size(const sysinfo_table_t* sysinfo_table) {
    // Must be non-zero and aligned to at least 4KB
    return (
        sysinfo_table->code_rgn_size != 0 && 
        (sysinfo_table->code_rgn_size & 0xFFF) == 0
    );
}

static inline bool_t sysinfo_table_has_valid_data_rgn_base(const sysinfo_table_t* sysinfo_table) {
    // Must be non-zero and aligned to at least 4KB
    return (
        sysinfo_table->data_rgn_base != 0 && 
        (sysinfo_table->data_rgn_base & 0xFFF) == 0
    );
}

static inline bool_t sysinfo_table_has_valid_data_rgn_size(const sysinfo_table_t* sysinfo_table) {
    // Must be non-zero and aligned to at least 4KB
    return (
        sysinfo_table->data_rgn_size != 0 && 
        (sysinfo_table->data_rgn_size & 0xFFF) == 0
    );
}

static inline bool_t sysinfo_table_has_valid_stack_rgn_base(const sysinfo_table_t* sysinfo_table) {
    // Must be non-zero and aligned to at least 4KB
    return (
        sysinfo_table->stack_rgn_base != 0 && 
        (sysinfo_table->stack_rgn_base & 0xFFF) == 0
    );
}

static inline bool_t sysinfo_table_has_valid_stack_rgn_size(const sysinfo_table_t* sysinfo_table) {
    // Must be non-zero and aligned to at least 4KB
    return (
        sysinfo_table->stack_rgn_size != 0 && 
        (sysinfo_table->stack_rgn_size & 0xFFF) == 0
    );
}

static inline bool_t sysinfo_table_has_valid_keyhole_rgn_base(const sysinfo_table_t* sysinfo_table) {
    // Must aligned to at least 4KB; can be zero
    return (sysinfo_table->keyhole_rgn_base & 0xFFF) == 0;
}

static inline bool_t sysinfo_table_has_valid_keyhole_rgn_size(const sysinfo_table_t* sysinfo_table) {
    // Must aligned to at least 4KB; can be zero
    return (sysinfo_table->keyhole_rgn_size & 0xFFF) == 0;
}

static inline bool_t sysinfo_table_has_valid_keyhole_edit_rgn_base(const sysinfo_table_t* sysinfo_table) {
    // Must aligned to at least 4KB; can be zero
    return (sysinfo_table->keyhole_edit_rgn_base & 0xFFF) == 0;
}

static inline bool_t sysinfo_table_has_valid_keyhole_edit_rgn_size(const sysinfo_table_t* sysinfo_table) {
    // Must aligned to at least 4KB; can be zero
    return (sysinfo_table->keyhole_edit_rgn_size & 0xFFF) == 0;
}

static inline bool_t sysinfo_table_has_valid_regions(const sysinfo_table_t* sysinfo_table) {
    // Check that all regions are non-overlapping
    // Note: assuming an ordering between the regions for ease of modeling
    return (
        sysinfo_table->code_rgn_base + sysinfo_table->code_rgn_size <= sysinfo_table->data_rgn_base &&
        sysinfo_table->data_rgn_base + sysinfo_table->data_rgn_size <= sysinfo_table->stack_rgn_base &&
        sysinfo_table->stack_rgn_base + sysinfo_table->stack_rgn_size <= sysinfo_table->keyhole_rgn_base &&
        sysinfo_table->keyhole_rgn_base + sysinfo_table->keyhole_rgn_size <= sysinfo_table->keyhole_edit_rgn_base &&
        sysinfo_table->keyhole_edit_rgn_base + sysinfo_table->keyhole_edit_rgn_size <= BIT(MAX_PA)
    );
}

static inline bool_t sysinfo_table_has_valid_num_stack_pages(const sysinfo_table_t* sysinfo_table) {
    return (
        (sysinfo_table->num_stack_pages != 0) &&
        (sysinfo_table->num_stack_pages <= 4096)
    );
}

#if 0
static inline bool_t sysinfo_table_has_valid_num_tls_pages(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}

static inline bool_t sysinfo_table_has_valid_module_hv(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}

static inline bool_t sysinfo_table_has_valid_min_update_hv(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}

static inline bool_t sysinfo_table_has_valid_no_downgrade(const sysinfo_table_t* sysinfo_table) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t sysinfo_table_has_valid_num_handoff_pages(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->num_handoff_pages == 0 ||
        sysinfo_table->num_handoff_pages >= TDX_MIN_HANDOFF_PAGES
    );
}

/**
 * @brief Invariant function for sysinfo_table_t
 * @param sysinfo_table Pointer to the sysinfo_table_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_sysinfo_table_t(const sysinfo_table_t* sysinfo_table) {
    return (
        //sysinfo_table_has_valid_version(sysinfo_table) &&
        sysinfo_table_has_valid_tot_num_lps(sysinfo_table) &&
        sysinfo_table_has_valid_tot_num_sockets(sysinfo_table) &&
        //sysinfo_table_has_valid_socket_cpuid_table(sysinfo_table) &&
        //sysinfo_table_has_valid_smrr2_not_supported(sysinfo_table) &&
        //sysinfo_table_has_valid_tdx_without_integrity(sysinfo_table) &&
        //sysinfo_table_has_valid_canary(sysinfo_table) &&
        //sysinfo_table_has_valid_cmr_data(sysinfo_table) &&
        sysinfo_table_has_valid_seam_status(sysinfo_table) &&
        sysinfo_table_has_valid_code_rgn_base(sysinfo_table) &&
        sysinfo_table_has_valid_code_rgn_size(sysinfo_table) &&
        sysinfo_table_has_valid_data_rgn_base(sysinfo_table) &&
        sysinfo_table_has_valid_data_rgn_size(sysinfo_table) &&
        sysinfo_table_has_valid_stack_rgn_base(sysinfo_table) &&
        sysinfo_table_has_valid_stack_rgn_size(sysinfo_table) &&
        sysinfo_table_has_valid_keyhole_rgn_base(sysinfo_table) &&
        sysinfo_table_has_valid_keyhole_rgn_size(sysinfo_table) &&
        sysinfo_table_has_valid_keyhole_edit_rgn_base(sysinfo_table) &&
        sysinfo_table_has_valid_keyhole_edit_rgn_size(sysinfo_table) &&
        sysinfo_table_has_valid_regions(sysinfo_table) &&
        sysinfo_table_has_valid_num_stack_pages(sysinfo_table) &&
        //sysinfo_table_has_valid_num_tls_pages(sysinfo_table) &&
        //sysinfo_table_has_valid_module_hv(sysinfo_table) &&
        //sysinfo_table_has_valid_min_update_hv(sysinfo_table) &&
        //sysinfo_table_has_valid_no_downgrade(sysinfo_table) &&
        sysinfo_table_has_valid_num_handoff_pages(sysinfo_table)
    );
}

/**
 * Field predicates for handoff_data_header_t
 */

#if 0
static inline bool_t handoff_data_header_has_valid_valid(const handoff_data_header_t* handoff_data_header) {
    return true; // Placeholder for detailed condition
}

static inline bool_t handoff_data_header_has_valid_reserved(const handoff_data_header_t* handoff_data_header) {
    return true; // Placeholder for detailed condition
}

static inline bool_t handoff_data_header_has_valid_hv(const handoff_data_header_t* handoff_data_header) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t handoff_data_header_has_valid_size(const handoff_data_header_t* handoff_data_header) {
    return (
        !handoff_data_header->valid || handoff_data_header->size > 0
    );
}

/**
 * @brief Invariant function for handoff_data_header_t
 * @param handoff_data_header Pointer to the handoff_data_header_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_handoff_data_header_t(const handoff_data_header_t* handoff_data_header) {
    return (
        //handoff_data_header_has_valid_valid(handoff_data_header) &&
        //handoff_data_header_has_valid_reserved(handoff_data_header) &&
        //handoff_data_header_has_valid_hv(handoff_data_header) &&
        handoff_data_header_has_valid_size(handoff_data_header)
    );
}

#endif // __LOADER_DATA_INVARIANTS_H_INCLUDED__

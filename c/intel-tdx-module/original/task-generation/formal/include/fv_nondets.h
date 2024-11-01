// SPDX-FileCopyrightText: 2024 Dirk Beyer <https://www.sosy-lab.org>
// SPDX-License-Identifier: Apache-2.0

#ifndef FORMAL_FV_NONDETS_H_
#define FORMAL_FV_NONDETS_H_

#include "fv_nondets_autogen.h"

static inline void TDXFV_NONDET_struct_tdx_module_local_t(tdx_module_local_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(tdx_module_local_t));
    #else
    __VERIFIER_nondet_struct_tdx_module_local_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_tdx_module_global_t(tdx_module_global_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(tdx_module_global_t));
    #else
    __VERIFIER_nondet_struct_tdx_module_global_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_sysinfo_table_t(sysinfo_table_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(sysinfo_table_t));
    #else
    __VERIFIER_nondet_struct_sysinfo_table_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_tdr_t(tdr_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(tdr_t));
    #else
    __VERIFIER_nondet_struct_tdr_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_tdcs_t(tdcs_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(tdcs_t));
    #else
    __VERIFIER_nondet_struct_tdcs_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_tdvps_t(tdvps_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(tdvps_t));
    #else
    __VERIFIER_nondet_struct_tdvps_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_tdmr_info_entry_t(tdmr_info_entry_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(tdmr_info_entry_t));
    #else
    __VERIFIER_nondet_struct_tdmr_info_entry_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_gprs_state_t(gprs_state_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(gprs_state_t));
    #else
    __VERIFIER_nondet_union_gprs_state_u(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_pamt_block_t(pamt_block_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(pamt_block_t));
    #else
    __VERIFIER_nondet_struct_pamt_block_s(dest);
    #endif
}

static inline void TDXFV_NONDET_struct_pamt_entry_t(pamt_entry_t* dest) {
    #ifdef TDXFV_HAVOC_MEMORY
    TDXFV_NONDET_custom_type(dest, sizeof(pamt_entry_t));
    #else
    __VERIFIER_nondet_struct_pamt_entry_s(dest);
    #endif
}

static inline page_size_t TDXFV_NONDET_page_size_t() {
    #ifdef TDXFV_HAVOC_MEMORY
    page_size_t tmp;
    TDXFV_NONDET_custom_type(&tmp, sizeof(page_size_t));
    return tmp;
    #else
    return __VERIFIER_nondet_page_size_t();
    #endif
}

#endif // FORMAL_FV_NONDETS_H_
// SPDX-FileCopyrightText: 2024 Dirk Beyer <https://www.sosy-lab.org>
// SPDX-License-Identifier: Apache-2.0

#ifndef FORMAL_FV_NONDETS_H_
#define FORMAL_FV_NONDETS_H_

#if (defined(TDXFV_CPROVER_HAVOC_OBJECT) + defined(TDXFV_ESBMC_INIT_OBJECT) + defined(TDXFV_KLEE_MAKE_SYMBOLIC) + defined(TDXFV_HAVOC_MEMORY) + defined(TDXFV_AUTOGEN_NONDET_OBJECT)) > 1
#error "Multiple havocking methods defined! Only one allowed."
#endif

#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
extern void __CPROVER_havoc_object(void *p);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
extern void __ESBMC_init_object(void *p);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
extern void klee_make_symbolic(void *p, size_t nbytes, const char *name);
#elif defined(TDXFV_HAVOC_MEMORY)
// do nothing
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
#include "fv_nondets_autogen.h"
#else
extern void __VERIFIER_nondet_memory(void *dst, size_t size);
#endif

static inline void TDXFV_NONDET_array_1D_unsigned_char(void* dest, size_t size) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, size, "1D array unsigned char");
#elif defined(TDXFV_HAVOC_MEMORY) || defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    TDXFV_NONDET_custom_type(dest, size);
#else
    __VERIFIER_nondet_memory(dest, size);
#endif
}

static inline void TDXFV_NONDET_struct_tdx_module_local_t(tdx_module_local_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(tdx_module_local_t), "tdx_module_local_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(tdx_module_local_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_tdx_module_local_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(tdx_module_local_t));
#endif
}

static inline void TDXFV_NONDET_struct_tdx_module_global_t(tdx_module_global_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(tdx_module_global_t), "tdx_module_global_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(tdx_module_global_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_tdx_module_global_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(tdx_module_global_t));
#endif
}

static inline void TDXFV_NONDET_struct_sysinfo_table_t(sysinfo_table_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(sysinfo_table_t), "sysinfo_table_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(sysinfo_table_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_sysinfo_table_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(sysinfo_table_t));
#endif
}

static inline void TDXFV_NONDET_struct_tdr_t(tdr_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(tdr_t), "tdr_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(tdr_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_tdr_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(tdr_t));
#endif
}

static inline void TDXFV_NONDET_struct_tdcs_t(tdcs_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(tdcs_t), "tdcs_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(tdcs_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_tdcs_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(tdcs_t));
#endif
}

static inline void TDXFV_NONDET_struct_tdvps_t(tdvps_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(tdvps_t), "tdvps_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(tdvps_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_tdvps_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(tdvps_t));
#endif
}

static inline void TDXFV_NONDET_struct_tdmr_info_entry_t(tdmr_info_entry_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(tdmr_info_entry_t), "tdmr_info_entry_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(tdmr_info_entry_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_tdmr_info_entry_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(tdmr_info_entry_t));
#endif
}

static inline void TDXFV_NONDET_struct_gprs_state_t(gprs_state_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(gprs_state_t), "gprs_state_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(gprs_state_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_union_gprs_state_u(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(gprs_state_t));
#endif
}

static inline void TDXFV_NONDET_struct_pamt_block_t(pamt_block_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(pamt_block_t), "pamt_block_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(pamt_block_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_pamt_block_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(pamt_block_t));
#endif
}

static inline void TDXFV_NONDET_struct_pamt_entry_t(pamt_entry_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(pamt_entry_t), "pamt_entry_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(pamt_entry_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_pamt_entry_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(pamt_entry_t));
#endif
}

static inline void TDXFV_NONDET_struct_mktme_key_program_t(mktme_key_program_t* dest) {
#if defined(TDXFV_CPROVER_HAVOC_OBJECT)
    __CPROVER_havoc_object(dest);
#elif defined(TDXFV_ESBMC_INIT_OBJECT)
    __ESBMC_init_object(dest);
#elif defined(TDXFV_KLEE_MAKE_SYMBOLIC)
    klee_make_symbolic(dest, sizeof(mktme_key_program_t), "mktme_key_program_t");
#elif defined(TDXFV_HAVOC_MEMORY)
    TDXFV_NONDET_custom_type(dest, sizeof(mktme_key_program_t));
#elif defined(TDXFV_AUTOGEN_NONDET_OBJECT)
    __VERIFIER_nondet_struct_mktme_key_program_s(dest);
#else
    __VERIFIER_nondet_memory(dest, sizeof(mktme_key_program_t));
#endif
}

extern int __VERIFIER_nondet_int(void);
static inline page_size_t TDXFV_NONDET_page_size_t() {
#ifdef TDXFV_HAVOC_MEMORY
    page_size_t tmp;
    TDXFV_NONDET_custom_type(&tmp, sizeof(page_size_t));
    return tmp;
#else
    switch (__VERIFIER_nondet_int()) {
    case 0:
        return PT_4KB;
    case 1:
        return PT_2MB;
    default:
        return PT_1GB;
    }
#endif
}

#endif // FORMAL_FV_NONDETS_H_
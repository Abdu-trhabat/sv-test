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
 * @file pamt_manager_invariants.h
 * @brief PAMT manager invariants
 */

#ifndef __PAMT_MANAGER_INVARIANTS_H_INCLUDED__
#define __PAMT_MANAGER_INVARIANTS_H_INCLUDED__

#include "memory_handlers/pamt_manager.h"

/**
 * Field predicates for bepoch_t
 */

#if 0
static inline bool_t bepoch_t_has_valid_mig_epoch(const bepoch_t* bepoch_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t bepoch_t_has_valid_export_count(const bepoch_t* bepoch_ptr) {
    return true; // Placeholder for detailed condition
}

static inline bool_t bepoch_t_has_valid_mig_flag(const bepoch_t* bepoch_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

/**
 * @brief Invariant function for bepoch_t
 * @param bepoch_ptr Pointer to the bepoch_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_bepoch_t(const bepoch_t* bepoch_ptr) {
#if 0
    return (
        bepoch_t_has_valid_mig_epoch(bepoch_ptr) &&
        bepoch_t_has_valid_export_count(bepoch_ptr) &&
        bepoch_t_has_valid_mig_flag(bepoch_ptr)
    );
#else
    return true; // Placeholder for detailed condition
#endif
}

/**
 * Field predicates for pamt_entry_t
 */

 #if 0
static inline bool_t pamt_entry_t_has_valid_entry_lock(const pamt_entry_t* pamt_entry_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t pamt_entry_t_has_valid_pt(const pamt_entry_t* pamt_entry_ptr) {
    return (
        pamt_entry_ptr->pt == PT_NDA ||
        pamt_entry_ptr->pt == PT_RSVD ||
        pamt_entry_ptr->pt == PT_REG ||
        pamt_entry_ptr->pt == PT_TDR ||
        pamt_entry_ptr->pt == PT_TDCX ||
        pamt_entry_ptr->pt == PT_TDVPR ||
        pamt_entry_ptr->pt == PT_EPT
    );
}

#if 0
static inline bool_t pamt_entry_t_has_valid_owner(const pamt_entry_t* pamt_entry_ptr) {
    return true; // Placeholder for detailed condition
}
#endif

static inline bool_t pamt_entry_t_has_valid_bepoch(const pamt_entry_t* pamt_entry_ptr) {
    return fv_invariant_bepoch_t(&pamt_entry_ptr->bepoch);
}

/**
 * @brief Invariant function for pamt_entry_t
 * @param pamt_entry_ptr Pointer to the pamt_entry_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_pamt_entry_t(const pamt_entry_t* pamt_entry_ptr) {
    return (
        //pamt_entry_t_has_valid_entry_lock(pamt_entry_ptr) &&
        pamt_entry_t_has_valid_pt(pamt_entry_ptr) &&
        //pamt_entry_t_has_valid_owner(pamt_entry_ptr) &&
        pamt_entry_t_has_valid_bepoch(pamt_entry_ptr)
    );
}

/**
 * Field predicates for pamt_block_t
 */
static inline bool_t pamt_block_t_has_valid_pamt_1gb_p(const pamt_block_t* pamt_block_ptr) {
    return fv_invariant_pamt_entry_t(pamt_block_ptr->pamt_1gb_p);
}

static inline bool_t pamt_block_t_has_valid_pamt_2mb_p(const pamt_block_t* pamt_block_ptr) {
    return fv_invariant_pamt_entry_t(pamt_block_ptr->pamt_2mb_p);
}

static inline bool_t pamt_block_t_has_valid_pamt_4kb_p(const pamt_block_t* pamt_block_ptr) {
    return fv_invariant_pamt_entry_t(pamt_block_ptr->pamt_4kb_p);
}

/**
 * @brief Invariant function for pamt_block_t
 * @param pamt_block_ptr Pointer to the pamt_block_t structure
 * @return true if all fields are valid
 */
static inline bool_t fv_invariant_pamt_block_t(const pamt_block_t* pamt_block_ptr) {
    return (
        pamt_block_t_has_valid_pamt_1gb_p(pamt_block_ptr) &&
        pamt_block_t_has_valid_pamt_2mb_p(pamt_block_ptr) &&
        pamt_block_t_has_valid_pamt_4kb_p(pamt_block_ptr)
    );
}

#endif // __PAMT_MANAGER_INVARIANTS_H_INCLUDED__

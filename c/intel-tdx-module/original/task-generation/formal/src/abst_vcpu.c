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
 * @file abst_vcpu.c
 * @brief FV modeling for vcpu scope metadata, derived from vcpu_scope_metadata.json
 */

#include "fv_utils.h"
#include "fv_env.h"

uint64_t fv_vcpu_cr2;
uint64_t fv_vcpu_dr0;
uint64_t fv_vcpu_dr1;
uint64_t fv_vcpu_dr2;
uint64_t fv_vcpu_dr3;
uint64_t fv_vcpu_dr6;

void tdxfv_abst_vcpu_init() {
    fv_vcpu_cr2 = TDXFV_NONDET_uint64t();
    fv_vcpu_dr0 = TDXFV_NONDET_uint64t();
    fv_vcpu_dr1 = TDXFV_NONDET_uint64t();
    fv_vcpu_dr2 = TDXFV_NONDET_uint64t();
    fv_vcpu_dr3 = TDXFV_NONDET_uint64t();
    fv_vcpu_dr6 = TDXFV_NONDET_uint64t();
}

#define VCPU_METADATA_ACCESS(target) \
    uint64_t tdxfv_abst_vcpu_read_##target() {\
        return fv_vcpu_##target;\
    }\
    void tdxfv_abst_vcpu_write_##target(uint64_t value) {\
        fv_vcpu_##target = value;\
    }

VCPU_METADATA_ACCESS(cr2);
VCPU_METADATA_ACCESS(dr0);
VCPU_METADATA_ACCESS(dr1);
VCPU_METADATA_ACCESS(dr2);
VCPU_METADATA_ACCESS(dr3);
VCPU_METADATA_ACCESS(dr6);

#if 0 // access permission is for direct host VMM / guest TD, not SEAM program
#define VCPU_METADATA_READ(target, host_is_allowed, guest_is_allowed) \
    uint64_t tdxfv_abst_vcpu_read_##target() {\
        if ((fv_is_called_by_host && host_is_allowed) || (fv_is_called_by_guest && guest_is_allowed)) {\
            return fv_vcpu_##target;\
        } else {\
            TDXFV_ASSERT(false);\
            return 0;\
        }\
    }

#define VCPU_METADATA_WRITE(target, host_is_allowed, guest_is_allowed) \
    void tdxfv_abst_vcpu_write_##target(uint64_t value) {\
        if ((fv_is_called_by_host && host_is_allowed) || (fv_is_called_by_guest && guest_is_allowed)) {\
            fv_vcpu_##target = value;\
        } else {\
            TDXFV_ASSERT(false);\
        }\
    }

VCPU_METADATA_READ(cr2, true, false);
VCPU_METADATA_WRITE(cr2, true, false);
VCPU_METADATA_READ(dr0, true, false);
VCPU_METADATA_WRITE(dr0, true, false);
VCPU_METADATA_READ(dr1, true, false);
VCPU_METADATA_WRITE(dr1, true, false);
VCPU_METADATA_READ(dr2, true, false);
VCPU_METADATA_WRITE(dr2, true, false);
VCPU_METADATA_READ(dr3, true, false);
VCPU_METADATA_WRITE(dr3, true, false);
VCPU_METADATA_READ(dr6, true, false);
VCPU_METADATA_WRITE(dr6, true, false);
#endif

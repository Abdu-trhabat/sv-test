
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
 * @file common.c
 * @brief Common functions for TDX formal verification harnesses
 */

#include "accessors/data_accessors.h"

#include "fv_utils.h"
#include "fv_env.h"

void seam_call__exit_status_success() {
    TDXFV_ASSUME(get_local_data()->vmm_regs.rax == TDX_SUCCESS);
}

void seam_call__exit_status_unsuccess() {
    TDXFV_ASSUME(get_local_data()->vmm_regs.rax != TDX_SUCCESS);
}

void td_call__exit_status_success() {
    TDXFV_ASSUME(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax == TDX_SUCCESS);
}

void td_call__exit_status_unsuccess() {
    TDXFV_ASSUME(get_local_data()->vp_ctx.tdvps->guest_state.gpr_state.rax != TDX_SUCCESS);
}

void insert_cover_point() {
    TDXFV_ASSERT(false);
}

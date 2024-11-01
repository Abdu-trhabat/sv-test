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
 * @file fv_env.h
 * @brief FV environments, e.g., shadow variables, initialization and helper methods
 */

#ifndef FORMAL_FV_ENV_H_
#define FORMAL_FV_ENV_H_

#include "tdx_basic_types.h"
#include "tdx_api_defs.h"
#include "data_structures/tdx_local_data.h"
#include "data_structures/tdx_global_data.h"
#include "data_structures/loader_data.h"

//
// TDX Module variables
//

extern tdx_module_local_t local_data_fv;
extern tdx_module_global_t global_data_fv;
extern sysinfo_table_t sysinfo_table_fv;

extern tdr_t tdr_fv;
extern tdcs_t tdcs_fv;
extern tdvps_t tdvps_fv;
extern tdmr_info_entry_t tdmr_info_fv[MAX_TDMRS];

extern gprs_state_t shadow_vmm_regs_precall;
extern gprs_state_t shadow_td_regs_precall;
extern gprs_state_t shadow_guest_gpr_state_precall;

//
// Aux. variables
//

// MSR modeling variables, auto-gen msr_virtualization.json
extern uint64_t fv_msr_IA32_SPEC_CTRL;
extern uint64_t fv_msr_IA32_PRED_CMD;
extern uint64_t fv_msr_IA32_FLUSH_CMD;
extern uint64_t fv_msr_IA32_SYSENTER_CS;
extern uint64_t fv_msr_IA32_SYSENTER_ESP;
extern uint64_t fv_msr_IA32_SYSENTER_EIP;
extern uint64_t fv_msr_IA32_PAT;
extern uint64_t fv_msr_IA32_DS_AREA;
extern uint64_t fv_msr_IA32_X2APIC_TPR;
extern uint64_t fv_msr_0x0809;
extern uint64_t fv_msr_IA32_X2APIC_PPR;
extern uint64_t fv_msr_IA32_X2APIC_EOI;
extern uint64_t fv_msr_0x080C;
extern uint64_t fv_msr_0x080E;
extern uint64_t fv_msr_IA32_X2APIC_ISRx[8];
extern uint64_t fv_msr_IA32_X2APIC_TMRx[8];
extern uint64_t fv_msr_IA32_X2APIC_IRRx[8];
extern uint64_t fv_msr_IA32_X2APIC_SELF_IPI;
extern uint64_t fv_msr_IA32_UARCH_MISC_CTL;
extern uint64_t fv_msr_IA32_STAR;
extern uint64_t fv_msr_IA32_LSTAR;
extern uint64_t fv_msr_IA32_FMASK;
extern uint64_t fv_msr_IA32_FSBASE;
extern uint64_t fv_msr_IA32_GSBASE;
extern uint64_t fv_msr_IA32_KERNEL_GS_BASE;
extern uint64_t fv_msr_IA32_TSC_AUX;

// Exception modeling variables
extern bool_t fv_exception_tracker_gp;
extern bool_t fv_exception_tracker_ve;

// Other shadow variables
extern bool_t fv_is_called_by_host;
extern bool_t fv_is_called_by_guest;

//
// General TDX-op methods
//

void init_tdx_general();
void init_tdcall();
void init_vmm_dispatcher();

//
// Abstraction/modeling-specific methods
//

void tdxfv_abst_msr_init();
uint64_t tdxfv_abst_msr_read(uint64_t addr);
void tdxfv_abst_msr_write(uint64_t addr, uint64_t value);

void tdxfv_abst_exception_init();
void tdxfv_abst_exception_insert_gp();
void tdxfv_abst_exception_insert_ve();

void tdxfv_abst_vcpu_init();
uint64_t tdxfv_abst_vcpu_read_cr2();
void tdxfv_abst_vcpu_write_cr2(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr0();
void tdxfv_abst_vcpu_write_dr0(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr1();
void tdxfv_abst_vcpu_write_dr1(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr2();
void tdxfv_abst_vcpu_write_dr2(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr3();
void tdxfv_abst_vcpu_write_dr3(uint64_t value);
uint64_t tdxfv_abst_vcpu_read_dr6();
void tdxfv_abst_vcpu_write_dr6(uint64_t value);

#endif /* FORMAL_FV_ENV_H_ */

// SPDX-FileCopyrightText: 2024 Dirk Beyer <https://www.sosy-lab.org>
// SPDX-License-Identifier: Apache-2.0
extern unsigned long long __VERIFIER_nondet_ulonglong(void);
void __VERIFIER_nondet_struct_tdmr_info_entry_s(struct tdmr_info_entry_s *dest) {
    (*dest).tdmr_base = __VERIFIER_nondet_ulonglong();
    (*dest).tdmr_size = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_1g_base = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_1g_size = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_2m_base = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_2m_size = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_4k_base = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_4k_size = __VERIFIER_nondet_ulonglong();
    for (int i = 0; i < 16; i++) {
        (*dest).rsvd_areas[i].offset = __VERIFIER_nondet_ulonglong();
        (*dest).rsvd_areas[i].size = __VERIFIER_nondet_ulonglong();
    }
}

void __VERIFIER_nondet_array_1D_unsigned_long_long(unsigned long long (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i] = __VERIFIER_nondet_ulonglong();
    }
}

void __VERIFIER_nondet_union_gprs_state_u(union gprs_state_u *dest) {
    #ifdef FV_init_union_gprs_state_u_anon_struct_0
    (*dest).rax = __VERIFIER_nondet_ulonglong();
    (*dest).rcx = __VERIFIER_nondet_ulonglong();
    (*dest).rdx = __VERIFIER_nondet_ulonglong();
    (*dest).rbx = __VERIFIER_nondet_ulonglong();
    (*dest).rsp = __VERIFIER_nondet_ulonglong();
    (*dest).rbp = __VERIFIER_nondet_ulonglong();
    (*dest).rsi = __VERIFIER_nondet_ulonglong();
    (*dest).rdi = __VERIFIER_nondet_ulonglong();
    (*dest).r8 = __VERIFIER_nondet_ulonglong();
    (*dest).r9 = __VERIFIER_nondet_ulonglong();
    (*dest).r10 = __VERIFIER_nondet_ulonglong();
    (*dest).r11 = __VERIFIER_nondet_ulonglong();
    (*dest).r12 = __VERIFIER_nondet_ulonglong();
    (*dest).r13 = __VERIFIER_nondet_ulonglong();
    (*dest).r14 = __VERIFIER_nondet_ulonglong();
    (*dest).r15 = __VERIFIER_nondet_ulonglong();
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).gprs), 16);
    #endif
}

extern unsigned short __VERIFIER_nondet_ushort(void);
extern unsigned int __VERIFIER_nondet_uint(void);
void __VERIFIER_nondet_mktme_keyid_ctrl_t(mktme_keyid_ctrl_t *dest) {
    #ifdef FV_init_mktme_keyid_ctrl_t_anon_struct_0
    (*dest).command = __VERIFIER_nondet_uint();
    (*dest).enc_algo = __VERIFIER_nondet_uint();
    (*dest).rsvd = __VERIFIER_nondet_uint();
    
    #else
    (*dest).raw = __VERIFIER_nondet_uint();
    #endif
}

extern unsigned char __VERIFIER_nondet_uchar(void);
void __VERIFIER_nondet_array_1D_unsigned_char(unsigned char (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i] = __VERIFIER_nondet_uchar();
    }
}

void __VERIFIER_nondet_array_1D_unsigned_int(unsigned int (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i] = __VERIFIER_nondet_uint();
    }
}

void __VERIFIER_nondet_uint128_t(uint128_t *dest) {
    #ifdef FV_init_uint128_t_qwords
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).qwords), 2);
    
    #elif FV_init_uint128_t_dwords
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).dwords), 4);
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).bytes), 16);
    #endif
}

void __VERIFIER_nondet_struct_mktme_key_program_s(struct mktme_key_program_s *dest) {
    (*dest).keyid = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_mktme_keyid_ctrl_t(&((*dest).keyid_ctrl));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).rsvd), 58);
    #ifdef FV_init_anon_union_1_key
    __VERIFIER_nondet_uint128_t(&((*dest).key));
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).key_field_1), 64);
    #endif
    #ifdef FV_init_anon_union_2_tweak_key
    __VERIFIER_nondet_uint128_t(&((*dest).tweak_key));
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).key_field_2), 64);
    #endif
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).rsvd2), 64);
}

void __VERIFIER_nondet_struct_tdvps_ve_info_s(struct tdvps_ve_info_s *dest) {
    (*dest).exit_reason = __VERIFIER_nondet_uint();
    (*dest).valid = __VERIFIER_nondet_uint();
    (*dest).exit_qualification = __VERIFIER_nondet_ulonglong();
    (*dest).gla = __VERIFIER_nondet_ulonglong();
    (*dest).gpa = __VERIFIER_nondet_ulonglong();
    (*dest).eptp_index = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved0), 2);
    #ifdef FV_init_anon_union_3_anon_struct_0
    (*dest).instruction_length = __VERIFIER_nondet_uint();
    (*dest).instruction_info = __VERIFIER_nondet_uint();
    
    #else
    (*dest).inst_len_and_info = __VERIFIER_nondet_ulonglong();
    #endif
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved1), 84);
}

void __VERIFIER_nondet_array_1D_union_l2_vcpu_ctrl_u(union l2_vcpu_ctrl_u (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_union_l2_vcpu_ctrl_u_anon_struct_0
        (*dest)[i].enable_shared_eptp = __VERIFIER_nondet_ulonglong();
        (*dest)[i].enable_tdvmcall = __VERIFIER_nondet_ulonglong();
        (*dest)[i].enable_extended_ve = __VERIFIER_nondet_ulonglong();
        (*dest)[i].reserved = __VERIFIER_nondet_ulonglong();
        
        #else
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
        #endif
    }
}

void __VERIFIER_nondet_array_1D_union_l2_vm_debug_ctls_u(union l2_vm_debug_ctls_u (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_union_l2_vm_debug_ctls_u_anon_struct_0
        (*dest)[i].td_exit_on_l1_to_l2 = __VERIFIER_nondet_ulonglong();
        (*dest)[i].td_exit_on_l2_to_l1 = __VERIFIER_nondet_ulonglong();
        (*dest)[i].td_exit_on_l2_vm_exit = __VERIFIER_nondet_ulonglong();
        (*dest)[i].reserved = __VERIFIER_nondet_ulonglong();
        
        #else
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
        #endif
    }
}

void __VERIFIER_nondet_struct_tdvps_management_s(struct tdvps_management_s *dest) {
    (*dest).state = __VERIFIER_nondet_uchar();
    (*dest).last_td_exit = __VERIFIER_nondet_uchar();
    (*dest).vcpu_index = __VERIFIER_nondet_uint();
    (*dest).reserved_0 = __VERIFIER_nondet_uchar();
    (*dest).num_tdvps_pages = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).tdvps_pa), 15);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_1), 72);
    (*dest).assoc_lpid = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_2), 4);
    (*dest).vcpu_epoch = __VERIFIER_nondet_ulonglong();
    (*dest).cpuid_supervisor_ve = __VERIFIER_nondet_uchar();
    (*dest).cpuid_user_ve = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_3), 2);
    (*dest).export_count = __VERIFIER_nondet_uint();
    (*dest).last_exit_tsc = __VERIFIER_nondet_ulonglong();
    (*dest).pend_nmi = __VERIFIER_nondet_uchar();
    (*dest).nmi_unblocking_due_to_iret = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_4), 6);
    (*dest).xfam = __VERIFIER_nondet_ulonglong();
    (*dest).last_epf_gpa_list_idx = __VERIFIER_nondet_uchar();
    (*dest).possibly_epf_stepping = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_5), 6);
    (*dest).hp_lock_busy_start = __VERIFIER_nondet_ulonglong();
    (*dest).hp_lock_busy = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_6), 5);
    (*dest).last_seamdb_index = __VERIFIER_nondet_ulonglong();
    (*dest).curr_vm = __VERIFIER_nondet_ushort();
    (*dest).l2_exit_host_routed = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_7), 1);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).vm_launched), 4);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).lp_dependent_hpa_updated), 4);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).module_dependent_hpa_updated), 4);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_8), 2);
    __VERIFIER_nondet_array_1D_union_l2_vcpu_ctrl_u(&((*dest).l2_ctls), 4);
    __VERIFIER_nondet_array_1D_union_l2_vm_debug_ctls_u(&((*dest).l2_debug_ctls), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).tsc_deadline), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).shadow_tsc_deadline), 4);
    (*dest).base_l2_cr0_guest_host_mask = __VERIFIER_nondet_ulonglong();
    (*dest).base_l2_cr0_read_shadow = __VERIFIER_nondet_ulonglong();
    (*dest).base_l2_cr4_guest_host_mask = __VERIFIER_nondet_ulonglong();
    (*dest).base_l2_cr4_read_shadow = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).shadow_cr0_guest_host_mask), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).shadow_cr0_read_shadow), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).shadow_cr4_guest_host_mask), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).shadow_cr4_read_shadow), 4);
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).shadow_notify_window), 4);
    (*dest).shadow_pid_hpa = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_9), 24);
    (*dest).shadow_pinbased_exec_ctls = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_10), 12);
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).shadow_ple_gap), 4);
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).shadow_ple_window), 4);
    (*dest).shadow_posted_int_notification_vector = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_11), 6);
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).shadow_procbased_exec_ctls2), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).shadow_shared_eptp), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).l2_enter_guest_state_gpa), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).l2_enter_guest_state_hpa), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ve_info_gpa), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ve_info_hpa), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).l2_vapic_gpa), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).l2_vapic_hpa), 4);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_12), 608);
}

void __VERIFIER_nondet_array_1D_union_cpuid_control_s(union cpuid_control_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_union_cpuid_control_s_anon_struct_0
        (*dest)[i].supervisor_ve = __VERIFIER_nondet_uchar();
        (*dest)[i].user_ve = __VERIFIER_nondet_uchar();
        (*dest)[i].reserved = __VERIFIER_nondet_uchar();
        
        #else
        (*dest)[i].raw = __VERIFIER_nondet_uchar();
        #endif
    }
}

void __VERIFIER_nondet_array_1D_uint128_t(uint128_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_uint128_t_qwords
        __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest)[i].qwords), 2);
        
        #elif FV_init_uint128_t_dwords
        __VERIFIER_nondet_array_1D_unsigned_int(&((*dest)[i].dwords), 4);
        
        #else
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].bytes), 16);
        #endif
    }
}

void __VERIFIER_nondet_union_loadiwkey_ctl_u(union loadiwkey_ctl_u *dest) {
    #ifdef FV_init_union_loadiwkey_ctl_u_anon_struct_0
    (*dest).dont_backup_wk = __VERIFIER_nondet_uint();
    (*dest).non_random_wk = __VERIFIER_nondet_uint();
    (*dest).reserved = __VERIFIER_nondet_uint();
    
    #else
    (*dest).raw = __VERIFIER_nondet_uint();
    #endif
}

void __VERIFIER_nondet_union_vcpu_state_s(union vcpu_state_s *dest) {
    #ifdef FV_init_union_vcpu_state_s_anon_struct_0
    (*dest).vmxip = __VERIFIER_nondet_ulonglong();
    (*dest).reserved = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_struct_tdvps_guest_state_s(struct tdvps_guest_state_s *dest) {
    __VERIFIER_nondet_union_gprs_state_u(&((*dest).gpr_state));
    (*dest).dr0 = __VERIFIER_nondet_ulonglong();
    (*dest).dr1 = __VERIFIER_nondet_ulonglong();
    (*dest).dr2 = __VERIFIER_nondet_ulonglong();
    (*dest).dr3 = __VERIFIER_nondet_ulonglong();
    (*dest).dr6 = __VERIFIER_nondet_ulonglong();
    (*dest).xcr0 = __VERIFIER_nondet_ulonglong();
    (*dest).cr2 = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 8);
    __VERIFIER_nondet_array_1D_uint128_t(&((*dest).iwk_enckey), 2);
    __VERIFIER_nondet_uint128_t(&((*dest).iwk_intkey));
    __VERIFIER_nondet_union_loadiwkey_ctl_u(&((*dest).iwk_flags));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_2), 4);
    __VERIFIER_nondet_union_vcpu_state_s(&((*dest).vcpu_state_details));
}

void __VERIFIER_nondet_struct_tdvps_guest_msr_state_s(struct tdvps_guest_msr_state_s *dest) {
    (*dest).ia32_spec_ctrl = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_umwait_control = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_tsx_ctrl = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_perfevtsel), 8);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_offcore_rsp), 2);
    (*dest).ia32_xfd = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_xfd_err = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_fixed_ctr), 7);
    (*dest).ia32_perf_metrics = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_fixed_ctr_ctrl = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_perf_global_status = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_pebs_enable = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_pebs_data_cfg = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_pebs_ld_lat = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_pebs_frontend = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_a_pmc), 8);
    (*dest).ia32_ds_area = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_fixed_ctr_reload_cfg), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_fixed_ctr_ext), 4);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_a_pmc_reload_cfg), 8);
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).ia32_a_pmc_ext), 8);
    (*dest).ia32_xss = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_lbr_depth = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_uarch_misc_ctl = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_star = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_lstar = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_fmask = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_kernel_gs_base = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_tsc_aux = __VERIFIER_nondet_ulonglong();
}

void __VERIFIER_nondet_struct_tdvps_td_vmcs_s(struct tdvps_td_vmcs_s *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).td_vmcs), 2048);
}

void __VERIFIER_nondet_union_tdvps_vapic_s(union tdvps_vapic_s *dest) {
    #ifdef FV_init_union_tdvps_vapic_s_anon_struct_0
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).apic), 1024);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 3072);
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).raw), 4096);
    #endif
}

void __VERIFIER_nondet_xsave_legacy_region_t(xsave_legacy_region_t *dest) {
    (*dest).fcw = __VERIFIER_nondet_ushort();
    (*dest).fsw = __VERIFIER_nondet_ushort();
    (*dest).ftw = __VERIFIER_nondet_uchar();
    (*dest).reserved_0 = __VERIFIER_nondet_uchar();
    (*dest).fop = __VERIFIER_nondet_ushort();
    (*dest).fip = __VERIFIER_nondet_ulonglong();
    (*dest).fdp = __VERIFIER_nondet_ulonglong();
    (*dest).mxcsr = __VERIFIER_nondet_uint();
    (*dest).mxcsr_mask = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_array_1D_uint128_t(&((*dest).st_mm), 8);
    __VERIFIER_nondet_array_1D_uint128_t(&((*dest).xmm), 16);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_1), 96);
}

void __VERIFIER_nondet_xsave_header_t(xsave_header_t *dest) {
    (*dest).xstate_bv = __VERIFIER_nondet_ulonglong();
    (*dest).xcomp_bv = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 48);
}

void __VERIFIER_nondet_xsave_area_t(xsave_area_t *dest) {
    __VERIFIER_nondet_xsave_legacy_region_t(&((*dest).legacy_region));
    __VERIFIER_nondet_xsave_header_t(&((*dest).xsave_header));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).extended_region), 11712);
}

void __VERIFIER_nondet_struct_tdvps_guest_extension_state_s(struct tdvps_guest_extension_state_s *dest) {
    #ifdef FV_init_anon_union_4_xbuf
    __VERIFIER_nondet_xsave_area_t(&((*dest).xbuf));
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).max_size), 12288);
    #endif
}

void __VERIFIER_nondet_array_1D_struct_l2_vm_ctrl_s(struct l2_vm_ctrl_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].l2_vmcs), 2048);
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].reserved), 2048);
        __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest)[i].l2_msr_bitmaps), 512);
        __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest)[i].l2_shadow_msr_bitmaps), 512);
    }
}

void __VERIFIER_nondet_struct_tdvps_s(struct tdvps_s *dest) {
    __VERIFIER_nondet_struct_tdvps_ve_info_s(&((*dest).ve_info));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_0), 128);
    __VERIFIER_nondet_struct_tdvps_management_s(&((*dest).management));
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).last_epf_gpa_list), 32);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_1), 256);
    __VERIFIER_nondet_array_1D_union_cpuid_control_s(&((*dest).cpuid_control), 128);
    __VERIFIER_nondet_struct_tdvps_guest_state_s(&((*dest).guest_state));
    __VERIFIER_nondet_struct_tdvps_guest_msr_state_s(&((*dest).guest_msr_state));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_2), 848);
    __VERIFIER_nondet_struct_tdvps_td_vmcs_s(&((*dest).td_vmcs));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_3), 2048);
    __VERIFIER_nondet_union_tdvps_vapic_s(&((*dest).vapic));
    __VERIFIER_nondet_struct_tdvps_guest_extension_state_s(&((*dest).guest_extension_state));
    __VERIFIER_nondet_array_1D_struct_l2_vm_ctrl_s(&((*dest).l2_vm_ctrl), 3);
}

void __VERIFIER_nondet_struct_xsave_area_no_extended_s(struct xsave_area_no_extended_s *dest) {
    __VERIFIER_nondet_xsave_legacy_region_t(&((*dest).legacy_region));
    __VERIFIER_nondet_xsave_header_t(&((*dest).xsave_header));
}

void __VERIFIER_nondet_sharex_lock_t(sharex_lock_t *dest) {
    #ifdef FV_init_sharex_lock_t_anon_struct_0
    (*dest).exclusive = __VERIFIER_nondet_ushort();
    (*dest).counter = __VERIFIER_nondet_ushort();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ushort();
    #endif
}

void __VERIFIER_nondet_uint256_t(uint256_t *dest) {
    #ifdef FV_init_uint256_t_qwords
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).qwords), 4);
    
    #elif FV_init_uint256_t_dwords
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).dwords), 8);
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).bytes), 32);
    #endif
}

void __VERIFIER_nondet_struct_tdx_global_state_s(struct tdx_global_state_s *dest) {
    (*dest).sys_state = __VERIFIER_nondet_uchar();
}

void __VERIFIER_nondet_array_1D_struct_kot_entry_s(struct kot_entry_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].wbinvd_bitmap = __VERIFIER_nondet_uint();
        (*dest)[i].state = __VERIFIER_nondet_uchar();
    }
}

void __VERIFIER_nondet_struct_kot_s(struct kot_s *dest) {
    __VERIFIER_nondet_sharex_lock_t(&((*dest).lock));
    __VERIFIER_nondet_array_1D_struct_kot_entry_s(&((*dest).entries), 2048);
}

void __VERIFIER_nondet_array_1D_struct_wbt_entry_s(struct wbt_entry_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].intr_point = __VERIFIER_nondet_ulonglong();
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].hkid_flushed), 2048);
        (*dest)[i].entry_lock = __VERIFIER_nondet_uchar();
    }
}

void __VERIFIER_nondet_array_1D_struct_tdmr_entry_s(struct tdmr_entry_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].size = __VERIFIER_nondet_ulonglong();
        (*dest)[i].last_initialized = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_1g_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_2m_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_4k_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].num_of_pamt_blocks = __VERIFIER_nondet_uint();
        (*dest)[i].num_of_rsvd_areas = __VERIFIER_nondet_uint();
        for (int i = 0; i < 16; i++) {
            (*dest)[i].rsvd_areas[i].offset = __VERIFIER_nondet_ulonglong();
            (*dest)[i].rsvd_areas[i].size = __VERIFIER_nondet_ulonglong();
        }
        (*dest)[i].lock = __VERIFIER_nondet_uchar();
    }
}

void __VERIFIER_nondet_ia32_vmx_basic_t(ia32_vmx_basic_t *dest) {
    #ifdef FV_init_ia32_vmx_basic_t_anon_struct_0
    (*dest).vmcs_revision_id = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd0 = __VERIFIER_nondet_ulonglong();
    (*dest).vmcs_region_size = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd1 = __VERIFIER_nondet_ulonglong();
    (*dest).vmxon_pa_width = __VERIFIER_nondet_ulonglong();
    (*dest).dual_monitor = __VERIFIER_nondet_ulonglong();
    (*dest).vmcs_mt = __VERIFIER_nondet_ulonglong();
    (*dest).vmexit_info_on_ios = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_vmx_true_available = __VERIFIER_nondet_ulonglong();
    (*dest).voe_without_err_code = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd2 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_ia32_vmx_misc_u(union ia32_vmx_misc_u *dest) {
    #ifdef FV_init_union_ia32_vmx_misc_u_anon_struct_0
    (*dest).vmx_preempt_timer_tsc_factor = __VERIFIER_nondet_ulonglong();
    (*dest).unrestricted_guest = __VERIFIER_nondet_ulonglong();
    (*dest).activity_hlt = __VERIFIER_nondet_ulonglong();
    (*dest).activity_shutdown = __VERIFIER_nondet_ulonglong();
    (*dest).activity_wait_for_sipi = __VERIFIER_nondet_ulonglong();
    (*dest).reserved = __VERIFIER_nondet_ulonglong();
    (*dest).pt_in_vmx = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_smbase = __VERIFIER_nondet_ulonglong();
    (*dest).max_cr3_targets = __VERIFIER_nondet_ulonglong();
    (*dest).max_msr_list_size = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_smm_monitor_ctl = __VERIFIER_nondet_ulonglong();
    (*dest).vmwrite_any_vmcs_field = __VERIFIER_nondet_ulonglong();
    (*dest).voe_with_0_instr_length = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    (*dest).mseg_rev_id = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_ia32_vmx_allowed_bits_t(ia32_vmx_allowed_bits_t *dest) {
    #ifdef FV_init_ia32_vmx_allowed_bits_t_anon_struct_0
    (*dest).not_allowed0 = __VERIFIER_nondet_uint();
    (*dest).allowed1 = __VERIFIER_nondet_uint();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_vmx_procbased_ctls3_t(vmx_procbased_ctls3_t *dest) {
    #ifdef FV_init_vmx_procbased_ctls3_t_anon_struct_0
    (*dest).loadiwkey_exiting = __VERIFIER_nondet_ulonglong();
    (*dest).enable_hlat = __VERIFIER_nondet_ulonglong();
    (*dest).ept_paging_write_control = __VERIFIER_nondet_ulonglong();
    (*dest).guest_paging_verification = __VERIFIER_nondet_ulonglong();
    (*dest).ipi_virtualization = __VERIFIER_nondet_ulonglong();
    (*dest).gpaw = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_0 = __VERIFIER_nondet_ulonglong();
    (*dest).virt_ia32_spec_ctrl = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_ia32_cr0_t(ia32_cr0_t *dest) {
    #ifdef FV_init_ia32_cr0_t_anon_struct_0
    (*dest).pe = __VERIFIER_nondet_ulonglong();
    (*dest).mp = __VERIFIER_nondet_ulonglong();
    (*dest).em = __VERIFIER_nondet_ulonglong();
    (*dest).ts = __VERIFIER_nondet_ulonglong();
    (*dest).et = __VERIFIER_nondet_ulonglong();
    (*dest).ne = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_0 = __VERIFIER_nondet_ulonglong();
    (*dest).wp = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    (*dest).am = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_2 = __VERIFIER_nondet_ulonglong();
    (*dest).nw = __VERIFIER_nondet_ulonglong();
    (*dest).cd = __VERIFIER_nondet_ulonglong();
    (*dest).pg = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_3 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_ia32_cr4_t(ia32_cr4_t *dest) {
    #ifdef FV_init_ia32_cr4_t_anon_struct_0
    (*dest).vme = __VERIFIER_nondet_ulonglong();
    (*dest).pvi = __VERIFIER_nondet_ulonglong();
    (*dest).tsd = __VERIFIER_nondet_ulonglong();
    (*dest).de = __VERIFIER_nondet_ulonglong();
    (*dest).pse = __VERIFIER_nondet_ulonglong();
    (*dest).pae = __VERIFIER_nondet_ulonglong();
    (*dest).mce = __VERIFIER_nondet_ulonglong();
    (*dest).pge = __VERIFIER_nondet_ulonglong();
    (*dest).pce = __VERIFIER_nondet_ulonglong();
    (*dest).osfxsr = __VERIFIER_nondet_ulonglong();
    (*dest).osxmmexcpt = __VERIFIER_nondet_ulonglong();
    (*dest).umip = __VERIFIER_nondet_ulonglong();
    (*dest).la57 = __VERIFIER_nondet_ulonglong();
    (*dest).vmxe = __VERIFIER_nondet_ulonglong();
    (*dest).smxe = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_0 = __VERIFIER_nondet_ulonglong();
    (*dest).fsgsbase = __VERIFIER_nondet_ulonglong();
    (*dest).pcide = __VERIFIER_nondet_ulonglong();
    (*dest).osxsave = __VERIFIER_nondet_ulonglong();
    (*dest).keylocker = __VERIFIER_nondet_ulonglong();
    (*dest).smep = __VERIFIER_nondet_ulonglong();
    (*dest).smap = __VERIFIER_nondet_ulonglong();
    (*dest).pke = __VERIFIER_nondet_ulonglong();
    (*dest).cet = __VERIFIER_nondet_ulonglong();
    (*dest).pks = __VERIFIER_nondet_ulonglong();
    (*dest).uintr = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    (*dest).lass = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_2 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_ia32_mtrrcap_u(union ia32_mtrrcap_u *dest) {
    #ifdef FV_init_union_ia32_mtrrcap_u_anon_struct_0
    (*dest).vcnt = __VERIFIER_nondet_ulonglong();
    (*dest).fix = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd1 = __VERIFIER_nondet_ulonglong();
    (*dest).wc = __VERIFIER_nondet_ulonglong();
    (*dest).smrr = __VERIFIER_nondet_ulonglong();
    (*dest).prmrr = __VERIFIER_nondet_ulonglong();
    (*dest).smrr2 = __VERIFIER_nondet_ulonglong();
    (*dest).smrr_lock = __VERIFIER_nondet_ulonglong();
    (*dest).seamrr = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd2 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_ia32_arch_capabilities_u(union ia32_arch_capabilities_u *dest) {
    #ifdef FV_init_union_ia32_arch_capabilities_u_anon_struct_0
    (*dest).rdcl_no = __VERIFIER_nondet_ulonglong();
    (*dest).irbs_all = __VERIFIER_nondet_ulonglong();
    (*dest).rsba = __VERIFIER_nondet_ulonglong();
    (*dest).skip_l1dfl_vmentry = __VERIFIER_nondet_ulonglong();
    (*dest).ssb_no = __VERIFIER_nondet_ulonglong();
    (*dest).mds_no = __VERIFIER_nondet_ulonglong();
    (*dest).if_pschange_mc_no = __VERIFIER_nondet_ulonglong();
    (*dest).tsx_ctrl = __VERIFIER_nondet_ulonglong();
    (*dest).taa_no = __VERIFIER_nondet_ulonglong();
    (*dest).mcu_ctls = __VERIFIER_nondet_ulonglong();
    (*dest).misc_package_ctls = __VERIFIER_nondet_ulonglong();
    (*dest).energy_filtering_ctl = __VERIFIER_nondet_ulonglong();
    (*dest).doitm = __VERIFIER_nondet_ulonglong();
    (*dest).sbdr_ssdp_no = __VERIFIER_nondet_ulonglong();
    (*dest).fbsdp_no = __VERIFIER_nondet_ulonglong();
    (*dest).psdp_no = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    (*dest).fb_clear = __VERIFIER_nondet_ulonglong();
    (*dest).fb_clear_ctrl = __VERIFIER_nondet_ulonglong();
    (*dest).rrsba = __VERIFIER_nondet_ulonglong();
    (*dest).bhi_no = __VERIFIER_nondet_ulonglong();
    (*dest).xapic_disable_status = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_2 = __VERIFIER_nondet_ulonglong();
    (*dest).overclocking_status = __VERIFIER_nondet_ulonglong();
    (*dest).pbrsb_no = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_3 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_ia32_xapic_disable_status_u(union ia32_xapic_disable_status_u *dest) {
    #ifdef FV_init_union_ia32_xapic_disable_status_u_anon_struct_0
    (*dest).legacy_xapic_disabled = __VERIFIER_nondet_ulonglong();
    (*dest).reserved = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_ia32_core_capabilities_u(union ia32_core_capabilities_u *dest) {
    #ifdef FV_init_union_ia32_core_capabilities_u_anon_struct_0
    (*dest).stlb_qos_supported = __VERIFIER_nondet_ulonglong();
    (*dest).rar_supported = __VERIFIER_nondet_ulonglong();
    (*dest).fusa_supported = __VERIFIER_nondet_ulonglong();
    (*dest).rsm_in_cpl0_only = __VERIFIER_nondet_ulonglong();
    (*dest).uc_lock_disable_supported = __VERIFIER_nondet_ulonglong();
    (*dest).split_lock_disable_supported = __VERIFIER_nondet_ulonglong();
    (*dest).snoop_filter_qos_supported = __VERIFIER_nondet_ulonglong();
    (*dest).uc_store_throttlin_supported = __VERIFIER_nondet_ulonglong();
    (*dest).lam_supported = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_2 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_ia32_perf_capabilities_t(ia32_perf_capabilities_t *dest) {
    #ifdef FV_init_ia32_perf_capabilities_t_anon_struct_0
    (*dest).lbr_format = __VERIFIER_nondet_ulonglong();
    (*dest).pebs_trap_indicator = __VERIFIER_nondet_ulonglong();
    (*dest).pebs_save_arch_regs = __VERIFIER_nondet_ulonglong();
    (*dest).pebs_records_encoding = __VERIFIER_nondet_ulonglong();
    (*dest).freeze_while_smm_supported = __VERIFIER_nondet_ulonglong();
    (*dest).full_write = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd1 = __VERIFIER_nondet_ulonglong();
    (*dest).perf_metrics_available = __VERIFIER_nondet_ulonglong();
    (*dest).pebs_output_pt_avail = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd2 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_ia32_tme_capability_t(ia32_tme_capability_t *dest) {
    #ifdef FV_init_ia32_tme_capability_t_anon_struct_0
    (*dest).aes_xts_128 = __VERIFIER_nondet_ulonglong();
    (*dest).aes_xts_128_with_integrity = __VERIFIER_nondet_ulonglong();
    (*dest).aes_xts_256 = __VERIFIER_nondet_ulonglong();
    (*dest).aes_xts_256_with_integrity = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd = __VERIFIER_nondet_ulonglong();
    (*dest).tme_enc_bypass_supported = __VERIFIER_nondet_ulonglong();
    (*dest).mk_tme_max_keyid_bits = __VERIFIER_nondet_ulonglong();
    (*dest).mk_tme_max_keys = __VERIFIER_nondet_ulonglong();
    (*dest).nm_encryption_disable = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd2 = __VERIFIER_nondet_ulonglong();
    (*dest).implicit_bit_mask = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_ia32_tme_activate_t(ia32_tme_activate_t *dest) {
    #ifdef FV_init_ia32_tme_activate_t_anon_struct_0
    (*dest).lock = __VERIFIER_nondet_ulonglong();
    (*dest).tme_enable = __VERIFIER_nondet_ulonglong();
    (*dest).key_select = __VERIFIER_nondet_ulonglong();
    (*dest).save_key_for_standby = __VERIFIER_nondet_ulonglong();
    (*dest).tme_policy = __VERIFIER_nondet_ulonglong();
    (*dest).sgx_tem_enable = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd = __VERIFIER_nondet_ulonglong();
    (*dest).tme_enc_bypass_enable = __VERIFIER_nondet_ulonglong();
    (*dest).mk_tme_keyid_bits = __VERIFIER_nondet_ulonglong();
    (*dest).tdx_reserved_keyid_bits = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd1 = __VERIFIER_nondet_ulonglong();
    (*dest).algs_aes_xts_128 = __VERIFIER_nondet_ulonglong();
    (*dest).algs_aes_xts_128_with_integrity = __VERIFIER_nondet_ulonglong();
    (*dest).algs_aes_xts_256 = __VERIFIER_nondet_ulonglong();
    (*dest).algs_aes_xts_256_with_integrity = __VERIFIER_nondet_ulonglong();
    (*dest).algs_rsvd = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_ia32_tme_keyid_partitioning_t(ia32_tme_keyid_partitioning_t *dest) {
    #ifdef FV_init_ia32_tme_keyid_partitioning_t_anon_struct_0
    (*dest).num_mktme_kids = __VERIFIER_nondet_uint();
    (*dest).num_tdx_priv_kids = __VERIFIER_nondet_uint();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_ia32_misc_package_ctls_u(union ia32_misc_package_ctls_u *dest) {
    #ifdef FV_init_union_ia32_misc_package_ctls_u_anon_struct_0
    (*dest).energy_filtering_enable = __VERIFIER_nondet_ulonglong();
    (*dest).reserved = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_smrr_base_t(smrr_base_t *dest) {
    #ifdef FV_init_smrr_base_t_anon_struct_0
    (*dest).memtype = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd0 = __VERIFIER_nondet_ulonglong();
    (*dest).base = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd1 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_smrr_mask_t(smrr_mask_t *dest) {
    #ifdef FV_init_smrr_mask_t_anon_struct_0
    (*dest).rsvd0 = __VERIFIER_nondet_ulonglong();
    (*dest).lock = __VERIFIER_nondet_ulonglong();
    (*dest).vld = __VERIFIER_nondet_ulonglong();
    (*dest).mask = __VERIFIER_nondet_ulonglong();
    (*dest).rsvd1 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_array_1D_smrr_range_t(smrr_range_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        __VERIFIER_nondet_smrr_base_t(&((*dest)[i].smrr_base));
        __VERIFIER_nondet_smrr_mask_t(&((*dest)[i].smrr_mask));
    }
}

void __VERIFIER_nondet_platform_common_config_t(platform_common_config_t *dest) {
    (*dest).ia32_tsc_adjust = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_ia32_vmx_basic_t(&((*dest).ia32_vmx_basic));
    __VERIFIER_nondet_union_ia32_vmx_misc_u(&((*dest).ia32_vmx_misc));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).ia32_vmx_true_pinbased_ctls));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).ia32_vmx_true_procbased_ctls));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).ia32_vmx_procbased_ctls2));
    __VERIFIER_nondet_vmx_procbased_ctls3_t(&((*dest).ia32_vmx_procbased_ctls3));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).ia32_vmx_true_exit_ctls));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).ia32_vmx_true_entry_ctls));
    (*dest).ia32_vmx_ept_vpid_cap = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_ia32_cr0_t(&((*dest).ia32_vmx_cr0_fixed0));
    __VERIFIER_nondet_ia32_cr0_t(&((*dest).ia32_vmx_cr0_fixed1));
    __VERIFIER_nondet_ia32_cr4_t(&((*dest).ia32_vmx_cr4_fixed0));
    __VERIFIER_nondet_ia32_cr4_t(&((*dest).ia32_vmx_cr4_fixed1));
    __VERIFIER_nondet_union_ia32_mtrrcap_u(&((*dest).ia32_mtrrcap));
    __VERIFIER_nondet_union_ia32_arch_capabilities_u(&((*dest).ia32_arch_capabilities));
    __VERIFIER_nondet_union_ia32_xapic_disable_status_u(&((*dest).ia32_xapic_disable_status));
    __VERIFIER_nondet_union_ia32_core_capabilities_u(&((*dest).ia32_core_capabilities));
    __VERIFIER_nondet_ia32_perf_capabilities_t(&((*dest).ia32_perf_capabilities));
    __VERIFIER_nondet_ia32_tme_capability_t(&((*dest).ia32_tme_capability));
    __VERIFIER_nondet_ia32_tme_activate_t(&((*dest).ia32_tme_activate));
    __VERIFIER_nondet_ia32_tme_keyid_partitioning_t(&((*dest).ia32_tme_keyid_partitioning));
    __VERIFIER_nondet_union_ia32_misc_package_ctls_u(&((*dest).ia32_misc_package_ctls));
    __VERIFIER_nondet_array_1D_smrr_range_t(&((*dest).smrr), 2);
}

void __VERIFIER_nondet_array_1D_struct_xsave_component_info_s(struct xsave_component_info_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].size = __VERIFIER_nondet_uint();
        (*dest)[i].align = __VERIFIER_nondet_uchar();
    }
}

void __VERIFIER_nondet_cpuid_config_leaf_subleaf_t(cpuid_config_leaf_subleaf_t *dest) {
    #ifdef FV_init_cpuid_config_leaf_subleaf_t_anon_struct_0
    (*dest).leaf = __VERIFIER_nondet_uint();
    (*dest).subleaf = __VERIFIER_nondet_uint();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_cpuid_config_return_values_t(cpuid_config_return_values_t *dest) {
    #ifdef FV_init_cpuid_config_return_values_t_anon_struct_0
    (*dest).eax = __VERIFIER_nondet_uint();
    (*dest).ebx = __VERIFIER_nondet_uint();
    (*dest).ecx = __VERIFIER_nondet_uint();
    (*dest).edx = __VERIFIER_nondet_uint();
    
    #elif FV_init_cpuid_config_return_values_t_anon_struct_1
    (*dest).low = __VERIFIER_nondet_ulonglong();
    (*dest).high = __VERIFIER_nondet_ulonglong();
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).values), 4);
    #endif
}

void __VERIFIER_nondet_array_1D_cpuid_config_t(cpuid_config_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        __VERIFIER_nondet_cpuid_config_leaf_subleaf_t(&((*dest)[i].leaf_subleaf));
        __VERIFIER_nondet_cpuid_config_return_values_t(&((*dest)[i].values));
    }
}

void __VERIFIER_nondet_td_vmcs_values_t(td_vmcs_values_t *dest) {
    (*dest).pinbased_ctls = __VERIFIER_nondet_uint();
    (*dest).procbased_ctls = __VERIFIER_nondet_uint();
    (*dest).procbased_ctls2 = __VERIFIER_nondet_uint();
    (*dest).procbased_ctls3 = __VERIFIER_nondet_ulonglong();
    (*dest).exit_ctls = __VERIFIER_nondet_uint();
    (*dest).entry_ctls = __VERIFIER_nondet_uint();
}

void __VERIFIER_nondet_struct_vmcs_fields_info_s(struct vmcs_fields_info_s *dest) {
    (*dest).encoding = __VERIFIER_nondet_ulonglong();
    (*dest).value = __VERIFIER_nondet_ulonglong();
}

void __VERIFIER_nondet_struct_vmcs_host_values_s(struct vmcs_host_values_s *dest) {
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).CR0));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).CR3));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).CR4));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).CS));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).SS));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).FS));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).GS));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).TR));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).IA32_S_CET));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).IA32_PAT));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).IA32_EFER));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).FS_BASE));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).IDTR_BASE));
    __VERIFIER_nondet_struct_vmcs_fields_info_s(&((*dest).GDTR_BASE));
}

void __VERIFIER_nondet_union_config_flags_s(union config_flags_s *dest) {
    #ifdef FV_init_union_config_flags_s_anon_struct_0
    (*dest).gpaw = __VERIFIER_nondet_ulonglong();
    (*dest).flexible_pending_ve = __VERIFIER_nondet_ulonglong();
    (*dest).no_rbp_mod = __VERIFIER_nondet_ulonglong();
    (*dest).reserved = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_array_1D_struct_tdmr_info_entry_s(struct tdmr_info_entry_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].tdmr_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].tdmr_size = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_1g_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_1g_size = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_2m_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_2m_size = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_4k_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].pamt_4k_size = __VERIFIER_nondet_ulonglong();
        for (int i = 0; i < 16; i++) {
            (*dest)[i].rsvd_areas[i].offset = __VERIFIER_nondet_ulonglong();
            (*dest)[i].rsvd_areas[i].size = __VERIFIER_nondet_ulonglong();
        }
    }
}

void __VERIFIER_nondet_union_seam_ops_capabilities_s(union seam_ops_capabilities_s *dest) {
    #ifdef FV_init_union_seam_ops_capabilities_s_anon_struct_0
    (*dest).capabilities = __VERIFIER_nondet_ulonglong();
    (*dest).seamreport = __VERIFIER_nondet_ulonglong();
    (*dest).seamdb_clear = __VERIFIER_nondet_ulonglong();
    (*dest).seamdb_insert = __VERIFIER_nondet_ulonglong();
    (*dest).seamdb_getref = __VERIFIER_nondet_ulonglong();
    (*dest).seamdb_report = __VERIFIER_nondet_ulonglong();
    (*dest).reserved = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_struct_hash_method_s(struct hash_method_s *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).hash_method_buffer), 64);
    (*dest).is_initialized = __VERIFIER_nondet_uchar();
}

void __VERIFIER_nondet_fms_info_t(fms_info_t *dest) {
    #ifdef FV_init_fms_info_t_anon_struct_0
    (*dest).stepping_id = __VERIFIER_nondet_uint();
    (*dest).model = __VERIFIER_nondet_uint();
    (*dest).family = __VERIFIER_nondet_uint();
    (*dest).processor_type = __VERIFIER_nondet_uint();
    (*dest).rsvd0 = __VERIFIER_nondet_uint();
    (*dest).extende_model_id = __VERIFIER_nondet_uint();
    (*dest).extended_family_id = __VERIFIER_nondet_uint();
    (*dest).rsvd1 = __VERIFIER_nondet_uint();
    
    #else
    (*dest).raw = __VERIFIER_nondet_uint();
    #endif
}

void __VERIFIER_nondet_union_cpuid_1a_eax_u(union cpuid_1a_eax_u *dest) {
    #ifdef FV_init_union_cpuid_1a_eax_u_anon_struct_0
    (*dest).native_model_id = __VERIFIER_nondet_uint();
    (*dest).core_type = __VERIFIER_nondet_uint();
    
    #else
    (*dest).raw = __VERIFIER_nondet_uint();
    #endif
}

void __VERIFIER_nondet_struct_tdx_module_global_s(struct tdx_module_global_s *dest) {
    __VERIFIER_nondet_struct_xsave_area_no_extended_s(&((*dest).xbuf));
    __VERIFIER_nondet_sharex_lock_t(&((*dest).global_lock));
    (*dest).hkid_mask = __VERIFIER_nondet_ulonglong();
    (*dest).hkid_start_bit = __VERIFIER_nondet_uint();
    (*dest).max_pa = __VERIFIER_nondet_ulonglong();
    (*dest).num_of_lps = __VERIFIER_nondet_uint();
    (*dest).num_of_pkgs = __VERIFIER_nondet_uint();
    (*dest).num_of_init_lps = __VERIFIER_nondet_uint();
    (*dest).num_of_init_pkgs = __VERIFIER_nondet_uint();
    (*dest).module_hv = __VERIFIER_nondet_ushort();
    (*dest).min_update_hv = __VERIFIER_nondet_ushort();
    (*dest).no_downgrade = __VERIFIER_nondet_ushort();
    (*dest).num_handoff_pages = __VERIFIER_nondet_ushort();
    (*dest).seamdb_index = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_uint256_t(&((*dest).seamdb_nonce));
    (*dest).pkg_config_bitmap = __VERIFIER_nondet_uint();
    (*dest).private_hkid_min = __VERIFIER_nondet_uint();
    (*dest).private_hkid_max = __VERIFIER_nondet_uint();
    (*dest).hkid = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_struct_tdx_global_state_s(&((*dest).global_state));
    __VERIFIER_nondet_struct_kot_s(&((*dest).kot));
    __VERIFIER_nondet_array_1D_struct_wbt_entry_s(&((*dest).wbt_entries), 8);
    __VERIFIER_nondet_array_1D_struct_tdmr_entry_s(&((*dest).tdmr_table), 64);
    (*dest).num_of_tdmr_entries = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_platform_common_config_t(&((*dest).plt_common_config));
    (*dest).seamrr_base = __VERIFIER_nondet_ulonglong();
    (*dest).seamrr_size = __VERIFIER_nondet_ulonglong();
    (*dest).num_of_cached_sub_blocks = __VERIFIER_nondet_ulonglong();
    (*dest).x2apic_core_id_shift_count = __VERIFIER_nondet_uint();
    (*dest).x2apic_core_id_mask = __VERIFIER_nondet_uint();
    (*dest).x2apic_pkg_id_shift_count = __VERIFIER_nondet_uint();
    (*dest).waitpkg_supported = __VERIFIER_nondet_uchar();
    (*dest).kl_loadiwk_no_backup = __VERIFIER_nondet_uchar();
    (*dest).xfd_supported = __VERIFIER_nondet_uchar();
    (*dest).hle_supported = __VERIFIER_nondet_uchar();
    (*dest).rtm_supported = __VERIFIER_nondet_uchar();
    (*dest).ddpd_supported = __VERIFIER_nondet_uchar();
    (*dest).la57_supported = __VERIFIER_nondet_uchar();
    (*dest).lam_supported = __VERIFIER_nondet_uchar();
    (*dest).perfmon_ext_leaf_supported = __VERIFIER_nondet_uchar();
    (*dest).lass_supported = __VERIFIER_nondet_uchar();
    (*dest).crystal_clock_frequency = __VERIFIER_nondet_ulonglong();
    (*dest).native_tsc_frequency = __VERIFIER_nondet_ulonglong();
    (*dest).xcr0_supported_mask = __VERIFIER_nondet_uint();
    (*dest).ia32_xss_supported_mask = __VERIFIER_nondet_uint();
    (*dest).xfd_faulting_mask = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_array_1D_struct_xsave_component_info_s(&((*dest).xsave_comp), 19);
    __VERIFIER_nondet_array_1D_cpuid_config_t(&((*dest).cpuid_values), 68);
    (*dest).cpuid_last_base_leaf = __VERIFIER_nondet_uint();
    (*dest).cpuid_last_extended_leaf = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_td_vmcs_values_t(&((*dest).td_vmcs_values));
    __VERIFIER_nondet_td_vmcs_values_t(&((*dest).l2_vmcs_values));
    __VERIFIER_nondet_struct_vmcs_host_values_s(&((*dest).seam_vmcs_host_values));
    (*dest).max_lbr_depth = __VERIFIER_nondet_uint();
    (*dest).num_fixed_ctrs = __VERIFIER_nondet_uchar();
    (*dest).fc_bitmap = __VERIFIER_nondet_uint();
    (*dest).attributes_fixed0 = __VERIFIER_nondet_ulonglong();
    (*dest).attributes_fixed1 = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_union_config_flags_s(&((*dest).config_flags_fixed0));
    __VERIFIER_nondet_union_config_flags_s(&((*dest).config_flags_fixed1));
    __VERIFIER_nondet_array_1D_struct_tdmr_info_entry_s(&((*dest).tdmr_info_copy), 64);
    __VERIFIER_nondet_union_seam_ops_capabilities_s(&((*dest).seam_capabilities));
    (*dest).seamverifyreport_available = __VERIFIER_nondet_uchar();
    (*dest).num_rdseed_retries = __VERIFIER_nondet_uchar();
    (*dest).num_rdseed_pauses = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_struct_hash_method_s(&((*dest).sha384_method));
    __VERIFIER_nondet_fms_info_t(&((*dest).platform_fms));
    __VERIFIER_nondet_union_cpuid_1a_eax_u(&((*dest).native_model_info));
}

void __VERIFIER_nondet_sharex_hp_lock_t(sharex_hp_lock_t *dest) {
    #ifdef FV_init_sharex_hp_lock_t_anon_struct_0
    (*dest).exclusive = __VERIFIER_nondet_ushort();
    (*dest).host_prio = __VERIFIER_nondet_ushort();
    (*dest).counter = __VERIFIER_nondet_ushort();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ushort();
    #endif
}

extern signed int __VERIFIER_nondet_int(void);
page_type_t __VERIFIER_nondet_page_type_t(void) {
    switch (__VERIFIER_nondet_int()) {
    case 0:
        return PT_NDA;
    case 1:
        return PT_RSVD;
    case 2:
        return PT_REG;
    case 3:
        return PT_TDR;
    case 4:
        return PT_TDCX;
    case 5:
        return PT_TDVPR;
    default:
        return PT_EPT;
    }
}

void __VERIFIER_nondet_union_bepoch_u(union bepoch_u *dest) {
    #ifdef FV_init_union_bepoch_u_anon_struct_0
    (*dest).mig_epoch = __VERIFIER_nondet_ulonglong();
    (*dest).export_count = __VERIFIER_nondet_ulonglong();
    (*dest).mig_flag = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_struct_pamt_entry_s(struct pamt_entry_s *dest) {
    __VERIFIER_nondet_sharex_hp_lock_t(&((*dest).entry_lock));
    (*dest).pt = __VERIFIER_nondet_page_type_t();
    (*dest).owner = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_union_bepoch_u(&((*dest).bepoch));
}

extern unsigned long __VERIFIER_nondet_ulong(void);
void * __VERIFIER_nondet_void_ptr(void) {
    return (void *) __VERIFIER_nondet_ulong();
}

void __VERIFIER_nondet_struct_pamt_block_s(struct pamt_block_s *dest) {
    (*dest).pamt_1gb_p = __VERIFIER_nondet_void_ptr();
    (*dest).pamt_2mb_p = __VERIFIER_nondet_void_ptr();
    (*dest).pamt_4kb_p = __VERIFIER_nondet_void_ptr();
}

td_lifecycle_state_t __VERIFIER_nondet_td_lifecycle_state_t(void) {
    switch (__VERIFIER_nondet_int()) {
    case 0:
        return TD_HKID_ASSIGNED;
    case 1:
        return TD_KEYS_CONFIGURED;
    case 2:
        return TD_BLOCKED;
    default:
        return TD_TEARDOWN;
    }
}

void __VERIFIER_nondet_struct_tdr_td_management_fields_s(struct tdr_td_management_fields_s *dest) {
    (*dest).fatal = __VERIFIER_nondet_uchar();
    (*dest).num_tdcx = __VERIFIER_nondet_uint();
    (*dest).chldcnt = __VERIFIER_nondet_ulonglong();
    (*dest).lifecycle_state = __VERIFIER_nondet_td_lifecycle_state_t();
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).tdcx_pa), 9);
    __VERIFIER_nondet_uint256_t(&((*dest).td_uuid));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_2), 128);
}

void __VERIFIER_nondet_struct_tdr_key_managment_fields_s(struct tdr_key_managment_fields_s *dest) {
    (*dest).hkid = __VERIFIER_nondet_ushort();
    (*dest).pkg_config_bitmap = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 48);
}

void __VERIFIER_nondet_struct_tdr_td_preserving_fields_s(struct tdr_td_preserving_fields_s *dest) {
    (*dest).handoff_version = __VERIFIER_nondet_ushort();
    (*dest).seamdb_index = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_uint256_t(&((*dest).seamdb_nonce));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 16);
}

void __VERIFIER_nondet_struct_tdr_s(struct tdr_s *dest) {
    __VERIFIER_nondet_struct_tdr_td_management_fields_s(&((*dest).management_fields));
    __VERIFIER_nondet_struct_tdr_key_managment_fields_s(&((*dest).key_management_fields));
    __VERIFIER_nondet_struct_tdr_td_preserving_fields_s(&((*dest).td_preserving_fields));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 3712);
}

op_state_e __VERIFIER_nondet_op_state_e(void) {
    switch (__VERIFIER_nondet_int()) {
    case 0:
        return OP_STATE_UNINITIALIZED;
    case 1:
        return OP_STATE_INITIALIZED;
    case 2:
        return OP_STATE_RUNNABLE;
    case 3:
        return OP_STATE_LIVE_EXPORT;
    case 4:
        return OP_STATE_PAUSED_EXPORT;
    case 5:
        return OP_STATE_POST_EXPORT;
    case 6:
        return OP_STATE_MEMORY_IMPORT;
    case 7:
        return OP_STATE_STATE_IMPORT;
    case 8:
        return OP_STATE_POST_IMPORT;
    case 9:
        return OP_STATE_LIVE_IMPORT;
    default:
        return OP_STATE_FAILED_IMPORT;
    }
}

void __VERIFIER_nondet_struct_tdcs_management_fields_s(struct tdcs_management_fields_s *dest) {
    (*dest).num_vcpus = __VERIFIER_nondet_uint();
    (*dest).num_assoc_vcpus = __VERIFIER_nondet_uint();
    (*dest).op_state = __VERIFIER_nondet_op_state_e();
    __VERIFIER_nondet_sharex_hp_lock_t(&((*dest).op_state_lock));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_0), 2);
    (*dest).num_l2_vms = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_1), 110);
}

void __VERIFIER_nondet_union_td_param_attributes_s(union td_param_attributes_s *dest) {
    #ifdef FV_init_union_td_param_attributes_s_anon_struct_0
    (*dest).debug = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_tud = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_sec = __VERIFIER_nondet_ulonglong();
    (*dest).lass = __VERIFIER_nondet_ulonglong();
    (*dest).sept_ve_disable = __VERIFIER_nondet_ulonglong();
    (*dest).migratable = __VERIFIER_nondet_ulonglong();
    (*dest).pks = __VERIFIER_nondet_ulonglong();
    (*dest).kl = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_other = __VERIFIER_nondet_ulonglong();
    (*dest).perfmon = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_ia32e_eptp_u(union ia32e_eptp_u *dest) {
    #ifdef FV_init_union_ia32e_eptp_u_fields
    (*dest).fields.ept_ps_mt = __VERIFIER_nondet_ulonglong();
    (*dest).fields.ept_pwl = __VERIFIER_nondet_ulonglong();
    (*dest).fields.enable_ad_bits = __VERIFIER_nondet_ulonglong();
    (*dest).fields.enable_sss_control = __VERIFIER_nondet_ulonglong();
    (*dest).fields.reserved_0 = __VERIFIER_nondet_ulonglong();
    (*dest).fields.base_pa = __VERIFIER_nondet_ulonglong();
    (*dest).fields.reserved_1 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_struct_cpuid_flags_s(struct cpuid_flags_s *dest) {
    (*dest).monitor_mwait_supported = __VERIFIER_nondet_uchar();
    (*dest).dca_supported = __VERIFIER_nondet_uchar();
    (*dest).tsc_deadline_supported = __VERIFIER_nondet_uchar();
    (*dest).tsx_supported = __VERIFIER_nondet_uchar();
    (*dest).waitpkg_supported = __VERIFIER_nondet_uchar();
    (*dest).tme_supported = __VERIFIER_nondet_uchar();
    (*dest).pconfig_supported = __VERIFIER_nondet_uchar();
    (*dest).xfd_supported = __VERIFIER_nondet_uchar();
    (*dest).ddpd_supported = __VERIFIER_nondet_uchar();
    (*dest).la57_supported = __VERIFIER_nondet_uchar();
    (*dest).fred_supported = __VERIFIER_nondet_uchar();
    (*dest).perfmon_ext_leaf_supported = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 20);
}

void __VERIFIER_nondet_notify_enables_t(notify_enables_t *dest) {
    #ifdef FV_init_notify_enables_t_anon_struct_0
    (*dest).notify_ept_faults = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_63_1 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_array_1D_vm_ctls_t(vm_ctls_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_vm_ctls_t_anon_struct_0
        (*dest)[i].ept_violation_on_l2_sept_walk_failure = __VERIFIER_nondet_ulonglong();
        (*dest)[i].reserved = __VERIFIER_nondet_ulonglong();
        
        #else
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
        #endif
    }
}

void __VERIFIER_nondet_td_ctls_t(td_ctls_t *dest) {
    #ifdef FV_init_td_ctls_t_anon_struct_0
    (*dest).pending_ve_disable = __VERIFIER_nondet_ulonglong();
    (*dest).enum_topology = __VERIFIER_nondet_ulonglong();
    (*dest).reserved = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_struct_tdcs_execution_control_fields_s(struct tdcs_execution_control_fields_s *dest) {
    __VERIFIER_nondet_union_td_param_attributes_s(&((*dest).attributes));
    (*dest).xfam = __VERIFIER_nondet_ulonglong();
    (*dest).max_vcpus = __VERIFIER_nondet_uint();
    (*dest).gpaw = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_union_ia32e_eptp_u(&((*dest).eptp));
    __VERIFIER_nondet_sharex_lock_t(&((*dest).secure_ept_lock));
    (*dest).tsc_offset = __VERIFIER_nondet_ulonglong();
    (*dest).tsc_multiplier = __VERIFIER_nondet_ulonglong();
    (*dest).tsc_frequency = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_struct_cpuid_flags_s(&((*dest).cpuid_flags));
    (*dest).xbuff_size = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_notify_enables_t(&((*dest).notify_enables));
    (*dest).hp_lock_timeout = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_vm_ctls_t(&((*dest).vm_ctls), 4);
    (*dest).ia32_spec_ctrl_mask = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_union_config_flags_s(&((*dest).config_flags));
    __VERIFIER_nondet_td_ctls_t(&((*dest).td_ctls));
    (*dest).reserved_1 = __VERIFIER_nondet_uint();
    (*dest).topology_enum_configured = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_2), 7);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).cpuid_valid), 80);
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).xbuff_offsets), 19);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_3), 36);
}

void __VERIFIER_nondet_array_1D_unsigned_short(unsigned short (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i] = __VERIFIER_nondet_ushort();
    }
}

void __VERIFIER_nondet_struct_epoch_and_refcount_s(struct epoch_and_refcount_s *dest) {
    #ifdef FV_init_anon_union_5_anon_struct_0
    (*dest).td_epoch = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_short(&((*dest).refcount), 2);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 4);
    
    #else
    __VERIFIER_nondet_uint128_t(&((*dest).raw));
    #endif
}

void __VERIFIER_nondet_struct_tdcs_epoch_tracking_fields_s(struct tdcs_epoch_tracking_fields_s *dest) {
    __VERIFIER_nondet_struct_epoch_and_refcount_s(&((*dest).epoch_and_refcount));
    __VERIFIER_nondet_sharex_lock_t(&((*dest).epoch_lock));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 46);
}

void __VERIFIER_nondet_union_measurement_u(union measurement_u *dest) {
    #ifdef FV_init_union_measurement_u_qwords
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).qwords), 6);
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).bytes), 48);
    #endif
}

void __VERIFIER_nondet_array_1D_union_measurement_u(union measurement_u (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_union_measurement_u_qwords
        __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest)[i].qwords), 6);
        
        #else
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].bytes), 48);
        #endif
    }
}

void __VERIFIER_nondet_struct_sha384_ctx_s(struct sha384_ctx_s *dest) {
    (*dest).last_init_seamdb_index = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).buffer), 256);
}

void __VERIFIER_nondet_struct_tdcs_measurement_fields_s(struct tdcs_measurement_fields_s *dest) {
    __VERIFIER_nondet_union_measurement_u(&((*dest).mr_td));
    __VERIFIER_nondet_union_measurement_u(&((*dest).mr_config_id));
    __VERIFIER_nondet_union_measurement_u(&((*dest).mr_owner));
    __VERIFIER_nondet_union_measurement_u(&((*dest).mr_owner_config));
    __VERIFIER_nondet_array_1D_union_measurement_u(&((*dest).rtmr), 4);
    __VERIFIER_nondet_union_measurement_u(&((*dest).last_teeinfo_hash));
    __VERIFIER_nondet_sharex_hp_lock_t(&((*dest).rtmr_lock));
    (*dest).last_teeinfo_hash_valid = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_0), 45);
    __VERIFIER_nondet_struct_sha384_ctx_s(&((*dest).td_sha_ctx));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_1), 88);
}

void __VERIFIER_nondet_struct_tdcs_migration_fields_s(struct tdcs_migration_fields_s *dest) {
    (*dest).mig_dec_key_set = __VERIFIER_nondet_uchar();
    (*dest).export_count = __VERIFIER_nondet_uint();
    (*dest).import_count = __VERIFIER_nondet_uint();
    (*dest).mig_epoch = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_union_bepoch_u(&((*dest).bw_epoch));
    (*dest).total_mb_count = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_uint256_t(&((*dest).mig_dec_key));
    __VERIFIER_nondet_uint256_t(&((*dest).mig_dec_working_key));
    __VERIFIER_nondet_uint256_t(&((*dest).mig_enc_key));
    __VERIFIER_nondet_uint256_t(&((*dest).mig_enc_working_key));
    (*dest).mig_version = __VERIFIER_nondet_ushort();
    (*dest).mig_working_version = __VERIFIER_nondet_ushort();
    (*dest).dirty_count = __VERIFIER_nondet_ulonglong();
    (*dest).mig_count = __VERIFIER_nondet_ulonglong();
    (*dest).num_migs = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_0), 2);
    (*dest).num_migrated_vcpus = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_uint256_t(&((*dest).preimport_uuid));
    __VERIFIER_nondet_sharex_lock_t(&((*dest).mig_lock));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_1), 158);
}

void __VERIFIER_nondet_union_ia32_vmx_ept_vpid_cap_u(union ia32_vmx_ept_vpid_cap_u *dest) {
    #ifdef FV_init_union_ia32_vmx_ept_vpid_cap_u_anon_struct_0
    (*dest).exe_only_supported = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    (*dest).pml4_supported = __VERIFIER_nondet_ulonglong();
    (*dest).pml5_supported = __VERIFIER_nondet_ulonglong();
    (*dest).uc_supported = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_2 = __VERIFIER_nondet_ulonglong();
    (*dest).wb_supported = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_3 = __VERIFIER_nondet_ulonglong();
    (*dest).ps_2m_supported = __VERIFIER_nondet_ulonglong();
    (*dest).ps_1g_supported = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_4 = __VERIFIER_nondet_ulonglong();
    (*dest).invept_supported = __VERIFIER_nondet_ulonglong();
    (*dest).ad_supported = __VERIFIER_nondet_ulonglong();
    (*dest).advanced_vmexit_info_supported = __VERIFIER_nondet_ulonglong();
    (*dest).sss_support = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_5 = __VERIFIER_nondet_ulonglong();
    (*dest).single_context_invept_supported = __VERIFIER_nondet_ulonglong();
    (*dest).all_context_invept_supported = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_6 = __VERIFIER_nondet_ulonglong();
    (*dest).invvpid_supported = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_7 = __VERIFIER_nondet_ulonglong();
    (*dest).individual_addr_invvpid_supported = __VERIFIER_nondet_ulonglong();
    (*dest).single_context_invvpid_supported = __VERIFIER_nondet_ulonglong();
    (*dest).all_context_invvpid_supported = __VERIFIER_nondet_ulonglong();
    (*dest).single_contx_retaining_globals_invvpid_supp = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_8 = __VERIFIER_nondet_ulonglong();
    (*dest).hlat_prefix_size = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_9 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_struct_tdcs_virt_msrs_s(struct tdcs_virt_msrs_s *dest) {
    __VERIFIER_nondet_ia32_vmx_basic_t(&((*dest).virt_ia32_vmx_basic));
    __VERIFIER_nondet_union_ia32_vmx_misc_u(&((*dest).virt_ia32_vmx_misc));
    __VERIFIER_nondet_ia32_cr0_t(&((*dest).virt_ia32_vmx_cr0_fixed0));
    __VERIFIER_nondet_ia32_cr0_t(&((*dest).virt_ia32_vmx_cr0_fixed1));
    __VERIFIER_nondet_ia32_cr4_t(&((*dest).virt_ia32_vmx_cr4_fixed0));
    __VERIFIER_nondet_ia32_cr4_t(&((*dest).virt_ia32_vmx_cr4_fixed1));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).virt_ia32_vmx_procbased_ctls2));
    __VERIFIER_nondet_union_ia32_vmx_ept_vpid_cap_u(&((*dest).virt_ia32_vmx_ept_vpid_cap));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).virt_ia32_vmx_true_pinbased_ctls));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).virt_ia32_vmx_true_procbased_ctls));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).virt_ia32_vmx_true_exit_ctls));
    __VERIFIER_nondet_ia32_vmx_allowed_bits_t(&((*dest).virt_ia32_vmx_true_entry_ctls));
    (*dest).virt_ia32_vmx_vmfunc = __VERIFIER_nondet_ulonglong();
    (*dest).virt_ia32_vmx_procbased_ctls3 = __VERIFIER_nondet_ulonglong();
    (*dest).virt_ia32_vmx_exit_ctls2 = __VERIFIER_nondet_ulonglong();
    (*dest).virt_ia32_arch_capabilities = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 128);
}

void __VERIFIER_nondet_array_1D_cpuid_config_return_values_t(cpuid_config_return_values_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_cpuid_config_return_values_t_anon_struct_0
        (*dest)[i].eax = __VERIFIER_nondet_uint();
        (*dest)[i].ebx = __VERIFIER_nondet_uint();
        (*dest)[i].ecx = __VERIFIER_nondet_uint();
        (*dest)[i].edx = __VERIFIER_nondet_uint();
        
        #elif FV_init_cpuid_config_return_values_t_anon_struct_1
        (*dest)[i].low = __VERIFIER_nondet_ulonglong();
        (*dest)[i].high = __VERIFIER_nondet_ulonglong();
        
        #else
        __VERIFIER_nondet_array_1D_unsigned_int(&((*dest)[i].values), 4);
        #endif
    }
}

void __VERIFIER_nondet_union_ignore_tdinfo_bitmap_u(union ignore_tdinfo_bitmap_u *dest) {
    #ifdef FV_init_union_ignore_tdinfo_bitmap_u_anon_struct_0
    (*dest).attributes = __VERIFIER_nondet_ushort();
    (*dest).xfam = __VERIFIER_nondet_ushort();
    (*dest).mrtd = __VERIFIER_nondet_ushort();
    (*dest).mrconfig = __VERIFIER_nondet_ushort();
    (*dest).mrowner = __VERIFIER_nondet_ushort();
    (*dest).mrownerconfig = __VERIFIER_nondet_ushort();
    (*dest).rtmr = __VERIFIER_nondet_ushort();
    (*dest).servtd_hash = __VERIFIER_nondet_ushort();
    (*dest).reserved = __VERIFIER_nondet_ushort();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ushort();
    #endif
}

void __VERIFIER_nondet_union_servtd_attributes_u(union servtd_attributes_u *dest) {
    #ifdef FV_init_union_servtd_attributes_u_anon_struct_0
    (*dest).instance_binding = __VERIFIER_nondet_uint();
    (*dest).solicited_binding = __VERIFIER_nondet_uint();
    (*dest).platform_binding = __VERIFIER_nondet_uint();
    (*dest).migratable_binding = __VERIFIER_nondet_uint();
    (*dest).reserved0 = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_union_ignore_tdinfo_bitmap_u(&((*dest).ignore_tdinfo));
    (*dest).reserved1 = __VERIFIER_nondet_ushort();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_array_1D_struct_servtd_binding_s(struct servtd_binding_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].state = __VERIFIER_nondet_uchar();
        (*dest)[i].reserved_0 = __VERIFIER_nondet_uchar();
        (*dest)[i].type = __VERIFIER_nondet_ushort();
        (*dest)[i].reserved_1 = __VERIFIER_nondet_uint();
        __VERIFIER_nondet_union_servtd_attributes_u(&((*dest)[i].attributes));
        __VERIFIER_nondet_uint256_t(&((*dest)[i].uuid));
        __VERIFIER_nondet_union_measurement_u(&((*dest)[i].info_hash));
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].reserved_2), 32);
    }
}

void __VERIFIER_nondet_struct_tdcs_service_td_fields_s(struct tdcs_service_td_fields_s *dest) {
    __VERIFIER_nondet_union_measurement_u(&((*dest).servtd_hash));
    (*dest).servtd_num = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_sharex_hp_lock_t(&((*dest).servtd_bindings_lock));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_0), 80);
    __VERIFIER_nondet_array_1D_struct_servtd_binding_s(&((*dest).servtd_bindings_table), 1);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_1), 752);
}

void __VERIFIER_nondet_array_1D_union_migsc_link_u(union migsc_link_u (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_union_migsc_link_u_anon_struct_0
        (*dest)[i].lock = __VERIFIER_nondet_ulonglong();
        (*dest)[i].initialized = __VERIFIER_nondet_ulonglong();
        (*dest)[i].reserved_0 = __VERIFIER_nondet_ulonglong();
        (*dest)[i].migsc_hpa = __VERIFIER_nondet_ulonglong();
        (*dest)[i].reserved_1 = __VERIFIER_nondet_ulonglong();
        
        #else
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
        #endif
    }
}

void __VERIFIER_nondet_union_migsc_link_u(union migsc_link_u *dest) {
    #ifdef FV_init_union_migsc_link_u_anon_struct_0
    (*dest).lock = __VERIFIER_nondet_ulonglong();
    (*dest).initialized = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_0 = __VERIFIER_nondet_ulonglong();
    (*dest).migsc_hpa = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_struct_tdcs_s(struct tdcs_s *dest) {
    __VERIFIER_nondet_struct_tdcs_management_fields_s(&((*dest).management_fields));
    __VERIFIER_nondet_struct_tdcs_execution_control_fields_s(&((*dest).executions_ctl_fields));
    __VERIFIER_nondet_struct_tdcs_epoch_tracking_fields_s(&((*dest).epoch_tracking));
    __VERIFIER_nondet_struct_tdcs_measurement_fields_s(&((*dest).measurement_fields));
    __VERIFIER_nondet_struct_tdcs_migration_fields_s(&((*dest).migration_fields));
    __VERIFIER_nondet_struct_tdcs_virt_msrs_s(&((*dest).virt_msrs));
    __VERIFIER_nondet_array_1D_cpuid_config_return_values_t(&((*dest).cpuid_config_vals), 80);
    __VERIFIER_nondet_struct_tdcs_service_td_fields_s(&((*dest).service_td_fields));
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).x2apic_ids), 576);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_io), 1280);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).MSR_BITMAPS), 4096);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).sept_root_page), 4096);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).zero_page), 4096);
    #ifdef FV_init_anon_union_6_migsc_links_page
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).migsc_links_page), 4096);
    
    #elif FV_init_anon_union_7_migsc_links
    __VERIFIER_nondet_array_1D_union_migsc_link_u(&((*dest).migsc_links), 512);
    
    #else
    __VERIFIER_nondet_union_migsc_link_u(&((*dest).b_migsc_link));
    __VERIFIER_nondet_array_1D_union_migsc_link_u(&((*dest).f_migsc_links), 511);
    #endif
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).L2_SEPT_ROOT_1), 4096);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).L2_SEPT_ROOT_2), 4096);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).L2_SEPT_ROOT_3), 4096);
}

void __VERIFIER_nondet_struct_lp_info_s(struct lp_info_s *dest) {
    (*dest).lp = __VERIFIER_nondet_uint();
    (*dest).core = __VERIFIER_nondet_uint();
    (*dest).pkg = __VERIFIER_nondet_uint();
    (*dest).lp_id = __VERIFIER_nondet_uint();
}

void __VERIFIER_nondet_ia32_debugctl_t(ia32_debugctl_t *dest) {
    #ifdef FV_init_ia32_debugctl_t_anon_struct_0
    (*dest).lbr = __VERIFIER_nondet_ulonglong();
    (*dest).btf = __VERIFIER_nondet_ulonglong();
    (*dest).bus_lock_detect = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_0 = __VERIFIER_nondet_ulonglong();
    (*dest).tr = __VERIFIER_nondet_ulonglong();
    (*dest).bts = __VERIFIER_nondet_ulonglong();
    (*dest).btint = __VERIFIER_nondet_ulonglong();
    (*dest).bts_off_os = __VERIFIER_nondet_ulonglong();
    (*dest).bts_off_usr = __VERIFIER_nondet_ulonglong();
    (*dest).frz_lbr_pmi = __VERIFIER_nondet_ulonglong();
    (*dest).frz_perfmon_pmi = __VERIFIER_nondet_ulonglong();
    (*dest).en_uncore_pmi = __VERIFIER_nondet_ulonglong();
    (*dest).frz_while_smm = __VERIFIER_nondet_ulonglong();
    (*dest).rtm_debug = __VERIFIER_nondet_ulonglong();
    (*dest).reserved_1 = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    #endif
}

void __VERIFIER_nondet_union_pa_u(union pa_u *dest) {
    #ifdef FV_init_union_pa_u_anon_struct_0
    #ifdef FV_init_anon_union_22_full_pa
    (*dest).full_pa = __VERIFIER_nondet_ulonglong();
    
    #elif FV_init_anon_union_23_fields_4k
    (*dest).fields_4k.page_offset = __VERIFIER_nondet_ulonglong();
    (*dest).fields_4k.pt_index = __VERIFIER_nondet_ulonglong();
    (*dest).fields_4k.pd_index = __VERIFIER_nondet_ulonglong();
    (*dest).fields_4k.pdpt_index = __VERIFIER_nondet_ulonglong();
    (*dest).fields_4k.pml4_index = __VERIFIER_nondet_ulonglong();
    (*dest).fields_4k.pml5_index = __VERIFIER_nondet_ulonglong();
    
    #elif FV_init_anon_union_24_fields_2m
    (*dest).fields_2m.page_offset = __VERIFIER_nondet_ulonglong();
    (*dest).fields_2m.pd_index = __VERIFIER_nondet_ulonglong();
    (*dest).fields_2m.pdpt_index = __VERIFIER_nondet_ulonglong();
    (*dest).fields_2m.pml4_index = __VERIFIER_nondet_ulonglong();
    (*dest).fields_2m.pml5_index = __VERIFIER_nondet_ulonglong();
    
    #elif FV_init_anon_union_25_pamt_4k
    (*dest).pamt_4k.page_offset = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_4k.idx = __VERIFIER_nondet_ulonglong();
    
    #elif FV_init_anon_union_26_pamt_2m
    (*dest).pamt_2m.page_offset = __VERIFIER_nondet_ulonglong();
    (*dest).pamt_2m.idx = __VERIFIER_nondet_ulonglong();
    
    #elif FV_init_anon_union_27_anon_struct_5
    (*dest).low_12_bits = __VERIFIER_nondet_ulonglong();
    (*dest).page_4k_num = __VERIFIER_nondet_ulonglong();
    
    #elif FV_init_anon_union_28_anon_struct_6
    (*dest).low_21_bits = __VERIFIER_nondet_ulonglong();
    (*dest).page_2m_num = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).low_30_bits = __VERIFIER_nondet_ulonglong();
    (*dest).page_1g_num = __VERIFIER_nondet_ulonglong();
    #endif
    
    #elif FV_init_union_pa_u_raw
    (*dest).raw = __VERIFIER_nondet_ulonglong();
    
    #else
    (*dest).raw_void = __VERIFIER_nondet_void_ptr();
    #endif
}

void __VERIFIER_nondet_struct_vp_ctx_s(struct vp_ctx_s *dest) {
    (*dest).tdr = __VERIFIER_nondet_void_ptr();
    (*dest).tdr_pamt_entry = __VERIFIER_nondet_void_ptr();
    __VERIFIER_nondet_union_pa_u(&((*dest).tdr_pa));
    (*dest).tdvps = __VERIFIER_nondet_void_ptr();
    (*dest).tdvpr_pamt_entry = __VERIFIER_nondet_void_ptr();
    __VERIFIER_nondet_struct_pamt_block_s(&((*dest).tdvpr_pamt_block));
    __VERIFIER_nondet_union_pa_u(&((*dest).tdvpr_pa));
    (*dest).tdcs = __VERIFIER_nondet_void_ptr();
    __VERIFIER_nondet_union_pa_u(&((*dest).last_tdvpr_pa));
    __VERIFIER_nondet_union_td_param_attributes_s(&((*dest).attributes));
    (*dest).xfam = __VERIFIER_nondet_ulonglong();
    (*dest).xfd_supported = __VERIFIER_nondet_uchar();
    (*dest).ia32_perf_global_status = __VERIFIER_nondet_ulonglong();
    (*dest).bus_lock_preempted = __VERIFIER_nondet_uchar();
    (*dest).active_vmcs = __VERIFIER_nondet_ushort();
}

void __VERIFIER_nondet_struct_stepping_s(struct stepping_s *dest) {
    (*dest).in_inst_step_mode = __VERIFIER_nondet_uchar();
    (*dest).num_inst_step = __VERIFIER_nondet_uint();
    (*dest).saved_cr8 = __VERIFIER_nondet_ulonglong();
    (*dest).nmi_exit_occured = __VERIFIER_nondet_uchar();
    (*dest).init_exit_occured = __VERIFIER_nondet_uchar();
    (*dest).lfsr_value = __VERIFIER_nondet_uint();
    (*dest).last_entry_tsc = __VERIFIER_nondet_ulonglong();
    (*dest).guest_rip_on_tdentry = __VERIFIER_nondet_ulonglong();
}

void __VERIFIER_nondet_struct_non_extended_state_s(struct non_extended_state_s *dest) {
    (*dest).ia32_spec_ctrl = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_lam_enable = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_ds_area = __VERIFIER_nondet_ulonglong();
    (*dest).ia32_tsx_ctrl = __VERIFIER_nondet_ulonglong();
}

void __VERIFIER_nondet_array_1D_struct_keyhole_entry_s(struct keyhole_entry_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].mapped_pa = __VERIFIER_nondet_ulonglong();
        (*dest)[i].lru_next = __VERIFIER_nondet_ushort();
        (*dest)[i].lru_prev = __VERIFIER_nondet_ushort();
        (*dest)[i].hash_list_next = __VERIFIER_nondet_ushort();
        (*dest)[i].state = __VERIFIER_nondet_uchar();
        (*dest)[i].is_writable = __VERIFIER_nondet_uchar();
        (*dest)[i].is_wb_memtype = __VERIFIER_nondet_uchar();
        (*dest)[i].ref_count = __VERIFIER_nondet_ulonglong();
    }
}

void __VERIFIER_nondet_struct_keyhole_state_s(struct keyhole_state_s *dest) {
    __VERIFIER_nondet_array_1D_struct_keyhole_entry_s(&((*dest).keyhole_array), 128);
    __VERIFIER_nondet_array_1D_unsigned_short(&((*dest).hash_table), 128);
    (*dest).lru_head = __VERIFIER_nondet_ushort();
    (*dest).lru_tail = __VERIFIER_nondet_ushort();
    (*dest).total_ref_count = __VERIFIER_nondet_ulonglong();
}

void __VERIFIER_nondet_struct_tdx_module_local_s(struct tdx_module_local_s *dest) {
    __VERIFIER_nondet_union_gprs_state_u(&((*dest).vmm_regs));
    __VERIFIER_nondet_union_gprs_state_u(&((*dest).td_regs));
    (*dest).current_td_vm_id = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_struct_lp_info_s(&((*dest).lp_info));
    (*dest).lp_is_init = __VERIFIER_nondet_uchar();
    (*dest).lp_is_busy = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_ia32_debugctl_t(&((*dest).ia32_debugctl_value));
    (*dest).non_faulting_msr_value = __VERIFIER_nondet_ulonglong();
    (*dest).reset_avx_state = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_struct_vp_ctx_s(&((*dest).vp_ctx));
    __VERIFIER_nondet_struct_stepping_s(&((*dest).single_step_def_state));
    __VERIFIER_nondet_struct_non_extended_state_s(&((*dest).vmm_non_extended_state));
    __VERIFIER_nondet_struct_keyhole_state_s(&((*dest).keyhole_state));
    (*dest).local_data_fast_ref_ptr = __VERIFIER_nondet_void_ptr();
    (*dest).global_data_fast_ref_ptr = __VERIFIER_nondet_void_ptr();
    (*dest).sysinfo_fast_ref_ptr = __VERIFIER_nondet_void_ptr();
    (*dest).host_rsp = __VERIFIER_nondet_ulonglong();
    (*dest).host_ssp = __VERIFIER_nondet_ulonglong();
    (*dest).host_gs_base = __VERIFIER_nondet_ulonglong();
}

void __VERIFIER_nondet_array_1D_fms_info_t(fms_info_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        #ifdef FV_init_fms_info_t_anon_struct_0
        (*dest)[i].stepping_id = __VERIFIER_nondet_uint();
        (*dest)[i].model = __VERIFIER_nondet_uint();
        (*dest)[i].family = __VERIFIER_nondet_uint();
        (*dest)[i].processor_type = __VERIFIER_nondet_uint();
        (*dest)[i].rsvd0 = __VERIFIER_nondet_uint();
        (*dest)[i].extende_model_id = __VERIFIER_nondet_uint();
        (*dest)[i].extended_family_id = __VERIFIER_nondet_uint();
        (*dest)[i].rsvd1 = __VERIFIER_nondet_uint();
        
        #else
        (*dest)[i].raw = __VERIFIER_nondet_uint();
        #endif
    }
}

void __VERIFIER_nondet_array_1D_struct_cmr_info_entry_s(struct cmr_info_entry_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].cmr_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].cmr_size = __VERIFIER_nondet_ulonglong();
    }
}

void __VERIFIER_nondet_struct_sysinfo_table_s(struct sysinfo_table_s *dest) {
    #ifdef FV_init_anon_union_29_mcheck_fields
    (*dest).mcheck_fields.version = __VERIFIER_nondet_ulonglong();
    (*dest).mcheck_fields.tot_num_lps = __VERIFIER_nondet_uint();
    (*dest).mcheck_fields.tot_num_sockets = __VERIFIER_nondet_uint();
    __VERIFIER_nondet_array_1D_fms_info_t(&((*dest).mcheck_fields.socket_cpuid_table), 8);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).mcheck_fields.reserved_0), 16);
    (*dest).mcheck_fields.smrr2_not_supported = __VERIFIER_nondet_uchar();
    (*dest).mcheck_fields.tdx_without_integrity = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).mcheck_fields.reserved_1), 62);
    
    #else
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).stack_canary.reserved_1), 40);
    (*dest).stack_canary.canary = __VERIFIER_nondet_ulonglong();
    #endif
    __VERIFIER_nondet_array_1D_struct_cmr_info_entry_s(&((*dest).cmr_data), 32);
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_2), 1408);
    (*dest).seam_status = __VERIFIER_nondet_ulonglong();
    (*dest).code_rgn_base = __VERIFIER_nondet_ulonglong();
    (*dest).code_rgn_size = __VERIFIER_nondet_ulonglong();
    (*dest).data_rgn_base = __VERIFIER_nondet_ulonglong();
    (*dest).data_rgn_size = __VERIFIER_nondet_ulonglong();
    (*dest).stack_rgn_base = __VERIFIER_nondet_ulonglong();
    (*dest).stack_rgn_size = __VERIFIER_nondet_ulonglong();
    (*dest).keyhole_rgn_base = __VERIFIER_nondet_ulonglong();
    (*dest).keyhole_rgn_size = __VERIFIER_nondet_ulonglong();
    (*dest).keyhole_edit_rgn_base = __VERIFIER_nondet_ulonglong();
    (*dest).keyhole_edit_rgn_size = __VERIFIER_nondet_ulonglong();
    (*dest).num_stack_pages = __VERIFIER_nondet_ulonglong();
    (*dest).num_tls_pages = __VERIFIER_nondet_ulonglong();
    (*dest).module_hv = __VERIFIER_nondet_ushort();
    (*dest).min_update_hv = __VERIFIER_nondet_ushort();
    (*dest).no_downgrade = __VERIFIER_nondet_uchar();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_3), 1);
    (*dest).num_handoff_pages = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved_4), 1936);
}


// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// Copyright (C) 2023 Intel Corporation
// SPDX-FileCopyrightText: 2025 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
typedef signed long long int int64_t;
typedef uint8_t bool_t;
typedef union __attribute__ ((aligned(16)))
{
    uint64_t qwords[2];
    uint32_t dwords[4];
    uint8_t bytes[16];
} uint128_t;
typedef union
{
    uint64_t qwords[4];
    uint32_t dwords[8];
    uint8_t bytes[32];
} uint256_t;
typedef long unsigned int size_t;
extern void* malloc(size_t);
extern void free(void*);
extern void abort(void);
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}

extern void exit(int);
void assume_exit_if_not(int cond) {
    if (!cond) {
        exit(0);
    }
}
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() {
    __assert_fail("", "", 0, "reach_error");
}
void __VERIFIER_assert(int cond) {
    if (!(cond)) {
        ERROR: {
            reach_error();
            abort();
        }
    }
    return;
}
extern unsigned char __VERIFIER_nondet_uchar();
extern unsigned short __VERIFIER_nondet_ushort();
extern unsigned long __VERIFIER_nondet_ulong();
static inline uint8_t TDXFV_NONDET_uint8t() { return __VERIFIER_nondet_uchar(); }
static inline uint64_t TDXFV_NONDET_uint64t() { return __VERIFIER_nondet_ulong(); }
static inline uint128_t TDXFV_NONDET_uint128t() {
    uint128_t tmp;
    tmp.qwords[0] = TDXFV_NONDET_uint64t();
    tmp.qwords[1] = TDXFV_NONDET_uint64t();
    return tmp;
}
static inline bool_t TDXFV_NONDET_bool() {
    if (TDXFV_NONDET_uint8t()) {
        return ((bool_t)1);
    } else {
        return ((bool_t)0);
    }
}
static inline void TDXFV_ABST_incomplete() {
}
static inline void* TDXFV_malloc(size_t size) {
    void* ptr = safe_malloc(size);
    assume_exit_if_not(ptr != (void*)0);
    return ptr;
}
typedef struct hash_method_s
{
    uint8_t hash_method_buffer[64];
    bool_t is_initialized;
} hash_method_t;
typedef union measurement_u
{
    uint64_t qwords[6];
    uint8_t bytes[(6 << 3)];
} measurement_t;
typedef struct sha384_ctx_s
{
    uint64_t last_init_seamdb_index;
    uint8_t buffer[256];
} sha384_ctx_t;

#pragma pack(push)
#pragma pack(1)
typedef enum tdcall_leaf_opcode_e
{
    TDG_VP_VMCALL_LEAF = 0,
    TDG_VP_INFO_LEAF = 1,
    TDG_MR_RTMR_EXTEND_LEAF = 2,
    TDG_VP_VEINFO_GET_LEAF = 3,
    TDG_MR_REPORT_LEAF = 4,
    TDG_VP_CPUIDVE_SET_LEAF = 5,
    TDG_MEM_PAGE_ACCEPT_LEAF = 6,
    TDG_VM_RD_LEAF = 7,
    TDG_VM_WR_LEAF = 8,
    TDG_VP_RD_LEAF = 9,
    TDG_VP_WR_LEAF = 10,
    TDG_SYS_RD_LEAF = 11,
    TDG_SYS_RDALL_LEAF = 12,
    TDG_SERVTD_RD_LEAF = 18,
    TDG_SERVTD_WR_LEAF = 20,
    TDG_MR_VERIFYREPORT_LEAF = 22,
    TDG_MEM_PAGE_ATTR_RD_LEAF = 23,
    TDG_MEM_PAGE_ATTR_WR_LEAF = 24,
    TDG_VP_ENTER_LEAF = 25,
    TDG_VP_INVEPT_LEAF = 26,
    TDG_VP_INVVPID_LEAF = 27
} tdcall_leaf_opcode_t;
typedef union tdx_leaf_and_version_u
{
    struct
    {
        uint64_t leaf : 16;
        uint64_t version : 8;
        uint64_t reserved0 : 8;
        uint64_t reserved1 : 32;
    };
    uint64_t raw;
} tdx_leaf_and_version_t;
typedef union vmcs_field_code_s {
    struct
    {
        uint32_t access_type : 1;
        uint32_t index : 9;
        uint32_t type : 2;
        uint32_t reserved0 : 1;
        uint32_t width : 2;
        uint32_t reserved1 : 17;
    };
    uint32_t raw;
} vmcs_field_code_t;
typedef union md_field_id_u
{
    struct
    {
        union
        {
            struct
            {
                uint32_t field_code : 24;
                uint32_t reserved_0 : 8;
            };
            struct
            {
                uint32_t element : 1;
                uint32_t subleaf : 7;
                uint32_t subleaf_na : 1;
                uint32_t leaf : 7;
                uint32_t leaf_bit31 : 1;
                uint32_t reserved : 15;
            } cpuid_field_code;
        };
        struct
        {
            uint32_t element_size_code : 2;
            uint32_t last_element_in_field : 4;
            uint32_t last_field_in_sequence : 9;
            uint32_t reserved_1 : 3;
            uint32_t inc_size : 1;
            uint32_t write_mask_valid : 1;
            uint32_t context_code : 3;
            uint32_t reserved_2 : 1;
            uint32_t class_code : 6;
            uint32_t reserved_3 : 1;
            uint32_t non_arch : 1;
        };
    };
    uint64_t raw;
} md_field_id_t;
typedef union
{
    struct
    {
        uint32_t leaf;
        uint32_t subleaf;
    };
    uint64_t raw;
} cpuid_config_leaf_subleaf_t;
typedef union
{
    struct
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
    };
    struct
    {
        uint64_t low;
        uint64_t high;
    };
    uint32_t values[4];
} cpuid_config_return_values_t;
typedef struct
{
    cpuid_config_leaf_subleaf_t leaf_subleaf;
    cpuid_config_return_values_t values;
} cpuid_config_t;
typedef union td_param_attributes_s {
    struct
    {
        uint64_t debug : 1;
        uint64_t reserved_tud : 7;
        uint64_t reserved_sec : 19;
        uint64_t lass : 1;
        uint64_t sept_ve_disable : 1;
        uint64_t migratable : 1;
        uint64_t pks : 1;
        uint64_t kl : 1;
        uint64_t reserved_other : 31;
        uint64_t perfmon : 1;
    };
    uint64_t raw;
} td_param_attributes_t;
typedef union config_flags_s {
    struct
    {
        uint64_t
        gpaw : 1,
        flexible_pending_ve : 1,
        no_rbp_mod : 1,
        reserved : 61;
    };
    uint64_t raw;
} config_flags_t;
typedef struct __attribute__((__packed__)) cmr_info_entry_s
{
    uint64_t cmr_base;
    uint64_t cmr_size;
} cmr_info_entry_t;
typedef union
{
    struct
    {
        uint32_t rsvd :31, debug_module :1;
    };
    uint32_t raw;
} tdsysinfo_attributes_t;
typedef uint64_t api_error_code_e;
typedef uint64_t api_error_type;
static inline api_error_type api_error_with_operand_id(api_error_type error, uint64_t operand_id)
{
    return error + operand_id;
}
typedef struct __attribute__ ((aligned(8))) __attribute__((__packed__)) tdmr_info_entry_s
{
    uint64_t tdmr_base;
    uint64_t tdmr_size;
    uint64_t pamt_1g_base;
    uint64_t pamt_1g_size;
    uint64_t pamt_2m_base;
    uint64_t pamt_2m_size;
    uint64_t pamt_4k_base;
    uint64_t pamt_4k_size;
    struct
    {
        uint64_t offset;
        uint64_t size;
    } rsvd_areas[16U];
} tdmr_info_entry_t;
typedef union tdx_features_enum0_u
{
    struct
    {
        uint64_t td_migration : 1;
        uint64_t td_preserving : 1;
        uint64_t service_td : 1;
        uint64_t tdg_vp_rdwr : 1;
        uint64_t relaxed_mem_mng_concurrency : 1;
        uint64_t cpuid_virt_guest_ctrl : 1;
        uint64_t reserved_0 : 1;
        uint64_t td_partitioning : 1;
        uint64_t local_attestation : 1;
        uint64_t td_entry_enhancements : 1;
        uint64_t host_priority_locks : 1;
        uint64_t config_ia32_arch_cap : 1;
        uint64_t reserved_1 : 4;
        uint64_t pending_ept_violation_v2 : 1;
        uint64_t fms_config : 1;
        uint64_t no_rbp_mod : 1;
        uint64_t l2_tlb_invd_opt : 1;
        uint64_t topology_enum : 1;
        uint64_t reduced_ve : 1;
        uint64_t reserved_2 : 41;
    };
    uint64_t raw;
} tdx_features_enum0_t;
typedef union gprs_state_u
{
    struct
    {
        uint64_t rax;
        uint64_t rcx;
        uint64_t rdx;
        uint64_t rbx;
        uint64_t rsp;
        uint64_t rbp;
        uint64_t rsi;
        uint64_t rdi;
        uint64_t r8;
        uint64_t r9;
        uint64_t r10;
        uint64_t r11;
        uint64_t r12;
        uint64_t r13;
        uint64_t r14;
        uint64_t r15;
    };
    uint64_t gprs[16];
} gprs_state_t;
#pragma pack(pop)
void tdx_report_error_and_halt(uint32_t source_id, uint32_t code);
void tdx_arch_fatal_error(void);

typedef union {
    struct
    {
        uint64_t
        pe : 1,
        mp : 1,
        em : 1,
        ts : 1,
        et : 1,
        ne : 1,
        reserved_0 : 10,
        wp : 1,
        reserved_1 : 1,
        am : 1,
        reserved_2 : 10,
        nw : 1,
        cd : 1,
        pg : 1,
        reserved_3 : 32;
    };
    uint64_t raw;
} ia32_cr0_t;
typedef union {
    struct
    {
        uint64_t pcid : 12;
        uint64_t pdb : 40;
        uint64_t reserved_0 : 9;
        uint64_t lam_u57 : 1;
        uint64_t lam_u48 : 1;
        uint64_t reserved_1 : 1;
    };
    uint64_t raw;
} ia32_cr3_t;
typedef union {
    struct
    {
        uint64_t
            vme : 1,
            pvi : 1,
            tsd : 1,
            de : 1,
            pse : 1,
            pae : 1,
            mce : 1,
            pge : 1,
            pce : 1,
            osfxsr : 1,
            osxmmexcpt : 1,
            umip : 1,
            la57 : 1,
            vmxe : 1,
            smxe : 1,
            reserved_0 : 1,
            fsgsbase : 1,
            pcide : 1,
            osxsave : 1,
            keylocker : 1,
            smep : 1,
            smap : 1,
            pke : 1,
            cet : 1,
            pks : 1,
            uintr : 1,
            reserved_1 : 1,
            lass : 1,
            reserved_2 : 36;
    };
    uint64_t raw;
} ia32_cr4_t;
typedef union {
    struct
    {
        uint64_t
            x87_fpu_mmx : 1,
            sse : 1,
            avx : 1,
            mpx_bndreg : 1,
            mpx_bndcsr : 1,
            avx3_kmask : 1,
            avx3_zmm_hi : 1,
            avx3_zmm : 1,
            pt : 1,
            pk : 1,
            enqcmd : 1,
            cet_u : 1,
            cet_s : 1,
            hdc : 1,
            uli : 1,
            lbr : 1,
            hwp : 1,
            amx_xtilecfg : 1,
            amx_xtiledata : 1,
            reserved_1 : 45;
    };
    uint64_t raw;
} ia32_xcr0_t;
typedef union ia32e_eptp_u {
    struct {
        uint64_t
            ept_ps_mt : 3,
            ept_pwl : 3,
            enable_ad_bits : 1,
            enable_sss_control : 1,
            reserved_0 : 4,
            base_pa : 40,
            reserved_1 : 12;
    } fields;
    uint64_t raw;
} ia32e_eptp_t;
typedef union pa_u {
    struct {
        union {
            uint64_t full_pa : 52ULL;
            struct {
              uint64_t
                page_offset : 12,
                pt_index : 9,
                pd_index : 9,
                pdpt_index : 9,
                pml4_index : 9,
                pml5_index : 9;
            } fields_4k;
            struct {
              uint64_t
                page_offset : 21,
                pd_index : 9,
                pdpt_index : 9,
                pml4_index : 9,
                pml5_index : 9;
            } fields_2m;
            struct {
                uint64_t
                  page_offset : 12,
                  idx : 18;
            } pamt_4k;
            struct {
                uint64_t
                  page_offset : 21,
                  idx : 9;
            } pamt_2m;
            struct {
                uint64_t
                  low_12_bits : 12,
                  page_4k_num : (52ULL - 12);
            };
            struct {
                uint64_t
                  low_21_bits : 21,
                  page_2m_num : (52ULL - 21);
            };
            struct {
                uint64_t
                  low_30_bits : 30,
                  page_1g_num : (52ULL - 30);
            };
        };
    };
    uint64_t raw;
    void* raw_void;
} pa_t;
typedef struct
{
    uint16_t fcw;
    uint16_t fsw;
    uint8_t ftw;
    uint8_t reserved_0;
    uint16_t fop;
    uint64_t fip;
    uint64_t fdp;
    uint32_t mxcsr;
    uint32_t mxcsr_mask;
    uint128_t st_mm[8];
    uint128_t xmm[16];
    uint8_t reserved_1[96];
} xsave_legacy_region_t;
typedef struct
{
    uint64_t xstate_bv;
    uint64_t xcomp_bv;
    uint8_t reserved[48];
} xsave_header_t;
typedef struct
{
    xsave_legacy_region_t legacy_region;
    xsave_header_t xsave_header;
    uint8_t extended_region[11712];
} xsave_area_t;
typedef union loadiwkey_ctl_u
{
    struct
    {
        uint32_t dont_backup_wk : 1;
        uint32_t non_random_wk : 1;
        uint32_t reserved : 30;
    };
    uint32_t raw;
} loadiwkey_ctl_t;
typedef union
{
    struct
    {
        uint32_t stepping_id : 4;
        uint32_t model : 4;
        uint32_t family : 4;
        uint32_t processor_type : 2;
        uint32_t rsvd0 : 2;
        uint32_t extende_model_id : 4;
        uint32_t extended_family_id : 8;
        uint32_t rsvd1 : 4;
    };
    uint32_t raw;
} fms_info_t;
typedef union cpuid_1a_eax_u
{
    struct
    {
        uint32_t native_model_id : 24;
        uint32_t core_type : 8;
    };
    uint32_t raw;
} cpuid_1a_eax_t;

extern bool_t fv_exception_tracker_gp;
static inline void ia32_ud2( void )
{
    exit(0);
}
static inline void ia32_pause( void )
{
    TDXFV_ABST_incomplete();
}
static inline bool_t ia32_rdseed(uint64_t* rand)
{
    *rand = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_bool();
}
static inline uint64_t ia32_rdtsc( void )
{
    return TDXFV_NONDET_uint64t();
}
static inline uint8_t _lock_cmpxchg_8bit(uint8_t cmp_val, uint8_t set_val, uint8_t *sem)
{
    if (cmp_val == *sem) {
        *sem = set_val;
        return set_val;
    } else {
        set_val = *sem;
        return set_val;
    }
}
static inline uint16_t _lock_cmpxchg_16b(uint16_t cmp_val, uint16_t set_val, uint16_t *sem)
{
    if (cmp_val == *sem) {
        *sem = set_val;
        return set_val;
    } else {
        set_val = *sem;
        return set_val;
    }
}
static inline uint32_t _lock_cmpxchg_32b(uint32_t cmp_val, uint32_t set_val, uint32_t *sem)
{
    if (cmp_val == *sem) {
        *sem = set_val;
        return set_val;
    } else {
        set_val = *sem;
        return set_val;
    }
}
static inline uint64_t _lock_cmpxchg_64b(uint64_t cmp_val, uint64_t set_val, uint64_t *sem)
{
    if (cmp_val == *sem) {
        *sem = set_val;
        return set_val;
    } else {
        set_val = *sem;
        return set_val;
    }
}
static inline void lfence(void)
{
}
typedef union ignore_tdinfo_bitmap_u
{
    struct
    {
        uint16_t attributes : 1;
        uint16_t xfam : 1;
        uint16_t mrtd : 1;
        uint16_t mrconfig : 1;
        uint16_t mrowner : 1;
        uint16_t mrownerconfig : 1;
        uint16_t rtmr : 4;
        uint16_t servtd_hash : 1;
        uint16_t reserved : 5;
    };
    uint16_t raw;
} ignore_tdinfo_bitmap_t;
typedef union servtd_attributes_u
{
    struct
    {
        struct
        {
            uint32_t instance_binding : 1;
            uint32_t solicited_binding : 1;
            uint32_t platform_binding : 1;
            uint32_t migratable_binding : 1;
            uint32_t reserved0 : 28;
        };
        ignore_tdinfo_bitmap_t ignore_tdinfo;
        uint16_t reserved1;
    };
    uint64_t raw;
} servtd_attributes_t;

typedef uint8_t mutex_lock_t;
typedef union __attribute__ ((aligned(2)))
{
    struct
    {
        uint16_t exclusive :1;
        uint16_t counter :15;
    };
    uint16_t raw;
} sharex_lock_t;
typedef union __attribute__ ((aligned(2)))
{
    struct
    {
        uint16_t exclusive :1;
        uint16_t host_prio :1;
        uint16_t counter :14;
    };
    uint16_t raw;
} sharex_hp_lock_t;
typedef uint256_t key256_t;
typedef union {
    struct
    {
        uint64_t
            lbr : 1,
            btf : 1,
            bus_lock_detect : 1,
            reserved_0 : 3,
            tr : 1,
            bts : 1,
            btint : 1,
            bts_off_os : 1,
            bts_off_usr : 1,
            frz_lbr_pmi : 1,
            frz_perfmon_pmi : 1,
            en_uncore_pmi : 1,
            frz_while_smm : 1,
            rtm_debug : 1,
            reserved_1 : 48;
    };
    uint64_t raw;
} ia32_debugctl_t;
typedef union
{
    struct
    {
        uint64_t lock : 1 ,
                 tme_enable : 1,
                 key_select : 1,
                 save_key_for_standby : 1,
                 tme_policy : 4,
                 sgx_tem_enable : 1,
                 rsvd : 22,
                 tme_enc_bypass_enable : 1,
                 mk_tme_keyid_bits : 4,
                 tdx_reserved_keyid_bits : 4,
                 rsvd1 : 8,
                 algs_aes_xts_128 : 1,
                 algs_aes_xts_128_with_integrity : 1,
                 algs_aes_xts_256 : 1,
                 algs_aes_xts_256_with_integrity : 1,
                 algs_rsvd : 12;
    };
    uint64_t raw;
} ia32_tme_activate_t;
typedef union
{
    struct
    {
        uint64_t aes_xts_128 : 1;
        uint64_t aes_xts_128_with_integrity : 1;
        uint64_t aes_xts_256 : 1;
        uint64_t aes_xts_256_with_integrity : 1;
        uint64_t rsvd : 27;
        uint64_t tme_enc_bypass_supported : 1;
        uint64_t mk_tme_max_keyid_bits : 4;
        uint64_t mk_tme_max_keys : 15;
        uint64_t nm_encryption_disable : 1;
        uint64_t rsvd2 : 11;
        uint64_t implicit_bit_mask : 1;
    };
    uint64_t raw;
} ia32_tme_capability_t;
typedef union
{
    struct
    {
        uint32_t num_mktme_kids;
        uint32_t num_tdx_priv_kids;
    };
    uint64_t raw;
} ia32_tme_keyid_partitioning_t;
typedef union
{
    struct
    {
        uint64_t lbr_format : 6,
                 pebs_trap_indicator : 1,
                 pebs_save_arch_regs : 1,
                 pebs_records_encoding : 4,
                 freeze_while_smm_supported : 1,
                 full_write : 1,
                 rsvd1 : 1,
                 perf_metrics_available : 1,
                 pebs_output_pt_avail : 1,
                 rsvd2 : 47;
    };
    uint64_t raw;
} ia32_perf_capabilities_t;
typedef union
{
    struct
    {
        uint64_t vmcs_revision_id : 31;
        uint64_t rsvd0 : 1;
        uint64_t vmcs_region_size : 13;
        uint64_t rsvd1 : 3;
        uint64_t vmxon_pa_width : 1;
        uint64_t dual_monitor : 1;
        uint64_t vmcs_mt : 4;
        uint64_t vmexit_info_on_ios : 1;
        uint64_t ia32_vmx_true_available : 1;
        uint64_t voe_without_err_code : 1;
        uint64_t rsvd2 : 7;
    };
    uint64_t raw;
} ia32_vmx_basic_t;
typedef union ia32_vmx_misc_u
{
    struct
    {
        uint64_t vmx_preempt_timer_tsc_factor : 5;
        uint64_t unrestricted_guest : 1;
        uint64_t activity_hlt : 1;
        uint64_t activity_shutdown : 1;
        uint64_t activity_wait_for_sipi : 1;
        uint64_t reserved : 5;
        uint64_t pt_in_vmx : 1;
        uint64_t ia32_smbase : 1;
        uint64_t max_cr3_targets : 9;
        uint64_t max_msr_list_size : 3;
        uint64_t ia32_smm_monitor_ctl : 1;
        uint64_t vmwrite_any_vmcs_field : 1;
        uint64_t voe_with_0_instr_length : 1;
        uint64_t reserved_1 : 1;
        uint64_t mseg_rev_id : 32;
    };
    uint64_t raw;
} ia32_vmx_misc_t;
typedef union ia32_vmx_ept_vpid_cap_u
{
    struct
    {
        uint64_t exe_only_supported : 1;
        uint64_t reserved_1 : 5;
        uint64_t pml4_supported : 1;
        uint64_t pml5_supported : 1;
        uint64_t uc_supported : 1;
        uint64_t reserved_2 : 5;
        uint64_t wb_supported : 1;
        uint64_t reserved_3 : 1;
        uint64_t ps_2m_supported : 1;
        uint64_t ps_1g_supported : 1;
        uint64_t reserved_4 : 2;
        uint64_t invept_supported : 1;
        uint64_t ad_supported : 1;
        uint64_t advanced_vmexit_info_supported : 1;
        uint64_t sss_support : 1;
        uint64_t reserved_5 : 1;
        uint64_t single_context_invept_supported : 1;
        uint64_t all_context_invept_supported : 1;
        uint64_t reserved_6 : 5;
        uint64_t invvpid_supported : 1;
        uint64_t reserved_7 : 7;
        uint64_t individual_addr_invvpid_supported : 1;
        uint64_t single_context_invvpid_supported : 1;
        uint64_t all_context_invvpid_supported : 1;
        uint64_t single_contx_retaining_globals_invvpid_supp : 1;
        uint64_t reserved_8 : 4;
        uint64_t hlat_prefix_size : 6;
        uint64_t reserved_9 : 10;
    };
    uint64_t raw;
} ia32_vmx_ept_vpid_cap_t;
typedef union
{
    struct
    {
        uint32_t not_allowed0;
        uint32_t allowed1;
    };
    uint64_t raw;
} ia32_vmx_allowed_bits_t;
typedef union ia32_core_capabilities_u
{
    struct
    {
        uint64_t stlb_qos_supported : 1;
        uint64_t rar_supported : 1;
        uint64_t fusa_supported : 1;
        uint64_t rsm_in_cpl0_only : 1;
        uint64_t uc_lock_disable_supported : 1;
        uint64_t split_lock_disable_supported : 1;
        uint64_t snoop_filter_qos_supported : 1;
        uint64_t uc_store_throttlin_supported : 1;
        uint64_t lam_supported : 1;
        uint64_t reserved_2 : 55;
    };
    uint64_t raw;
} ia32_core_capabilities_t;
typedef union ia32_spec_ctrl_u
{
    struct
    {
        uint64_t ibrs : 1;
        uint64_t stibp : 1;
        uint64_t ssbd : 1;
        uint64_t ipred_dis_u : 1;
        uint64_t ipred_dis_s : 1;
        uint64_t rrsba_dis_u : 1;
        uint64_t rrsba_dis_s : 1;
        uint64_t psfd : 1;
        uint64_t ddpd_u : 1;
        uint64_t reserved_0 : 1;
        uint64_t bhi_dis_s : 1;
        uint64_t reserved_1 : 53;
    };
    uint64_t raw;
} ia32_spec_ctrl_t;
typedef union ia32_arch_capabilities_u
{
    struct
    {
        uint64_t rdcl_no : 1;
        uint64_t irbs_all : 1;
        uint64_t rsba : 1;
        uint64_t skip_l1dfl_vmentry : 1;
        uint64_t ssb_no : 1;
        uint64_t mds_no : 1;
        uint64_t if_pschange_mc_no : 1;
        uint64_t tsx_ctrl : 1;
        uint64_t taa_no : 1;
        uint64_t mcu_ctls : 1;
        uint64_t misc_package_ctls : 1;
        uint64_t energy_filtering_ctl : 1;
        uint64_t doitm : 1;
        uint64_t sbdr_ssdp_no : 1;
        uint64_t fbsdp_no : 1;
        uint64_t psdp_no : 1;
        uint64_t reserved_1 : 1;
        uint64_t fb_clear : 1;
        uint64_t fb_clear_ctrl : 1;
        uint64_t rrsba : 1;
        uint64_t bhi_no : 1;
        uint64_t xapic_disable_status : 1;
        uint64_t reserved_2 : 1;
        uint64_t overclocking_status : 1;
        uint64_t pbrsb_no : 1;
        uint64_t reserved_3 : 39;
    };
    uint64_t raw;
} ia32_arch_capabilities_t;
typedef union ia32_misc_package_ctls_u
{
    struct
    {
        uint64_t energy_filtering_enable : 1;
        uint64_t reserved : 63;
    };
    uint64_t raw;
} ia32_misc_package_ctls_t;
typedef union ia32_xapic_disable_status_u
{
    struct
    {
        uint64_t legacy_xapic_disabled : 1;
        uint64_t reserved : 63;
    };
    uint64_t raw;
} ia32_xapic_disable_status_t;
typedef enum
{
    TDVPS_VE_INFO_PAGE_INDEX = 0,
    TDVPS_VMCS_PAGE_INDEX = 1,
    TDVPS_VAPIC_PAGE_INDEX = 2,
    L2_VMCS_BASE_INDEX = 6,
    L2_MSR_BITMAPS_BASE_INDEX = 7,
    L2_MSR_REQUEST_BASE_INDEX = 8,
    TDVPS_PAGES_PER_L2_VM = 3,
    L2_VMCS_1_INDEX = 6,
    L2_MSR_BITMAPS_1_INDEX = 7,
    L2_MSR_REQUEST_1_INDEX = 8,
    L2_VMCS_2_INDEX = 9,
    L2_MSR_BITMAPS_2_INDEX = 10,
    L2_MSR_REQUEST_2_INDEX = 11,
    L2_VMCS_3_INDEX = 12,
    L2_MSR_BITMAPS_3_INDEX = 13,
    L2_MSR_REQUEST_3_INDEX = 14,
    MIN_TDVPS_PAGES = 6,
    MAX_TDVPS_PAGES = 15
} tdvps_pages_e;
typedef enum
{
    HOST_ROUTED_NONE = 0,
    HOST_ROUTED_ASYNC = 1,
    HOST_ROUTED_TDVMCALL = 2
} l2_exit_host_routing_e;
typedef union l2_vcpu_ctrl_u
{
    struct
    {
        uint64_t enable_shared_eptp : 1,
                 enable_tdvmcall : 1,
                 enable_extended_ve : 1,
                 reserved : 61;
    };
    uint64_t raw;
} l2_vcpu_ctrl_t;
typedef union l2_vm_debug_ctls_u
{
    struct
    {
        uint64_t td_exit_on_l1_to_l2 : 1,
                 td_exit_on_l2_to_l1 : 1,
                 td_exit_on_l2_vm_exit : 1,
                 reserved : 61;
    };
    uint64_t raw;
} l2_vm_debug_ctls_t;
static inline uint32_t get_tdvps_vmcs_page_index(uint16_t vm_id)
{
                                     ;
    uint32_t index = (vm_id == 0) ? TDVPS_VMCS_PAGE_INDEX :
                     L2_VMCS_BASE_INDEX + ((vm_id - 1) * TDVPS_PAGES_PER_L2_VM);
                                             ;
    return index;
}
#pragma pack(push, 1)
typedef struct tdvps_ve_info_s
{
    uint32_t exit_reason;
    uint32_t valid;
    uint64_t exit_qualification;
    uint64_t gla;
    uint64_t gpa;
    uint16_t eptp_index;
    uint8_t reserved0[2];
    union
    {
        struct
        {
            uint32_t instruction_length;
            uint32_t instruction_info;
        };
        uint64_t inst_len_and_info;
    };
    uint8_t reserved1[84];
} tdvps_ve_info_t;
typedef union vcpu_state_s
{
    struct
    {
        uint64_t vmxip : 1;
        uint64_t reserved : 63;
    };
    uint64_t raw;
}vcpu_state_t;
typedef struct tdvps_management_s
{
    uint8_t state;
    uint8_t last_td_exit;
    uint32_t vcpu_index;
    uint8_t reserved_0;
    uint8_t num_tdvps_pages;
    uint64_t tdvps_pa[MAX_TDVPS_PAGES];
    uint8_t reserved_1[72];
    uint32_t assoc_lpid;
    uint8_t reserved_2[4];
    uint64_t vcpu_epoch;
    bool_t cpuid_supervisor_ve;
    bool_t cpuid_user_ve;
    uint8_t reserved_3[2];
    uint32_t export_count;
    uint64_t last_exit_tsc;
    bool_t pend_nmi;
    bool_t nmi_unblocking_due_to_iret;
    uint8_t reserved_4[6];
    uint64_t xfam;
    uint8_t last_epf_gpa_list_idx;
    uint8_t possibly_epf_stepping;
    uint8_t reserved_5[6];
    uint64_t hp_lock_busy_start;
    bool_t hp_lock_busy;
    uint8_t reserved_6[5];
    uint64_t last_seamdb_index;
    uint16_t curr_vm;
    uint8_t l2_exit_host_routed;
    uint8_t reserved_7[1];
    bool_t vm_launched[4];
    bool_t lp_dependent_hpa_updated[4];
    bool_t module_dependent_hpa_updated[4];
    uint8_t reserved_8[2];
    l2_vcpu_ctrl_t l2_ctls[4];
    l2_vm_debug_ctls_t l2_debug_ctls[4];
    uint64_t tsc_deadline[4];
    uint64_t shadow_tsc_deadline[4];
    uint64_t base_l2_cr0_guest_host_mask;
    uint64_t base_l2_cr0_read_shadow;
    uint64_t base_l2_cr4_guest_host_mask;
    uint64_t base_l2_cr4_read_shadow;
    uint64_t shadow_cr0_guest_host_mask[4];
    uint64_t shadow_cr0_read_shadow[4];
    uint64_t shadow_cr4_guest_host_mask[4];
    uint64_t shadow_cr4_read_shadow[4];
    uint32_t shadow_notify_window[4];
    uint64_t shadow_pid_hpa;
    uint8_t reserved_9[24];
    uint32_t shadow_pinbased_exec_ctls;
    uint8_t reserved_10[12];
    uint32_t shadow_ple_gap[4];
    uint32_t shadow_ple_window[4];
    uint16_t shadow_posted_int_notification_vector;
    uint8_t reserved_11[6];
    uint32_t shadow_procbased_exec_ctls2[4];
    uint64_t shadow_shared_eptp[4];
    uint64_t l2_enter_guest_state_gpa[4];
    uint64_t l2_enter_guest_state_hpa[4];
    uint64_t ve_info_gpa[4];
    uint64_t ve_info_hpa[4];
    uint64_t l2_vapic_gpa[4];
    uint64_t l2_vapic_hpa[4];
    uint8_t reserved_12[608];
} tdvps_management_t;
typedef union cpuid_control_s
{
    struct
    {
        uint8_t supervisor_ve : 1;
        uint8_t user_ve : 1;
        uint8_t reserved : 6;
    };
    uint8_t raw;
} cpuid_control_t;
typedef struct tdvps_guest_state_s
{
    gprs_state_t gpr_state;
    uint64_t dr0;
    uint64_t dr1;
    uint64_t dr2;
    uint64_t dr3;
    uint64_t dr6;
    uint64_t xcr0;
    uint64_t cr2;
    uint8_t reserved[8];
    uint128_t iwk_enckey[2];
    uint128_t iwk_intkey;
    loadiwkey_ctl_t iwk_flags;
    uint8_t reserved_2[4];
    vcpu_state_t vcpu_state_details;
} tdvps_guest_state_t;
typedef struct tdvps_guest_msr_state_s
{
    uint64_t ia32_spec_ctrl;
    uint64_t ia32_umwait_control;
    uint64_t ia32_tsx_ctrl;
    uint64_t ia32_perfevtsel[8];
    uint64_t ia32_offcore_rsp[2];
    uint64_t ia32_xfd;
    uint64_t ia32_xfd_err;
    uint64_t ia32_fixed_ctr[7ULL];
    uint64_t ia32_perf_metrics;
    uint64_t ia32_fixed_ctr_ctrl;
    uint64_t ia32_perf_global_status;
    uint64_t ia32_pebs_enable;
    uint64_t ia32_pebs_data_cfg;
    uint64_t ia32_pebs_ld_lat;
    uint64_t ia32_pebs_frontend;
    uint64_t ia32_a_pmc[8];
    uint64_t ia32_ds_area;
    uint64_t ia32_fixed_ctr_reload_cfg[4];
    uint64_t ia32_fixed_ctr_ext[4];
    uint64_t ia32_a_pmc_reload_cfg[8];
    uint64_t ia32_a_pmc_ext[8];
    uint64_t ia32_xss;
    uint64_t ia32_lbr_depth;
    uint64_t ia32_uarch_misc_ctl;
    uint64_t ia32_star;
    uint64_t ia32_lstar;
    uint64_t ia32_fmask;
    uint64_t ia32_kernel_gs_base;
    uint64_t ia32_tsc_aux;
} tdvps_guest_msr_state_t;
typedef struct tdvps_td_vmcs_s
{
    uint8_t td_vmcs[((4 * 0x400ULL)/2)];
} tdvps_td_vmcs_t;
typedef union tdvps_vapic_s
{
    struct
    {
        uint8_t apic[0x400ULL];
        uint8_t reserved[(4 * 0x400ULL) - 0x400ULL];
    };
    uint8_t raw[(4 * 0x400ULL)];
} tdvps_vapic_t;
typedef struct tdvps_guest_extension_state_s
{
    union
    {
        xsave_area_t xbuf;
        uint8_t max_size[(3*(4 * 0x400ULL))];
    };
} tdvps_guest_extension_state_t;
typedef struct l2_vm_ctrl_s
{
    uint8_t l2_vmcs[((4 * 0x400ULL)/2)];
    uint8_t reserved[((4 * 0x400ULL)/2)];
    uint64_t l2_msr_bitmaps[512];
    uint64_t l2_shadow_msr_bitmaps[512];
} l2_vm_ctrl_t;
typedef struct __attribute__ ((aligned((4 * 0x400ULL)))) tdvps_s
{
    tdvps_ve_info_t ve_info;
    uint8_t reserved_0[128];
    tdvps_management_t management;
    uint64_t last_epf_gpa_list[32];
    uint8_t reserved_1[256];
    cpuid_control_t cpuid_control[128];
    tdvps_guest_state_t guest_state;
    tdvps_guest_msr_state_t guest_msr_state;
    uint8_t reserved_2[848];
    tdvps_td_vmcs_t td_vmcs;
    uint8_t reserved_3[(4 * 0x400ULL) - ((4 * 0x400ULL)/2)];
    tdvps_vapic_t vapic;
    tdvps_guest_extension_state_t guest_extension_state;
    l2_vm_ctrl_t l2_vm_ctrl[(4 - 1)];
} tdvps_t;
#pragma pack(pop)
typedef union migsc_link_u
{
    struct
    {
        uint64_t lock : 1;
        uint64_t initialized : 1;
        uint64_t reserved_0 : 10;
        uint64_t migsc_hpa : 40;
        uint64_t reserved_1 : 12;
    };
    uint64_t raw;
} migsc_link_t;
typedef union ia32_mtrrcap_u
{
    struct
    {
        uint64_t vcnt : 8,
                 fix : 1,
                 rsvd1 : 1,
                 wc : 1,
                 smrr : 1,
                 prmrr : 1,
                 smrr2 : 1,
                 smrr_lock : 1,
                 seamrr : 1,
                 rsvd2 : 48;
    };
    uint64_t raw;
} ia32_mtrrcap_t;
typedef union
{
    struct
    {
        uint64_t rsvd0 :10,
                 lock :1,
                 vld :1,
                 mask :20,
                 rsvd1 :32;
    };
    uint64_t raw;
} smrr_mask_t;
typedef union
{
    struct
    {
        uint64_t memtype :8, rsvd0 :4, base :20, rsvd1 :32;
    };
    uint64_t raw;
} smrr_base_t;
typedef struct
{
    smrr_base_t smrr_base;
    smrr_mask_t smrr_mask;
} smrr_range_t;
typedef union seam_ops_capabilities_s
{
    struct
    {
        uint64_t capabilities : 1;
        uint64_t seamreport : 1;
        uint64_t seamdb_clear : 1;
        uint64_t seamdb_insert : 1;
        uint64_t seamdb_getref : 1;
        uint64_t seamdb_report : 1;
        uint64_t reserved : 58;
    };
    uint64_t raw;
} seam_ops_capabilities_t;
typedef union
{
    struct
    {
        uint32_t external_int_exiting : 1;
        uint32_t reserved_0 : 2;
        uint32_t nmi_exiting : 1;
        uint32_t resrved_1 : 1;
        uint32_t virtual_nmis : 1;
        uint32_t activate_vmx_preemption_timer : 1;
        uint32_t process_posted_interrupts : 1;
        uint32_t reserved_2 : 24;
    };
    uint64_t raw;
} vmx_pinbased_ctls_t;
typedef union
{
    struct
    {
        uint32_t reserved_0 : 1;
        uint32_t reserved_1 : 1;
        uint32_t interrupt_window_exiting : 1;
        uint32_t use_tsc_offsetting : 1;
        uint32_t reserved_2 : 1;
        uint32_t reserved_3 : 1;
        uint32_t reserved_4 : 1;
        uint32_t hlt_exiting : 1;
        uint32_t reserved_5 : 1;
        uint32_t invlpg_exiting : 1;
        uint32_t mwait_exiting : 1;
        uint32_t rdpmc_exiting : 1;
        uint32_t rdtsc_exiting : 1;
        uint32_t reserved_6 : 1;
        uint32_t reserved_7 : 1;
        uint32_t cr3_load_exiting : 1;
        uint32_t cr3_store_exiting : 1;
        uint32_t activate_tertiary_controls : 1;
        uint32_t reserved_8 : 1;
        uint32_t cr8_load_exiting : 1;
        uint32_t cr8_store_exiting : 1;
        uint32_t use_tpr_shadow : 1;
        uint32_t nmi_window_exiting : 1;
        uint32_t mov_dr_exiting : 1;
        uint32_t uncondditional_io_exiting : 1;
        uint32_t use_io_bitmaps : 1;
        uint32_t reserved_9 : 1;
        uint32_t monitor_trap_flag : 1;
        uint32_t use_msr_bitmaps : 1;
        uint32_t monitor_exiting : 1;
        uint32_t pause_exiting : 1;
        uint32_t activate_secondary_controls : 1;
    };
    uint64_t raw;
} vmx_procbased_ctls_t;
typedef union
{
    struct
    {
        uint32_t virt_apic : 1;
        uint32_t en_ept : 1;
        uint32_t descriptor_table_exit : 1;
        uint32_t en_rdtscp : 1;
        uint32_t virt_2apic_mode : 1;
        uint32_t en_vpid : 1;
        uint32_t wbinvd_exiting : 1;
        uint32_t unrestricted_guest : 1;
        uint32_t apic_reg_virtualization : 1;
        uint32_t virtual_interrupt : 1;
        uint32_t pause_loop : 1;
        uint32_t rdrand : 1;
        uint32_t en_invpcid : 1;
        uint32_t en_vm_func : 1;
        uint32_t vmcs_shadowing : 1;
        uint32_t en_encls : 1;
        uint32_t rdseed : 1;
        uint32_t en_pml : 1;
        uint32_t ept_vaiolation_ve : 1;
        uint32_t conceal_vmx : 1;
        uint32_t en_xsaves_xstors : 1;
        uint32_t pasid_translation : 1;
        uint32_t execute_control_ept : 1;
        uint32_t en_spp : 1;
        uint32_t pt2gpa : 1;
        uint32_t tsc_scaling : 1;
        uint32_t en_guest_wait_pause : 1;
        uint32_t en_pconfig : 1;
        uint32_t en_enclv_exiting : 1;
        uint32_t en_epc_virt : 1;
        uint32_t buslock_detect : 1;
        uint32_t notification_exiting : 1;
    };
    uint64_t raw;
} vmx_procbased_ctls2_t;
typedef union
{
    struct
    {
        uint64_t loadiwkey_exiting : 1;
        uint64_t enable_hlat : 1;
        uint64_t ept_paging_write_control : 1;
        uint64_t guest_paging_verification : 1;
        uint64_t ipi_virtualization : 1;
        uint64_t gpaw : 1;
        uint64_t reserved_0 : 1;
        uint64_t virt_ia32_spec_ctrl : 1;
        uint64_t reserved_1 : 56;
    };
    uint64_t raw;
} vmx_procbased_ctls3_t;
typedef union guest_interrupt_status_u
{
    struct
    {
        uint64_t rvi : 8;
        uint64_t svi : 8;
        uint64_t reserved : 48;
    };
    uint64_t raw;
}guest_interrupt_status_t;
typedef enum
{
    SYSINIT_PENDING = 0,
    SYSINIT_DONE = 1,
    SYSCONFIG_DONE = 2,
    SYS_READY = 3,
    SYS_SHUTDOWN = 4
} sysinit_state_e;
typedef struct __attribute__ ((aligned(0x1000))) __attribute__((__packed__)) xsave_area_no_extended_s
{
    xsave_legacy_region_t legacy_region;
    xsave_header_t xsave_header;
} xsave_area_no_extended_t;
typedef struct tdx_global_state_s
{
    uint8_t sys_state;
} tdx_global_state_t;
typedef struct __attribute__ ((aligned(4))) __attribute__((__packed__)) kot_entry_s
{
    uint32_t wbinvd_bitmap;
    uint8_t state;
} kot_entry_t;
typedef struct kot_s
{
    sharex_lock_t lock;
    kot_entry_t entries[2048];
} kot_t;
typedef struct __attribute__ ((aligned(8))) __attribute__((__packed__)) wbt_entry_s
{
    uint64_t intr_point;
    uint8_t hkid_flushed[2048];
    mutex_lock_t entry_lock;
} wbt_entry_t;
typedef struct __attribute__ ((aligned(8))) __attribute__((__packed__)) tdmr_entry_s
{
    uint64_t base;
    uint64_t size;
    uint64_t last_initialized;
    uint64_t pamt_1g_base;
    uint64_t pamt_2m_base;
    uint64_t pamt_4k_base;
    uint32_t num_of_pamt_blocks;
    uint32_t num_of_rsvd_areas;
    struct
    {
        uint64_t offset;
        uint64_t size;
    } rsvd_areas[16U];
    mutex_lock_t lock;
} tdmr_entry_t;
typedef struct
{
    uint64_t ia32_tsc_adjust;
    ia32_vmx_basic_t ia32_vmx_basic;
    ia32_vmx_misc_t ia32_vmx_misc;
    ia32_vmx_allowed_bits_t ia32_vmx_true_pinbased_ctls;
    ia32_vmx_allowed_bits_t ia32_vmx_true_procbased_ctls;
    ia32_vmx_allowed_bits_t ia32_vmx_procbased_ctls2;
    vmx_procbased_ctls3_t ia32_vmx_procbased_ctls3;
    ia32_vmx_allowed_bits_t ia32_vmx_true_exit_ctls;
    ia32_vmx_allowed_bits_t ia32_vmx_true_entry_ctls;
    uint64_t ia32_vmx_ept_vpid_cap;
    ia32_cr0_t ia32_vmx_cr0_fixed0;
    ia32_cr0_t ia32_vmx_cr0_fixed1;
    ia32_cr4_t ia32_vmx_cr4_fixed0;
    ia32_cr4_t ia32_vmx_cr4_fixed1;
    ia32_mtrrcap_t ia32_mtrrcap;
    ia32_arch_capabilities_t ia32_arch_capabilities;
    ia32_xapic_disable_status_t ia32_xapic_disable_status;
    ia32_core_capabilities_t ia32_core_capabilities;
    ia32_perf_capabilities_t ia32_perf_capabilities;
    ia32_tme_capability_t ia32_tme_capability;
    ia32_tme_activate_t ia32_tme_activate;
    ia32_tme_keyid_partitioning_t ia32_tme_keyid_partitioning;
    ia32_misc_package_ctls_t ia32_misc_package_ctls;
    smrr_range_t smrr[2];
} platform_common_config_t;
typedef struct
{
    uint32_t pinbased_ctls;
    uint32_t procbased_ctls;
    uint32_t procbased_ctls2;
    uint64_t procbased_ctls3;
    uint32_t exit_ctls;
    uint32_t entry_ctls;
} td_vmcs_values_t;
typedef struct vmcs_fields_info_s
{
    uint64_t encoding;
    uint64_t value;
} vmcs_fields_info_t;
typedef struct vmcs_host_values_s
{
    vmcs_fields_info_t CR0;
    vmcs_fields_info_t CR3;
    vmcs_fields_info_t CR4;
    vmcs_fields_info_t CS;
    vmcs_fields_info_t SS;
    vmcs_fields_info_t FS;
    vmcs_fields_info_t GS;
    vmcs_fields_info_t TR;
    vmcs_fields_info_t IA32_S_CET;
    vmcs_fields_info_t IA32_PAT;
    vmcs_fields_info_t IA32_EFER;
    vmcs_fields_info_t FS_BASE;
    vmcs_fields_info_t IDTR_BASE;
    vmcs_fields_info_t GDTR_BASE;
} vmcs_host_values_t;
typedef struct xsave_component_info_s
{
    uint32_t size;
    bool_t align;
} xsave_component_info_t;
typedef struct tdx_module_global_s
{
    xsave_area_no_extended_t xbuf;
    sharex_lock_t global_lock;
    uint64_t hkid_mask;
    uint32_t hkid_start_bit;
    uint64_t max_pa;
    uint32_t num_of_lps;
    uint32_t num_of_pkgs;
    uint32_t num_of_init_lps;
    uint32_t num_of_init_pkgs;
    uint16_t module_hv;
    uint16_t min_update_hv;
    uint16_t no_downgrade;
    uint16_t num_handoff_pages;
    uint64_t seamdb_index;
    uint256_t seamdb_nonce;
    uint32_t pkg_config_bitmap;
    uint32_t private_hkid_min;
    uint32_t private_hkid_max;
    uint16_t hkid;
    tdx_global_state_t global_state;
    kot_t kot;
    wbt_entry_t wbt_entries[8];
    tdmr_entry_t tdmr_table[64];
    uint32_t num_of_tdmr_entries;
    platform_common_config_t plt_common_config;
    uint64_t seamrr_base;
    uint64_t seamrr_size;
    uint64_t num_of_cached_sub_blocks;
    uint32_t x2apic_core_id_shift_count;
    uint32_t x2apic_core_id_mask;
    uint32_t x2apic_pkg_id_shift_count;
    bool_t waitpkg_supported;
    bool_t kl_loadiwk_no_backup;
    bool_t xfd_supported;
    bool_t hle_supported;
    bool_t rtm_supported;
    bool_t ddpd_supported;
    bool_t la57_supported;
    bool_t lam_supported;
    bool_t perfmon_ext_leaf_supported;
    bool_t lass_supported;
    uint64_t crystal_clock_frequency;
    uint64_t native_tsc_frequency;
    uint32_t xcr0_supported_mask;
    uint32_t ia32_xss_supported_mask;
    uint32_t xfd_faulting_mask;
    xsave_component_info_t xsave_comp[18 +1];
    cpuid_config_t cpuid_values[68];
    uint32_t cpuid_last_base_leaf;
    uint32_t cpuid_last_extended_leaf;
    td_vmcs_values_t td_vmcs_values;
    td_vmcs_values_t l2_vmcs_values;
    vmcs_host_values_t seam_vmcs_host_values;
    uint32_t max_lbr_depth;
    uint8_t num_fixed_ctrs;
    uint32_t fc_bitmap;
    uint64_t attributes_fixed0;
    uint64_t attributes_fixed1;
    config_flags_t config_flags_fixed0;
    config_flags_t config_flags_fixed1;
    tdmr_info_entry_t tdmr_info_copy[64];
    seam_ops_capabilities_t seam_capabilities;
    bool_t seamverifyreport_available;
    uint8_t num_rdseed_retries;
    uint8_t num_rdseed_pauses;
    hash_method_t sha384_method;
    fms_info_t platform_fms;
    cpuid_1a_eax_t native_model_info;
} tdx_module_global_t;

typedef enum
{
    OP_STATE_UNINITIALIZED = 0,
    OP_STATE_INITIALIZED = 1,
    OP_STATE_RUNNABLE = 2,
    OP_STATE_LIVE_EXPORT = 3,
    OP_STATE_PAUSED_EXPORT = 4,
    OP_STATE_POST_EXPORT = 5,
    OP_STATE_MEMORY_IMPORT = 6,
    OP_STATE_STATE_IMPORT = 7,
    OP_STATE_POST_IMPORT = 8,
    OP_STATE_LIVE_IMPORT = 9,
    OP_STATE_FAILED_IMPORT = 10
} op_state_e;
typedef enum {
    PT_NDA = 0,
    PT_RSVD = 1,
    PT_REG = 3,
    PT_TDR = 4,
    PT_TDCX = 5,
    PT_TDVPR = 6,
    PT_EPT = 8
} page_type_t;
typedef union bepoch_u
{
    struct
    {
        uint64_t mig_epoch : 32;
        uint64_t export_count : 31;
        uint64_t mig_flag : 1;
    };
    uint64_t raw;
} bepoch_t;
typedef struct pamt_entry_s
{
    struct
    {
        sharex_hp_lock_t entry_lock;
        page_type_t pt : 8;
        uint64_t owner : 40;
    };
    union
    {
        bepoch_t bepoch;
    };
} pamt_entry_t;
typedef struct pamt_block_s
{
    pamt_entry_t* pamt_1gb_p;
    pamt_entry_t* pamt_2mb_p;
    pamt_entry_t* pamt_4kb_p;
} pamt_block_t;
typedef enum
{
    TD_HKID_ASSIGNED = 0x0,
    TD_KEYS_CONFIGURED = 0x1,
    TD_BLOCKED = 0x2,
    TD_TEARDOWN = 0x3
} td_lifecycle_state_t;
typedef enum
{
    MSR_BITMAPS_PAGE_INDEX = 2,
    SEPT_ROOT_PAGE_INDEX = 3,
    ZERO_PAGE_INDEX = 4,
    MIGSC_LINKS_PAGE_INDEX = 5,
    L2_SEPT_ROOT_PAGE_BASE_INDEX = 6,
    L2_SEPT_ROOT_PAGE_BASE_INC = 1,
    L2_SEPT_ROOT_1_PAGE_INDEX = 6,
    L2_SEPT_ROOT_2_PAGE_INDEX = 7,
    L2_SEPT_ROOT_3_PAGE_INDEX = 8,
    TDCS_PAGES_PER_L2_VM = 1,
    MAX_NUM_TDCS_PAGES = 9,
    MIN_NUM_TDCS_PAGES = 6,
    MAX_MAPPED_TDCS_PAGES = MAX_NUM_TDCS_PAGES
} tdcs_page_index_t;
typedef struct tdr_td_management_fields_s
{
    bool_t fatal;
    __attribute__ ((aligned(4))) uint32_t num_tdcx;
    __attribute__ ((aligned(8))) uint64_t chldcnt;
    __attribute__ ((aligned(4))) td_lifecycle_state_t lifecycle_state;
    __attribute__ ((aligned(8))) uint64_t tdcx_pa[MAX_NUM_TDCS_PAGES];
    __attribute__ ((aligned(32))) uint256_t td_uuid;
    uint8_t reserved_2[128];
} tdr_td_management_fields_t;
typedef struct tdr_key_managment_fields_s
{
    uint16_t hkid;
    __attribute__ ((aligned(8))) uint64_t pkg_config_bitmap;
    uint8_t reserved[48];
} tdr_key_managment_fields_t;
typedef struct tdr_td_preserving_fields_s
{
    uint16_t handoff_version;
    __attribute__ ((aligned(8))) uint64_t seamdb_index;
    uint256_t seamdb_nonce;
    uint8_t reserved[16];
} tdr_td_preserving_fields_t;
typedef struct __attribute__ ((aligned((4 * 0x400ULL)))) tdr_s
{
    tdr_td_management_fields_t management_fields;
    tdr_key_managment_fields_t key_management_fields;
    tdr_td_preserving_fields_t td_preserving_fields;
    uint8_t reserved[(4 * 0x400ULL) - (sizeof(tdr_td_management_fields_t) + sizeof(tdr_key_managment_fields_t) + sizeof(tdr_td_preserving_fields_t))];
} tdr_t;
typedef struct tdcs_management_fields_s
{
    uint32_t num_vcpus;
    uint32_t num_assoc_vcpus;
    op_state_e op_state;
    sharex_hp_lock_t op_state_lock;
    uint8_t reserved_0[2];
    uint16_t num_l2_vms;
    uint8_t reserved_1[110];
} tdcs_management_fields_t;
typedef struct epoch_and_refcount_s
{
    union
    {
        struct
        {
            uint64_t td_epoch;
            uint16_t refcount[2];
            uint8_t reserved[4];
        };
        uint128_t raw;
    };
} epoch_and_refcount_t;
typedef struct tdcs_epoch_tracking_fields_s
{
    epoch_and_refcount_t epoch_and_refcount;
    sharex_lock_t epoch_lock;
    uint8_t reserved[46];
} tdcs_epoch_tracking_fields_t;
typedef struct cpuid_flags_s
{
    bool_t monitor_mwait_supported;
    bool_t dca_supported;
    bool_t tsc_deadline_supported;
    bool_t tsx_supported;
    bool_t waitpkg_supported;
    bool_t tme_supported;
    bool_t pconfig_supported;
    bool_t xfd_supported;
    bool_t ddpd_supported;
    bool_t la57_supported;
    bool_t fred_supported;
    bool_t perfmon_ext_leaf_supported;
    uint8_t reserved[20];
} cpuid_flags_t;
typedef union
{
    struct
    {
        uint64_t notify_ept_faults : 1;
        uint64_t reserved_63_1 : 63;
    };
    uint64_t raw;
} notify_enables_t;
typedef union
{
    struct
    {
        uint64_t ept_violation_on_l2_sept_walk_failure : 1;
        uint64_t reserved : 63;
    };
    uint64_t raw;
} vm_ctls_t;
typedef union
{
    struct
    {
        uint64_t pending_ve_disable : 1;
        uint64_t enum_topology : 1;
        uint64_t reserved : 62;
    };
    uint64_t raw;
} td_ctls_t;
typedef struct tdcs_execution_control_fields_s
{
    td_param_attributes_t attributes;
    __attribute__ ((aligned(8))) uint64_t xfam;
    __attribute__ ((aligned(4))) uint32_t max_vcpus;
    __attribute__ ((aligned(1))) bool_t gpaw;
    __attribute__ ((aligned(8))) ia32e_eptp_t eptp;
    __attribute__ ((aligned(2))) sharex_lock_t secure_ept_lock;
    __attribute__ ((aligned(8))) uint64_t tsc_offset;
    __attribute__ ((aligned(8))) uint64_t tsc_multiplier;
    __attribute__ ((aligned(2))) uint16_t tsc_frequency;
    __attribute__ ((aligned(1))) cpuid_flags_t cpuid_flags;
    __attribute__ ((aligned(4))) uint32_t xbuff_size;
    __attribute__ ((aligned(8))) notify_enables_t notify_enables;
    __attribute__ ((aligned(8))) uint64_t hp_lock_timeout;
    __attribute__ ((aligned(8))) vm_ctls_t vm_ctls[4];
    __attribute__ ((aligned(8))) uint64_t ia32_spec_ctrl_mask;
    __attribute__ ((aligned(8))) config_flags_t config_flags;
    __attribute__ ((aligned(8))) td_ctls_t td_ctls;
    uint32_t reserved_1;
    bool_t topology_enum_configured;
    uint8_t reserved_2[7];
    uint8_t cpuid_valid[80];
    __attribute__ ((aligned(16))) uint32_t xbuff_offsets[(18 +1)];
    uint8_t reserved_3[36];
} tdcs_execution_control_fields_t;
typedef struct tdcs_measurement_fields_s
{
    measurement_t mr_td;
    measurement_t mr_config_id;
    measurement_t mr_owner;
    measurement_t mr_owner_config;
    measurement_t rtmr [4];
    measurement_t last_teeinfo_hash;
    sharex_hp_lock_t rtmr_lock;
    bool_t last_teeinfo_hash_valid;
    uint8_t reserved_0[45];
    sha384_ctx_t td_sha_ctx;
    uint8_t reserved_1[352 - sizeof(sha384_ctx_t)];
} tdcs_measurement_fields_t;
typedef struct tdcs_migration_fields_s
{
    bool_t mig_dec_key_set;
    uint32_t export_count;
    uint32_t import_count;
    uint32_t mig_epoch;
    bepoch_t bw_epoch;
    uint64_t total_mb_count;
    key256_t mig_dec_key;
    key256_t mig_dec_working_key;
    key256_t mig_enc_key;
    key256_t mig_enc_working_key;
    uint16_t mig_version;
    uint16_t mig_working_version;
    uint64_t dirty_count;
    uint64_t mig_count;
    uint16_t num_migs;
    uint8_t reserved_0[2];
    uint32_t num_migrated_vcpus;
    uint256_t preimport_uuid;
    sharex_lock_t mig_lock;
    uint8_t reserved_1[158];
} tdcs_migration_fields_t;
typedef struct tdcs_virt_msrs_s
{
    ia32_vmx_basic_t virt_ia32_vmx_basic;
    ia32_vmx_misc_t virt_ia32_vmx_misc;
    ia32_cr0_t virt_ia32_vmx_cr0_fixed0;
    ia32_cr0_t virt_ia32_vmx_cr0_fixed1;
    ia32_cr4_t virt_ia32_vmx_cr4_fixed0;
    ia32_cr4_t virt_ia32_vmx_cr4_fixed1;
    ia32_vmx_allowed_bits_t virt_ia32_vmx_procbased_ctls2;
    ia32_vmx_ept_vpid_cap_t virt_ia32_vmx_ept_vpid_cap;
    ia32_vmx_allowed_bits_t virt_ia32_vmx_true_pinbased_ctls;
    ia32_vmx_allowed_bits_t virt_ia32_vmx_true_procbased_ctls;
    ia32_vmx_allowed_bits_t virt_ia32_vmx_true_exit_ctls;
    ia32_vmx_allowed_bits_t virt_ia32_vmx_true_entry_ctls;
    uint64_t virt_ia32_vmx_vmfunc;
    uint64_t virt_ia32_vmx_procbased_ctls3;
    uint64_t virt_ia32_vmx_exit_ctls2;
    uint64_t virt_ia32_arch_capabilities;
    uint8_t reserved[128];
} tdcs_virt_msrs_t;
typedef struct __attribute__((__packed__)) servtd_binding_s
{
    uint8_t state;
    uint8_t reserved_0;
    uint16_t type;
    uint32_t reserved_1;
    servtd_attributes_t attributes;
    uint256_t uuid;
    measurement_t info_hash;
    uint8_t reserved_2[32];
} servtd_binding_t;
typedef struct tdcs_service_td_fields_s
{
    measurement_t servtd_hash;
    uint16_t servtd_num;
    __attribute__ ((aligned(2))) sharex_hp_lock_t servtd_bindings_lock;
    uint8_t reserved_0[80];
    __attribute__ ((aligned(16))) servtd_binding_t servtd_bindings_table[1];
    uint8_t reserved_1[752];
} tdcs_service_td_fields_t;
typedef struct __attribute__ ((aligned((4 * 0x400ULL)))) tdcs_s
{
    tdcs_management_fields_t management_fields;
    tdcs_execution_control_fields_t executions_ctl_fields;
    tdcs_epoch_tracking_fields_t epoch_tracking;
    tdcs_measurement_fields_t measurement_fields;
    tdcs_migration_fields_t migration_fields;
    tdcs_virt_msrs_t virt_msrs;
    cpuid_config_return_values_t cpuid_config_vals[80];
    tdcs_service_td_fields_t service_td_fields;
    uint32_t x2apic_ids[576];
    uint8_t reserved_io[1280];
    __attribute__ ((aligned(4096))) uint8_t MSR_BITMAPS[(4 * 0x400ULL)];
    uint8_t sept_root_page[(4 * 0x400ULL)];
    uint8_t zero_page[(4 * 0x400ULL)];
    union
    {
         uint8_t migsc_links_page[(4 * 0x400ULL)];
         migsc_link_t migsc_links[512];
         struct {
             migsc_link_t b_migsc_link;
             migsc_link_t f_migsc_links[511];
         };
    };
    uint8_t L2_SEPT_ROOT_1[(4 * 0x400ULL)];
    uint8_t L2_SEPT_ROOT_2[(4 * 0x400ULL)];
    uint8_t L2_SEPT_ROOT_3[(4 * 0x400ULL)];
} tdcs_t;
typedef struct __attribute__((__packed__)) lp_info_s
{
    uint32_t lp;
    uint32_t core;
    uint32_t pkg;
    uint32_t lp_id;
} lp_info_t;
typedef struct __attribute__((__packed__)) non_extended_state_s
{
    uint64_t ia32_spec_ctrl;
    uint64_t ia32_lam_enable;
    uint64_t ia32_ds_area;
    uint64_t ia32_tsx_ctrl;
} non_extended_state_t;
typedef struct __attribute__((__packed__)) keyhole_entry_s
{
    uint64_t mapped_pa;
    uint16_t lru_next;
    uint16_t lru_prev;
    uint16_t hash_list_next;
    uint8_t state;
    bool_t is_writable;
    bool_t is_wb_memtype;
    uint64_t ref_count;
} keyhole_entry_t;
typedef struct __attribute__((__packed__)) keyhole_state_s
{
    keyhole_entry_t keyhole_array[128];
    uint16_t hash_table[128];
    uint16_t lru_head;
    uint16_t lru_tail;
    uint64_t total_ref_count;
} keyhole_state_t;
typedef struct __attribute__((__packed__)) vp_ctx_s
{
    tdr_t * tdr;
    pamt_entry_t * tdr_pamt_entry;
    pa_t tdr_pa;
    tdvps_t * tdvps;
    pamt_entry_t * tdvpr_pamt_entry;
    pamt_block_t tdvpr_pamt_block;
    pa_t tdvpr_pa;
    tdcs_t * tdcs;
    pa_t last_tdvpr_pa;
    td_param_attributes_t attributes;
    uint64_t xfam;
    bool_t xfd_supported;
    uint64_t ia32_perf_global_status;
    bool_t bus_lock_preempted;
    uint16_t active_vmcs;
} vp_ctx_t;
typedef struct __attribute__((__packed__)) stepping_s
{
    bool_t in_inst_step_mode;
    uint32_t num_inst_step;
    uint64_t saved_cr8;
    bool_t nmi_exit_occured;
    bool_t init_exit_occured;
    uint32_t lfsr_value;
    uint64_t last_entry_tsc;
    uint64_t guest_rip_on_tdentry;
} stepping_t;
typedef struct __attribute__((__packed__)) tdx_module_local_s
{
    gprs_state_t vmm_regs;
    gprs_state_t td_regs;
    uint64_t current_td_vm_id;
    lp_info_t lp_info;
    bool_t lp_is_init;
    bool_t lp_is_busy;
    ia32_debugctl_t ia32_debugctl_value;
    uint64_t non_faulting_msr_value;
    bool_t reset_avx_state;
    vp_ctx_t vp_ctx;
    stepping_t single_step_def_state;
    non_extended_state_t vmm_non_extended_state;
    keyhole_state_t keyhole_state;
    void* local_data_fast_ref_ptr;
    void* global_data_fast_ref_ptr;
    void* sysinfo_fast_ref_ptr;
    uint64_t host_rsp;
    uint64_t host_ssp;
    uint64_t host_gs_base;
} tdx_module_local_t;

typedef struct __attribute__((__packed__)) sysinfo_table_s
{
    union
    {
        struct
        {
            uint64_t version;
            uint32_t tot_num_lps;
            uint32_t tot_num_sockets;
            fms_info_t socket_cpuid_table[8];
            uint8_t reserved_0[16];
            bool_t smrr2_not_supported;
            bool_t tdx_without_integrity;
            uint8_t reserved_1[62];
        } mcheck_fields;
        struct
        {
            uint8_t reserved_1[0x28];
            uint64_t canary;
        } stack_canary;
    };
    cmr_info_entry_t cmr_data[32];
    uint8_t reserved_2[1408];
    uint64_t seam_status;
    uint64_t code_rgn_base;
    uint64_t code_rgn_size;
    uint64_t data_rgn_base;
    uint64_t data_rgn_size;
    uint64_t stack_rgn_base;
    uint64_t stack_rgn_size;
    uint64_t keyhole_rgn_base;
    uint64_t keyhole_rgn_size;
    uint64_t keyhole_edit_rgn_base;
    uint64_t keyhole_edit_rgn_size;
    uint64_t num_stack_pages;
    uint64_t num_tls_pages;
    uint16_t module_hv;
    uint16_t min_update_hv;
    bool_t no_downgrade;
    uint8_t reserved_3[1];
    uint16_t num_handoff_pages;
    uint8_t reserved_4[1936];
} sysinfo_table_t;
typedef struct handoff_data_header_s
{
    bool_t valid;
    uint8_t reserved;
    uint16_t hv;
    uint32_t size;
} handoff_data_header_t;
extern tdx_module_local_t* local_data_fv_ptr;
extern tdx_module_global_t* global_data_fv_ptr;
extern sysinfo_table_t* sysinfo_table_fv_ptr;
extern tdcs_t* tdcs_fv_ptr;
extern tdvps_t* tdvps_fv_ptr;
extern gprs_state_t shadow_vmm_regs_precall;
extern gprs_state_t shadow_td_regs_precall;
extern gprs_state_t shadow_guest_gpr_state_precall;
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
extern bool_t fv_exception_tracker_gp;
extern bool_t fv_exception_tracker_ve;
extern bool_t fv_is_called_by_host;
extern bool_t fv_is_called_by_guest;
void init_tdcall();
void fv_setup_module_state();
void fv_teardown_with_check_module_state();
void fv_setup_tdcs();
void fv_teardown_with_check_tdcs();
void fv_setup_tdvps();
void fv_teardown_with_check_tdvps();
void tdxfv_abst_msr_init();
void tdxfv_abst_exception_init();
void tdxfv_abst_vcpu_init();

bool_t fv_exception_tracker_gp;
bool_t fv_exception_tracker_ve;
void tdxfv_abst_exception_init() {
    fv_exception_tracker_gp = ((bool_t)0);
    fv_exception_tracker_ve = ((bool_t)0);
}
uint64_t fv_msr_IA32_SPEC_CTRL;
uint64_t fv_msr_IA32_PRED_CMD;
uint64_t fv_msr_IA32_FLUSH_CMD;
uint64_t fv_msr_IA32_SYSENTER_CS;
uint64_t fv_msr_IA32_SYSENTER_ESP;
uint64_t fv_msr_IA32_SYSENTER_EIP;
uint64_t fv_msr_IA32_PAT;
uint64_t fv_msr_IA32_DS_AREA;
uint64_t fv_msr_IA32_X2APIC_TPR;
uint64_t fv_msr_0x0809;
uint64_t fv_msr_IA32_X2APIC_PPR;
uint64_t fv_msr_IA32_X2APIC_EOI;
uint64_t fv_msr_0x080C;
uint64_t fv_msr_0x080E;
uint64_t fv_msr_IA32_X2APIC_ISRx[8];
uint64_t fv_msr_IA32_X2APIC_TMRx[8];
uint64_t fv_msr_IA32_X2APIC_IRRx[8];
uint64_t fv_msr_IA32_X2APIC_SELF_IPI;
uint64_t fv_msr_IA32_UARCH_MISC_CTL;
uint64_t fv_msr_IA32_STAR;
uint64_t fv_msr_IA32_LSTAR;
uint64_t fv_msr_IA32_FMASK;
uint64_t fv_msr_IA32_FSBASE;
uint64_t fv_msr_IA32_GSBASE;
uint64_t fv_msr_IA32_KERNEL_GS_BASE;
uint64_t fv_msr_IA32_TSC_AUX;
void tdxfv_abst_msr_init() {
    fv_msr_IA32_SPEC_CTRL = TDXFV_NONDET_uint64t();
    fv_msr_IA32_PRED_CMD = TDXFV_NONDET_uint64t();
    fv_msr_IA32_FLUSH_CMD = TDXFV_NONDET_uint64t();
    fv_msr_IA32_SYSENTER_CS = TDXFV_NONDET_uint64t();
    fv_msr_IA32_SYSENTER_ESP = TDXFV_NONDET_uint64t();
    fv_msr_IA32_SYSENTER_EIP = TDXFV_NONDET_uint64t();
    fv_msr_IA32_PAT = TDXFV_NONDET_uint64t();
    fv_msr_IA32_DS_AREA = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TPR = TDXFV_NONDET_uint64t();
    fv_msr_0x0809 = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_PPR = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_EOI = TDXFV_NONDET_uint64t();
    fv_msr_0x080C = TDXFV_NONDET_uint64t();
    fv_msr_0x080E = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[0] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[1] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[2] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[3] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[4] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[5] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[6] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_ISRx[7] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[0] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[1] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[2] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[3] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[4] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[5] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[6] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_TMRx[7] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[0] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[1] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[2] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[3] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[4] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[5] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[6] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_IRRx[7] = TDXFV_NONDET_uint64t();
    fv_msr_IA32_X2APIC_SELF_IPI = TDXFV_NONDET_uint64t();
    fv_msr_IA32_UARCH_MISC_CTL = TDXFV_NONDET_uint64t();
    fv_msr_IA32_STAR = TDXFV_NONDET_uint64t();
    fv_msr_IA32_LSTAR = TDXFV_NONDET_uint64t();
    fv_msr_IA32_FMASK = TDXFV_NONDET_uint64t();
    fv_msr_IA32_FSBASE = TDXFV_NONDET_uint64t();
    fv_msr_IA32_GSBASE = TDXFV_NONDET_uint64t();
    fv_msr_IA32_KERNEL_GS_BASE = TDXFV_NONDET_uint64t();
    fv_msr_IA32_TSC_AUX = TDXFV_NONDET_uint64t();
}
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
extern tdx_module_local_t* local_data_fv_ptr;
extern tdx_module_global_t* global_data_fv_ptr;
extern sysinfo_table_t* sysinfo_table_fv_ptr;
static inline tdx_module_local_t* get_local_data(void)
{
    return local_data_fv_ptr;
}
static inline sysinfo_table_t* get_sysinfo_table(void)
{
    return sysinfo_table_fv_ptr;
}
static inline tdx_module_global_t* get_global_data(void)
{
    return global_data_fv_ptr;
}
static inline uint64_t get_num_addressable_lps(sysinfo_table_t* sysinfo_table)
{
    return ((sysinfo_table->stack_rgn_size / (4 * 0x400ULL)) /
            (sysinfo_table->num_stack_pages + 1 + 1));
}
static inline tdx_module_global_t* calculate_global_data(sysinfo_table_t* sysinfo_table)
{
    uint64_t num_of_addressable_lp = get_num_addressable_lps(sysinfo_table);
    uint64_t local_data_size_per_lp = ((4 * 0x400ULL) * (sysinfo_table->num_tls_pages + 1));
    uint64_t global_data_addr = sysinfo_table->data_rgn_base +
            num_of_addressable_lp * local_data_size_per_lp;
    global_data_addr += (sysinfo_table->num_handoff_pages + 1) * (4 * 0x400ULL);
    return (tdx_module_global_t*)global_data_addr;
}
extern unsigned long long __VERIFIER_nondet_ulonglong(void);
void __VERIFIER_nondet_array_1D_unsigned_long_long(unsigned long long (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i] = __VERIFIER_nondet_ulonglong();
    }
}
void __VERIFIER_nondet_union_gprs_state_u(union gprs_state_u *dest) {
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).gprs), 16);
}
extern unsigned short __VERIFIER_nondet_ushort(void);
extern unsigned int __VERIFIER_nondet_uint(void);
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
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).bytes), 16);
}
void __VERIFIER_nondet_struct_tdvps_ve_info_s(struct tdvps_ve_info_s *dest) {
    (*dest).exit_reason = __VERIFIER_nondet_uint();
    (*dest).valid = __VERIFIER_nondet_uint();
    (*dest).exit_qualification = __VERIFIER_nondet_ulonglong();
    (*dest).gla = __VERIFIER_nondet_ulonglong();
    (*dest).gpa = __VERIFIER_nondet_ulonglong();
    (*dest).eptp_index = __VERIFIER_nondet_ushort();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved0), 2);
    (*dest).inst_len_and_info = __VERIFIER_nondet_ulonglong();
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved1), 84);
}
void __VERIFIER_nondet_array_1D_union_l2_vcpu_ctrl_u(union l2_vcpu_ctrl_u (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
    }
}
void __VERIFIER_nondet_array_1D_union_l2_vm_debug_ctls_u(union l2_vm_debug_ctls_u (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
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
        (*dest)[i].raw = __VERIFIER_nondet_uchar();
    }
}
void __VERIFIER_nondet_array_1D_uint128_t(uint128_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].bytes), 16);
    }
}
void __VERIFIER_nondet_union_loadiwkey_ctl_u(union loadiwkey_ctl_u *dest) {
    (*dest).raw = __VERIFIER_nondet_uint();
}
void __VERIFIER_nondet_union_vcpu_state_s(union vcpu_state_s *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).raw), 4096);
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
void __VERIFIER_nondet_struct_tdvps_guest_extension_state_s(struct tdvps_guest_extension_state_s *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).max_size), 12288);
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
    (*dest).raw = __VERIFIER_nondet_ushort();
}
void __VERIFIER_nondet_uint256_t(uint256_t *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).bytes), 32);
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_ia32_vmx_misc_u(union ia32_vmx_misc_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_ia32_vmx_allowed_bits_t(ia32_vmx_allowed_bits_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_vmx_procbased_ctls3_t(vmx_procbased_ctls3_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_ia32_cr0_t(ia32_cr0_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_ia32_cr4_t(ia32_cr4_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_ia32_mtrrcap_u(union ia32_mtrrcap_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_ia32_arch_capabilities_u(union ia32_arch_capabilities_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_ia32_xapic_disable_status_u(union ia32_xapic_disable_status_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_ia32_core_capabilities_u(union ia32_core_capabilities_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_ia32_perf_capabilities_t(ia32_perf_capabilities_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_ia32_tme_capability_t(ia32_tme_capability_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_ia32_tme_activate_t(ia32_tme_activate_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_ia32_tme_keyid_partitioning_t(ia32_tme_keyid_partitioning_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_ia32_misc_package_ctls_u(union ia32_misc_package_ctls_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_smrr_base_t(smrr_base_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_smrr_mask_t(smrr_mask_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_cpuid_config_return_values_t(cpuid_config_return_values_t *dest) {
    __VERIFIER_nondet_array_1D_unsigned_int(&((*dest).values), 4);
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_struct_hash_method_s(struct hash_method_s *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).hash_method_buffer), 64);
    (*dest).is_initialized = __VERIFIER_nondet_uchar();
}
void __VERIFIER_nondet_fms_info_t(fms_info_t *dest) {
    (*dest).raw = __VERIFIER_nondet_uint();
}
void __VERIFIER_nondet_union_cpuid_1a_eax_u(union cpuid_1a_eax_u *dest) {
    (*dest).raw = __VERIFIER_nondet_uint();
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
    (*dest).raw = __VERIFIER_nondet_ushort();
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_ia32e_eptp_u(union ia32e_eptp_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_array_1D_vm_ctls_t(vm_ctls_t (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
    }
}
void __VERIFIER_nondet_td_ctls_t(td_ctls_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
    __VERIFIER_nondet_uint128_t(&((*dest).raw));
}
void __VERIFIER_nondet_struct_tdcs_epoch_tracking_fields_s(struct tdcs_epoch_tracking_fields_s *dest) {
    __VERIFIER_nondet_struct_epoch_and_refcount_s(&((*dest).epoch_and_refcount));
    __VERIFIER_nondet_sharex_lock_t(&((*dest).epoch_lock));
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).reserved), 46);
}
void __VERIFIER_nondet_union_measurement_u(union measurement_u *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).bytes), 48);
}
void __VERIFIER_nondet_array_1D_union_measurement_u(union measurement_u (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        __VERIFIER_nondet_array_1D_unsigned_char(&((*dest)[i].bytes), 48);
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
        __VERIFIER_nondet_array_1D_unsigned_int(&((*dest)[i].values), 4);
    }
}
void __VERIFIER_nondet_union_servtd_attributes_u(union servtd_attributes_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
        (*dest)[i].raw = __VERIFIER_nondet_ulonglong();
    }
}
void __VERIFIER_nondet_union_migsc_link_u(union migsc_link_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
    __VERIFIER_nondet_union_migsc_link_u(&((*dest).b_migsc_link));
    __VERIFIER_nondet_array_1D_union_migsc_link_u(&((*dest).f_migsc_links), 511);
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
    (*dest).raw = __VERIFIER_nondet_ulonglong();
}
void __VERIFIER_nondet_union_pa_u(union pa_u *dest) {
    (*dest).raw_void = __VERIFIER_nondet_void_ptr();
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
void __VERIFIER_nondet_array_1D_struct_cmr_info_entry_s(struct cmr_info_entry_s (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i].cmr_base = __VERIFIER_nondet_ulonglong();
        (*dest)[i].cmr_size = __VERIFIER_nondet_ulonglong();
    }
}
void __VERIFIER_nondet_struct_sysinfo_table_s(struct sysinfo_table_s *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).stack_canary.reserved_1), 40);
    (*dest).stack_canary.canary = __VERIFIER_nondet_ulonglong();
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
static inline void TDXFV_NONDET_struct_tdx_module_local_t(tdx_module_local_t* dest) {
    __VERIFIER_nondet_struct_tdx_module_local_s(dest);
}
static inline void TDXFV_NONDET_struct_tdx_module_global_t(tdx_module_global_t* dest) {
    __VERIFIER_nondet_struct_tdx_module_global_s(dest);
}
static inline void TDXFV_NONDET_struct_sysinfo_table_t(sysinfo_table_t* dest) {
    __VERIFIER_nondet_struct_sysinfo_table_s(dest);
}
static inline void TDXFV_NONDET_struct_tdcs_t(tdcs_t* dest) {
    __VERIFIER_nondet_struct_tdcs_s(dest);
}
static inline void TDXFV_NONDET_struct_tdvps_t(tdvps_t* dest) {
    __VERIFIER_nondet_struct_tdvps_s(dest);
}
static inline void TDXFV_NONDET_struct_gprs_state_t(gprs_state_t* dest) {
    __VERIFIER_nondet_union_gprs_state_u(dest);
}
static inline void TDXFV_NONDET_struct_pamt_entry_t(pamt_entry_t* dest) {
    __VERIFIER_nondet_struct_pamt_entry_s(dest);
}
extern int __VERIFIER_nondet_int(void);
static inline bool_t sysinfo_table_has_valid_tot_num_lps(const sysinfo_table_t* sysinfo_table) {
    return sysinfo_table->mcheck_fields.tot_num_lps <= 256 * 8;
}
static inline bool_t sysinfo_table_has_valid_tot_num_sockets(const sysinfo_table_t* sysinfo_table) {
    return sysinfo_table->mcheck_fields.tot_num_sockets <= 8;
}
static inline bool_t sysinfo_table_has_valid_seam_status(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->seam_status == 0 ||
        sysinfo_table->seam_status == 1 ||
        sysinfo_table->seam_status == 2
    );
}
static inline bool_t sysinfo_table_has_valid_code_rgn_base(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->code_rgn_base != 0 &&
        (sysinfo_table->code_rgn_base & 0xFFF) == 0
    );
}
static inline bool_t sysinfo_table_has_valid_code_rgn_size(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->code_rgn_size != 0 &&
        (sysinfo_table->code_rgn_size & 0xFFF) == 0
    );
}
static inline bool_t sysinfo_table_has_valid_data_rgn_base(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->data_rgn_base != 0 &&
        (sysinfo_table->data_rgn_base & 0xFFF) == 0
    );
}
static inline bool_t sysinfo_table_has_valid_data_rgn_size(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->data_rgn_size != 0 &&
        (sysinfo_table->data_rgn_size & 0xFFF) == 0
    );
}
static inline bool_t sysinfo_table_has_valid_stack_rgn_base(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->stack_rgn_base != 0 &&
        (sysinfo_table->stack_rgn_base & 0xFFF) == 0
    );
}
static inline bool_t sysinfo_table_has_valid_stack_rgn_size(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->stack_rgn_size != 0 &&
        (sysinfo_table->stack_rgn_size & 0xFFF) == 0
    );
}
static inline bool_t sysinfo_table_has_valid_keyhole_rgn_base(const sysinfo_table_t* sysinfo_table) {
    return (sysinfo_table->keyhole_rgn_base & 0xFFF) == 0;
}
static inline bool_t sysinfo_table_has_valid_keyhole_rgn_size(const sysinfo_table_t* sysinfo_table) {
    return (sysinfo_table->keyhole_rgn_size & 0xFFF) == 0;
}
static inline bool_t sysinfo_table_has_valid_keyhole_edit_rgn_base(const sysinfo_table_t* sysinfo_table) {
    return (sysinfo_table->keyhole_edit_rgn_base & 0xFFF) == 0;
}
static inline bool_t sysinfo_table_has_valid_keyhole_edit_rgn_size(const sysinfo_table_t* sysinfo_table) {
    return (sysinfo_table->keyhole_edit_rgn_size & 0xFFF) == 0;
}
static inline bool_t sysinfo_table_has_valid_regions(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->code_rgn_base + sysinfo_table->code_rgn_size <= sysinfo_table->data_rgn_base &&
        sysinfo_table->data_rgn_base + sysinfo_table->data_rgn_size <= sysinfo_table->stack_rgn_base &&
        sysinfo_table->stack_rgn_base + sysinfo_table->stack_rgn_size <= sysinfo_table->keyhole_rgn_base &&
        sysinfo_table->keyhole_rgn_base + sysinfo_table->keyhole_rgn_size <= sysinfo_table->keyhole_edit_rgn_base &&
        sysinfo_table->keyhole_edit_rgn_base + sysinfo_table->keyhole_edit_rgn_size <= (uint64_t)(1ULL<<(52ULL))
    );
}
static inline bool_t sysinfo_table_has_valid_num_stack_pages(const sysinfo_table_t* sysinfo_table) {
    return (
        (sysinfo_table->num_stack_pages != 0) &&
        (sysinfo_table->num_stack_pages <= 4096)
    );
}
static inline bool_t sysinfo_table_has_valid_num_handoff_pages(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table->num_handoff_pages == 0 ||
        sysinfo_table->num_handoff_pages >= ((( ((sizeof(((tdx_module_global_t *)0)->kot.entries) + sizeof(((tdx_module_global_t *)0)->wbt_entries) + sizeof(((tdx_module_global_t *)0)->tdmr_table) + sizeof(((tdx_module_global_t *)0)->num_of_tdmr_entries) + sizeof(((tdx_module_global_t *)0)->hkid) + sizeof(((tdx_module_global_t *)0)->pkg_config_bitmap)) + (((4 * 0x400ULL)) - 1)) & (~(((4 * 0x400ULL)) - 1)) )) / (4 * 0x400ULL))
    );
}
static inline bool_t fv_invariant_sysinfo_table_t(const sysinfo_table_t* sysinfo_table) {
    return (
        sysinfo_table_has_valid_tot_num_lps(sysinfo_table) &&
        sysinfo_table_has_valid_tot_num_sockets(sysinfo_table) &&
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
        sysinfo_table_has_valid_num_handoff_pages(sysinfo_table)
    );
}
static inline bool_t fv_invariant_init_data_fast_ref_ptrs() {
    tdx_module_global_t* global_data_ptr = get_global_data();
    tdx_module_local_t* local_data_ptr = get_local_data();
    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();
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
    bool_t is_valid_key_management_config =
        (global_data_ptr->hkid_start_bit <= 52ULL) &&
        (global_data_ptr->hkid_mask == (((uint64_t)(1ULL<<(52ULL - 1)) - (uint64_t)(1ULL<<(global_data_ptr->hkid_start_bit)) + (uint64_t)(1ULL<<(52ULL - 1))))) &&
        (global_data_ptr->private_hkid_min == global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids + 1) &&
        (global_data_ptr->private_hkid_max ==
            global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids +
            global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_tdx_priv_kids) &&
        (global_data_ptr->private_hkid_max < 2048);
    bool_t is_valid_module_build_time_defs =
        (global_data_ptr->module_hv == sysinfo_table_ptr->module_hv) &&
        (global_data_ptr->min_update_hv == sysinfo_table_ptr->min_update_hv) &&
        (global_data_ptr->no_downgrade == sysinfo_table_ptr->no_downgrade) &&
        (global_data_ptr->num_handoff_pages == sysinfo_table_ptr->num_handoff_pages) &&
        ((global_data_ptr->num_handoff_pages + 1) >= ((( ((sizeof(((tdx_module_global_t *)0)->kot.entries) + sizeof(((tdx_module_global_t *)0)->wbt_entries) + sizeof(((tdx_module_global_t *)0)->tdmr_table) + sizeof(((tdx_module_global_t *)0)->num_of_tdmr_entries) + sizeof(((tdx_module_global_t *)0)->hkid) + sizeof(((tdx_module_global_t *)0)->pkg_config_bitmap)) + (((4 * 0x400ULL)) - 1)) & (~(((4 * 0x400ULL)) - 1)) )) / (4 * 0x400ULL)));
    bool_t is_valid_tdx_init_global_data =
        (global_data_ptr->num_of_lps == sysinfo_table_ptr->mcheck_fields.tot_num_lps) &&
        (global_data_ptr->num_of_pkgs == sysinfo_table_ptr->mcheck_fields.tot_num_sockets) &&
        (global_data_ptr->seamrr_base == (global_data_ptr->seamrr_base | (((uint64_t)(1ULL<<((52ULL -1))) - (uint64_t)(1ULL<<(25)) + (uint64_t)(1ULL<<((52ULL -1))))))) &&
        (
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(25)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(26)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(27)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(28)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(29)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(30)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(31)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(32)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(33)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(34)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(35)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(36)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(37)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(38)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(39)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(40)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(41)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(42)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(43)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(44)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(45)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(46)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(47)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(48)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(49)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(50)) ||
            global_data_ptr->seamrr_size == (uint64_t)(1ULL<<(51))
        ) &&
        (global_data_ptr->xbuf.xsave_header.xcomp_bv == (uint64_t)(1ULL<<(63))) &&
        (global_data_ptr->num_rdseed_retries == 6) &&
        (global_data_ptr->num_rdseed_pauses == 32);
    bool_t is_valid_tdh_sys_init_misc =
        ((global_data_ptr->attributes_fixed0 == (0x1 | (uint64_t)(1ULL<<(29)) | (uint64_t)(1ULL<<(30)) | (uint64_t)(1ULL<<(63)) | (uint64_t)(1ULL<<(28)) | (uint64_t)(1ULL<<(27)))) ||
         (global_data_ptr->attributes_fixed0 == ((0x1 | (uint64_t)(1ULL<<(29)) | (uint64_t)(1ULL<<(30)) | (uint64_t)(1ULL<<(63)) | (uint64_t)(1ULL<<(28)) | (uint64_t)(1ULL<<(27))) & ~(uint64_t)(1ULL<<(27))))) &&
        (global_data_ptr->attributes_fixed1 == 0x0) &&
        (global_data_ptr->config_flags_fixed0.raw == ((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(1)) | (uint64_t)(1ULL<<(2))));
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
static inline bool_t fv_invariant_bepoch_t(const bepoch_t* bepoch_ptr) {
    return ((bool_t)1);
}
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
static inline bool_t pamt_entry_t_has_valid_bepoch(const pamt_entry_t* pamt_entry_ptr) {
    return fv_invariant_bepoch_t(&pamt_entry_ptr->bepoch);
}
static inline bool_t fv_invariant_pamt_entry_t(const pamt_entry_t* pamt_entry_ptr) {
    return (
        pamt_entry_t_has_valid_pt(pamt_entry_ptr) &&
        pamt_entry_t_has_valid_bepoch(pamt_entry_ptr)
    );
}
static inline bool_t tdcs_management_fields_t_has_valid_num_vcpus(const tdcs_management_fields_t* management_fields_ptr) {
    return management_fields_ptr->num_vcpus <= 576;
}
static inline bool_t tdcs_management_fields_t_has_valid_num_assoc_vcpus(const tdcs_management_fields_t* management_fields_ptr) {
    return management_fields_ptr->num_assoc_vcpus <= management_fields_ptr->num_vcpus;
}
static inline bool_t tdcs_management_fields_t_has_valid_op_state(const tdcs_management_fields_t* management_fields_ptr) {
    return (
        management_fields_ptr->op_state == OP_STATE_UNINITIALIZED ||
        management_fields_ptr->op_state == OP_STATE_INITIALIZED ||
        management_fields_ptr->op_state == OP_STATE_RUNNABLE ||
        management_fields_ptr->op_state == OP_STATE_LIVE_EXPORT ||
        management_fields_ptr->op_state == OP_STATE_PAUSED_EXPORT ||
        management_fields_ptr->op_state == OP_STATE_POST_EXPORT ||
        management_fields_ptr->op_state == OP_STATE_MEMORY_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_STATE_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_POST_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_LIVE_IMPORT ||
        management_fields_ptr->op_state == OP_STATE_FAILED_IMPORT
    );
}
static inline bool_t tdcs_management_fields_t_has_valid_num_l2_vms(const tdcs_management_fields_t* management_fields_ptr) {
    return management_fields_ptr->num_l2_vms <= 4;
}
static inline bool_t fv_invariant_tdcs_management_fields_t(const tdcs_management_fields_t* management_fields_ptr) {
    return (
        tdcs_management_fields_t_has_valid_num_vcpus(management_fields_ptr) &&
        tdcs_management_fields_t_has_valid_num_assoc_vcpus(management_fields_ptr) &&
        tdcs_management_fields_t_has_valid_op_state(management_fields_ptr) &&
        tdcs_management_fields_t_has_valid_num_l2_vms(management_fields_ptr)
    );
}
static inline bool_t fv_invariant_epoch_and_refcount_t(const epoch_and_refcount_t* epoch_and_refcount_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_epoch_tracking_fields_t_has_valid_epoch_and_refcount(const tdcs_epoch_tracking_fields_t* epoch_tracking_fields_ptr) {
    return fv_invariant_epoch_and_refcount_t(&epoch_tracking_fields_ptr->epoch_and_refcount);
}
static inline bool_t tdcs_epoch_tracking_fields_t_has_valid_epoch_lock(const tdcs_epoch_tracking_fields_t* epoch_tracking_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdcs_epoch_tracking_fields_t(const tdcs_epoch_tracking_fields_t* epoch_tracking_fields_ptr) {
    return (
        tdcs_epoch_tracking_fields_t_has_valid_epoch_and_refcount(epoch_tracking_fields_ptr) &&
        tdcs_epoch_tracking_fields_t_has_valid_epoch_lock(epoch_tracking_fields_ptr)
    );
}
static inline bool_t fv_invariant_cpuid_flags_t(const cpuid_flags_t* cpuid_flags_ptr) {
    return ((bool_t)1);
}
static inline bool_t notify_enables_t_has_valid_notify_ept_faults(const notify_enables_t* notify_enables_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_notify_enables_t(const notify_enables_t* notify_enables_ptr) {
    return notify_enables_t_has_valid_notify_ept_faults(notify_enables_ptr);
}
static inline bool_t vm_ctls_t_has_valid_ept_violation_on_l2_sept_walk_failure(const vm_ctls_t* vm_ctls_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_vm_ctls_t(const vm_ctls_t* vm_ctls_ptr) {
    return vm_ctls_t_has_valid_ept_violation_on_l2_sept_walk_failure(vm_ctls_ptr);
}
static inline bool_t td_ctls_t_has_valid_pending_ve_disable(const td_ctls_t* td_ctls_ptr) {
    return ((bool_t)1);
}
static inline bool_t td_ctls_t_has_valid_enum_topology(const td_ctls_t* td_ctls_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_td_ctls_t(const td_ctls_t* td_ctls_ptr) {
    return (
        td_ctls_t_has_valid_pending_ve_disable(td_ctls_ptr) &&
        td_ctls_t_has_valid_enum_topology(td_ctls_ptr)
    );
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_attributes(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_xfam(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        ((execution_control_fields_ptr->xfam & ~0x0006DBE7ULL) == 0) &&
        ((execution_control_fields_ptr->xfam & 0x00000003ULL) == 0x00000003ULL)
    );
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_max_vcpus(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return execution_control_fields_ptr->max_vcpus <= 576;
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_tsc_multiplier(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        execution_control_fields_ptr->tsc_multiplier >= 4 &&
        execution_control_fields_ptr->tsc_multiplier <= 400
    );
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_tsc_frequency(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        execution_control_fields_ptr->tsc_frequency >= 4 &&
        execution_control_fields_ptr->tsc_frequency <= 400
    );
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_cpuid_flags(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return fv_invariant_cpuid_flags_t(&execution_control_fields_ptr->cpuid_flags);
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_xbuff_size(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_notify_enables(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return fv_invariant_notify_enables_t(&execution_control_fields_ptr->notify_enables);
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_hp_lock_timeout(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        execution_control_fields_ptr->hp_lock_timeout >= 10000UL &&
        execution_control_fields_ptr->hp_lock_timeout <= 100000000UL
    );
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_vm_ctls(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[0]) &&
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[1]) &&
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[2]) &&
        fv_invariant_vm_ctls_t(&execution_control_fields_ptr->vm_ctls[3])
    );
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_ia32_spec_ctrl_mask(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_config_flags(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        ((execution_control_fields_ptr->config_flags.raw & ~((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(1)) | (uint64_t)(1ULL<<(2)))) == 0) &&
        ((execution_control_fields_ptr->config_flags.raw & 0x0) == 0x0)
    );
}
static inline bool_t tdcs_execution_control_fields_t_has_valid_td_ctls(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return fv_invariant_td_ctls_t(&execution_control_fields_ptr->td_ctls);
}
static inline bool_t fv_invariant_tdcs_execution_control_fields_t(const tdcs_execution_control_fields_t* execution_control_fields_ptr) {
    return (
        tdcs_execution_control_fields_t_has_valid_attributes(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_xfam(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_max_vcpus(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_tsc_multiplier(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_tsc_frequency(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_cpuid_flags(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_xbuff_size(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_notify_enables(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_hp_lock_timeout(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_vm_ctls(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_ia32_spec_ctrl_mask(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_config_flags(execution_control_fields_ptr) &&
        tdcs_execution_control_fields_t_has_valid_td_ctls(execution_control_fields_ptr)
    );
}
static inline bool_t fv_invariant_tdcs_measurement_fields_t(const tdcs_measurement_fields_t* measurement_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_migration_fields_t_has_valid_mig_count(const tdcs_migration_fields_t* migration_fields_ptr) {
    return migration_fields_ptr->mig_count <= 512;
}
static inline bool_t tdcs_migration_fields_t_has_valid_num_migs(const tdcs_migration_fields_t* migration_fields_ptr) {
    return (
        migration_fields_ptr->num_migs >= 2 &&
        migration_fields_ptr->num_migs <= 512
    );
}
static inline bool_t tdcs_migration_fields_t_has_valid_num_migrated_vcpus(const tdcs_migration_fields_t* migration_fields_ptr) {
    return migration_fields_ptr->num_migrated_vcpus <= 576;
}
static inline bool_t fv_invariant_tdcs_migration_fields_t(const tdcs_migration_fields_t* migration_fields_ptr) {
    return (
        tdcs_migration_fields_t_has_valid_mig_count(migration_fields_ptr) &&
        tdcs_migration_fields_t_has_valid_num_migs(migration_fields_ptr) &&
        tdcs_migration_fields_t_has_valid_num_migrated_vcpus(migration_fields_ptr)
    );
}
static inline bool_t fv_invariant_tdcs_virt_msrs_t(const tdcs_virt_msrs_t* virt_msrs_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_servtd_binding_t(const servtd_binding_t* servtd_binding_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_hash(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_num(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return service_td_fields_ptr->servtd_num <= 1;
}
static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_bindings_lock(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_service_td_fields_t_has_valid_servtd_bindings_table(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return fv_invariant_servtd_binding_t(&service_td_fields_ptr->servtd_bindings_table[0]);
}
static inline bool_t fv_invariant_tdcs_service_td_fields_t(const tdcs_service_td_fields_t* service_td_fields_ptr) {
    return (
        tdcs_service_td_fields_t_has_valid_servtd_hash(service_td_fields_ptr) &&
        tdcs_service_td_fields_t_has_valid_servtd_num(service_td_fields_ptr) &&
        tdcs_service_td_fields_t_has_valid_servtd_bindings_lock(service_td_fields_ptr) &&
        tdcs_service_td_fields_t_has_valid_servtd_bindings_table(service_td_fields_ptr)
    );
}
static inline bool_t tdcs_t_has_valid_management_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_management_fields_t(&tdcs_ptr->management_fields);
}
static inline bool_t tdcs_t_has_valid_executions_ctl_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_execution_control_fields_t(&tdcs_ptr->executions_ctl_fields);
}
static inline bool_t tdcs_t_has_valid_epoch_tracking(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_epoch_tracking_fields_t(&tdcs_ptr->epoch_tracking);
}
static inline bool_t tdcs_t_has_valid_measurement_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_measurement_fields_t(&tdcs_ptr->measurement_fields);
}
static inline bool_t tdcs_t_has_valid_migration_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_migration_fields_t(&tdcs_ptr->migration_fields);
}
static inline bool_t tdcs_t_has_valid_virt_msrs(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_virt_msrs_t(&tdcs_ptr->virt_msrs);
}
static inline bool_t tdcs_t_has_valid_cpuid_config_vals(const tdcs_t* tdcs_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdcs_t_has_valid_service_td_fields(const tdcs_t* tdcs_ptr) {
    return fv_invariant_tdcs_service_td_fields_t(&tdcs_ptr->service_td_fields);
}
static inline bool_t fv_invariant_tdcs_t(const tdcs_t* tdcs_ptr) {
    return (
        tdcs_t_has_valid_management_fields(tdcs_ptr) &&
        tdcs_t_has_valid_executions_ctl_fields(tdcs_ptr) &&
        tdcs_t_has_valid_epoch_tracking(tdcs_ptr) &&
        tdcs_t_has_valid_measurement_fields(tdcs_ptr) &&
        tdcs_t_has_valid_migration_fields(tdcs_ptr) &&
        tdcs_t_has_valid_virt_msrs(tdcs_ptr) &&
        tdcs_t_has_valid_cpuid_config_vals(tdcs_ptr) &&
        tdcs_t_has_valid_service_td_fields(tdcs_ptr)
    );
}
static inline bool_t fv_invariant_xsave_area_no_extended_t(const xsave_area_no_extended_t* xsave_area)
{
    return ((bool_t)1);
}
static inline bool_t tdx_global_state_t_has_valid_sys_state(const tdx_global_state_t* global_state) {
    return (
        global_state->sys_state == SYSINIT_PENDING ||
        global_state->sys_state == SYSINIT_DONE ||
        global_state->sys_state == SYSCONFIG_DONE ||
        global_state->sys_state == SYS_READY ||
        global_state->sys_state == SYS_SHUTDOWN
    );
}
static inline bool_t fv_invariant_tdx_global_state_t(const tdx_global_state_t* global_state)
{
    return tdx_global_state_t_has_valid_sys_state(global_state);
}
static inline bool_t kot_entry_t_has_valid_wbinvd_bitmap(const kot_entry_t* kot_entry) {
    return ((bool_t)1);
}
static inline bool_t kot_entry_t_has_valid_state(const kot_entry_t* kot_entry) {
    return (
        kot_entry->state == 0 ||
        kot_entry->state == 1 ||
        kot_entry->state == 2 ||
        kot_entry->state == 3
    );
}
static inline bool_t fv_invariant_kot_entry_t(const kot_entry_t* kot_entry)
{
    return (
        kot_entry_t_has_valid_wbinvd_bitmap(kot_entry) &&
        kot_entry_t_has_valid_state(kot_entry)
    );
}
static inline bool_t kot_t_has_valid_lock(const kot_t* kot) {
    return ((bool_t)1);
}
static inline bool_t kot_t_has_valid_entries(const kot_t* kot) {
    return fv_invariant_kot_entry_t(&kot->entries[0]);
}
static inline bool_t fv_invariant_kot_t(const kot_t* kot)
{
    return (
        kot_t_has_valid_lock(kot) &&
        kot_t_has_valid_entries(kot)
    );
}
static inline bool_t fv_invariant_wbt_entry_t(const wbt_entry_t* wbt_entry)
{
    return ((bool_t)1);
}
static inline bool_t tdmr_entry_t_has_valid_base(const tdmr_entry_t* tdmr_entry) {
    return (
        (tdmr_entry->base & 0xFFF) == 0 &&
        tdmr_entry->base < (uint64_t)(1ULL<<(52ULL))
    );
}
static inline bool_t tdmr_entry_t_has_valid_size(const tdmr_entry_t* tdmr_entry) {
    return (
        (tdmr_entry->size & 0xFFF) == 0 &&
        tdmr_entry->size <= ((uint64_t)(1ULL<<(52ULL)) - tdmr_entry->base)
    );
}
static inline bool_t tdmr_entry_t_has_valid_last_initialized(const tdmr_entry_t* tdmr_entry) {
    return ((bool_t)1);
}
static inline bool_t tdmr_entry_t_has_valid_pamt_bases(const tdmr_entry_t* tdmr_entry) {
    return (
        (tdmr_entry->pamt_1g_base & 0xFFF) == 0 &&
        (tdmr_entry->pamt_2m_base & 0xFFF) == 0 &&
        (tdmr_entry->pamt_4k_base & 0xFFF) == 0 &&
        tdmr_entry->pamt_1g_base >= tdmr_entry->base &&
        tdmr_entry->pamt_2m_base >= tdmr_entry->base &&
        tdmr_entry->pamt_4k_base >= tdmr_entry->base &&
        tdmr_entry->pamt_1g_base < tdmr_entry->base + tdmr_entry->size &&
        tdmr_entry->pamt_2m_base < tdmr_entry->base + tdmr_entry->size &&
        tdmr_entry->pamt_4k_base < tdmr_entry->base + tdmr_entry->size &&
        (tdmr_entry->pamt_1g_base == 0 || tdmr_entry->pamt_1g_base != tdmr_entry->pamt_2m_base) &&
        (tdmr_entry->pamt_1g_base == 0 || tdmr_entry->pamt_1g_base != tdmr_entry->pamt_4k_base) &&
        (tdmr_entry->pamt_2m_base == 0 || tdmr_entry->pamt_2m_base != tdmr_entry->pamt_1g_base) &&
        (tdmr_entry->pamt_2m_base == 0 || tdmr_entry->pamt_2m_base != tdmr_entry->pamt_4k_base) &&
        (tdmr_entry->pamt_4k_base == 0 || tdmr_entry->pamt_4k_base != tdmr_entry->pamt_1g_base) &&
        (tdmr_entry->pamt_4k_base == 0 || tdmr_entry->pamt_4k_base != tdmr_entry->pamt_2m_base)
    );
}
static inline bool_t tdmr_entry_t_has_valid_num_of_pamt_blocks(const tdmr_entry_t* tdmr_entry) {
    return ((bool_t)1);
}
static inline bool_t tdmr_entry_t_has_valid_num_of_rsvd_areas(const tdmr_entry_t* tdmr_entry) {
    return (tdmr_entry->num_of_rsvd_areas <= 16U);
}
static inline bool_t tdmr_entry_t_has_valid_rsvd_areas(const tdmr_entry_t* tdmr_entry) {
    return ((bool_t)1);
}
static inline bool_t tdmr_entry_t_has_valid_lock(const tdmr_entry_t* tdmr_entry) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdmr_entry_t(const tdmr_entry_t* tdmr_entry)
{
    return (
        tdmr_entry_t_has_valid_base(tdmr_entry) &&
        tdmr_entry_t_has_valid_size(tdmr_entry) &&
        tdmr_entry_t_has_valid_last_initialized(tdmr_entry) &&
        tdmr_entry_t_has_valid_pamt_bases(tdmr_entry) &&
        tdmr_entry_t_has_valid_num_of_pamt_blocks(tdmr_entry) &&
        tdmr_entry_t_has_valid_num_of_rsvd_areas(tdmr_entry) &&
        tdmr_entry_t_has_valid_rsvd_areas(tdmr_entry) &&
        tdmr_entry_t_has_valid_lock(tdmr_entry)
    );
}
static inline bool_t fv_invariant_platform_common_config_t(const platform_common_config_t* platform_config)
{
    return ((bool_t)1);
}
static inline bool_t fv_invariant_td_vmcs_values_t(const td_vmcs_values_t* td_vmcs_values)
{
    return ((bool_t)1);
}
static inline bool_t fv_invariant_vmcs_fields_info_t(const vmcs_fields_info_t* vmcs_fields_info)
{
    return ((bool_t)1);
}
static inline bool_t vmcs_host_values_t_has_valid_fields(const vmcs_host_values_t* vmcs_host_values) {
    return (
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CR0) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CR3) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CR4) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->CS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->SS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->FS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->GS) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->TR) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IA32_S_CET) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IA32_PAT) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IA32_EFER) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->FS_BASE) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->IDTR_BASE) &&
        fv_invariant_vmcs_fields_info_t(&vmcs_host_values->GDTR_BASE)
    );
}
static inline bool_t fv_invariant_vmcs_host_values_t(const vmcs_host_values_t* vmcs_host_values)
{
    return vmcs_host_values_t_has_valid_fields(vmcs_host_values);
}
static inline bool_t fv_invariant_xsave_component_info_t(const xsave_component_info_t* xsave_component_info)
{
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_xbuf(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_xsave_area_no_extended_t(&tdx_module_global->xbuf);
}
static inline bool_t tdx_module_global_t_has_valid_global_lock(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_global_state(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_tdx_global_state_t(&tdx_module_global->global_state);
}
static inline bool_t tdx_module_global_t_has_valid_kot(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_kot_t(&tdx_module_global->kot);
}
static inline bool_t tdx_module_global_t_has_valid_wbt_entries(const tdx_module_global_t* tdx_module_global) {
    return (
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[0]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[1]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[2]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[3]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[4]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[5]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[6]) &&
        fv_invariant_wbt_entry_t(&tdx_module_global->wbt_entries[7])
    );
}
static inline bool_t tdx_module_global_t_has_valid_tdmr_table(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_tdmr_entry_t(&tdx_module_global->tdmr_table[0]);
}
static inline bool_t tdx_module_global_t_has_valid_plt_common_config(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_platform_common_config_t(&tdx_module_global->plt_common_config);
}
static inline bool_t tdx_module_global_t_has_valid_xsave_comp(const tdx_module_global_t* tdx_module_global) {
    return (
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[0]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[1]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[2]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[3]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[4]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[5]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[6]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[7]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[8]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[9]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[10]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[11]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[12]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[13]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[14]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[15]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[16]) &&
        fv_invariant_xsave_component_info_t(&tdx_module_global->xsave_comp[17])
    );
}
static inline bool_t tdx_module_global_t_has_valid_td_vmcs_values(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_td_vmcs_values_t(&tdx_module_global->td_vmcs_values);
}
static inline bool_t tdx_module_global_t_has_valid_l2_vmcs_values(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_td_vmcs_values_t(&tdx_module_global->l2_vmcs_values);
}
static inline bool_t tdx_module_global_t_has_valid_seam_vmcs_host_values(const tdx_module_global_t* tdx_module_global) {
    return fv_invariant_vmcs_host_values_t(&tdx_module_global->seam_vmcs_host_values);
}
static inline bool_t tdx_module_global_t_has_valid_hkid_mask(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_hkid_start_bit(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->hkid_start_bit < 64;
}
static inline bool_t tdx_module_global_t_has_valid_max_pa(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->max_pa >= 0 && tdx_module_global->max_pa <= 52ULL;
}
static inline bool_t tdx_module_global_t_has_valid_num_of_lps(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_lps >= 0 && tdx_module_global->num_of_lps <= 256;
}
static inline bool_t tdx_module_global_t_has_valid_num_of_pkgs(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_pkgs >= 0 && tdx_module_global->num_of_pkgs <= 8;
}
static inline bool_t tdx_module_global_t_has_valid_num_of_init_lps(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_init_lps <= tdx_module_global->num_of_lps;
}
static inline bool_t tdx_module_global_t_has_valid_num_of_init_pkgs(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_init_pkgs <= tdx_module_global->num_of_pkgs;
}
static inline bool_t tdx_module_global_t_has_valid_module_hv(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_min_update_hv(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_no_downgrade(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_num_handoff_pages(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_handoff_pages >= ((( ((sizeof(((tdx_module_global_t *)0)->kot.entries) + sizeof(((tdx_module_global_t *)0)->wbt_entries) + sizeof(((tdx_module_global_t *)0)->tdmr_table) + sizeof(((tdx_module_global_t *)0)->num_of_tdmr_entries) + sizeof(((tdx_module_global_t *)0)->hkid) + sizeof(((tdx_module_global_t *)0)->pkg_config_bitmap)) + (((4 * 0x400ULL)) - 1)) & (~(((4 * 0x400ULL)) - 1)) )) / (4 * 0x400ULL));
}
static inline bool_t tdx_module_global_t_has_valid_seamdb_index(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_seamdb_nonce(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_pkg_config_bitmap(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_private_hkid_min(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->private_hkid_min < 2048;
}
static inline bool_t tdx_module_global_t_has_valid_private_hkid_max(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->private_hkid_max < 2048 &&
           tdx_module_global->private_hkid_max >= tdx_module_global->private_hkid_min;
}
static inline bool_t tdx_module_global_t_has_valid_hkid(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->hkid < 2048;
}
static inline bool_t tdx_module_global_t_has_valid_num_of_tdmr_entries(const tdx_module_global_t* tdx_module_global) {
    return tdx_module_global->num_of_tdmr_entries <= 64;
}
static inline bool_t tdx_module_global_t_has_valid_seamrr_base(const tdx_module_global_t* tdx_module_global) {
    return (
        (tdx_module_global->seamrr_base & 0xFFF) == 0 &&
        tdx_module_global->seamrr_base < (uint64_t)(1ULL<<(52ULL))
    );
}
static inline bool_t tdx_module_global_t_has_valid_seamrr_size(const tdx_module_global_t* tdx_module_global) {
    return (
        (tdx_module_global->seamrr_size & 0xFFF) == 0 &&
        tdx_module_global->seamrr_size <= ((uint64_t)(1ULL<<(52ULL)) - tdx_module_global->seamrr_base)
    );
}
static inline bool_t tdx_module_global_t_has_valid_num_of_cached_sub_blocks(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_x2apic_shift_and_mask(const tdx_module_global_t* tdx_module_global) {
    return (
        tdx_module_global->x2apic_core_id_shift_count < 32 &&
        tdx_module_global->x2apic_pkg_id_shift_count < 32
    );
}
static inline bool_t tdx_module_global_t_has_valid_feature_flags(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_clock_frequencies(const tdx_module_global_t* tdx_module_global) {
    return (
        tdx_module_global->crystal_clock_frequency > 0 &&
        tdx_module_global->native_tsc_frequency > 0
    );
}
static inline bool_t tdx_module_global_t_has_valid_xsave_masks(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_cpuid_values(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_cpuid_leaf_values(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_perfmon_values(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_fixed_bits(const tdx_module_global_t* tdx_module_global) {
    return (~tdx_module_global->attributes_fixed0 & tdx_module_global->attributes_fixed1) == 0;
}
static inline bool_t tdx_module_global_t_has_valid_tdmr_info_copy(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_seam_capabilities(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_seamverifyreport_available(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_rdseed_values(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_sha384_method(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_global_t_has_valid_platform_info(const tdx_module_global_t* tdx_module_global) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdx_module_global_t(const tdx_module_global_t* tdx_module_global)
{
    return (
        tdx_module_global_t_has_valid_xbuf(tdx_module_global) &&
        tdx_module_global_t_has_valid_global_lock(tdx_module_global) &&
        tdx_module_global_t_has_valid_hkid_mask(tdx_module_global) &&
        tdx_module_global_t_has_valid_hkid_start_bit(tdx_module_global) &&
        tdx_module_global_t_has_valid_max_pa(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_lps(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_pkgs(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_init_lps(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_init_pkgs(tdx_module_global) &&
        tdx_module_global_t_has_valid_module_hv(tdx_module_global) &&
        tdx_module_global_t_has_valid_min_update_hv(tdx_module_global) &&
        tdx_module_global_t_has_valid_no_downgrade(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_handoff_pages(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamdb_index(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamdb_nonce(tdx_module_global) &&
        tdx_module_global_t_has_valid_pkg_config_bitmap(tdx_module_global) &&
        tdx_module_global_t_has_valid_private_hkid_min(tdx_module_global) &&
        tdx_module_global_t_has_valid_private_hkid_max(tdx_module_global) &&
        tdx_module_global_t_has_valid_hkid(tdx_module_global) &&
        tdx_module_global_t_has_valid_global_state(tdx_module_global) &&
        tdx_module_global_t_has_valid_kot(tdx_module_global) &&
        tdx_module_global_t_has_valid_wbt_entries(tdx_module_global) &&
        tdx_module_global_t_has_valid_tdmr_table(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_tdmr_entries(tdx_module_global) &&
        tdx_module_global_t_has_valid_plt_common_config(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamrr_base(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamrr_size(tdx_module_global) &&
        tdx_module_global_t_has_valid_num_of_cached_sub_blocks(tdx_module_global) &&
        tdx_module_global_t_has_valid_x2apic_shift_and_mask(tdx_module_global) &&
        tdx_module_global_t_has_valid_feature_flags(tdx_module_global) &&
        tdx_module_global_t_has_valid_clock_frequencies(tdx_module_global) &&
        tdx_module_global_t_has_valid_xsave_masks(tdx_module_global) &&
        tdx_module_global_t_has_valid_xsave_comp(tdx_module_global) &&
        tdx_module_global_t_has_valid_cpuid_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_cpuid_leaf_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_td_vmcs_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_l2_vmcs_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_seam_vmcs_host_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_perfmon_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_fixed_bits(tdx_module_global) &&
        tdx_module_global_t_has_valid_tdmr_info_copy(tdx_module_global) &&
        tdx_module_global_t_has_valid_seam_capabilities(tdx_module_global) &&
        tdx_module_global_t_has_valid_seamverifyreport_available(tdx_module_global) &&
        tdx_module_global_t_has_valid_rdseed_values(tdx_module_global) &&
        tdx_module_global_t_has_valid_sha384_method(tdx_module_global) &&
        tdx_module_global_t_has_valid_platform_info(tdx_module_global)
    );
}
static inline bool_t lp_info_t_has_valid_lp(const lp_info_t* lp_info_ptr) {
    return lp_info_ptr->lp <= 256;
}
static inline bool_t lp_info_t_has_valid_core(const lp_info_t* lp_info_ptr) {
    return lp_info_ptr->core <= 128;
}
static inline bool_t lp_info_t_has_valid_pkg(const lp_info_t* lp_info_ptr) {
    return lp_info_ptr->pkg <= 8;
}
static inline bool_t lp_info_t_has_valid_lp_id(const lp_info_t* lp_info_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_lp_info_t(const lp_info_t* lp_info_ptr) {
    return (
        lp_info_t_has_valid_lp(lp_info_ptr) &&
        lp_info_t_has_valid_core(lp_info_ptr) &&
        lp_info_t_has_valid_pkg(lp_info_ptr) &&
        lp_info_t_has_valid_lp_id(lp_info_ptr)
    );
}
static inline bool_t fv_invariant_non_extended_state_t(const non_extended_state_t* non_extended_state_ptr) {
    return ((bool_t)1);
}
static inline bool_t keyhole_entry_t_has_valid_mapped_pa(const keyhole_entry_t* keyhole_entry_ptr) {
    return keyhole_entry_ptr->mapped_pa < (uint64_t)(1ULL<<(52ULL));
}
static inline bool_t keyhole_entry_t_has_valid_lru_next(const keyhole_entry_t* keyhole_entry_ptr) {
    return keyhole_entry_ptr->lru_next <= 128;
}
static inline bool_t keyhole_entry_t_has_valid_lru_prev(const keyhole_entry_t* keyhole_entry_ptr) {
    return keyhole_entry_ptr->lru_prev <= 128;
}
static inline bool_t keyhole_entry_t_has_valid_hash_list_next(const keyhole_entry_t* keyhole_entry_ptr) {
    return ((bool_t)1);
}
static inline bool_t keyhole_entry_t_has_valid_state(const keyhole_entry_t* keyhole_entry_ptr) {
    return (
        keyhole_entry_ptr->state == 0 ||
        keyhole_entry_ptr->state == 1 ||
        keyhole_entry_ptr->state == 2
    );
}
static inline bool_t fv_invariant_keyhole_entry_t(const keyhole_entry_t* keyhole_entry_ptr) {
    return (
        keyhole_entry_t_has_valid_mapped_pa(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_lru_next(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_lru_prev(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_hash_list_next(keyhole_entry_ptr) &&
        keyhole_entry_t_has_valid_state(keyhole_entry_ptr)
    );
}
static inline bool_t keyhole_state_t_has_valid_keyhole_array(const keyhole_state_t* keyhole_state_ptr) {
    return fv_invariant_keyhole_entry_t(&keyhole_state_ptr->keyhole_array[0]);
}
static inline bool_t keyhole_state_t_has_valid_hash_table(const keyhole_state_t* keyhole_state_ptr) {
    return ((bool_t)1);
}
static inline bool_t keyhole_state_t_has_valid_lru_head(const keyhole_state_t* keyhole_state_ptr) {
    return keyhole_state_ptr->lru_head <= 128;
}
static inline bool_t keyhole_state_t_has_valid_lru_tail(const keyhole_state_t* keyhole_state_ptr) {
    return keyhole_state_ptr->lru_tail <= 128;
}
static inline bool_t keyhole_state_t_has_valid_total_ref_count(const keyhole_state_t* keyhole_state_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_keyhole_state_t(const keyhole_state_t* keyhole_state_ptr) {
    return (
        keyhole_state_t_has_valid_keyhole_array(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_hash_table(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_lru_head(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_lru_tail(keyhole_state_ptr) &&
        keyhole_state_t_has_valid_total_ref_count(keyhole_state_ptr)
    );
}
static inline bool_t fv_invariant_vp_ctx_t(const vp_ctx_t* vp_ctx_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_stepping_t(const stepping_t* stepping_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_vmm_regs(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_td_regs(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_current_td_vm_id(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_lp_info(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_lp_info_t(&tdx_module_local_ptr->lp_info);
}
static inline bool_t tdx_module_local_t_has_valid_lp_is_init(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_lp_is_busy(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_ia32_debugctl_value(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_non_faulting_msr_value(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_reset_avx_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_vp_ctx(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_vp_ctx_t(&tdx_module_local_ptr->vp_ctx);
}
static inline bool_t tdx_module_local_t_has_valid_single_step_def_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_stepping_t(&tdx_module_local_ptr->single_step_def_state);
}
static inline bool_t tdx_module_local_t_has_valid_vmm_non_extended_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_non_extended_state_t(&tdx_module_local_ptr->vmm_non_extended_state);
}
static inline bool_t tdx_module_local_t_has_valid_keyhole_state(const tdx_module_local_t* tdx_module_local_ptr) {
    return fv_invariant_keyhole_state_t(&tdx_module_local_ptr->keyhole_state);
}
static inline bool_t tdx_module_local_t_has_valid_local_data_fast_ref_ptr(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_global_data_fast_ref_ptr(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_sysinfo_fast_ref_ptr(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_host_rsp(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_host_ssp(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdx_module_local_t_has_valid_host_gs_base(const tdx_module_local_t* tdx_module_local_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdx_module_local_t(const tdx_module_local_t* tdx_module_local_ptr) {
    return (
        tdx_module_local_t_has_valid_vmm_regs(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_td_regs(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_current_td_vm_id(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_lp_info(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_lp_is_init(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_lp_is_busy(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_ia32_debugctl_value(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_non_faulting_msr_value(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_reset_avx_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_vp_ctx(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_single_step_def_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_vmm_non_extended_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_keyhole_state(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_local_data_fast_ref_ptr(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_global_data_fast_ref_ptr(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_sysinfo_fast_ref_ptr(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_host_rsp(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_host_ssp(tdx_module_local_ptr) &&
        tdx_module_local_t_has_valid_host_gs_base(tdx_module_local_ptr)
    );
}
static inline bool_t l2_vcpu_ctrl_t_has_valid_raw(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return (l2_vcpu_ctrl_ptr->raw & ~((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(1)))) == 0;
}
static inline bool_t fv_invariant_l2_vcpu_ctrl_t(const l2_vcpu_ctrl_t* l2_vcpu_ctrl_ptr) {
    return (
        l2_vcpu_ctrl_t_has_valid_raw(l2_vcpu_ctrl_ptr)
    );
}
static inline bool_t l2_vm_debug_ctls_t_has_valid_raw(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    return (l2_vm_debug_ctls_ptr->raw & ~((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(1)) | (uint64_t)(1ULL<<(2)))) == 0;
}
static inline bool_t fv_invariant_l2_vm_debug_ctls_t(const l2_vm_debug_ctls_t* l2_vm_debug_ctls_ptr) {
    return (
        l2_vm_debug_ctls_t_has_valid_raw(l2_vm_debug_ctls_ptr)
    );
}
static inline bool_t tdvps_ve_info_t_has_valid_exit_reason(const tdvps_ve_info_t* ve_info_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_ve_info_t_has_valid_valid(const tdvps_ve_info_t* ve_info_ptr) {
    return (
        ve_info_ptr->valid == 0xFFFFFFFF ||
        ve_info_ptr->valid == 0
    );
}
static inline bool_t fv_invariant_tdvps_ve_info_t(const tdvps_ve_info_t* ve_info_ptr) {
    return (
        tdvps_ve_info_t_has_valid_exit_reason(ve_info_ptr) &&
        tdvps_ve_info_t_has_valid_valid(ve_info_ptr)
    );
}
static inline bool_t vcpu_state_t_has_valid_vmxip(const vcpu_state_t* vcpu_state_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_vcpu_state_t(const vcpu_state_t* vcpu_state_ptr) {
    return vcpu_state_t_has_valid_vmxip(vcpu_state_ptr);
}
static inline bool_t tdvps_management_t_has_valid_state(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->state == 0x0 ||
        management_ptr->state == 0x2 ||
        management_ptr->state == 0x4 ||
        management_ptr->state == 0x8 ||
        management_ptr->state == 0x10
    );
}
static inline bool_t tdvps_management_t_has_valid_last_td_exit(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->last_td_exit == 0x0 ||
        management_ptr->last_td_exit == 0x1 ||
        management_ptr->last_td_exit == 0x2
    );
}
static inline bool_t tdvps_management_t_has_valid_vcpu_index(const tdvps_management_t* management_ptr) {
    return management_ptr->vcpu_index < 0xFFFF;
}
static inline bool_t tdvps_management_t_has_valid_num_tdvps_pages(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->num_tdvps_pages >= MIN_TDVPS_PAGES &&
        management_ptr->num_tdvps_pages <= MAX_TDVPS_PAGES
    );
}
static inline bool_t tdvps_management_t_has_valid_tdvps_pa(const tdvps_management_t* management_ptr) {
    return (
        ((management_ptr->tdvps_pa[0] & 0xFFF) == 0) && (management_ptr->tdvps_pa[0] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[1] & 0xFFF) == 0) && (management_ptr->tdvps_pa[1] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[2] & 0xFFF) == 0) && (management_ptr->tdvps_pa[2] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[3] & 0xFFF) == 0) && (management_ptr->tdvps_pa[3] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[4] & 0xFFF) == 0) && (management_ptr->tdvps_pa[4] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[5] & 0xFFF) == 0) && (management_ptr->tdvps_pa[5] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[6] & 0xFFF) == 0) && (management_ptr->tdvps_pa[6] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[7] & 0xFFF) == 0) && (management_ptr->tdvps_pa[7] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[8] & 0xFFF) == 0) && (management_ptr->tdvps_pa[8] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[9] & 0xFFF) == 0) && (management_ptr->tdvps_pa[9] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[10] & 0xFFF) == 0) && (management_ptr->tdvps_pa[10] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[11] & 0xFFF) == 0) && (management_ptr->tdvps_pa[11] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[12] & 0xFFF) == 0) && (management_ptr->tdvps_pa[12] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[13] & 0xFFF) == 0) && (management_ptr->tdvps_pa[13] < (uint64_t)(1ULL<<(52ULL))) &&
        ((management_ptr->tdvps_pa[14] & 0xFFF) == 0) && (management_ptr->tdvps_pa[14] < (uint64_t)(1ULL<<(52ULL)))
    );
}
static inline bool_t tdvps_management_t_has_valid_assoc_lpid(const tdvps_management_t* management_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_management_t_has_valid_vcpu_epoch(const tdvps_management_t* management_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_management_t_has_valid_cpuid_controls(const tdvps_management_t* management_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_management_t_has_valid_curr_vm(const tdvps_management_t* management_ptr) {
    return management_ptr->curr_vm < 4;
}
static inline bool_t tdvps_management_t_has_valid_l2_exit_host_routed(const tdvps_management_t* management_ptr) {
    return (
        management_ptr->l2_exit_host_routed == HOST_ROUTED_NONE ||
        management_ptr->l2_exit_host_routed == HOST_ROUTED_ASYNC ||
        management_ptr->l2_exit_host_routed == HOST_ROUTED_TDVMCALL
    );
}
static inline bool_t tdvps_management_t_has_valid_l2_ctls(const tdvps_management_t* management_ptr) {
    return (
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[0]) &&
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[1]) &&
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[2]) &&
        fv_invariant_l2_vcpu_ctrl_t(&management_ptr->l2_ctls[3])
    );
}
static inline bool_t tdvps_management_t_has_valid_l2_debug_ctls(const tdvps_management_t* management_ptr) {
    return (
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[0]) &&
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[1]) &&
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[2]) &&
        fv_invariant_l2_vm_debug_ctls_t(&management_ptr->l2_debug_ctls[3])
    );
}
static inline bool_t fv_invariant_tdvps_management_t(const tdvps_management_t* management_ptr) {
    return (
        tdvps_management_t_has_valid_state(management_ptr) &&
        tdvps_management_t_has_valid_last_td_exit(management_ptr) &&
        tdvps_management_t_has_valid_vcpu_index(management_ptr) &&
        tdvps_management_t_has_valid_num_tdvps_pages(management_ptr) &&
        tdvps_management_t_has_valid_tdvps_pa(management_ptr) &&
        tdvps_management_t_has_valid_assoc_lpid(management_ptr) &&
        tdvps_management_t_has_valid_vcpu_epoch(management_ptr) &&
        tdvps_management_t_has_valid_cpuid_controls(management_ptr) &&
        tdvps_management_t_has_valid_curr_vm(management_ptr) &&
        tdvps_management_t_has_valid_l2_exit_host_routed(management_ptr) &&
        tdvps_management_t_has_valid_l2_ctls(management_ptr) &&
        tdvps_management_t_has_valid_l2_debug_ctls(management_ptr)
    );
}
static inline bool_t fv_invariant_cpuid_control_t(const cpuid_control_t* cpuid_control_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_guest_state_t_has_valid_vcpu_state_details(const tdvps_guest_state_t* guest_state_ptr) {
    return fv_invariant_vcpu_state_t(&guest_state_ptr->vcpu_state_details);
}
static inline bool_t fv_invariant_tdvps_guest_state_t(const tdvps_guest_state_t* guest_state_ptr) {
    return (
        tdvps_guest_state_t_has_valid_vcpu_state_details(guest_state_ptr)
    );
}
static inline bool_t fv_invariant_tdvps_guest_msr_state_t(const tdvps_guest_msr_state_t* guest_msr_state_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_td_vmcs_t_has_valid_td_vmcs(const tdvps_td_vmcs_t* td_vmcs_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdvps_td_vmcs_t(const tdvps_td_vmcs_t* td_vmcs_ptr) {
    return tdvps_td_vmcs_t_has_valid_td_vmcs(td_vmcs_ptr);
}
static inline bool_t tdvps_vapic_t_has_valid_apic(const tdvps_vapic_t* vapic_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdvps_vapic_t(const tdvps_vapic_t* vapic_ptr) {
    return tdvps_vapic_t_has_valid_apic(vapic_ptr);
}
static inline bool_t tdvps_guest_extension_state_t_has_valid_xbuf(const tdvps_guest_extension_state_t* guest_extension_state_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdvps_guest_extension_state_t(const tdvps_guest_extension_state_t* guest_extension_state_ptr) {
    return tdvps_guest_extension_state_t_has_valid_xbuf(guest_extension_state_ptr);
}
static inline bool_t fv_invariant_l2_vm_ctrl_t(const l2_vm_ctrl_t* l2_vm_ctrl_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_t_has_valid_ve_info(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_ve_info_t(&tdvps_ptr->ve_info);
}
static inline bool_t tdvps_t_has_valid_management(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_management_t(&tdvps_ptr->management);
}
static inline bool_t tdvps_t_has_valid_last_epf_gpa_list(const tdvps_t* tdvps_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdvps_t_has_valid_cpuid_control(const tdvps_t* tdvps_ptr) {
    return fv_invariant_cpuid_control_t(&tdvps_ptr->cpuid_control[0]);
}
static inline bool_t tdvps_t_has_valid_guest_state(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_guest_state_t(&tdvps_ptr->guest_state);
}
static inline bool_t tdvps_t_has_valid_guest_msr_state(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_guest_msr_state_t(&tdvps_ptr->guest_msr_state);
}
static inline bool_t tdvps_t_has_valid_td_vmcs(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_td_vmcs_t(&tdvps_ptr->td_vmcs);
}
static inline bool_t tdvps_t_has_valid_vapic(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_vapic_t(&tdvps_ptr->vapic);
}
static inline bool_t tdvps_t_has_valid_guest_extension_state(const tdvps_t* tdvps_ptr) {
    return fv_invariant_tdvps_guest_extension_state_t(&tdvps_ptr->guest_extension_state);
}
static inline bool_t tdvps_t_has_valid_l2_vm_ctrl(const tdvps_t* tdvps_ptr) {
    return (
        fv_invariant_l2_vm_ctrl_t(&tdvps_ptr->l2_vm_ctrl[0]) &&
        fv_invariant_l2_vm_ctrl_t(&tdvps_ptr->l2_vm_ctrl[1]) &&
        fv_invariant_l2_vm_ctrl_t(&tdvps_ptr->l2_vm_ctrl[2])
    );
}
static inline bool_t fv_invariant_tdvps_t(const tdvps_t* tdvps_ptr) {
    return (
        tdvps_t_has_valid_ve_info(tdvps_ptr) &&
        tdvps_t_has_valid_management(tdvps_ptr) &&
        tdvps_t_has_valid_last_epf_gpa_list(tdvps_ptr) &&
        tdvps_t_has_valid_cpuid_control(tdvps_ptr) &&
        tdvps_t_has_valid_guest_state(tdvps_ptr) &&
        tdvps_t_has_valid_guest_msr_state(tdvps_ptr) &&
        tdvps_t_has_valid_td_vmcs(tdvps_ptr) &&
        tdvps_t_has_valid_vapic(tdvps_ptr) &&
        tdvps_t_has_valid_guest_extension_state(tdvps_ptr) &&
        tdvps_t_has_valid_l2_vm_ctrl(tdvps_ptr)
    );
}

void fv_setup_module_state() {
    global_data_fv_ptr = TDXFV_malloc(sizeof(tdx_module_global_t));
    TDXFV_NONDET_struct_tdx_module_global_t(global_data_fv_ptr);
    local_data_fv_ptr = TDXFV_malloc(sizeof(tdx_module_local_t));
    TDXFV_NONDET_struct_tdx_module_local_t(local_data_fv_ptr);
    sysinfo_table_fv_ptr = TDXFV_malloc(sizeof(sysinfo_table_t));
    TDXFV_NONDET_struct_sysinfo_table_t(sysinfo_table_fv_ptr);
    pamt_entry_t* tdr_pamt_entry_ptr = TDXFV_malloc(sizeof(pamt_entry_t));
    TDXFV_NONDET_struct_pamt_entry_t(tdr_pamt_entry_ptr);
    pamt_entry_t* tdvpr_pamt_entry_ptr = TDXFV_malloc(sizeof(pamt_entry_t));
    TDXFV_NONDET_struct_pamt_entry_t(tdvpr_pamt_entry_ptr);
    assume_exit_if_not(fv_invariant_tdx_module_global_t(global_data_fv_ptr));
    assume_exit_if_not(fv_invariant_tdx_module_local_t(local_data_fv_ptr));
    assume_exit_if_not(fv_invariant_sysinfo_table_t(sysinfo_table_fv_ptr));
    assume_exit_if_not(fv_invariant_pamt_entry_t(tdr_pamt_entry_ptr));
    assume_exit_if_not(fv_invariant_pamt_entry_t(tdvpr_pamt_entry_ptr));
    do { assume_exit_if_not(local_data_fv_ptr->vp_ctx.tdr_pamt_entry == tdr_pamt_entry_ptr); if (1) { local_data_fv_ptr->vp_ctx.tdr_pamt_entry = tdr_pamt_entry_ptr; } } while (0);
    do { assume_exit_if_not(local_data_fv_ptr->vp_ctx.tdvpr_pamt_entry == tdvpr_pamt_entry_ptr); if (1) { local_data_fv_ptr->vp_ctx.tdvpr_pamt_entry = tdvpr_pamt_entry_ptr; } } while (0);
    assume_exit_if_not(fv_invariant_misc());
    TDXFV_NONDET_struct_gprs_state_t(&shadow_vmm_regs_precall);
    TDXFV_NONDET_struct_gprs_state_t(&shadow_td_regs_precall);
    TDXFV_NONDET_struct_gprs_state_t(&shadow_guest_gpr_state_precall);
    tdxfv_abst_exception_init();
    tdxfv_abst_msr_init();
    tdxfv_abst_vcpu_init();
    fv_is_called_by_host = TDXFV_NONDET_bool();
    fv_is_called_by_guest = TDXFV_NONDET_bool();
    shadow_vmm_regs_precall = local_data_fv_ptr->vmm_regs;
    shadow_td_regs_precall= local_data_fv_ptr->td_regs;
}
void fv_teardown_with_check_module_state() {
    pamt_entry_t* tdr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdr_pamt_entry;
    pamt_entry_t* tdvpr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdvpr_pamt_entry;
    __VERIFIER_assert(fv_invariant_tdx_module_global_t(global_data_fv_ptr));
    __VERIFIER_assert(fv_invariant_tdx_module_local_t(local_data_fv_ptr));
    __VERIFIER_assert(fv_invariant_sysinfo_table_t(sysinfo_table_fv_ptr));
    __VERIFIER_assert(fv_invariant_pamt_entry_t(tdr_pamt_entry_ptr));
    __VERIFIER_assert(fv_invariant_pamt_entry_t(tdvpr_pamt_entry_ptr));
    __VERIFIER_assert(fv_invariant_misc());
    free(tdr_pamt_entry_ptr);
    free(tdvpr_pamt_entry_ptr);
    free(sysinfo_table_fv_ptr);
    free(local_data_fv_ptr);
    free(global_data_fv_ptr);
}
void fv_setup_tdcs() {
    tdcs_fv_ptr = TDXFV_malloc(sizeof(tdcs_t));
    TDXFV_NONDET_struct_tdcs_t(tdcs_fv_ptr);
    assume_exit_if_not(fv_invariant_tdcs_t(tdcs_fv_ptr));
    do { assume_exit_if_not(local_data_fv_ptr->vp_ctx.tdcs == tdcs_fv_ptr); if (1) { local_data_fv_ptr->vp_ctx.tdcs = tdcs_fv_ptr; } } while (0);
}
void fv_teardown_with_check_tdcs() {
    __VERIFIER_assert(fv_invariant_tdcs_t(tdcs_fv_ptr));
    free(tdcs_fv_ptr);
}
void fv_setup_tdvps() {
    tdvps_fv_ptr = TDXFV_malloc(sizeof(tdvps_t));
    TDXFV_NONDET_struct_tdvps_t(tdvps_fv_ptr);
    assume_exit_if_not(fv_invariant_tdvps_t(tdvps_fv_ptr));
    do { assume_exit_if_not(local_data_fv_ptr->vp_ctx.tdvps == tdvps_fv_ptr); if (1) { local_data_fv_ptr->vp_ctx.tdvps = tdvps_fv_ptr; } } while (0);
    shadow_guest_gpr_state_precall = tdvps_fv_ptr->guest_state.gpr_state;
}
void fv_teardown_with_check_tdvps() {
    __VERIFIER_assert(fv_invariant_tdvps_t(tdvps_fv_ptr));
    free(tdvps_fv_ptr);
}
tdx_module_local_t* local_data_fv_ptr;
tdx_module_global_t* global_data_fv_ptr;
sysinfo_table_t* sysinfo_table_fv_ptr;
tdcs_t* tdcs_fv_ptr;
tdvps_t* tdvps_fv_ptr;
gprs_state_t shadow_td_regs_precall;
gprs_state_t shadow_vmm_regs_precall;
gprs_state_t shadow_guest_gpr_state_precall;
bool_t fv_is_called_by_host;
bool_t fv_is_called_by_guest;
void init_tdcall() {
    fv_is_called_by_host = ((bool_t)0);
    fv_is_called_by_guest = ((bool_t)1);
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    bool_t valid_vm_id = (
        tdx_local_data_ptr->vp_ctx.tdvps->management.curr_vm == tdx_local_data_ptr->current_td_vm_id
    );
    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;
    bool_t save_td_gpr_state = (
        tdvps_ptr->guest_state.gpr_state.rax == tdx_local_data_ptr->td_regs.rax &&
        tdvps_ptr->guest_state.gpr_state.rcx == tdx_local_data_ptr->td_regs.rcx &&
        tdvps_ptr->guest_state.gpr_state.rdx == tdx_local_data_ptr->td_regs.rdx &&
        tdvps_ptr->guest_state.gpr_state.rbx == tdx_local_data_ptr->td_regs.rbx &&
        tdvps_ptr->guest_state.gpr_state.rbp == tdx_local_data_ptr->td_regs.rbp &&
        tdvps_ptr->guest_state.gpr_state.rsi == tdx_local_data_ptr->td_regs.rsi &&
        tdvps_ptr->guest_state.gpr_state.rdi == tdx_local_data_ptr->td_regs.rdi &&
        tdvps_ptr->guest_state.gpr_state.r8 == tdx_local_data_ptr->td_regs.r8 &&
        tdvps_ptr->guest_state.gpr_state.r9 == tdx_local_data_ptr->td_regs.r9 &&
        tdvps_ptr->guest_state.gpr_state.r10 == tdx_local_data_ptr->td_regs.r10 &&
        tdvps_ptr->guest_state.gpr_state.r11 == tdx_local_data_ptr->td_regs.r11 &&
        tdvps_ptr->guest_state.gpr_state.r12 == tdx_local_data_ptr->td_regs.r12 &&
        tdvps_ptr->guest_state.gpr_state.r13 == tdx_local_data_ptr->td_regs.r13 &&
        tdvps_ptr->guest_state.gpr_state.r14 == tdx_local_data_ptr->td_regs.r14 &&
        tdvps_ptr->guest_state.gpr_state.r15 == tdx_local_data_ptr->td_regs.r15
    );
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = tdx_local_data_ptr->td_regs.rax;
    bool_t leaf_opcode_reserved_is_valid = (
        (leaf_opcode.reserved0 == 0) &&
        (leaf_opcode.reserved1 == 0)
    );
    bool_t leaf_opcode_with_multi_versions = (
        (leaf_opcode.version == 0) ||
        (leaf_opcode.leaf == TDG_VM_RD_LEAF)
    );
    assume_exit_if_not(valid_vm_id && save_td_gpr_state && leaf_opcode_reserved_is_valid && leaf_opcode_with_multi_versions);
}
void init_tdg_vm_xxx() {
    fv_setup_module_state();
    fv_setup_tdcs();
    fv_setup_tdvps();
    init_tdcall();
}
void close_tdg_vm_xxx_with_check() {
    fv_teardown_with_check_tdvps();
    fv_teardown_with_check_tdcs();
    fv_teardown_with_check_module_state();
}
typedef struct
{
    cpuid_config_leaf_subleaf_t leaf_subleaf;
    bool_t valid_entry;
    bool_t faulting;
    cpuid_config_return_values_t verify_mask;
    cpuid_config_return_values_t verify_value;
    cpuid_config_return_values_t verify_same;
    cpuid_config_return_values_t fixed0_or_dynamic;
    cpuid_config_return_values_t fixed1;
    uint32_t config_index;
} cpuid_lookup_t;
typedef struct
{
    cpuid_config_leaf_subleaf_t leaf_subleaf;
    bool_t valid_entry;
    cpuid_config_return_values_t config_direct;
    cpuid_config_return_values_t allow_direct;
    uint32_t lookup_index;
} cpuid_configurable_t;
extern const cpuid_lookup_t cpuid_lookup[68];
extern const cpuid_configurable_t cpuid_configurable[18];
const cpuid_lookup_t cpuid_lookup[68] = {
 [10] = { .leaf_subleaf = {.leaf = 0x0, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .verify_value = { .ebx = 0x756e6547, .ecx = 0x6c65746e, .edx = 0x49656e69 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed1 = { .eax = 0x23 },
  .fixed0_or_dynamic = { .eax = 0xffffffdc },
  .config_index = 0xFFFFFFFF
  },
 [0] = { .leaf_subleaf = {.leaf = 0x1, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .ebx = 0xff00, .ecx = 0x47faa217, .edx = 0x1fa9fbff },
  .verify_value = { .ebx = 0x800, .ecx = 0x47faa217, .edx = 0x1fa9fbff },
  .verify_same = { .eax = 0xf000c000, .ebx = 0xffff, .ecx = 0xf7ffff9f, .edx = 0xffffffff },
  .fixed1 = { .ecx = 0x80000000, .edx = 0x200 },
  .fixed0_or_dynamic = { .eax = 0xf000c000, .ebx = 0xff0000ff, .ecx = 0x8010060, .edx = 0x40120400 },
  .config_index = 0
  },
 [11] = { .leaf_subleaf = {.leaf = 0x3, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [1] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .ebx = 0xfff },
  .verify_value = { .ebx = 0x3f },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0x4 },
  .config_index = 1
  },
 [2] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .ebx = 0xfff },
  .verify_value = { .ebx = 0x3f },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0x4 },
  .config_index = 2
  },
 [3] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .ebx = 0xfff },
  .verify_value = { .ebx = 0x3f },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0x4 },
  .config_index = 3
  },
 [4] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x3},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0xe0, .ebx = 0xfff, .edx = 0x1 },
  .verify_value = { .eax = 0x60, .ebx = 0x3f, .edx = 0x0 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0x3c00, .edx = 0xfffffff8 },
  .config_index = 4
  },
 [12] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x4},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0x1f },
  .verify_value = { .eax = 0x0 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [63] = { .leaf_subleaf = {.leaf = 0x5, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xffff0000, .ebx = 0xffff0000, .ecx = 0xfffffffc },
  .config_index = 0xFFFFFFFF
  },
 [13] = { .leaf_subleaf = {.leaf = 0x6, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .faulting = ((bool_t)1),
  .verify_mask = { .eax = 0x800000 },
  .verify_value = { .eax = 0x0 },
  .verify_same = { .eax = 0x800000 },
  .config_index = 0xFFFFFFFF
  },
 [5] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0xffffffff, .ebx = 0x219424c3, .ecx = 0x99000000, .edx = 0xfc082600 },
  .verify_value = { .eax = 0x2, .ebx = 0x219424c3, .ecx = 0x99000000, .edx = 0xfc080400 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xfffffffb, .ecx = 0xbfc1ff6f, .edx = 0xffebffff },
  .fixed0_or_dynamic = { .ebx = 0x404006, .ecx = 0x643e8010, .edx = 0x2298c3 },
  .config_index = 5
  },
 [6] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xfbffe28f, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xfffffbcf },
  .config_index = 6
  },
 [14] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .edx = 0x17 },
  .verify_value = { .edx = 0x17 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffc0 },
  .config_index = 10
  },
 [15] = { .leaf_subleaf = {.leaf = 0x8, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [7] = { .leaf_subleaf = {.leaf = 0xa, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0xff00, .ecx = 0xfffffff0, .edx = 0x8000 },
  .verify_value = { .eax = 0x800, .ecx = 0x0, .edx = 0x8000 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffff6000 },
  .config_index = 7
  },
 [64] = { .leaf_subleaf = {.leaf = 0xb, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [65] = { .leaf_subleaf = {.leaf = 0xb, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [66] = { .leaf_subleaf = {.leaf = 0xb, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0, .edx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [16] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0x3 },
  .verify_value = { .eax = 0x3 },
  .verify_same = { .eax = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xfff9fd18, .ebx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [17] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0xf, .ecx = 0x1800 },
  .verify_value = { .eax = 0xf, .ecx = 0x1800 },
  .verify_same = { .eax = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffffffff, .ecx = 0xffff26ff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [18] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [19] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x3},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [20] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x4},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [21] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x5},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [22] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x6},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [23] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x7},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [24] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x8},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [25] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x9},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [26] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xa},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [27] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xb},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [28] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xc},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [29] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xd},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [30] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xe},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [31] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0xf},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [32] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x10},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [33] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x11},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [34] = { .leaf_subleaf = {.leaf = 0xd, .subleaf = 0x12},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [35] = { .leaf_subleaf = {.leaf = 0xe, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [36] = { .leaf_subleaf = {.leaf = 0x11, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [37] = { .leaf_subleaf = {.leaf = 0x12, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [38] = { .leaf_subleaf = {.leaf = 0x13, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [39] = { .leaf_subleaf = {.leaf = 0x14, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0xffffffff },
  .verify_value = { .eax = 0x1 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .ebx = 0xfffffe00, .ecx = 0x7ffffff0, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [40] = { .leaf_subleaf = {.leaf = 0x14, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xfff8, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [41] = { .leaf_subleaf = {.leaf = 0x15, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed1 = { .eax = 0x1, .ecx = 0x17d7840 },
  .fixed0_or_dynamic = { .eax = 0xfffffffe, .ecx = 0xfe8287bf, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [42] = { .leaf_subleaf = {.leaf = 0x19, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xfffffffe, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xfffffff8, .ebx = 0xffffffeb, .ecx = 0xfffffffd, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [67] = { .leaf_subleaf = {.leaf = 0x1a, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [8] = { .leaf_subleaf = {.leaf = 0x1c, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 8
  },
 [43] = { .leaf_subleaf = {.leaf = 0x1d, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [44] = { .leaf_subleaf = {.leaf = 0x1d, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [45] = { .leaf_subleaf = {.leaf = 0x1e, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [46] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 12
  },
 [47] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 13
  },
 [48] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 14
  },
 [49] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x3},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 15
  },
 [50] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x4},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 16
  },
 [51] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x5},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .ecx = 0xff00 },
  .verify_value = { .ecx = 0x0 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff },
  .fixed1 = { .eax = 0x0, .ebx = 0x0, .ecx = 0x0 },
  .fixed0_or_dynamic = { .eax = 0xffffffe0, .ebx = 0xffff0000, .ecx = 0xffff0000, .edx = 0xffffffff },
  .config_index = 17
  },
 [52] = { .leaf_subleaf = {.leaf = 0x20, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [53] = { .leaf_subleaf = {.leaf = 0x21, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .fixed1 = { .eax = 0x0, .ebx = 0x65746e49, .ecx = 0x20202020, .edx = 0x5844546c },
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0x9a8b91b6, .ecx = 0xdfdfdfdf, .edx = 0xa7bbab93 },
  .config_index = 0xFFFFFFFF
  },
 [58] = { .leaf_subleaf = {.leaf = 0x22, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [59] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xfffffff0, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 11
  },
 [60] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0xffffff00, .ebx = 0xfffffff0 },
  .verify_value = { .eax = 0x0, .ebx = 0x0 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [61] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [62] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x3},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [54] = { .leaf_subleaf = {.leaf = 0x80000000, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed1 = { .eax = 0x80000008 },
  .fixed0_or_dynamic = { .eax = 0x7ffffff7, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 0xFFFFFFFF
  },
 [55] = { .leaf_subleaf = {.leaf = 0x80000001, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .ecx = 0x121, .edx = 0x2c100800 },
  .verify_value = { .ecx = 0x121, .edx = 0x2c100800 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xfffffede, .edx = 0xd3efffff },
  .config_index = 0xFFFFFFFF
  },
 [56] = { .leaf_subleaf = {.leaf = 0x80000006, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .faulting = ((bool_t)1),
  .verify_mask = { .ecx = 0xff },
  .verify_value = { .ecx = 0x40 },
  .verify_same = { .ecx = 0xff },
  .config_index = 0xFFFFFFFF
  },
 [57] = { .leaf_subleaf = {.leaf = 0x80000007, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .edx = 0x100 },
  .verify_value = { .edx = 0x100 },
  .verify_same = { .edx = 0x100 },
  .fixed0_or_dynamic = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xfffffeff },
  .config_index = 0xFFFFFFFF
  },
 [9] = { .leaf_subleaf = {.leaf = 0x80000008, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .verify_mask = { .eax = 0xff, .ebx = 0x200 },
  .verify_value = { .eax = 0x34, .ebx = 0x200 },
  .verify_same = { .eax = 0xffffffff, .ebx = 0xffffffff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .fixed0_or_dynamic = { .eax = 0xffff0000, .ebx = 0xfffffdff, .ecx = 0xffffffff, .edx = 0xffffffff },
  .config_index = 9
  }
};
const cpuid_configurable_t cpuid_configurable[18] = {
 [0] = { .leaf_subleaf = {.leaf = 0x1, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0xfff3fff, .ebx = 0xff0000 },
  .allow_direct = { .ecx = 0x31044d88, .edx = 0xb8440000 },
  .lookup_index = 0
  },
 [1] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0xfffffffb },
  .lookup_index = 1
  },
 [2] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0xfffffffb },
  .lookup_index = 2
  },
 [3] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0xfffffffb },
  .lookup_index = 3
  },
 [4] = { .leaf_subleaf = {.leaf = 0x4, .subleaf = 0x3},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0xffffc3ff, .ebx = 0xfffff000, .ecx = 0xffffffff, .edx = 0x7 },
  .lookup_index = 4
  },
 [5] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .allow_direct = { .ebx = 0xdc2b9b18, .ecx = 0x2417f65, .edx = 0x5411c },
  .lookup_index = 5
  },
 [6] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .allow_direct = { .eax = 0x4001d30, .edx = 0x430 },
  .lookup_index = 6
  },
 [10] = { .leaf_subleaf = {.leaf = 0x7, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .allow_direct = { .edx = 0x28 },
  .lookup_index = 14
  },
 [7] = { .leaf_subleaf = {.leaf = 0xa, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .lookup_index = 7
  },
 [8] = { .leaf_subleaf = {.leaf = 0x1c, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .allow_direct = { .eax = 0xff },
  .lookup_index = 8
  },
 [12] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },
  .lookup_index = 46
  },
 [13] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x1},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },
  .lookup_index = 47
  },
 [14] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x2},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },
  .lookup_index = 48
  },
 [15] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x3},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },
  .lookup_index = 49
  },
 [16] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x4},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },
  .lookup_index = 50
  },
 [17] = { .leaf_subleaf = {.leaf = 0x1f, .subleaf = 0x5},
  .valid_entry = ((bool_t)1),
  .config_direct = { .eax = 0x1f, .ebx = 0xffff, .ecx = 0xffff },
  .lookup_index = 51
  },
 [11] = { .leaf_subleaf = {.leaf = 0x23, .subleaf = 0x0},
  .valid_entry = ((bool_t)1),
  .allow_direct = { .eax = 0xf },
  .lookup_index = 59
  },
 [9] = { .leaf_subleaf = {.leaf = 0x80000008, .subleaf = 0xffffffff},
  .valid_entry = ((bool_t)1),
  .allow_direct = { .ebx = 0x200 },
  .lookup_index = 9
  }
};
typedef enum
{
    MD_WRITE_ACCESS = 0x1,
    MD_HOST_RD = 0x10,
    MD_HOST_WR = MD_HOST_RD | MD_WRITE_ACCESS,
    MD_GUEST_RD = 0x20,
    MD_GUEST_WR = MD_GUEST_RD | MD_WRITE_ACCESS,
    MD_SERV_TD_RD = 0x30,
    MD_SERV_TD_WR = MD_SERV_TD_RD | MD_WRITE_ACCESS,
    MD_EXPORT_IMMUTABLE = 0x40,
    MD_EXPORT_MUTABLE = 0x50,
    MD_IMPORT_IMMUTABLE = MD_EXPORT_IMMUTABLE | MD_WRITE_ACCESS,
    MD_IMPORT_MUTABLE = MD_EXPORT_MUTABLE | MD_WRITE_ACCESS
} md_access_t;
typedef enum mig_type_e
{
    MIG_NONE,
    MIG_ME,
    MIG_MEO,
    MIG_MEC,
    MIG_MB,
    MIG_MBO,
    MIG_MBCO,
    MIG_IE,
    MIG_IES,
    MIG_IEME,
    MIG_IESME,
    MIG_IB,
    MIG_IBS,
    MIG_CB,
    MIG_CBO,
    MIG_CE,
    MIG_CEO
} mig_type_t;
typedef union md_access_qualifier_u
{
    struct
    {
        bool_t debug;
    } host_qualifier;
    struct
    {
        uint16_t service_td_type;
    } serv_td_qualifier;
    uint64_t raw;
} md_access_qualifier_t;
typedef enum
{
    MD_CTX_SYS = 0,
    MD_CTX_TD = 1,
    MD_CTX_VP = 2,
    MD_CTX_MAX = MD_CTX_VP
} md_context_code_e;
typedef union md_field_attributes_u
{
    struct
    {
        uint8_t hpa : 1;
        uint8_t gpa : 1;
        uint8_t prvate : 1;
        uint8_t shared : 1;
        uint8_t vm_app_l1 : 1;
        uint8_t vm_app_l2 : 1;
    };
    uint8_t raw;
} md_field_attributes_t;
typedef struct md_lookup_s
{
    md_field_id_t field_id;
    uint16_t num_of_fields;
    uint16_t num_of_elem;
    uint32_t offset;
    union
    {
        uint64_t prod_rd_mask;
        uint64_t vmm_rd_mask;
    };
    union
    {
        uint64_t prod_wr_mask;
        uint64_t vmm_wr_mask;
    };
    uint64_t dbg_rd_mask;
    uint64_t dbg_wr_mask;
    union
    {
        uint64_t guest_rd_mask;
        uint64_t l1_vmm_rd_mask;
    };
    union
    {
        uint64_t guest_wr_mask;
        uint64_t l1_vmm_wr_mask;
    };
    uint64_t migtd_rd_mask;
    uint64_t migtd_wr_mask;
    uint64_t export_mask;
    uint64_t import_mask;
    mig_type_t mig_export;
    mig_type_t mig_import;
    md_field_attributes_t attributes;
    bool_t special_rd_handling;
    bool_t special_wr_handling;
} md_lookup_t;
typedef struct md_context_ptrs_s
{
    tdr_t* tdr_ptr;
    tdcs_t* tdcs_ptr;
    tdvps_t* tdvps_ptr;
} md_context_ptrs_t;
const md_lookup_t* md_get_lookup_table(md_context_code_e ctx_code, md_field_id_t field_id,
                                       md_context_ptrs_t md_ctx, uint32_t* num_of_entries);
uint32_t md_find_entry_idx(const md_lookup_t* lookup_table, uint32_t num_of_entries, md_field_id_t field_id);
void md_get_rd_wr_mask(const md_lookup_t* entry, md_access_t access_type, md_access_qualifier_t access_qual,
        uint64_t* out_rd_mask, uint64_t* out_wr_mask);
void md_cpuid_field_id_get_leaf_subleaf(md_field_id_t field_id, uint32_t* leaf, uint32_t* subleaf);
static inline bool_t is_null_field_id(md_field_id_t field_id)
{
    return ((field_id.raw | (((uint64_t)(1ULL<<(54)) - (uint64_t)(1ULL<<(52)) + (uint64_t)(1ULL<<(54))))) == ((uint64_t)(-1ULL)));
}
static inline uint64_t md_get_element_size_mask(uint64_t size_code)
{
    uint64_t mask = 0;
                                   ;
    if (size_code < 3)
    {
        mask = (uint64_t)(1ULL<<(8ULL * (uint64_t)(1ULL<<(size_code)))) - 1ULL;
    }
    else
    {
        mask = 0xFFFFFFFFFFFFFFFFULL;
    }
    return mask;
}
static inline bool_t md_check_forbidden_bits_unchanged(uint64_t original_value, uint64_t wr_value,
                                                         uint64_t wr_request_mask, uint64_t entry_wr_mask)
{
    uint64_t forbidden_mask = wr_request_mask & ~entry_wr_mask;
    return ((original_value & forbidden_mask) == (wr_value & forbidden_mask));
}
api_error_code_e md_check_as_single_element_id(md_field_id_t field_id);
md_field_id_t md_get_next_element_in_context(md_context_code_e ctx_code, md_field_id_t field_id,
                                             md_context_ptrs_t md_ctx,
                                             md_access_t access_type, md_access_qualifier_t access_qual);
api_error_code_e md_read_element(md_context_code_e ctx_code, md_field_id_t field_id,
        md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* value);
api_error_code_e md_write_element(md_context_code_e ctx_code, md_field_id_t field_id,
         md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,
         uint64_t value, uint64_t wr_mask, uint64_t* old_value);
extern const md_lookup_t global_sys_lookup[66];
const md_lookup_t global_sys_lookup[66] = {
 {
   .field_id = { .raw = 0x0000000200000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x0000000200000001 },
   .num_of_fields = 8, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x0800000200000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x8800000200000001 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x8800000100000002 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x0800000100000003 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x0800000100000004 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x0800000100000005 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x0800000100000006 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x8900000100000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8900000100000001 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8900000000000002 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8900000100000003 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8900000000000004 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8900000100000005 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8900000200000006 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x0A00000200000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x0A00000000000001 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x0A00000300000008 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_CBO
 },
 {
   .field_id = { .raw = 0x9000000100000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9000000300000080 },
   .num_of_fields = 32, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9000000300000100 },
   .num_of_fields = 32, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9100000100000008 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9100000100000009 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9100000100000010 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9100000100000011 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9100000100000012 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9800000100000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9800000100000100 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9800000100000101 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9800000100000200 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9800000100000201 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x1900000300000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x1900000300000001 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x1900000300000002 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x1900000300000003 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000100000004 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000300000006 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000300000007 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000100000008 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000300000400 },
   .num_of_fields = 32, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000300000500 },
   .num_of_fields = 32, .num_of_elem = 2,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000300000600 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000100000800 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000100000801 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000300000810 },
   .num_of_fields = 64, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9900000300000850 },
   .num_of_fields = 64, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA000000300000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x2000000100000001 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x2000000100000002 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x2000000100000003 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x2000000100000004 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA000000100000010 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA000000000000020 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA000000000000021 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA000000000000022 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFULL), .vmm_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA100000100000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA100000300000001 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA100000300000002 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA200000100000000 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA200000300000001 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA200000300000002 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA200000300000003 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA200000300000004 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA200000300000005 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA200000300000006 },
   .num_of_fields = 1, .num_of_elem = 1,
   .vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 }
};
extern const md_lookup_t td_l2_vmcs_lookup[144];
const md_lookup_t td_l2_vmcs_lookup[144] = {
 {
   .field_id = { .raw = 0x0024000100000000 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000002 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400010000080A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400010000080C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400010000080E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000810 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000812 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002000 },
   .num_of_fields = 2, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002008 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000200A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000200C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000200E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709547520ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002010 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002012 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x6 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (18446744073709547520ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300002014 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002016 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002018 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000201A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (128ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (128ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (128ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x002400030000201C },
   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002024 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002026 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002028 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000202A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x6 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000202C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000202E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002032 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002034 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (14ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (14ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300002036 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002038 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000203A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000203C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },
   .prod_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x002400030000203E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002040 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x6 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4503599627366424ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (4503599627366424ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (4503599627366424ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000204A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000204C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002400 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (18446744073709543423ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (18446744073709543423ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300002804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (1281ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1281ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000280A },
   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x6 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002816 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002818 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004000 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004002 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (1771674116ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (1222220292ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (1224317444ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000200004004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004008 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000400A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000400C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000400E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004010 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004012 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (512ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (512ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004014 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004016 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004018 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000401A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000401C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000401E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (3221225472ULL & 0xFFFFFFFFULL), .prod_wr_mask = (3221225472ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (3222473732ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (206650892ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (206651148ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000200004020 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000200004022 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000200004024 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004026 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004400 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004402 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004404 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004406 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004408 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000440A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000440C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000440E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000480A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000480C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000480E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004810 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004812 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004816 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004818 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000481A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000481C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000481E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004820 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004822 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004824 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004826 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004828 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000482A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000482E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006000 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006002 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006008 },
   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006400 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006402 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006404 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006406 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006408 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000640A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (2147811359ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (2147811359ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (2147811391ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (469704639ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (469704639ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (469704639ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000680A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000680C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000680E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006810 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006812 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006816 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006818 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000681A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000681C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000681E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006820 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006822 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006824 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006826 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006828 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000682A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000682C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C08 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C14 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C16 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C1A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .l1_vmm_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .l1_vmm_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 }
};
extern const md_lookup_t td_vmcs_lookup[144];
const md_lookup_t td_vmcs_lookup[144] = {
 {
   .field_id = { .raw = 0x0024000100000000 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000002 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000100000004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400010000080A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400010000080C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400010000080E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000810 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000812 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000100000814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (65535ULL & 0xFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002000 },
   .num_of_fields = 2, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002008 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000200A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000200C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000200E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709547520ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002010 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002012 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002014 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x1 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002016 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (18446744073709551552ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709551552ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300002018 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000201A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000201C },
   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002024 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002026 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002028 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000202A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000202C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000202E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002032 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002034 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002036 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002038 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000203A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000203C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x9 },
   .prod_rd_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4503599627366400ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x002400030000203E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002040 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000204A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000204C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002400 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (18446744073709543423ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (65479ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300002804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000280A },
   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x6 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002816 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300002818 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004000 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (128ULL & 0xFFFFFFFFULL), .prod_wr_mask = (128ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (128ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000200004002 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (1771674116ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (18446744073709289471ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004008 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000400A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000400C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000400E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004010 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004012 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (512ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004014 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004016 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004018 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000401A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000401C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000401E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (3221225472ULL & 0xFFFFFFFFULL), .prod_wr_mask = (3221225472ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (4294967295ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (3222473732ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000200004020 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004022 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004024 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000200004026 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004400 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004402 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004404 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004406 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004408 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000440A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000440C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000440E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000480A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000480C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000480E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004810 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004812 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004816 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004818 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000481A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000481C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000481E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004820 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004822 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004824 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004826 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000200004828 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000482A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400020000482E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006000 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938846ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006002 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709526975ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006004 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709551582ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006006 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709551551ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006008 },
   .num_of_fields = 4, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006400 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006402 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006404 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006406 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006408 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000640A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006800 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006802 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006804 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_IESME,
   .special_rd_handling = ((bool_t)1),
   .special_wr_handling = ((bool_t)1)
 },
 {
   .field_id = { .raw = 0x0024000300006806 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006808 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000680A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000680C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000680E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006810 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006812 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006814 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006816 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006818 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000681A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000681C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000681E },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006820 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006822 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006824 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006826 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006828 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000682A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x002400030000682C },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18446744073709551615ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_ME, .mig_import = MIG_ME,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C08 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C14 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C16 },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x0024000300006C1A },
   .num_of_fields = 1, .num_of_elem = 1, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .mig_export = MIG_NONE, .mig_import = MIG_IES,
   .special_rd_handling = ((bool_t)0),
   .special_wr_handling = ((bool_t)0)
 }
};
extern const md_lookup_t tdr_tdcs_lookup[85];
const md_lookup_t tdr_tdcs_lookup[85] = {
 {
   .field_id = { .raw = 0x8010000000000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .migtd_rd_mask = (0ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8010000200000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0004, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8010000300000004 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0008, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8010000200000005 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0010, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8010000300000010 },
   .num_of_fields = 9, .num_of_elem = 1, .offset = 0x0018, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8010000300000020 },
   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0060, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x8110000100000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0100, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8110000300000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0108, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8210000100000000 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0140, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8210000300000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0148, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x8210000300000002 },
   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0150, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9010000200000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9010000200000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0004, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x9010000200000004 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0008, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9010000100000005 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0010, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1110000300000000 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0080, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1110000300000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0088, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1110000200000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0090, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1110000000000003 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0094, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1110000300000004 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0098, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (18442240474082185215ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x111000030000000A },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00A8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IE
 },
 {
   .field_id = { .raw = 0x111000030000000B },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00B0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IE
 },
 {
   .field_id = { .raw = 0x111000010000000C },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00B8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x111000030000000D },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00BA, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x911000010000000E },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00BA, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_CB
 },
 {
   .field_id = { .raw = 0x911000020000000F },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00DC, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x9110000300000010 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00E0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x9110000300000011 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x00E8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x9110000300000012 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x00F0, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x9110000300000016 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0118, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MBO
 },
 {
   .field_id = { .raw = 0x9110000300000017 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0120, .attributes = { .raw = 0x10 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_MEO
 },
 {
   .field_id = { .raw = 0x9110000000000019 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x012C, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MBO
 },
 {
   .field_id = { .raw = 0x9110000000000080 },
   .num_of_fields = 80, .num_of_elem = 1, .offset = 0x0134, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .migtd_rd_mask = (0ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9110000200000800 },
   .num_of_fields = 19, .num_of_elem = 1, .offset = 0x0190, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x9210000300000000 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0200, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x9210000100000001 },
   .num_of_fields = 2, .num_of_elem = 1, .offset = 0x0208, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x1310000300000000 },
   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x0240, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1310000300000010 },
   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x0270, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1310000300000018 },
   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x02A0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1310000300000020 },
   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x02D0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x1310000300000040 },
   .num_of_fields = 4, .num_of_elem = 6, .offset = 0x0300, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x9410000300000000 },
   .num_of_fields = 80, .num_of_elem = 2, .offset = 0x0800, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MBO
 },
 {
   .field_id = { .raw = 0x961000030000010A },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0778, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000480 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0700, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000485 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0708, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000486 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0710, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000487 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0718, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000488 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0720, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000489 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0728, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x961000030000048B },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0730, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x961000030000048C },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0738, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x961000030000048D },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0740, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x961000030000048E },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0748, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x961000030000048F },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0750, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000490 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0758, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000491 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0760, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000492 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0768, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9610000300000493 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0770, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9810000000000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0580, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .migtd_rd_mask = (0ULL & 0xFFULL), .migtd_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000200000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0584, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MB
 },
 {
   .field_id = { .raw = 0x9810000200000003 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0588, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x9810000200000004 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x058C, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000300000005 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0590, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000300000006 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0598, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000300000010 },
   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x05A0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000300000014 },
   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x05C0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000300000018 },
   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x05E0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x981000030000001C },
   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0600, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000100000020 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0620, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (-1ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000100000021 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0622, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000300000030 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0628, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000300000031 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0630, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000100000032 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0638, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9810000200000034 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x063C, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x9810000300000040 },
   .num_of_fields = 1, .num_of_elem = 4, .offset = 0x0640, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9910000300000000 },
   .num_of_fields = 1, .num_of_elem = 6, .offset = 0x0D00, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x9910000100000006 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0D30, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_MB, .mig_import = MIG_CB
 },
 {
   .field_id = { .raw = 0x9910000300000080 },
   .num_of_fields = 1, .num_of_elem = 16, .offset = 0x0D90, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9A10000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x5000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x9C10000200000000 },
   .num_of_fields = 576, .num_of_elem = 1, .offset = 0x1100, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .migtd_rd_mask = (-1ULL & 0xFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_MB, .mig_import = MIG_MBO
 },
 {
   .field_id = { .raw = 0x2010000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x2000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x2110000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x3000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IBS
 },
 {
   .field_id = { .raw = 0x2510000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x6000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x2910000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x7000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x2D10000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x8000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .migtd_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .migtd_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 }
};
extern const md_lookup_t tdvps_lookup[119];
const md_lookup_t tdvps_lookup[119] = {
 {
   .field_id = { .raw = 0x0120000300000000 },
   .num_of_fields = 128, .num_of_elem = 1, .offset = 0x2000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x0220000200000000 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x0220000200000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0004, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x0220000300000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0008, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x0220000300000003 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0010, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x0220000300000004 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0018, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x0220000100000005 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0020, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x8220000200000010 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0024, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x8220000200000011 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0028, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000000 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0980, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0988, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0990, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000003 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0998, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000004 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09A0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000005 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09A8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000006 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09B0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000007 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09B8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000008 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09C0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1020000300000009 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09C8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x102000030000000A },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09D0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x102000030000000B },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09D8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x102000030000000C },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09E0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x102000030000000D },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09E8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x102000030000000E },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09F0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x102000030000000F },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x09F8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1120000300000000 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A00, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1120000300000001 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A08, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1120000300000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A10, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1120000300000003 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A18, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1120000300000006 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A20, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (4294967295ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (4294967295ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1120000300000020 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A28, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1120000300000028 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A30, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x9120000300000100 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A78, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0x1220000300000000 },
   .num_of_fields = 1536, .num_of_elem = 1, .offset = 0x3000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300000048 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A80, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000000E1 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A88, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300000122 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0A90, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300000186 },
   .num_of_fields = 8, .num_of_elem = 1, .offset = 0x0A98, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000001A6 },
   .num_of_fields = 2, .num_of_elem = 1, .offset = 0x0AD8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000001C4 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0AE8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000001C5 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0AF0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300000309 },
   .num_of_fields = 7, .num_of_elem = 1, .offset = 0x0AF8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300000329 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B30, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x132000030000038D },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B38, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x132000030000038E },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B40, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000003F1 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B48, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000003F2 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B50, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000003F6 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B58, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000003F7 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0B60, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000004C1 },
   .num_of_fields = 8, .num_of_elem = 1, .offset = 0x0B68, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300000600 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0BA8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300000DA0 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C70, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x13200003000014CF },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C78, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300001B01 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C80, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300002081 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C88, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300002082 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C90, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300002084 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0C98, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300002102 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0CA0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x1320000300002103 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0CA8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000000000000 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0100, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000200000002 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0102, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000000000003 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0107, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA020000200000004 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01C8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000006 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01D0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000000000007 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01D8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (-1ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000000000008 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01D9, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (-1ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA02000030000000A },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01E0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0x202000000000000B },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01E8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFULL), .prod_wr_mask = (-1ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (-1ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0x202000030000000C },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01F0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA02000000000000D },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01F8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA02000000000000E },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01F9, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA02000000000000F },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0101, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000300000010 },
   .num_of_fields = 15, .num_of_elem = 1, .offset = 0x0108, .attributes = { .raw = 0x5 },
   .prod_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA020000300000030 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0200, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000000000031 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0208, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000032 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x020E, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA020000000000040 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x01E9, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000100000041 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0216, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (-1ULL & 0xFFFFULL), .import_mask = (-1ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000000000042 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x0218, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (-1ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000000000044 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x021A, .attributes = { .raw = 0x30 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000000000048 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x021E, .attributes = { .raw = 0x30 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA02000000000004C },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0222, .attributes = { .raw = 0x30 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000050 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0228, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (3ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000300000054 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0248, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (7ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (7ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA020000300000058 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0268, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA02000030000005C },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0288, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000080 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02A8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938847ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000081 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02B0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938847ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000082 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02B8, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744073709526975ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000083 },
   .num_of_fields = 1, .num_of_elem = 1, .offset = 0x02C0, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (18446744072098938847ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000084 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x02C8, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000088 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x02E8, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA02000030000008C },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0308, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000090 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0328, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000200000094 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0348, .attributes = { .raw = 0x30 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000098 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0358, .attributes = { .raw = 0x19 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA02000020000009C },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0378, .attributes = { .raw = 0x10 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA0200002000000A4 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0388, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA0200002000000A8 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0398, .attributes = { .raw = 0x20 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA0200001000000AC },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03A8, .attributes = { .raw = 0x10 },
   .prod_rd_mask = (0ULL & 0xFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFULL),
   .export_mask = (0ULL & 0xFFFFULL), .import_mask = (0ULL & 0xFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA0200002000000B0 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03B0, .attributes = { .raw = 0x30 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA0200003000000B4 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03C0, .attributes = { .raw = 0x39 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000100 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x03E0, .attributes = { .raw = 0x26 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000104 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0400, .attributes = { .raw = 0x25 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000108 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0420, .attributes = { .raw = 0x26 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA02000030000010C },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0440, .attributes = { .raw = 0x25 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000110 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0460, .attributes = { .raw = 0x26 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA020000300000114 },
   .num_of_fields = 4, .num_of_elem = 1, .offset = 0x0480, .attributes = { .raw = 0x25 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0xA120000000000000 },
   .num_of_fields = 128, .num_of_elem = 1, .offset = 0x0900, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (-1ULL & 0xFFULL), .guest_wr_mask = (3ULL & 0xFFULL),
   .export_mask = (-1ULL & 0xFFULL), .import_mask = (3ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_ME, .mig_import = MIG_ME
 },
 {
   .field_id = { .raw = 0xA220000300000200 },
   .num_of_fields = 32, .num_of_elem = 1, .offset = 0x0700, .attributes = { .raw = 0x6 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0x2420000000000000 },
   .num_of_fields = 4096, .num_of_elem = 1, .offset = 0x6000,
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (0ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x2520000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x7000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xA620000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0x8000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0x2C20000000000000 },
   .num_of_fields = 4096, .num_of_elem = 1, .offset = 0x9000,
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (0ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x2D20000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xA000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xAE20000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xB000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 },
 {
   .field_id = { .raw = 0x3420000000000000 },
   .num_of_fields = 4096, .num_of_elem = 1, .offset = 0xC000,
   .prod_rd_mask = (0ULL & 0xFFULL), .prod_wr_mask = (0ULL & 0xFFULL),
   .dbg_rd_mask = (0ULL & 0xFFULL), .dbg_wr_mask = (0ULL & 0xFFULL),
   .guest_rd_mask = (0ULL & 0xFFULL), .guest_wr_mask = (0ULL & 0xFFULL),
   .export_mask = (0ULL & 0xFFULL), .import_mask = (0ULL & 0xFFULL),
   .special_rd_handling = ((bool_t)0), .special_wr_handling = ((bool_t)0)
 },
 {
   .field_id = { .raw = 0x3520000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xD000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)1),
   .mig_export = MIG_NONE, .mig_import = MIG_NONE
 },
 {
   .field_id = { .raw = 0xB620000300000000 },
   .num_of_fields = 512, .num_of_elem = 1, .offset = 0xE000, .attributes = { .raw = 0x0 },
   .prod_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .prod_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .dbg_rd_mask = (-1ULL & 0xFFFFFFFFFFFFFFFFULL), .dbg_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .guest_rd_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .guest_wr_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .export_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL), .import_mask = (0ULL & 0xFFFFFFFFFFFFFFFFULL),
   .special_rd_handling = ((bool_t)1), .special_wr_handling = ((bool_t)0),
   .mig_export = MIG_NONE, .mig_import = MIG_IES
 }
};
extern const fms_info_t allowed_fms[6];
extern const fms_info_t disallowed_fms[6];
fms_info_t get_allowed_fms(uint16_t index);
uint16_t get_num_allowed_fms(void);
const fms_info_t allowed_fms[6] = {
        { .raw = (0xD06D0 | 0x0) },
        { .raw = (0xA06E0 | 0x0) },
        { .raw = (0xA06D0 | 0x0) },
        { .raw = (0xA06F0 | 0x3) },
        { .raw = (0xC06F0 | 0x2) },
        { .raw = (0x806F0 | 0x8) },
};
const fms_info_t disallowed_fms[6] = { 0 };
static bool_t are_equal_family_and_model(fms_info_t fms_config1, fms_info_t fms_config2)
{
    return ((fms_config1.raw & ~0x0000000FULL) == (fms_config2.raw & ~0x0000000FULL));
}
static uint16_t find_table_start(void)
{
    fms_info_t platform_fms = get_global_data()->platform_fms;
    for (uint16_t i = 0; i < 6; i++)
    {
        if (are_equal_family_and_model(platform_fms, allowed_fms[i]))
        {
            return i;
        }
    }
    { ; tdx_arch_fatal_error(); };
    return 0;
}
fms_info_t get_allowed_fms(uint16_t index)
{
    fms_info_t platform_fms = get_global_data()->platform_fms;
    if (index == 0)
    {
        return platform_fms;
    }
    uint16_t table_start = find_table_start();
    if ((table_start + index) >= 6)
    {
        fms_info_t zero_fms = { .raw = 0 };
        return zero_fms;
    }
    lfence();
    return allowed_fms[table_start + index];
}
uint16_t get_num_allowed_fms(void)
{
    uint16_t table_start = find_table_start();
    return (6 - table_start);
}

void tdx_report_error_and_halt(uint32_t source_id, uint32_t code)
{
    uint64_t error_code = (uint64_t)(((uint64_t)(source_id) << 32U) | (uint64_t)(code));
                                                                      ;
                                                           ;
    (void)(error_code);
    tdx_arch_fatal_error();
}
void tdx_arch_fatal_error( void )
{
    ia32_ud2();
}
typedef uint64_t vmcs_ptr_t;
static inline bool_t ia32_try_vmread(uint64_t encoding, uint64_t *value) {
                                        ;
    *value = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_bool();
}
static inline bool_t ia32_try_vmwrite(uint64_t encoding, uint64_t value)
{
                                        ;
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_bool();
}
static inline void ia32_vmread(uint64_t encoding, uint64_t *value) {
                                        ;
    *value = TDXFV_NONDET_uint64t();
}
static inline void ia32_vmwrite(uint64_t encoding, uint64_t value)
{
                                        ;
    TDXFV_ABST_incomplete();
}
static inline void ia32_vmptrld(vmcs_ptr_t *vmcs_p) {
    TDXFV_ABST_incomplete();
}


typedef long unsigned int size_t;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

static inline bool_t get_gpa_shared_bit(uint64_t gpa, bool_t gpaw)
{
    uint16_t gpa_width_minus_1 = gpaw ? 51 : 47;
    return (gpa & (uint64_t)(1ULL<<(gpa_width_minus_1))) != 0;
}
static inline uint64_t get_addr_from_pa(pa_t pa)
{
    return pa.full_pa & ~(get_global_data()->hkid_mask);
}
static inline uint16_t get_hkid_from_pa(pa_t pa)
{
    tdx_module_global_t* global_data = get_global_data();
    return (uint16_t)((pa.full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit);
}
static inline bool_t is_pa_smaller_than_max_pa(uint64_t pa)
{
    return (pa < (uint64_t)(1ULL<<(52ULL)));
}
static inline bool_t is_valid_integer_range(uint64_t base, uint64_t size)
{
    return (base <= (((((uint64_t)(1ULL<<(63)) - (uint64_t)(1ULL<<(0)) + (uint64_t)(1ULL<<(63))))) - size));
}
static inline bool_t is_overlap(uint64_t base, uint64_t size, uint64_t base2, uint64_t size2)
{
    if ( __builtin_expect((!is_valid_integer_range(base, size) || !is_valid_integer_range(base2, size2)), 0) )
    {
        { ; tdx_arch_fatal_error(); };
    }
    if ((base >= (base2 + size2)) || (base2 >= (base + size)))
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
void basic_memset(uint64_t dst, uint64_t dst_bytes, uint8_t val, uint64_t nbytes);
void basic_memset_to_zero(void * dst, uint64_t nbytes);
api_error_code_e shared_hpa_check(pa_t hpa, uint64_t size);
bool_t check_gpa_validity(
        pa_t gpa,
        bool_t gpaw,
        bool_t check_is_private
        );
uint32_t get_cpuid_lookup_entry(uint32_t leaf, uint32_t subleaf);
uint64_t calculate_virt_tsc(uint64_t native_tsc, uint64_t tsc_multiplier, uint64_t tsc_offset);
bool_t check_guest_xcr0_value(ia32_xcr0_t xcr0, uint64_t xfam);
bool_t generate_256bit_random(uint256_t* rand);
static inline uint64_t translate_usec_to_tsc(uint32_t time_usec, uint32_t tsc_frequency)
{
    uint64_t tsc = ((uint64_t)time_usec * (uint64_t)tsc_frequency) / 1000000ULL;
    return tsc;
}
static inline void set_vm_vmcs_as_active(tdvps_t* tdvps_p, uint16_t vm_id)
{
    if (get_local_data()->vp_ctx.active_vmcs != vm_id)
    {
        uint64_t vm_vmcs_pa = tdvps_p->management.tdvps_pa[get_tdvps_vmcs_page_index(vm_id)];
        ia32_vmptrld((vmcs_ptr_t*)vm_vmcs_pa);
        get_local_data()->vp_ctx.active_vmcs = vm_id;
    }
}


static inline uint64_t calculate_virt_ia32_spec_ctrl(const tdcs_t* tdcs_p, uint64_t msr_value)
{
    ia32_spec_ctrl_t spec_ctrl = { .raw = msr_value };
    tdx_module_global_t* global_data = get_global_data();
    if (global_data->ddpd_supported && !tdcs_p->executions_ctl_fields.cpuid_flags.ddpd_supported)
    {
        spec_ctrl.ddpd_u = 0;
    }
    return spec_ctrl.raw;
}
static inline uint64_t calculate_real_ia32_spec_ctrl(const tdcs_t* tdcs_p, uint64_t value)
{
    ia32_spec_ctrl_t spec_ctrl = { .raw = value };
    if (get_global_data()->ddpd_supported)
    {
        if (!tdcs_p->executions_ctl_fields.cpuid_flags.ddpd_supported)
        {
            spec_ctrl.ddpd_u = 1;
        }
    }
    else
    {
        spec_ctrl.ddpd_u = 0;
    }
    return spec_ctrl.raw;
}
void basic_memset(uint64_t dst, uint64_t dst_bytes, uint8_t val, uint64_t nbytes)
{
    if ( __builtin_expect((!(dst_bytes >= nbytes)), 0) ) { ; tdx_report_error_and_halt(0x0002, 2); };
    memset((void*)dst, val, nbytes);
}
void basic_memset_to_zero(void * dst, uint64_t nbytes)
{
    basic_memset((uint64_t)dst, nbytes, 0, nbytes);
}
api_error_code_e shared_hpa_check(pa_t hpa, uint64_t size)
{
    if (!is_pa_smaller_than_max_pa(hpa.raw))
    {
        return 0xC000010000000000ULL;
    }
    uint64_t seamrr_base = get_global_data()->seamrr_base;
    uint64_t seamrr_size = get_global_data()->seamrr_size;
    if (is_overlap(get_addr_from_pa(hpa), size, seamrr_base, seamrr_size))
    {
        return 0xC000010000000000ULL;
    }
    if ((uint64_t)get_hkid_from_pa(hpa) >= get_global_data()->private_hkid_min)
    {
        return 0xC000010000000000ULL;
    }
    return 0x0000000000000000ULL;
}
bool_t check_gpa_validity(
        pa_t gpa,
        bool_t gpaw,
        bool_t check_is_private
        )
{
    uint16_t gpa_width = gpaw ? 52 : 48;
    bool_t gpa_shared_bit = get_gpa_shared_bit(gpa.raw, gpaw);
    if (check_is_private && (gpa_shared_bit == ((bool_t)1)))
    {
        return ((bool_t)0);
    }
    if ((gpa.raw & ~(((uint64_t)(1ULL<<(52ULL -1)) - (uint64_t)(1ULL<<(0)) + (uint64_t)(1ULL<<(52ULL -1))))) != 0)
    {
        return ((bool_t)0);
    }
    if (!gpaw && (gpa.raw & (((uint64_t)(1ULL<<(52ULL -1)) - (uint64_t)(1ULL<<(gpa_width)) + (uint64_t)(1ULL<<(52ULL -1))))))
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
uint32_t get_cpuid_lookup_entry(uint32_t leaf, uint32_t subleaf)
{
    for (uint32_t i = 0; i < 68; i++)
    {
        if (cpuid_lookup[i].leaf_subleaf.leaf == leaf &&
            (cpuid_lookup[i].leaf_subleaf.subleaf == ((uint32_t)-1) ||
             cpuid_lookup[i].leaf_subleaf.subleaf == subleaf))
        {
            return i;
        }
    }
    return ((uint32_t)-1);
}
uint64_t calculate_virt_tsc(uint64_t native_tsc, uint64_t tsc_multiplier, uint64_t tsc_offset)
{
    uint128_t tmp_128b;
    tmp_128b = TDXFV_NONDET_uint128t();
    uint64_t tmp_64b;
    tmp_64b = (tmp_128b.qwords[1] << 16) | (tmp_128b.qwords[0] >> 48);
    return (tmp_64b + tsc_offset);
}
bool_t check_guest_xcr0_value(ia32_xcr0_t xcr0, uint64_t xfam)
{
    tdx_module_global_t* global_data_ptr = get_global_data();
    if ((xcr0.raw & ~(global_data_ptr->xcr0_supported_mask & xfam)) != 0)
    {
        return ((bool_t)0);
    }
    if (!xcr0.x87_fpu_mmx)
    {
        return ((bool_t)0);
    }
    if ((xcr0.avx && !xcr0.sse) ||
        (xcr0.avx3_kmask && !xcr0.avx) ||
        (xcr0.avx3_kmask != xcr0.avx3_zmm_hi) ||
        (xcr0.avx3_kmask != xcr0.avx3_zmm) ||
        (xcr0.amx_xtilecfg != xcr0.amx_xtiledata))
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
bool_t generate_256bit_random(uint256_t* rand)
{
    uint8_t successfull_randomizations = 0;
    for (uint8_t i = 0; i < get_global_data()->num_rdseed_retries; i++)
    {
        if (ia32_rdseed(&rand->qwords[successfull_randomizations]))
        {
            successfull_randomizations++;
            if (4 == successfull_randomizations)
            {
                break;
            }
        }
        for (uint8_t j = 0; j < get_global_data()->num_rdseed_pauses; j++)
        {
            ia32_pause();
        }
    }
    if (successfull_randomizations < 4)
    {
        basic_memset_to_zero(rand, sizeof(uint256_t));
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
api_error_code_e md_sys_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, uint64_t* out_rd_value);
api_error_code_e md_sys_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, uint64_t wr_value, uint64_t wr_request_mask,
        uint64_t* old_value);
api_error_code_e md_td_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* out_rd_value);
api_error_code_e md_td_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t wr_value, uint64_t wr_request_mask,
        uint64_t* old_value);
static inline uint16_t md_td_get_l2_vm_index(uint16_t class_code)
{
                                                                            ;
    return ((class_code - 37ULL) / 4) + 1;
};
api_error_code_e md_vp_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* out_rd_value);
api_error_code_e md_vp_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t wr_value, uint64_t wr_request_mask,
        uint64_t* old_value, bool_t return_old_val);
static inline uint16_t md_vp_get_l2_vm_index(uint16_t class_code)
{
                                                              ;
    return ((class_code - 36ULL) / 8) + 1;
};

static inline bool_t is_write_access_type(md_access_t access_type)
{
    return ((access_type & MD_WRITE_ACCESS) == MD_WRITE_ACCESS);
}
static inline bool_t is_special_cpuid_field_id(md_field_id_t field_id)
{
    if ( __builtin_expect(((field_id.context_code == MD_CTX_TD) && (field_id.class_code == 20ULL)), 0) )
    {
        return ((bool_t)1);
    }
    return ((bool_t)0);
}
static inline bool_t is_special_l2_vmcs_field_id(md_field_id_t field_id)
{
    if ( __builtin_expect(((field_id.context_code == MD_CTX_VP) && ((field_id.class_code == 36ULL) || (field_id.class_code == 44ULL) || (field_id.class_code == 52ULL))), 0) )
    {
        return ((bool_t)1);
    }
    return ((bool_t)0);
}
api_error_code_e md_check_as_single_element_id(md_field_id_t field_id)
{
    if ( __builtin_expect((field_id.reserved_0 != 0 || field_id.reserved_1 != 0 || field_id.reserved_2 != 0 || field_id.reserved_3 != 0 || field_id.last_element_in_field != 0 || field_id.last_field_in_sequence != 0), 0) )
    {
        return 0xC0000C0000000000ULL;
    }
    return 0x0000000000000000ULL;
}
static inline uint32_t md_get_num_of_td_vp_ctx_unused_entries(md_context_code_e ctx_code, md_context_ptrs_t md_ctx)
{
    uint32_t unused_vms = (4 - 1);
    uint32_t unused_entries = 0;
    if (md_ctx.tdcs_ptr != ((void*)0))
    {
        unused_vms = (4 - 1) - md_ctx.tdcs_ptr->management_fields.num_l2_vms;
    }
    switch (ctx_code)
    {
        case MD_CTX_TD:
            unused_entries = TDCS_PAGES_PER_L2_VM * unused_vms;
            break;
        case MD_CTX_VP:
            unused_entries = TDVPS_PAGES_PER_L2_VM * unused_vms;
            break;
        case MD_CTX_SYS:
            unused_entries = 0;
            break;
        default:
            { ; tdx_arch_fatal_error(); };
            break;
    }
    return unused_entries;
}
const md_lookup_t* md_get_lookup_table(md_context_code_e ctx_code, md_field_id_t field_id,
                                       md_context_ptrs_t md_ctx, uint32_t* num_of_entries)
{
    const md_lookup_t* lookup_table;
    uint32_t unused_entries = md_get_num_of_td_vp_ctx_unused_entries(ctx_code, md_ctx);
    switch (ctx_code)
    {
        case MD_CTX_SYS:
            lookup_table = global_sys_lookup;
            *num_of_entries = 66;
            break;
        case MD_CTX_TD:
            lookup_table = tdr_tdcs_lookup;
            *num_of_entries = 85 - unused_entries;
            break;
        case MD_CTX_VP:
            if (is_null_field_id(field_id) || (field_id.class_code == 0ULL))
            {
                lookup_table = td_vmcs_lookup;
                *num_of_entries = 144;
            }
            else if ((field_id.class_code == 36ULL) ||
                     (field_id.class_code == 44ULL) ||
                     (field_id.class_code == 52ULL))
            {
                lookup_table = td_l2_vmcs_lookup;
                *num_of_entries = 144;
            }
            else
            {
                lookup_table = tdvps_lookup;
                *num_of_entries = 119 - unused_entries;
            }
            break;
        default:
            { ; tdx_arch_fatal_error(); };
            break;
    }
    return lookup_table;
}
uint32_t md_find_entry_idx(const md_lookup_t* lookup_table, uint32_t num_of_entries, md_field_id_t field_id)
{
    uint32_t i;
    if ( __builtin_expect((is_special_cpuid_field_id(field_id)), 0) )
    {
        field_id.field_code = field_id.cpuid_field_code.element;
    }
    if (is_special_l2_vmcs_field_id(field_id))
    {
        field_id.class_code = 0;
    }
    for (i = 0; i < num_of_entries; i++)
    {
                                                                                        ;
        uint16_t element_stride = (uint16_t)lookup_table[i].field_id.inc_size + 1;
        uint64_t first_element_id_in_range = lookup_table[i].field_id.field_code;
        uint64_t last_element_id_in_range = lookup_table[i].field_id.field_code +
                (lookup_table[i].num_of_elem * element_stride * lookup_table[i].num_of_fields);
        if ((field_id.class_code == lookup_table[i].field_id.class_code) &&
            ((uint64_t)field_id.field_code >= first_element_id_in_range) &&
            ((uint64_t)field_id.field_code < last_element_id_in_range))
        {
            break;
        }
    }
    if (i == num_of_entries)
    {
        return ((uint32_t)(-1));
    }
    return i;
}
static inline void md_cpuid_field_id_set_leaf_subleaf(md_field_id_t* field_id, uint32_t leaf, uint32_t subleaf)
{
    field_id->cpuid_field_code.leaf = (uint16_t)(leaf & ~(uint64_t)(1ULL<<(31)));
    field_id->cpuid_field_code.leaf_bit31 = (leaf & (uint32_t)(uint64_t)(1ULL<<(31))) >> 31;
    field_id->cpuid_field_code.subleaf = (uint16_t)subleaf;
    field_id->cpuid_field_code.subleaf_na = (subleaf == ((uint32_t)-1)) ? 1 : 0;
}
void md_cpuid_field_id_get_leaf_subleaf(md_field_id_t field_id, uint32_t* leaf, uint32_t* subleaf)
{
    *leaf = field_id.cpuid_field_code.leaf | (((uint32_t)field_id.cpuid_field_code.leaf_bit31) << 31);
    *subleaf = field_id.cpuid_field_code.subleaf_na ? ((uint32_t)-1) : field_id.cpuid_field_code.subleaf;
}
static md_field_id_t md_get_next_cpuid_value_entry(md_field_id_t field_id, bool_t element)
{
                                            ;
    if (element && (field_id.cpuid_field_code.element == 0))
    {
        field_id.field_code++;
        return field_id;
    }
    uint32_t leaf, subleaf;
    md_cpuid_field_id_get_leaf_subleaf(field_id, &leaf, &subleaf);
    uint32_t index = get_cpuid_lookup_entry(leaf, subleaf);
    if ( __builtin_expect((!(index != ((uint32_t)-1))), 0) ) { ; tdx_report_error_and_halt(0x000A, 0); };
    do
    {
        index = index + 1;
    } while (!cpuid_lookup[index].valid_entry);
    if ( __builtin_expect((index >= 68), 0) )
    {
        return (md_field_id_t)((uint64_t)(-1ULL));
    }
    leaf = cpuid_lookup[index].leaf_subleaf.leaf;
    subleaf = cpuid_lookup[index].leaf_subleaf.subleaf;
    md_cpuid_field_id_set_leaf_subleaf(&field_id, leaf, subleaf);
    field_id.cpuid_field_code.element = 0;
    return field_id;
}
typedef struct lookup_iterator_s
{
    const md_lookup_t* lookup_table;
    uint32_t num_of_entries_in_table;
    uint32_t table_idx;
    uint32_t parent_table_idx;
    md_field_id_t field_id;
} lookup_iterator_t;
static inline uint32_t get_tdvps_table_idx_from_l2_vmcs_field_id(md_field_id_t field_id)
{
                                                                         ;
    uint32_t l2_vm_id = md_vp_get_l2_vm_index(field_id.class_code);
    return (((l2_vm_id - 1) * 3) + 110);
}
static void ____md_fetch_next_of_last_table_entry(lookup_iterator_t* lookup_context, md_context_ptrs_t md_ctx)
{
    if ( __builtin_expect(((lookup_context->lookup_table == td_vmcs_lookup) || (lookup_context->lookup_table == td_l2_vmcs_lookup)), 0) )
    {
        if (lookup_context->lookup_table == td_l2_vmcs_lookup)
        {
            lookup_context->table_idx =
                    get_tdvps_table_idx_from_l2_vmcs_field_id(lookup_context->field_id) + 1;
        }
        else
        {
            lookup_context->table_idx = 0;
        }
        uint32_t unused_entries = md_get_num_of_td_vp_ctx_unused_entries(MD_CTX_VP, md_ctx);
        lookup_context->lookup_table = tdvps_lookup;
        lookup_context->num_of_entries_in_table = 119 - unused_entries;
        lookup_context->field_id = tdvps_lookup[lookup_context->table_idx].field_id;
        return;
    }
    lookup_context->lookup_table = ((void*)0);
    lookup_context->num_of_entries_in_table = 0;
    lookup_context->table_idx = 0;
    lookup_context->field_id.raw = ((uint64_t)(-1ULL));
    return;
}
static void md_get_next_item_with_iterator(lookup_iterator_t* lookup_context, md_context_ptrs_t md_ctx, bool_t is_element)
{
    md_field_id_t tmp_field_id;
    uint32_t class_code = lookup_context->field_id.class_code;
    if ( __builtin_expect((is_null_field_id(lookup_context->field_id)), 0) )
    {
        lookup_context->table_idx = 0;
        lookup_context->field_id = lookup_context->lookup_table[0].field_id;
        goto EXIT;
    }
    if ( __builtin_expect((!(lookup_context->table_idx != ((uint32_t)(-1)))), 0) ) { ; tdx_report_error_and_halt(0x000A, 1); };
    if ( __builtin_expect((is_special_cpuid_field_id(lookup_context->field_id)), 0) )
    {
        tmp_field_id = md_get_next_cpuid_value_entry(lookup_context->field_id, is_element);
        if (is_null_field_id(tmp_field_id))
        {
            goto EXIT_FETCH_NEXT;
        }
        lookup_context->field_id = tmp_field_id;
        return;
    }
    const md_lookup_t* entry = &lookup_context->lookup_table[lookup_context->table_idx];
    uint16_t element_stride = (uint16_t)entry->field_id.inc_size + 1;
                                                                                       ;
    if ( __builtin_expect((is_element), 0) )
    {
        uint32_t elem_num = (lookup_context->field_id.field_code - entry->field_id.field_code) /
                             element_stride;
        if (elem_num < ((entry->num_of_fields * entry->num_of_elem) - 1))
        {
            lookup_context->field_id.field_code += element_stride;
            return;
        }
    }
    else
    {
        uint32_t field_num = (lookup_context->field_id.field_code - entry->field_id.field_code) /
                             (entry->num_of_elem * element_stride);
        if (field_num < (entry->num_of_fields - 1))
        {
            lookup_context->field_id.field_code += (entry->num_of_elem * element_stride);
            return;
        }
    }
EXIT_FETCH_NEXT:
    if ( __builtin_expect((lookup_context->table_idx == (lookup_context->num_of_entries_in_table - 1)), 0) )
    {
        ____md_fetch_next_of_last_table_entry(lookup_context, md_ctx);
    }
    else
    {
        lookup_context->table_idx++;
        class_code = lookup_context->field_id.class_code;
        lookup_context->field_id = lookup_context->lookup_table[lookup_context->table_idx].field_id;
    }
EXIT:
    if ( __builtin_expect((is_special_cpuid_field_id(lookup_context->field_id)), 0) )
    {
        md_cpuid_field_id_set_leaf_subleaf(&lookup_context->field_id, cpuid_lookup[0].leaf_subleaf.leaf,
                                           cpuid_lookup[0].leaf_subleaf.subleaf);
    }
    if ( __builtin_expect(((lookup_context->field_id.raw == 0x2420000000000000ULL) || (lookup_context->field_id.raw == 0x2C20000000000000ULL) || (lookup_context->field_id.raw == 0x3420000000000000ULL)), 0) )
    {
        lookup_context->lookup_table = td_l2_vmcs_lookup;
        lookup_context->num_of_entries_in_table = 144;
        lookup_context->table_idx = 0;
        class_code = lookup_context->field_id.class_code;
        lookup_context->field_id = td_l2_vmcs_lookup[0].field_id;
    }
    if (lookup_context->lookup_table == td_l2_vmcs_lookup)
    {
        lookup_context->field_id.class_code = class_code;
    }
    return;
}
static void md_get_next_accessible_item(lookup_iterator_t* lookup_context, bool_t is_element,
                            md_context_ptrs_t md_ctx, md_access_t access_type, md_access_qualifier_t access_qual)
{
    uint64_t rd_mask = 0;
    uint64_t wr_mask = 0;
    bool_t accessible_item = ((bool_t)0);
    do
    {
        md_get_next_item_with_iterator(lookup_context, md_ctx, is_element);
        if (is_null_field_id(lookup_context->field_id))
        {
            break;
        }
        const md_lookup_t* entry = &lookup_context->lookup_table[lookup_context->table_idx];
        md_get_rd_wr_mask(entry, access_type, access_qual, &rd_mask, &wr_mask);
        accessible_item = ((!is_write_access_type(access_type) && rd_mask) ||
                           (is_write_access_type(access_type) && wr_mask));
    } while (!accessible_item);
    return;
}
static md_field_id_t md_get_next_item_in_context(md_context_code_e ctx_code, md_field_id_t field_id,
                                                 md_context_ptrs_t md_ctx, bool_t element,
                                                 md_access_t access_type, md_access_qualifier_t access_qual)
{
    lookup_iterator_t lookup_context;
    lookup_context.lookup_table = md_get_lookup_table(ctx_code, field_id, md_ctx,
                                                      &lookup_context.num_of_entries_in_table);
    lookup_context.field_id.raw = field_id.raw;
    if ( __builtin_expect((is_null_field_id(field_id)), 0) )
    {
        lookup_context.table_idx = 0;
    }
    else
    {
        lookup_context.table_idx = md_find_entry_idx(lookup_context.lookup_table,
                                                lookup_context.num_of_entries_in_table, field_id);
    }
    md_get_next_accessible_item(&lookup_context, element, md_ctx, access_type, access_qual);
    return lookup_context.field_id;
}
md_field_id_t md_get_next_element_in_context(md_context_code_e ctx_code, md_field_id_t field_id,
                                             md_context_ptrs_t md_ctx,
                                             md_access_t access_type, md_access_qualifier_t access_qual)
{
    return md_get_next_item_in_context(ctx_code, field_id, md_ctx, ((bool_t)1), access_type, access_qual);
}
void md_get_rd_wr_mask(const md_lookup_t* entry, md_access_t access_type, md_access_qualifier_t access_qual,
        uint64_t* out_rd_mask, uint64_t* out_wr_mask)
{
    switch (access_type)
    {
        case MD_HOST_WR:
            *out_wr_mask = access_qual.host_qualifier.debug ? entry->dbg_wr_mask : entry->prod_wr_mask;
            *out_rd_mask = access_qual.host_qualifier.debug ? entry->dbg_rd_mask : entry->prod_rd_mask;
            break;
        case MD_HOST_RD:
            *out_wr_mask = 0;
            *out_rd_mask = access_qual.host_qualifier.debug ? entry->dbg_rd_mask : entry->prod_rd_mask;
            break;
        case MD_GUEST_WR:
            *out_wr_mask = entry->guest_wr_mask;
            *out_rd_mask = entry->guest_rd_mask;
            break;
        case MD_GUEST_RD:
            *out_wr_mask = 0;
            *out_rd_mask = entry->guest_rd_mask;
            break;
        case MD_SERV_TD_WR:
            *out_wr_mask = entry->migtd_wr_mask;
            *out_rd_mask = entry->migtd_rd_mask;
            break;
        case MD_SERV_TD_RD:
            *out_wr_mask = 0;
            *out_rd_mask = entry->migtd_rd_mask;
            break;
        case MD_EXPORT_IMMUTABLE:
            *out_wr_mask = 0;
            *out_rd_mask = (entry->mig_export == MIG_MB) ? entry->export_mask : 0;
            break;
        case MD_EXPORT_MUTABLE:
            *out_wr_mask = 0;
            *out_rd_mask = (entry->mig_export == MIG_ME) ? entry->export_mask : 0;
            break;
        case MD_IMPORT_IMMUTABLE:
            *out_wr_mask = (entry->mig_import == MIG_MB || entry->mig_import == MIG_CB ||
                            entry->mig_import == MIG_MBO || entry->mig_import == MIG_CBO ||
                            entry->mig_import == MIG_IB || entry->mig_import == MIG_IBS)
                                    ? entry->import_mask : 0;
            *out_rd_mask = ~(0ULL);
            break;
        case MD_IMPORT_MUTABLE:
            *out_wr_mask = (entry->mig_import == MIG_ME || entry->mig_import == MIG_CE ||
                            entry->mig_import == MIG_MEO || entry->mig_import == MIG_CEO ||
                            entry->mig_import == MIG_IE || entry->mig_import == MIG_IES ||
                            entry->mig_import == MIG_IEME || entry->mig_import == MIG_IESME)
                                    ? entry->import_mask : 0;
            *out_rd_mask = ~(0ULL);
            break;
        default:
                                                                    ;
            { ; tdx_arch_fatal_error(); };
            break;
    }
    return;
}
static const md_lookup_t* md_check_element_and_get_entry(md_context_code_e ctx_code, md_field_id_t field_id,
                                                         md_context_ptrs_t md_ctx)
{
    const md_lookup_t* lookup_table;
    uint32_t curr_idx, num_of_entries;
    lookup_table = md_get_lookup_table(ctx_code, field_id, md_ctx, &num_of_entries);
    curr_idx = md_find_entry_idx(lookup_table, num_of_entries, field_id);
    if ( __builtin_expect((curr_idx == ((uint32_t)(-1))), 0) )
    {
        return ((void*)0);
    }
    return &lookup_table[curr_idx];
}
api_error_code_e md_read_element(md_context_code_e ctx_code, md_field_id_t field_id,
        md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* value)
{
    api_error_code_e retval;
    const md_lookup_t* entry = md_check_element_and_get_entry(ctx_code, field_id, md_ctx);
    if ( __builtin_expect((entry == ((void*)0)), 0) )
    {
        return 0xC0000C0000000000ULL;
    }
    switch (ctx_code)
    {
        case MD_CTX_SYS:
            retval = md_sys_read_element(field_id, entry, access_type, access_qual, value);
            break;
        case MD_CTX_TD:
            retval = md_td_read_element(field_id, entry, access_type, access_qual, md_ctx, value);
            break;
        case MD_CTX_VP:
            retval = md_vp_read_element(field_id, entry, access_type, access_qual, md_ctx, value);
            break;
        default:
            { ; tdx_arch_fatal_error(); };
            break;
    }
    return retval;
}
api_error_code_e md_write_element(md_context_code_e ctx_code, md_field_id_t field_id,
         md_access_t access_type, md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,
         uint64_t value, uint64_t wr_mask, uint64_t* old_value)
{
    api_error_code_e retval;
    const md_lookup_t* entry = md_check_element_and_get_entry(ctx_code, field_id, md_ctx);
    if ( __builtin_expect((entry == ((void*)0)), 0) )
    {
        return 0xC0000C0000000000ULL;
    }
    switch (ctx_code)
    {
        case MD_CTX_SYS:
            retval = md_sys_write_element(field_id, entry, access_type, access_qual,
                                         value, wr_mask, old_value);
            break;
        case MD_CTX_TD:
            retval = md_td_write_element(field_id, entry, access_type, access_qual, md_ctx,
                                         value, wr_mask, old_value);
            break;
        case MD_CTX_VP:
            retval = md_vp_write_element(field_id, entry, access_type, access_qual, md_ctx,
                                         value, wr_mask, old_value, ((bool_t)1));
            break;
        default:
            { ; tdx_arch_fatal_error(); };
            break;
    }
    return retval;
}
static bool_t md_sys_get_elements(md_field_id_t field_id, const md_lookup_t* entry,
                                  uint64_t* element_array, uint64_t* array_size)
{
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();
    tdx_module_global_t* global_data = get_global_data();
    handoff_data_header_t* handoff_data_hdr = (handoff_data_header_t*)sysinfo_table->data_rgn_base;
    *element_array = 0;
    *array_size = 0;
                                                   ;
                                                                       ;
    uint32_t field_num = (field_id.field_code - entry->field_id.field_code) / entry->num_of_elem;
    switch (entry->field_id.class_code)
    {
        case 0ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = sysinfo_table->mcheck_fields.tot_num_sockets;
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = sysinfo_table->mcheck_fields.socket_cpuid_table[field_num].raw;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 8ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = 0x8086ULL;
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = 20240801;
            }
            else if (entry->field_id.field_code == 2ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 3ULL)
            {
                *element_array = 5;
            }
            else if (entry->field_id.field_code == 4ULL)
            {
                *element_array = 1;
            }
            else if (entry->field_id.field_code == 5ULL)
            {
                *element_array = 5;
            }
            else if (entry->field_id.field_code == 6ULL)
            {
                *element_array = 0;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 10ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                tdsysinfo_attributes_t attributes = { .raw = 0 };
                *element_array = attributes.raw;
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = 1;
            }
            else if (entry->field_id.field_code == 8ULL)
            {
                tdx_features_enum0_t tdx_features_0;
                tdx_features_0.raw = 0;
                tdx_features_0.td_migration = 1;
                tdx_features_0.service_td = 1;
                tdx_features_0.td_preserving = 1;
                tdx_features_0.tdg_vp_rdwr = 1;
                tdx_features_0.relaxed_mem_mng_concurrency = 1;
                tdx_features_0.cpuid_virt_guest_ctrl = 1;
                tdx_features_0.local_attestation = global_data->seamverifyreport_available;
                tdx_features_0.td_partitioning = 1;
                tdx_features_0.td_entry_enhancements = 1;
                tdx_features_0.host_priority_locks = 1;
                tdx_features_0.config_ia32_arch_cap = 1;
                tdx_features_0.no_rbp_mod = 1;
                tdx_features_0.pending_ept_violation_v2 = 1;
                tdx_features_0.l2_tlb_invd_opt = 1;
                tdx_features_0.fms_config = 1;
                tdx_features_0.topology_enum = 1;
                tdx_features_0.reduced_ve = 0;
                *element_array = tdx_features_0.raw;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 16ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = 32;
            }
            else if (entry->field_id.field_code == 128ULL)
            {
                *element_array = sysinfo_table->cmr_data[field_num].cmr_base;
            }
            else if (entry->field_id.field_code == 256ULL)
            {
                *element_array = sysinfo_table->cmr_data[field_num].cmr_size;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 17ULL:
            if (entry->field_id.field_code == 8ULL)
            {
                *element_array = 64;
            }
            else if (entry->field_id.field_code == 9ULL)
            {
                *element_array = 16U;
            }
            else if (entry->field_id.field_code == 16ULL ||
                     entry->field_id.field_code == 17ULL ||
                     entry->field_id.field_code == 18ULL)
            {
                *element_array = sizeof(pamt_entry_t);
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 24ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = sizeof(tdr_t);
            }
            else if (entry->field_id.field_code == 256ULL)
            {
                *element_array = MIN_NUM_TDCS_PAGES * (4 * 0x400ULL);
            }
            else if (entry->field_id.field_code == 512ULL)
            {
                *element_array = MIN_TDVPS_PAGES * (4 * 0x400ULL);
            }
            else if (entry->field_id.field_code == 257ULL)
            {
                *element_array = TDCS_PAGES_PER_L2_VM * (4 * 0x400ULL);
            }
            else if (entry->field_id.field_code == 513ULL)
            {
                *element_array = TDVPS_PAGES_PER_L2_VM * (4 * 0x400ULL);
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 25ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = global_data->attributes_fixed0;
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = global_data->attributes_fixed1;
            }
            else if (entry->field_id.field_code == 6ULL)
            {
                *element_array = global_data->config_flags_fixed0.raw;
            }
            else if (entry->field_id.field_code == 7ULL)
            {
                *element_array = global_data->config_flags_fixed1.raw;
            }
            else if (entry->field_id.field_code == 2048ULL)
            {
                *element_array = get_num_allowed_fms();
            }
            else if (entry->field_id.field_code == 2049ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 2064ULL)
            {
                if (field_num >= (uint32_t)get_num_allowed_fms())
                {
                    *element_array = 0;
                }
                else
                {
                    *element_array = get_allowed_fms((uint16_t)field_num).raw;
                }
            }
            else if (entry->field_id.field_code == 2128ULL)
            {
                if (field_num >= 0)
                {
                    *element_array = 0;
                }
                else
                {
                    lfence();
                    *element_array = disallowed_fms[field_num].raw;
                }
            }
            else if (entry->field_id.field_code == 2ULL)
            {
                *element_array = 0x0006DBE7ULL &
                          (global_data->xcr0_supported_mask | global_data->ia32_xss_supported_mask);
            }
            else if (entry->field_id.field_code == 3ULL)
            {
                *element_array = 0x00000003ULL;
            }
            else if (entry->field_id.field_code == 4ULL)
            {
                *element_array = 18;
            }
            else if (entry->field_id.field_code == 1024ULL)
            {
                if (field_num >= 18)
                {
                    *element_array = ~(0ULL);
                }
                else
                {
                    lfence();
                    *element_array = cpuid_configurable[field_num].leaf_subleaf.raw;
                }
            }
            else if (entry->field_id.field_code == 1280ULL)
            {
                if (field_num >= 18)
                {
                    element_array[0] = 0;
                    element_array[1] = 0;
                }
                else
                {
                    lfence();
                    uint32_t lookup_index = cpuid_configurable[field_num].lookup_index;
                    *array_size = 2 * sizeof(uint64_t);
                    element_array[0] = cpuid_configurable[field_num].config_direct.low |
                            (cpuid_configurable[field_num].allow_direct.low &
                             global_data->cpuid_values[lookup_index].values.low);
                    element_array[1] = cpuid_configurable[field_num].config_direct.high |
                            (cpuid_configurable[field_num].allow_direct.high &
                             global_data->cpuid_values[lookup_index].values.high);
                }
            }
            else if (entry->field_id.field_code == 1536ULL)
            {
                *element_array = ((uint64_t)(1ULL<<(4)) | (uint64_t)(1ULL<<(19)) | (uint64_t)(1ULL<<(20)) | (uint64_t)(1ULL<<(24)));
            }
            else if (entry->field_id.field_code == 8ULL)
            {
                *element_array = 576;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 32ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 2ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 3ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 4ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 16ULL)
            {
                *element_array = 512;
            }
            else if (entry->field_id.field_code == 32ULL)
            {
                *element_array = 4;
            }
            else if (entry->field_id.field_code == 33ULL)
            {
                *element_array = 2;
            }
            else if (entry->field_id.field_code == 34ULL)
            {
                *element_array = 5;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 33ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = 1;
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = 0x000007FF00000001ULL;
            }
            else if (entry->field_id.field_code == 2ULL)
            {
                *element_array = 0x0000000000000000ULL;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 9ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 2ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 3ULL)
            {
                *element_array = global_data->num_handoff_pages;
            }
            else if (entry->field_id.field_code == 4ULL)
            {
                *element_array = handoff_data_hdr->valid;
            }
            else if (entry->field_id.field_code == 5ULL)
            {
                *element_array = handoff_data_hdr->hv;
            }
            else if (entry->field_id.field_code == 6ULL)
            {
                *element_array = handoff_data_hdr->size;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        case 34ULL:
            if (entry->field_id.field_code == 0ULL)
            {
                *element_array = ((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(0)) + (uint64_t)(1ULL<<(6)))) | (uint64_t)(1ULL<<(15)));
            }
            else if (entry->field_id.field_code == 1ULL)
            {
                *element_array = ((uint64_t)(1ULL<<(0)));
            }
            else if (entry->field_id.field_code == 2ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 3ULL)
            {
                *element_array = ((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(1)));
            }
            else if (entry->field_id.field_code == 4ULL)
            {
                *element_array = 0;
            }
            else if (entry->field_id.field_code == 5ULL)
            {
                *element_array = ((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(1)) | (uint64_t)(1ULL<<(2)));
            }
            else if (entry->field_id.field_code == 6ULL)
            {
                *element_array = 0;
            }
            else
            {
                return ((bool_t)0);
            }
            break;
        default:
            return ((bool_t)0);
    }
    return ((bool_t)1);
}
api_error_code_e md_sys_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
                                     md_access_qualifier_t access_qual, uint64_t* out_rd_value)
{
    uint64_t read_mask, write_mask;
    uint64_t read_value;
    uint64_t element_array[64];
    uint64_t array_size = 0;
    md_get_rd_wr_mask(entry, access_type, access_qual, &read_mask, &write_mask);
    if (read_mask == 0)
    {
        return 0xC0000C0200000000ULL;
    }
    if (!md_sys_get_elements(field_id, entry, element_array, &array_size))
    {
        if ((entry->field_id.raw == 0x9900000300000400ULL) ||
            (entry->field_id.raw == 0x9900000300000500ULL))
        {
            return 0x00000C0C00000000ULL;
        }
        else
        {
            return 0xC0000C0000000000ULL;
        }
    }
    if (array_size)
    {
                                                                           ;
        uint64_t elem_size = (uint64_t)(1ULL<<(entry->field_id.element_size_code));
        uint64_t elem_num_in_field = (field_id.field_code - entry->field_id.field_code) % entry->num_of_elem;
        uint64_t offset = elem_num_in_field * elem_size;
        if ( __builtin_expect((!(offset + elem_size <= array_size)), 0) ) { ; tdx_report_error_and_halt(0x000A, 20); };
        uint64_t* elem_ptr = (uint64_t*)((uint8_t*)element_array + offset);
        read_value = *elem_ptr;
    }
    else
    {
        read_value = element_array[0];
    }
    read_value &= read_mask;
    *out_rd_value = read_value;
    return 0x0000000000000000ULL;
}
api_error_code_e md_sys_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, uint64_t wr_value, uint64_t wr_request_mask, uint64_t* old_value)
{
    (void)(field_id);
    (void)(entry);
    (void)(access_type);
    (void)(access_qual);
    (void)(wr_value);
    (void)(wr_request_mask);
    (void)(old_value);
    return 0xC0000C0100000000ULL;
}
static inline uint64_t get_element_num(md_field_id_t field_id, const md_lookup_t* entry, uint32_t cpuid_lookup_index)
{
                                                   ;
    if ( __builtin_expect((field_id.class_code == 20ULL), 0) )
    {
        if ( __builtin_expect((!(cpuid_lookup_index < 68)), 0) ) { ; tdx_report_error_and_halt(0x000A, 10); };
                                                                ;
        return field_id.cpuid_field_code.element +
               (cpuid_lookup_index * (sizeof(cpuid_config_return_values_t) / sizeof(uint64_t)));
    }
    return field_id.field_code - entry->field_id.field_code;
}
static uint64_t translate_hp_lock_timeout_to_usec(uint64_t timeout_in_tsc_ticks)
{
    uint64_t timeout_in_usec;
    if ( __builtin_expect((!((get_global_data()->native_tsc_frequency <= 0xFFFFFFFFULL))), 0) ) { ; tdx_report_error_and_halt(0x000A, 25); };
    if (timeout_in_tsc_ticks >= (0xFFFFFFFFFFFFFFFFULL / 1000000ULL))
    {
        timeout_in_tsc_ticks = (0xFFFFFFFFFFFFFFFFULL / 1000000ULL);
    }
    timeout_in_usec = ((uint64_t)timeout_in_tsc_ticks * 1000000ULL) / get_global_data()->native_tsc_frequency;
    return timeout_in_usec;
}
static uint64_t check_hp_lock_timeout_and_translate_to_tsc(uint64_t timeout, uint64_t* tsc)
{
    if ((timeout > 100000000UL) || (timeout < 10000UL))
    {
        return ((bool_t)0);
    }
    uint64_t native_tsc_frequency = get_global_data()->native_tsc_frequency;
    if ( __builtin_expect((!((native_tsc_frequency <= 0xFFFFFFFFULL))), 0) ) { ; tdx_report_error_and_halt(0x000A, 26); };
    uint64_t tsc_tmp = translate_usec_to_tsc((uint32_t)timeout, (uint32_t)native_tsc_frequency);
    *tsc = (uint32_t)tsc_tmp;
    return ((bool_t)1);
}
static inline bool_t write_element_by_size(void* elem_ptr, uint64_t rd_value, uint64_t wr_value,
                                             uint64_t wr_mask, uint64_t size)
{
    uint64_t new_value = (rd_value & ~wr_mask) | (wr_value & wr_mask);
    bool_t success = ((bool_t)0);
    if (size == 1)
    {
        success = (_lock_cmpxchg_8bit((uint8_t)rd_value, (uint8_t)new_value, elem_ptr) == (uint8_t)rd_value);
    }
    else if (size == 2)
    {
        success = (_lock_cmpxchg_16b((uint16_t)rd_value, (uint16_t)new_value, elem_ptr) == (uint16_t)rd_value);
    }
    else if (size == 4)
    {
        success = (_lock_cmpxchg_32b((uint32_t)rd_value, (uint32_t)new_value, elem_ptr) == (uint32_t)rd_value);
    }
    else if (size == 8)
    {
        success = (_lock_cmpxchg_64b((uint64_t)rd_value, (uint64_t)new_value, elem_ptr) == (uint64_t)rd_value);
    }
    return success;
}
static api_error_code_e md_td_get_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,
        uint64_t* out_rd_mask, uint64_t* out_wr_mask, uint64_t* out_rd_value, uint64_t** out_elem_ptr)
{
    uint64_t rd_mask = 0, wr_mask = 0;
    uint64_t read_value;
    uint8_t* page_ptr = ((void*)0);
    uint32_t cpuid_lookup_index = 0;
    md_get_rd_wr_mask(entry, access_type, access_qual, &rd_mask, &wr_mask);
    switch (field_id.class_code)
    {
        case 0ULL:
        case 1ULL:
        case 2ULL:
        {
            page_ptr = (uint8_t*)md_ctx.tdr_ptr;
            break;
        }
        case 20ULL:
        {
            if (field_id.cpuid_field_code.reserved != 0)
            {
                return 0xC0000C0000000000ULL;
            }
            uint32_t leaf, subleaf;
            md_cpuid_field_id_get_leaf_subleaf(field_id, &leaf, &subleaf);
            cpuid_lookup_index = get_cpuid_lookup_entry(leaf, subleaf);
            if (cpuid_lookup_index >= 68)
            {
                return 0xC0000C0000000000ULL;
            }
            if ((access_type != MD_IMPORT_IMMUTABLE) &&
                (cpuid_lookup[cpuid_lookup_index].faulting
                 || !md_ctx.tdcs_ptr->executions_ctl_fields.cpuid_valid[cpuid_lookup_index]))
            {
                return 0xC0000C0200000000ULL;
            }
        }
        case 16ULL:
        case 17ULL:
        case 18ULL:
        case 19ULL:
        case 33ULL:
        case 32ULL:
        case 24ULL:
        case 25ULL:
        case 26ULL:
        case 22ULL:
        case 28ULL:
        {
            page_ptr = (uint8_t*)md_ctx.tdcs_ptr;
            break;
        }
        case 37ULL:
        case 41ULL:
        case 45ULL:
        {
            if (md_ctx.tdcs_ptr->management_fields.num_l2_vms < md_td_get_l2_vm_index(field_id.class_code))
            {
                return 0xC0000C0000000000ULL;
            }
            page_ptr = (uint8_t*)md_ctx.tdcs_ptr;
            break;
        }
        default:
            return 0xC0000C0000000000ULL;
            break;
    }
                                      ;
                                                   ;
    uint64_t elem_size = (uint64_t)(1ULL<<(entry->field_id.element_size_code));
    uint64_t elem_num = get_element_num(field_id, entry, cpuid_lookup_index);
    uint64_t offset = entry->offset + (elem_num * elem_size);
    uint64_t* elem_ptr = (uint64_t*)((uint8_t*)page_ptr + offset);
    *out_elem_ptr = elem_ptr;
    read_value = *elem_ptr;
    if (entry->special_rd_handling)
    {
        switch (entry->field_id.raw)
        {
            case 0x9110000300000011ULL:
            {
                read_value = translate_hp_lock_timeout_to_usec(read_value);
                break;
            }
            case 0x911000010000000EULL:
            {
                read_value = 68;
                break;
            }
            case 0x9810000300000018ULL:
            {
                if ((elem_num == 0) &&
                    (access_type == MD_SERV_TD_RD) &&
                    (access_qual.serv_td_qualifier.service_td_type == 0))
                {
                    if (!generate_256bit_random((uint256_t*)&md_ctx.tdcs_ptr->migration_fields.mig_enc_key))
                    {
                        return 0x8000020300000000ULL;
                    }
                    read_value = md_ctx.tdcs_ptr->migration_fields.mig_enc_key.qwords[0];
                }
                break;
            }
            default:
                break;
        }
    }
    *out_rd_mask = rd_mask;
    *out_wr_mask = wr_mask;
    *out_rd_value = read_value & md_get_element_size_mask(entry->field_id.element_size_code);;
    return 0x0000000000000000ULL;
}
api_error_code_e md_td_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* out_rd_value)
{
    uint64_t rd_mask = 0, wr_mask = 0;
    uint64_t read_value;
    uint64_t* elem_ptr;
    api_error_code_e status;
    status = md_td_get_element(field_id, entry, access_type, access_qual, md_ctx,
                               &rd_mask, &wr_mask, &read_value, &elem_ptr);
    if (status != 0x0000000000000000ULL)
    {
        return status;
    }
    if (rd_mask == 0)
    {
        return 0xC0000C0200000000ULL;
    }
    *out_rd_value = read_value & rd_mask;
    return 0x0000000000000000ULL;
}
api_error_code_e md_td_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t wr_value, uint64_t wr_request_mask,
        uint64_t* old_value)
{
    uint64_t rd_mask = 0, wr_mask = 0, combined_wr_mask = 0;
    uint64_t read_value;
    uint64_t* elem_ptr;
    api_error_code_e status;
    status = md_td_get_element(field_id, entry, access_type, access_qual, md_ctx,
                               &rd_mask, &wr_mask, &read_value, &elem_ptr);
    if (status != 0x0000000000000000ULL)
    {
        return status;
    }
    combined_wr_mask = wr_mask & wr_request_mask;
    if (combined_wr_mask == 0)
    {
        return 0xC0000C0100000000ULL;
    }
    if (!md_check_forbidden_bits_unchanged(read_value, wr_value, wr_request_mask, wr_mask))
    {
        return 0xC0000C0300000000ULL;
    }
    uint64_t elem_size = (uint64_t)(1ULL<<(entry->field_id.element_size_code));
    bool_t write_done = ((bool_t)0);
    wr_value = (read_value & ~combined_wr_mask) | (wr_value & combined_wr_mask);
    if (entry->special_wr_handling)
    {
        switch (entry->field_id.raw)
        {
            case 0x9810000300000010ULL:
                md_ctx.tdcs_ptr->migration_fields.mig_dec_key_set = ((bool_t)1);
                break;
            case 0x9810000100000020ULL:
                if ((wr_value < 0) || (wr_value > 0) ||
                    (wr_value < 0) || (wr_value > 0))
                {
                    return 0xC0000C0300000000ULL;
                }
                break;
            case 0x9110000300000011ULL:
            {
                                                ;
                if (combined_wr_mask != 0xFFFFFFFFFFFFFFFFULL)
                {
                    return 0xC0000C0A00000000ULL;
                }
                uint64_t tsc;
                if (!check_hp_lock_timeout_and_translate_to_tsc(wr_value, &tsc))
                {
                    return 0xC0000C0300000000ULL;
                }
                wr_value = tsc;
                *elem_ptr = wr_value;
                write_done = ((bool_t)1);
                break;
            }
            case 0x9110000300000017ULL:
            {
                if (!md_ctx.tdcs_ptr->executions_ctl_fields.config_flags.flexible_pending_ve)
                {
                    td_ctls_t td_ctls_modified_bits = { .raw = wr_value ^ read_value };
                    if (td_ctls_modified_bits.pending_ve_disable)
                    {
                        return 0xC0000C0300000000ULL;
                    }
                }
                td_ctls_t td_ctls = { .raw = wr_value };
                if (td_ctls.enum_topology && !md_ctx.tdcs_ptr->executions_ctl_fields.topology_enum_configured)
                {
                    return 0xC0000C0300000000ULL;
                }
                break;
            }
            default:
                                   ;
                break;
        }
    }
    if (!write_done)
    {
        if (!write_element_by_size(elem_ptr, read_value, wr_value, combined_wr_mask, elem_size))
        {
            return api_error_with_operand_id(0x8000020000000000ULL, 176ULL);
        }
    }
    *old_value = read_value & rd_mask;
    return 0x0000000000000000ULL;
}
static inline bool_t is_initial_invalid_pa(uint64_t pa)
{
    return ((pa & (uint64_t)(1ULL<<(63))) != 0);
}
static bool_t calculate_native_tsc(uint64_t virtual_tsc, uint64_t tsc_multiplier, uint64_t tsc_offset, uint64_t* native_tsc)
{
    uint128_t tmp_128b;
    tmp_128b.qwords[0] = (virtual_tsc - tsc_offset) << 48;
    tmp_128b.qwords[1] = (virtual_tsc - tsc_offset) >> 16;
    if (tmp_128b.qwords[1] >= tsc_multiplier)
    {
        return ((bool_t)0);
    }
    TDXFV_ABST_incomplete();
    *native_tsc = TDXFV_NONDET_uint64t();
    return ((bool_t)1);
}
static bool_t check_and_update_ia32_dbgctrl(uint64_t* wr_value, tdcs_t* tdcs_ptr)
{
    ia32_debugctl_t ia32_debugctl;
    ia32_debugctl.raw = *wr_value;
    if ((ia32_debugctl.bts == 0) &&
        (ia32_debugctl.tr == 1) &&
        (tdcs_ptr->executions_ctl_fields.attributes.debug == 0))
    {
        return ((bool_t)0);
    }
    ia32_debugctl.en_uncore_pmi = get_local_data()->ia32_debugctl_value.en_uncore_pmi;
    *wr_value = ia32_debugctl.raw;
    return ((bool_t)1);
}
static void combine_l2_cr0_cr4_controls(uint64_t base_l2_guest_host_mask, uint64_t base_l2_read_shadow,
                                        uint64_t l2_guest_host_mask_by_l1, uint64_t l2_read_shadow_by_l1,
                                        uint64_t* combined_l2_guest_host_mask, uint64_t* combined_l2_read_shadow)
{
    *combined_l2_guest_host_mask = base_l2_guest_host_mask | l2_guest_host_mask_by_l1;
    base_l2_guest_host_mask &= ~l2_guest_host_mask_by_l1;
    *combined_l2_read_shadow = (base_l2_guest_host_mask & base_l2_read_shadow) |
                               (l2_guest_host_mask_by_l1 & l2_read_shadow_by_l1);
}
static void combine_and_write_l2_cr0_controls(tdvps_t* tdvps_ptr, uint16_t vm_id)
{
    uint64_t combined_l2_guest_host_mask, combined_l2_read_shadow;
    combine_l2_cr0_cr4_controls(tdvps_ptr->management.base_l2_cr0_guest_host_mask,
                                tdvps_ptr->management.base_l2_cr0_read_shadow,
                                tdvps_ptr->management.shadow_cr0_guest_host_mask[vm_id],
                                tdvps_ptr->management.shadow_cr0_read_shadow[vm_id],
                                &combined_l2_guest_host_mask, &combined_l2_read_shadow);
    ia32_vmwrite(0x6000ULL, combined_l2_guest_host_mask);
    ia32_vmwrite(0x6004ULL, combined_l2_read_shadow);
}
static void combine_and_write_l2_cr4_controls(tdvps_t* tdvps_ptr, uint16_t vm_id)
{
    uint64_t combined_l2_guest_host_mask, combined_l2_read_shadow;
    combine_l2_cr0_cr4_controls(tdvps_ptr->management.base_l2_cr4_guest_host_mask,
                                tdvps_ptr->management.base_l2_cr4_read_shadow,
                                tdvps_ptr->management.shadow_cr4_guest_host_mask[vm_id],
                                tdvps_ptr->management.shadow_cr4_read_shadow[vm_id],
                                &combined_l2_guest_host_mask, &combined_l2_read_shadow);
    ia32_vmwrite(0x6002ULL, combined_l2_guest_host_mask);
    ia32_vmwrite(0x6006ULL, combined_l2_read_shadow);
}
static inline uint64_t apply_cr0_cr4_controls_for_read(uint64_t cr, uint64_t guest_host_mask, uint64_t read_shadow)
{
    return (cr & ~guest_host_mask) | (read_shadow & guest_host_mask);
}
static inline bool_t apply_cr0_cr4_controls_for_write(uint64_t old_cr, uint64_t* new_cr,
                                                        uint64_t guest_host_mask, uint64_t read_shadow)
{
    if ((*new_cr & guest_host_mask) != (read_shadow & guest_host_mask))
    {
        return ((bool_t)0);
    }
    *new_cr = (old_cr & guest_host_mask) | (*new_cr & ~guest_host_mask);
    return ((bool_t)1);
}
static bool_t check_l2_procbased_exec_ctls(const tdcs_t* tdcs_p, uint32_t wr_mask,
                                           vmx_procbased_ctls_t ctls, md_access_t access)
{
    tdx_module_global_t* global_data = get_global_data();
    if ((access == MD_HOST_WR) && tdcs_p->executions_ctl_fields.attributes.debug)
    {
        if (wr_mask & ((~ctls.raw & global_data->plt_common_config.ia32_vmx_true_procbased_ctls.not_allowed0) |
                       (ctls.raw & ~global_data->plt_common_config.ia32_vmx_true_procbased_ctls.allowed1)))
        {
                                                                              ;
                                                                              ;
                                                                                         ;
            return ((bool_t)0);
        }
    }
    else
    {
        if (wr_mask & ((~ctls.raw & tdcs_p->virt_msrs.virt_ia32_vmx_true_procbased_ctls.not_allowed0) |
                       (ctls.raw & ~tdcs_p->virt_msrs.virt_ia32_vmx_true_procbased_ctls.allowed1)))
        {
                                                                                ;
                                                                              ;
                                                                                 ;
            return ((bool_t)0);
        }
    }
    return ((bool_t)1);
}
static bool_t check_l2_procbased_exec_ctls2(const tdcs_t* tdcs_p, uint32_t wr_mask,
                                            vmx_procbased_ctls2_t ctls2, md_access_t access)
{
    tdx_module_global_t* global_data = get_global_data();
    if ((access == MD_HOST_WR) && tdcs_p->executions_ctl_fields.attributes.debug)
    {
        if (wr_mask & ((~ctls2.raw & global_data->plt_common_config.ia32_vmx_procbased_ctls2.not_allowed0) |
                       (ctls2.raw & ~global_data->plt_common_config.ia32_vmx_procbased_ctls2.allowed1)))
        {
                                                                               ;
                                                                               ;
                                                                                     ;
            return ((bool_t)0);
        }
    }
    else
    {
        if (wr_mask & ((~ctls2.raw & tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls2.not_allowed0) |
                       (ctls2.raw & ~tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls2.allowed1)))
        {
                                                                                ;
                                                                               ;
                                                                             ;
            return ((bool_t)0);
        }
    }
    return ((bool_t)1);
}
static bool_t check_l2_procbased_exec_ctls3(const tdcs_t* tdcs_p, uint64_t wr_mask,
                                            vmx_procbased_ctls3_t ctls3, md_access_t access)
{
    tdx_module_global_t* global_data = get_global_data();
    if ((access == MD_HOST_WR) && tdcs_p->executions_ctl_fields.attributes.debug)
    {
        if (ctls3.raw & wr_mask & ~global_data->plt_common_config.ia32_vmx_procbased_ctls3.raw)
        {
            return ((bool_t)0);
        }
    }
    else
    {
        if (ctls3.raw & wr_mask & ~tdcs_p->virt_msrs.virt_ia32_vmx_procbased_ctls3)
        {
            return ((bool_t)0);
        }
    }
    return ((bool_t)1);
}
static bool_t check_l1_procbased_exec_ctls2(const tdcs_t* tdcs_p, uint32_t wr_mask, vmx_procbased_ctls2_t new_ctls2)
{
    tdx_module_global_t* global_data = get_global_data();
    if (wr_mask & ((~new_ctls2.raw & global_data->plt_common_config.ia32_vmx_procbased_ctls2.not_allowed0) |
                   (new_ctls2.raw & ~global_data->plt_common_config.ia32_vmx_procbased_ctls2.allowed1)))
    {
        return ((bool_t)0);
    }
    if (new_ctls2.en_pml)
    {
        uint64_t pml_address;
        ia32_vmread(0x200E, &pml_address);
        if (!tdcs_p->executions_ctl_fields.attributes.debug || is_initial_invalid_pa(pml_address))
        {
            return ((bool_t)0);
        }
    }
    return ((bool_t)1);
}
static bool_t check_guest_cr3_value(uint64_t wr_value, tdcs_t* tdcs_ptr)
{
    ia32_cr3_t cr3 = { .raw = wr_value };
    if (cr3.reserved_0 || cr3.reserved_1)
    {
        return ((bool_t)0);
    }
    if (get_global_data()->lam_supported)
    {
        cr3.lam_u48 = 0;
        cr3.lam_u57 = 0;
    }
    return check_gpa_validity((pa_t)cr3.raw, tdcs_ptr->executions_ctl_fields.gpaw, ((bool_t)1));
}
static uint64_t md_vp_get_element_special_rd_handle(md_field_id_t field_id, md_access_t access_type,
                                                    md_context_ptrs_t md_ctx, uint16_t vm_id, uint64_t read_value)
{
    if (field_id.class_code == 0ULL)
    {
        switch (field_id.field_code)
        {
            case 0x6800ULL:
            {
                if ((access_type == MD_EXPORT_MUTABLE) || (access_type == MD_IMPORT_MUTABLE))
                {
                    uint64_t guest_host_mask, rd_shadow;
                    ia32_vmread(0x6000ULL, &guest_host_mask);
                    ia32_vmread(0x6004ULL, &rd_shadow);
                    read_value = apply_cr0_cr4_controls_for_read(read_value, guest_host_mask, rd_shadow);
                }
                break;
            }
            case 0x6804ULL:
            {
                if ((access_type == MD_EXPORT_MUTABLE) || (access_type == MD_IMPORT_MUTABLE))
                {
                    uint64_t guest_host_mask, rd_shadow;
                    ia32_vmread(0x6002ULL, &guest_host_mask);
                    ia32_vmread(0x6006ULL, &rd_shadow);
                    read_value = apply_cr0_cr4_controls_for_read(read_value, guest_host_mask, rd_shadow);
                }
                break;
            }
            default:
                                   ;
                break;
        }
    }
    else if ((field_id.class_code == 36ULL) ||
             (field_id.class_code == 44ULL) ||
             (field_id.class_code == 52ULL))
    {
        switch (field_id.field_code)
        {
            case 0x6000ULL:
            {
                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))
                {
                    read_value = md_ctx.tdvps_ptr->management.shadow_cr0_guest_host_mask[vm_id];
                }
                break;
            }
            case 0x6004ULL:
            {
                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))
                {
                    read_value = md_ctx.tdvps_ptr->management.shadow_cr0_read_shadow[vm_id];
                }
                break;
            }
            case 0x6002ULL:
            {
                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))
                {
                    read_value = md_ctx.tdvps_ptr->management.shadow_cr4_guest_host_mask[vm_id];
                }
                break;
            }
            case 0x6006ULL:
            {
                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))
                {
                    read_value = md_ctx.tdvps_ptr->management.shadow_cr4_read_shadow[vm_id];
                }
                break;
            }
            case 0x6800ULL:
            {
                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))
                {
                    read_value = apply_cr0_cr4_controls_for_read(read_value,
                            md_ctx.tdvps_ptr->management.base_l2_cr0_guest_host_mask,
                            md_ctx.tdvps_ptr->management.base_l2_cr0_read_shadow);
                }
                break;
            }
            case 0x6804ULL:
            {
                if ((access_type != MD_HOST_RD) && (access_type != MD_HOST_WR))
                {
                    read_value = apply_cr0_cr4_controls_for_read(read_value,
                            md_ctx.tdvps_ptr->management.base_l2_cr4_guest_host_mask,
                            md_ctx.tdvps_ptr->management.base_l2_cr4_read_shadow);
                }
                break;
            }
            case 0x4020ULL:
            {
                if ((access_type == MD_GUEST_RD) || (access_type == MD_GUEST_WR))
                {
                    read_value = md_ctx.tdvps_ptr->management.shadow_ple_gap[vm_id];
                }
                break;
            }
            case 0x4022ULL:
            {
                if ((access_type == MD_GUEST_RD) || (access_type == MD_GUEST_WR))
                {
                    read_value = md_ctx.tdvps_ptr->management.shadow_ple_window[vm_id];
                }
                break;
            }
            case 0x203C:
            {
                read_value = md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id];
                break;
            }
            case 0x2012ULL:
            {
                read_value = md_ctx.tdvps_ptr->management.l2_vapic_gpa[vm_id];
                break;
            }
            default:
                                   ;
                break;
        }
    }
    else if (field_id.class_code == 17ULL)
    {
        switch (field_id.field_code)
        {
            case 256ULL:
            {
                vcpu_state_t vcpu_state_details;
                guest_interrupt_status_t interrupt_status;
                uint64_t interrupt_status_raw;
                set_vm_vmcs_as_active(md_ctx.tdvps_ptr, 0);
                ia32_vmread(0x0810, &interrupt_status_raw);
                interrupt_status.raw = (uint16_t)interrupt_status_raw;
                vcpu_state_details.raw = 0ULL;
                if ((interrupt_status.rvi & 0xF0UL) > (md_ctx.tdvps_ptr->vapic.apic[0xA0] & 0xF0UL))
                {
                    vcpu_state_details.vmxip = 1ULL;
                }
                read_value = vcpu_state_details.raw;
                break;
            }
            default:
                break;
        }
    }
    else if (field_id.class_code == 19ULL)
    {
        switch (field_id.field_code)
        {
            case 72ULL:
            {
                read_value = calculate_virt_ia32_spec_ctrl(md_ctx.tdcs_ptr, md_ctx.tdvps_ptr->guest_msr_state.ia32_spec_ctrl);
                break;
            }
            default:
                break;
        }
    }
    return read_value;
}
static uint64_t* calc_elem_ptr(md_field_id_t field_id, const md_lookup_t* entry, md_context_ptrs_t md_ctx)
{
                                              ;
                                                   ;
    uint64_t elem_size = (uint64_t)(1ULL<<(entry->field_id.element_size_code));
    uint64_t elem_num = field_id.field_code - entry->field_id.field_code;
    uint64_t offset = entry->offset + (elem_num * elem_size);
    return (uint64_t*)((uint8_t*)md_ctx.tdvps_ptr + offset);
}
static api_error_code_e md_vp_get_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx,
        uint64_t* out_rd_mask, uint64_t* out_wr_mask, uint64_t* out_rd_value, uint64_t** out_elem_ptr)
{
    uint64_t rd_mask = 0, wr_mask = 0;
    uint64_t read_value;
    uint16_t vm_id = 0;
    md_get_rd_wr_mask(entry, access_type, access_qual, &rd_mask, &wr_mask);
    switch (field_id.class_code)
    {
        case 0ULL:
        case 36ULL:
        case 44ULL:
        case 52ULL:
        {
            if (field_id.class_code != 0ULL)
            {
                vm_id = md_vp_get_l2_vm_index(field_id.class_code);
                if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)
                {
                    return 0xC0000C0000000000ULL;
                }
            }
            vmcs_field_code_t vmcs_field_code;
            vmcs_field_code.raw = field_id.field_code;
            if (vmcs_field_code.access_type == 1)
            {
                return 0xC0000C0000000000ULL;
            }
            set_vm_vmcs_as_active(md_ctx.tdvps_ptr, vm_id);
            if (!ia32_try_vmread(vmcs_field_code.raw, &read_value))
            {
                return 0xC0000C0000000000ULL;
            }
            *out_elem_ptr = ((void*)0);
            break;
        }
        case 37ULL:
        case 45ULL:
        case 53ULL:
        {
            vm_id = (uint16_t)md_vp_get_l2_vm_index(field_id.class_code);
            if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)
            {
                return 0xC0000C0000000000ULL;
            }
                                                      ;
            uint64_t elem_num = field_id.field_code - entry->field_id.field_code;
            if ((access_type == MD_HOST_RD) || (access_type == MD_HOST_WR))
            {
                *out_elem_ptr = &md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_msr_bitmaps[elem_num];
                read_value = md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_msr_bitmaps[elem_num];
            }
            else
            {
                *out_elem_ptr = &md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_shadow_msr_bitmaps[elem_num];
                read_value = md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_shadow_msr_bitmaps[elem_num];
            }
            break;
        }
        case 38ULL:
        case 46ULL:
        case 54ULL:
            vm_id = (uint16_t)md_vp_get_l2_vm_index(field_id.class_code);
            if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)
            {
                return 0xC0000C0000000000ULL;
            }
        case 1ULL:
        case 16ULL:
        case 18ULL:
        case 19ULL:
        case 17ULL:
        case 2ULL:
        case 32ULL:
        case 33ULL:
        case 34ULL:
        {
            uint64_t* elem_ptr = calc_elem_ptr(field_id, entry, md_ctx);
            *out_elem_ptr = elem_ptr;
            read_value = *elem_ptr;
            break;
        }
        default:
            { ; tdx_arch_fatal_error(); };
            break;
    }
    if (entry->special_rd_handling)
    {
        read_value = md_vp_get_element_special_rd_handle(field_id, access_type, md_ctx, vm_id, read_value);
    }
    *out_rd_mask = rd_mask;
    *out_wr_mask = wr_mask;
    *out_rd_value = read_value & md_get_element_size_mask(entry->field_id.element_size_code);
    return 0x0000000000000000ULL;
}
api_error_code_e md_vp_read_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t* out_rd_value)
{
    uint64_t rd_mask, wr_mask, read_value;
    uint64_t* elem_ptr;
    api_error_code_e status;
    status = md_vp_get_element(field_id, entry, access_type, access_qual, md_ctx, &rd_mask, &wr_mask,
                               &read_value, &elem_ptr);
    if (status != 0x0000000000000000ULL)
    {
        return status;
    }
    if (rd_mask == 0)
    {
        return 0xC0000C0200000000ULL;
    }
    read_value &= rd_mask;
    *out_rd_value = read_value;
    return 0x0000000000000000ULL;
}
static inline void write_element_to_mem(void* element_ptr, uint64_t value, uint32_t element_size_code)
{
    uint8_t *ptr_8;
    uint16_t *ptr_16;
    uint32_t *ptr_32;
    uint64_t *ptr_64;
    switch (element_size_code)
    {
    case 0:
        ptr_8 = (uint8_t *)element_ptr;
        *ptr_8 = (uint8_t) value;
        break;
    case 1:
        ptr_16 = (uint16_t *)element_ptr;
        *ptr_16 = (uint16_t) value;
        break;
    case 2:
        ptr_32 = (uint32_t *)element_ptr;
        *ptr_32 = (uint32_t) value;
        break;
    case 3:
        ptr_64 = (uint64_t *)element_ptr;
        *ptr_64 = value;
        break;
    default:
        { ; tdx_arch_fatal_error(); };
        break;
    }
}
static api_error_code_e md_vp_element_vmcs_wr_handle(md_field_id_t field_id, md_context_ptrs_t md_ctx,
                                                     uint64_t wr_mask, uint64_t* wr_value, bool_t* write_done)
{
    *write_done = ((bool_t)0);
    switch (field_id.field_code)
    {
    case 0x6800ULL:
    {
        uint64_t old_cr, guest_host_mask, rd_shadow;
        ia32_vmread(0x6800ULL, &old_cr);
        ia32_vmread(0x6000ULL, &guest_host_mask);
        ia32_vmread(0x6004ULL, &rd_shadow);
        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value, guest_host_mask, rd_shadow))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x6802ULL:
    {
        if (!check_guest_cr3_value(*wr_value, md_ctx.tdcs_ptr))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x6804ULL:
    {
        uint64_t old_cr, guest_host_mask, rd_shadow;
        ia32_vmread(0x6804ULL, &old_cr);
        ia32_vmread(0x6002ULL, &guest_host_mask);
        ia32_vmread(0x6006ULL, &rd_shadow);
        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value, guest_host_mask, rd_shadow))
        {
            return 0xC0000C0300000000ULL;
        }
                                                                          ;
        break;
    }
    case 0x2802ULL:
    {
        if (!check_and_update_ia32_dbgctrl(wr_value, md_ctx.tdcs_ptr))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x4024ULL:
    {
        break;
    }
    case 0x4000ULL:
    {
        vmx_pinbased_ctls_t pinbased_exec_ctls;
        pinbased_exec_ctls.raw = (uint32_t)*wr_value;
        if (pinbased_exec_ctls.process_posted_interrupts == 1)
        {
            uint64_t addr, vec;
            ia32_vmread(0x0002ULL, &vec);
            if ((uint16_t)vec == 0xFFFF)
            {
                return api_error_with_operand_id(0xC000073000000000ULL,
                                                 0x0002ULL);
            }
            ia32_vmread(0x2016ULL, &addr);
            if (addr == (-1ULL))
            {
                return api_error_with_operand_id(0xC000073000000000ULL,
                                                 0x2016ULL);
            }
        }
        md_ctx.tdvps_ptr->management.shadow_pinbased_exec_ctls = (uint32_t)pinbased_exec_ctls.raw;
        break;
    }
    case 0x2016ULL:
    {
        md_ctx.tdvps_ptr->management.shadow_pid_hpa = *wr_value;
        break;
    }
    case 0x0002ULL:
    {
        if (*wr_value < 0 || *wr_value > 255)
        {
            return 0xC0000C0300000000ULL;
        }
        else
        {
            md_ctx.tdvps_ptr->management.shadow_posted_int_notification_vector = (uint16_t)*wr_value;
        }
        break;
    }
    case 0x401EULL:
    {
        vmx_procbased_ctls2_t new_ctls2;
        new_ctls2.raw = *wr_value;
        if (!check_l1_procbased_exec_ctls2(md_ctx.tdcs_ptr, (uint32_t)wr_mask, new_ctls2))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x203C:
    {
        md_ctx.tdvps_ptr->management.shadow_shared_eptp[0] = *wr_value;
        break;
    }
    default:
                           ;
        break;
    }
    return 0x0000000000000000ULL;
}
static api_error_code_e md_vp_element_l2_vmcs_wr_handle(md_field_id_t field_id, md_access_t access_type,
                                                        md_context_ptrs_t md_ctx, uint64_t wr_mask,
                                                        uint64_t* wr_value, bool_t* write_done)
{
    *write_done = ((bool_t)0);
    uint16_t vm_id = md_vp_get_l2_vm_index(field_id.class_code);
    switch (field_id.field_code)
    {
    case 0x6000ULL:
    {
        md_ctx.tdvps_ptr->management.shadow_cr0_guest_host_mask[vm_id] = *wr_value;
        combine_and_write_l2_cr0_controls(md_ctx.tdvps_ptr, vm_id);
        *write_done = ((bool_t)1);
        break;
    }
    case 0x6004ULL:
    {
        md_ctx.tdvps_ptr->management.shadow_cr0_read_shadow[vm_id] = *wr_value;
        combine_and_write_l2_cr0_controls(md_ctx.tdvps_ptr, vm_id);
        *write_done = ((bool_t)1);
        break;
    }
    case 0x6002ULL:
    {
        md_ctx.tdvps_ptr->management.shadow_cr4_guest_host_mask[vm_id] = *wr_value;
        combine_and_write_l2_cr4_controls(md_ctx.tdvps_ptr, vm_id);
        *write_done = ((bool_t)1);
        break;
    }
    case 0x6006ULL:
    {
        md_ctx.tdvps_ptr->management.shadow_cr4_read_shadow[vm_id] = *wr_value;
        combine_and_write_l2_cr4_controls(md_ctx.tdvps_ptr, vm_id);
        *write_done = ((bool_t)1);
        break;
    }
    case 0x201AULL:
    {
        ia32e_eptp_t eptp = { .raw = *wr_value };
        ia32_xcr0_t xfam = { .raw = md_ctx.tdcs_ptr->executions_ctl_fields.xfam };
        if (eptp.fields.enable_sss_control && !xfam.cet_s)
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x6800ULL:
    {
        uint64_t old_cr;
        ia32_vmread(0x6800ULL, &old_cr);
        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value,
                md_ctx.tdvps_ptr->management.base_l2_cr0_guest_host_mask,
                md_ctx.tdvps_ptr->management.base_l2_cr0_read_shadow))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x6802ULL:
    {
        if (!check_guest_cr3_value(*wr_value, md_ctx.tdcs_ptr))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x6804ULL:
    {
        uint64_t old_cr;
        ia32_vmread(0x6804ULL, &old_cr);
        if (!apply_cr0_cr4_controls_for_write(old_cr, wr_value,
                md_ctx.tdvps_ptr->management.base_l2_cr4_guest_host_mask,
                md_ctx.tdvps_ptr->management.base_l2_cr4_read_shadow))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x2802ULL:
    {
        if (!check_and_update_ia32_dbgctrl(wr_value, md_ctx.tdcs_ptr))
        {
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x2040:
    {
        break;
    }
    case 0x4020ULL:
    case 0x4022ULL:
    {
        if (access_type == MD_GUEST_WR)
        {
            if (field_id.field_code == 0x4020ULL)
            {
                md_ctx.tdvps_ptr->management.shadow_ple_gap[vm_id] = (uint32_t)*wr_value;
            }
            else
            {
                md_ctx.tdvps_ptr->management.shadow_ple_window[vm_id] = (uint32_t)*wr_value;
            }
            if (!calculate_native_tsc(*wr_value,
                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,
                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset,
                                      wr_value))
            {
                return 0xC0000C0300000000ULL;
            }
            if (*wr_value >= (uint64_t)(1ULL<<(32)))
            {
                return 0xC0000C0300000000ULL;
            }
        }
        break;
    }
    case 0x4002ULL:
    {
        vmx_procbased_ctls_t new_ctls = { .raw = *wr_value };
        if (!check_l2_procbased_exec_ctls(md_ctx.tdcs_ptr, (uint32_t)wr_mask, new_ctls, access_type))
        {
                                          ;
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x401EULL:
    {
        vmx_procbased_ctls2_t new_ctls2 = { .raw = *wr_value };
        if (!check_l2_procbased_exec_ctls2(md_ctx.tdcs_ptr, (uint32_t)wr_mask, new_ctls2, access_type))
        {
                                           ;
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x2034:
    {
        vmx_procbased_ctls3_t new_ctls = { .raw = *wr_value };
        if (!check_l2_procbased_exec_ctls3(md_ctx.tdcs_ptr, wr_mask, new_ctls, access_type))
        {
                                          ;
            return 0xC0000C0300000000ULL;
        }
        break;
    }
    case 0x203C:
    {
        md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id] = *wr_value;
        if (!md_ctx.tdvps_ptr->management.l2_ctls[vm_id].enable_shared_eptp)
        {
            *write_done = ((bool_t)1);
        }
        break;
    }
    case 0x2012ULL:
    {
        md_ctx.tdvps_ptr->management.l2_vapic_gpa[vm_id] = *wr_value;
        md_ctx.tdvps_ptr->management.l2_vapic_hpa[vm_id] = ~(0ULL);
        *write_done = ((bool_t)1);
        break;
    }
    default:
                           ;
        break;
    }
    return 0x0000000000000000ULL;
}
static api_error_code_e md_vp_element_tdvps_wr_handle(md_field_id_t field_id, md_access_t access_type,
                                                      md_context_ptrs_t md_ctx, uint64_t* wr_value, bool_t* write_done)
{
    *write_done = ((bool_t)0);
    switch (field_id.class_code)
    {
        case 17ULL:
        {
            if (field_id.field_code == 32ULL)
            {
                if (!check_guest_xcr0_value((ia32_xcr0_t)*wr_value, md_ctx.tdcs_ptr->executions_ctl_fields.xfam))
                {
                    return 0xC0000C0300000000ULL;
                }
            }
            else
            {
                                   ;
            }
            break;
        }
        case 18ULL:
        {
            ia32_xcr0_t xfam = { .raw = md_ctx.tdcs_ptr->executions_ctl_fields.xfam };
            if (access_type == MD_HOST_WR)
            {
                if ((field_id.field_code >= (sizeof(xsave_legacy_region_t) / 8)) &&
                    (field_id.field_code < ((sizeof(xsave_legacy_region_t) + sizeof(xsave_header_t)) / 8)))
                {
                    return 0xC0000C0100000000ULL;
                }
                if ((xfam.pt) && (field_id.field_code == md_ctx.tdcs_ptr->executions_ctl_fields.xbuff_offsets[8] / 8))
                {
                    return 0xC0000C0100000000ULL;
                }
            }
            else
            {
                                                                  ;
                if ((xfam.pt) && (field_id.field_code == md_ctx.tdcs_ptr->executions_ctl_fields.xbuff_offsets[8] / 8))
                {
                    *wr_value = 0;
                }
            }
            break;
        }
        case 19ULL:
        {
            if (field_id.field_code == 72ULL)
            {
                *wr_value = calculate_real_ia32_spec_ctrl(md_ctx.tdcs_ptr, *wr_value);
            }
            else if (field_id.field_code == 3488ULL)
            {
                tdx_module_global_t* global_data = get_global_data();
                if (0 != (*wr_value & ~(global_data->ia32_xss_supported_mask & md_ctx.tdcs_ptr->executions_ctl_fields.xfam)))
                {
                    return 0xC0000C0300000000ULL;
                }
            }
            else
            {
                                   ;
            }
            break;
        }
        case 32ULL:
        {
            switch (field_id.field_code)
            {
                case 0ULL:
                {
                    if (*wr_value != 0x8)
                    {
                        *write_done = ((bool_t)1);
                    }
                    break;
                }
                case 2ULL:
                {
                    if (*wr_value >= (uint64_t)md_ctx.tdcs_ptr->management_fields.num_vcpus)
                    {
                        return 0xC0000C0300000000ULL;
                    }
                    break;
                }
                case 15ULL:
                {
                    if ((*wr_value != 0x0) &&
                        (*wr_value != 0x1) &&
                        (*wr_value != 0x2))
                    {
                        return 0xC0000C0300000000ULL;
                    }
                    break;
                }
                case 65ULL:
                {
                    if (*wr_value > (uint64_t)md_ctx.tdcs_ptr->management_fields.num_l2_vms)
                    {
                        return 0xC0000C0300000000ULL;
                    }
                    break;
                }
                case 66ULL:
                {
                    if ((*wr_value != HOST_ROUTED_NONE) &&
                        (*wr_value != HOST_ROUTED_ASYNC) &&
                        (*wr_value != HOST_ROUTED_TDVMCALL))
                    {
                        return 0xC0000C0300000000ULL;
                    }
                    break;
                }
                case 12ULL:
                {
                    return 0xC0000C0100000000ULL;
                    break;
                }
                case 80ULL:
                {
                    break;
                }
                case (80ULL + 1):
                case (80ULL + 2):
                case (80ULL + 3):
                {
                    uint16_t vm_id = (uint16_t)(field_id.field_code - 80ULL);
                    if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)
                    {
                        break;
                    }
                    l2_vcpu_ctrl_t l2_ctls = { .raw = *wr_value };
                    set_vm_vmcs_as_active(md_ctx.tdvps_ptr, vm_id);
                    if (l2_ctls.enable_shared_eptp &&
                        (md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id] != ~(0ULL)))
                    {
                        ia32_vmwrite(0x203C,
                                md_ctx.tdvps_ptr->management.shadow_shared_eptp[vm_id]);
                    }
                    else
                    {
                        ia32_vmwrite(0x203C,
                                md_ctx.tdr_ptr->management_fields.tdcx_pa[ZERO_PAGE_INDEX]);
                    }
                    break;
                }
                case 88ULL:
                {
                    break;
                }
                case (88ULL + 1):
                case (88ULL + 2):
                case (88ULL + 3):
                {
                    uint16_t vm_id = (uint16_t)(field_id.field_code - 88ULL);
                    if(vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)
                    {
                        break;
                    }
                    if (*wr_value != ~(0ULL))
                    {
                        uint64_t native_tsc = ia32_rdtsc();
                        uint64_t virt_tsc = calculate_virt_tsc(native_tsc,
                                                               md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,
                                                               md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset);
                        uint64_t native_tsc_deadline = 0;
                        if (*wr_value <= virt_tsc)
                        {
                            native_tsc_deadline = native_tsc;
                        }
                        else
                        {
                            if (!calculate_native_tsc(*wr_value,
                                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_multiplier,
                                                      md_ctx.tdcs_ptr->executions_ctl_fields.tsc_offset,
                                                      &native_tsc_deadline))
                            {
                                return 0xC000010000000000ULL;
                            }
                            if (0 == native_tsc_deadline)
                            {
                                return 0xC000010000000000ULL;
                            }
                            if ((int64_t)(native_tsc_deadline - native_tsc) < 0)
                            {
                                return 0xC000010000000000ULL;
                            }
                        }
                        md_ctx.tdvps_ptr->management.shadow_tsc_deadline[vm_id] = native_tsc_deadline;
                    }
                    break;
                }
                default: ;
            }
            break;
        }
        case 37ULL:
        case 45ULL:
        case 53ULL:
        {
            uint16_t vm_id = md_vp_get_l2_vm_index(field_id.class_code);
            if (vm_id > md_ctx.tdcs_ptr->management_fields.num_l2_vms)
            {
                return 0xC0000C0000000000ULL;
            }
            md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_shadow_msr_bitmaps[field_id.field_code] = *wr_value;
            *write_done = ((bool_t)1);
            uint64_t* td_msr_bitmaps_page_p = (uint64_t*)md_ctx.tdcs_ptr->MSR_BITMAPS;
            md_ctx.tdvps_ptr->l2_vm_ctrl[vm_id-1].l2_msr_bitmaps[field_id.field_code] =
                    td_msr_bitmaps_page_p[field_id.field_code] | *wr_value;
            break;
        }
        default: ;
    }
    return 0x0000000000000000ULL;
}
static api_error_code_e md_vp_element_special_wr_handle(md_field_id_t field_id, md_access_t access_type,
                                                        md_context_ptrs_t md_ctx, uint64_t wr_mask,
                                                        uint64_t* wr_value, bool_t* write_done)
{
    api_error_code_e retval = 0x0000000000000000ULL;
    *write_done = ((bool_t)0);
    if (field_id.class_code == 0ULL)
    {
        retval = md_vp_element_vmcs_wr_handle(field_id, md_ctx, wr_mask, wr_value, write_done);
    }
    else if ((field_id.class_code == 36ULL) ||
             (field_id.class_code == 44ULL) ||
             (field_id.class_code == 52ULL))
    {
        retval = md_vp_element_l2_vmcs_wr_handle(field_id, access_type, md_ctx, wr_mask,
                                                 wr_value, write_done);
    }
    else
    {
        retval = md_vp_element_tdvps_wr_handle(field_id, access_type, md_ctx, wr_value, write_done);
    }
    return retval;
}
static inline uint64_t md_vp_get_checked_size_of_shared_hpa_range(md_field_id_t field_id)
{
    uint64_t size = (4 * 0x400ULL);
    if ((field_id.class_code == 0ULL ||
         field_id.class_code == 36ULL ||
         field_id.class_code == 44ULL ||
         field_id.class_code == 52ULL) &&
         field_id.field_code == 0x2016ULL)
    {
        size = 64;
    }
    return size;
}
static uint64_t md_vp_adjust_value_per_field_attr_on_wr(const md_lookup_t* entry, uint64_t current_value,
                                                        uint64_t wr_mask)
{
    if ( __builtin_expect(((entry->attributes.gpa || entry->attributes.hpa) && is_initial_invalid_pa(current_value)), 0) )
    {
        current_value &= wr_mask;
    }
    return current_value;
}
static api_error_code_e md_vp_handle_field_attribute_on_wr(md_field_id_t field_id, const md_lookup_t* entry,
                                                           md_context_ptrs_t md_ctx, uint64_t* wr_value)
{
    if (entry->attributes.hpa && entry->attributes.shared)
    {
        uint64_t size = md_vp_get_checked_size_of_shared_hpa_range(field_id);
        if (shared_hpa_check((pa_t)*wr_value, size) != 0x0000000000000000ULL)
        {
            return 0xC0000C0300000000ULL;
        }
    }
    else if (entry->attributes.gpa && entry->attributes.prvate)
    {
        if (!check_gpa_validity((pa_t)*wr_value, md_ctx.tdcs_ptr->executions_ctl_fields.gpaw, ((bool_t)1)))
        {
            return 0xC0000C0300000000ULL;
        }
    }
    return 0x0000000000000000ULL;
}
api_error_code_e md_vp_write_element(md_field_id_t field_id, const md_lookup_t* entry, md_access_t access_type,
        md_access_qualifier_t access_qual, md_context_ptrs_t md_ctx, uint64_t wr_value, uint64_t wr_request_mask,
        uint64_t* old_value, bool_t return_old_val)
{
    uint64_t rd_mask, wr_mask, combined_wr_mask, read_value = 0;
    uint64_t tmp_old_value = 0;
    uint64_t* elem_ptr;
    api_error_code_e status;
    status = md_vp_get_element(field_id, entry, access_type, access_qual, md_ctx, &rd_mask, &wr_mask,
                               &tmp_old_value, &elem_ptr);
    if (status != 0x0000000000000000ULL)
    {
        return status;
    }
    combined_wr_mask = wr_mask & wr_request_mask;
    if (combined_wr_mask == 0)
    {
        return 0xC0000C0100000000ULL;
    }
    uint64_t element_size_mask = md_get_element_size_mask(entry->field_id.element_size_code);
    if (combined_wr_mask != element_size_mask)
    {
        read_value = tmp_old_value;
    }
    tmp_old_value &= rd_mask;
    read_value = md_vp_adjust_value_per_field_attr_on_wr(entry, read_value, wr_mask);
    if (!md_check_forbidden_bits_unchanged(read_value, wr_value, wr_request_mask, wr_mask))
    {
                                                                                        ;
                                                               ;
        return 0xC0000C0300000000ULL;
    }
    wr_value = (read_value & ~combined_wr_mask) | (wr_value & combined_wr_mask);
    status = md_vp_handle_field_attribute_on_wr(field_id, entry, md_ctx, &wr_value);
    if (status != 0x0000000000000000ULL)
    {
        return status;
    }
    bool_t write_done = ((bool_t)0);
    if (entry->special_wr_handling)
    {
        status = md_vp_element_special_wr_handle(field_id, access_type, md_ctx, combined_wr_mask,
                                                 &wr_value, &write_done);
        if (status != 0x0000000000000000ULL)
        {
            return status;
        }
    }
    if ((field_id.class_code == 0ULL) ||
        (field_id.class_code == 36ULL) ||
        (field_id.class_code == 44ULL) ||
        (field_id.class_code == 52ULL))
    {
        if (!write_done)
        {
            if (!ia32_try_vmwrite(field_id.field_code, wr_value))
            {
                return 0xC0000C0100000000ULL;
            }
        }
    }
    else
    {
                                          ;
        if (!write_done)
        {
            write_element_to_mem(elem_ptr, wr_value, entry->field_id.element_size_code);
        }
    }
    if (return_old_val)
    {
        *old_value = tmp_old_value;
    }
    return 0x0000000000000000ULL;
}
api_error_type tdg_vm_wr(uint64_t field_code,
        uint64_t vm_id,
        uint64_t wr_data,
        uint64_t wr_mask,
        uint64_t version);
static api_error_type tdg_vm_rd_wr(md_field_id_t field_id, uint64_t vm_id, tdx_module_local_t * local_data_ptr,
                                   bool_t write, uint64_t wr_value, uint64_t wr_request_mask, uint64_t version)
{
    uint64_t rd_value;
    md_context_ptrs_t md_ctx;
    md_access_qualifier_t access_qual = { .raw = 0 };
    api_error_type return_val = 0x0000000000000000ULL;
    if (!write && (version > 0))
    {
        local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx = ((uint64_t)(-1ULL));
    }
    local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 = 0;
    if ((!write) && (version > 1))
    {
                                                          ;
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 0ULL);
        goto EXIT;
    }
    if (vm_id != 0)
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 1ULL);
        goto EXIT;
    }
    md_ctx.tdr_ptr = local_data_ptr->vp_ctx.tdr;
    md_ctx.tdcs_ptr = local_data_ptr->vp_ctx.tdcs;
    md_ctx.tdvps_ptr = ((void*)0);
    field_id.context_code = MD_CTX_TD;
    if (!write && (version > 0))
    {
        if (is_null_field_id(field_id))
        {
            local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx =
                    (md_get_next_element_in_context(MD_CTX_TD, field_id, md_ctx, MD_GUEST_RD, access_qual)).raw;
            return_val = 0x00000C0B00000000ULL;
            goto EXIT;
        }
    }
    return_val = md_check_as_single_element_id(field_id);
    if (return_val != 0x0000000000000000ULL)
    {
                                                                                         ;
        goto EXIT;
    }
    if (write)
    {
        return_val = md_write_element(MD_CTX_TD, field_id, MD_GUEST_WR, access_qual,
                                      md_ctx, wr_value, wr_request_mask, &rd_value);
    }
    else
    {
        return_val = md_read_element(MD_CTX_TD, field_id, MD_GUEST_RD, access_qual,
                                     md_ctx, &rd_value);
        if ((version > 0) && (return_val == 0x0000000000000000ULL))
        {
            local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx =
                    md_get_next_element_in_context(MD_CTX_TD, field_id, md_ctx, MD_GUEST_RD, access_qual).raw;
        }
    }
    if (return_val != 0x0000000000000000ULL)
    {
                                                                                                  ;
        goto EXIT;
    }
    local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 = rd_value;
    return_val = 0x0000000000000000ULL;
EXIT:
    return return_val;
}
api_error_type tdg_vm_wr(uint64_t requested_field_code,
        uint64_t vm_id,
        uint64_t wr_data,
        uint64_t wr_mask,
        uint64_t version)
{
    tdx_module_local_t * local_data_ptr = get_local_data();
    md_field_id_t field_code = { .raw = requested_field_code };
    return tdg_vm_rd_wr(field_code, vm_id, local_data_ptr, ((bool_t)1), wr_data, wr_mask, version);
}
void tdg_vm_wr__call() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    tdx_leaf_and_version_t leaf_opcode = { .raw = tdx_local_data_ptr->td_regs.rax };
    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = tdg_vm_wr(
        tdx_local_data_ptr->td_regs.rdx,
        tdx_local_data_ptr->td_regs.rcx,
        tdx_local_data_ptr->td_regs.r8,
        tdx_local_data_ptr->td_regs.r9,
        leaf_opcode.version
    );
}
static inline void tdg_vm_wr__common_precond() {
    tdx_leaf_and_version_t leaf_opcode = { .raw = get_local_data()->td_regs.rax };
    assume_exit_if_not(leaf_opcode.leaf == TDG_VM_WR_LEAF);
}
static inline bool_t input_rcx_is_valid() {
    return (get_local_data()->td_regs.rcx == 0);
}
static inline bool_t input_field_id_is_valid() {
    md_field_id_t field_id = { .raw = get_local_data()->td_regs.rdx };
    return ((field_id.last_element_in_field == 0) && (field_id.last_field_in_sequence == 0));
}
static inline void tdg_vm_wr__common_postcond() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rax == shadow_td_regs_precall.rax);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rbx == shadow_td_regs_precall.rbx);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rcx == shadow_td_regs_precall.rcx);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rdx == shadow_td_regs_precall.rdx);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rsp == shadow_td_regs_precall.rsp);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rbp == shadow_td_regs_precall.rbp);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rsi == shadow_td_regs_precall.rsi);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.rdi == shadow_td_regs_precall.rdi);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r8 == shadow_td_regs_precall.r8);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r9 == shadow_td_regs_precall.r9);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r10 == shadow_td_regs_precall.r10);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r11 == shadow_td_regs_precall.r11);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r12 == shadow_td_regs_precall.r12);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r13 == shadow_td_regs_precall.r13);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r14 == shadow_td_regs_precall.r14);
    __VERIFIER_assert(tdx_local_data_ptr->td_regs.r15 == shadow_td_regs_precall.r15);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbx == shadow_guest_gpr_state_precall.rbx);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rcx == shadow_guest_gpr_state_precall.rcx);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx == shadow_guest_gpr_state_precall.rdx);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsp == shadow_guest_gpr_state_precall.rsp);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbp == shadow_guest_gpr_state_precall.rbp);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsi == shadow_guest_gpr_state_precall.rsi);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdi == shadow_guest_gpr_state_precall.rdi);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r9 == shadow_guest_gpr_state_precall.r9);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r10 == shadow_guest_gpr_state_precall.r10);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r11 == shadow_guest_gpr_state_precall.r11);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r12 == shadow_guest_gpr_state_precall.r12);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r13 == shadow_guest_gpr_state_precall.r13);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r14 == shadow_guest_gpr_state_precall.r14);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r15 == shadow_guest_gpr_state_precall.r15);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rax == shadow_vmm_regs_precall.rax);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rbx == shadow_vmm_regs_precall.rbx);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rcx == shadow_vmm_regs_precall.rcx);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rdx == shadow_vmm_regs_precall.rdx);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rsp == shadow_vmm_regs_precall.rsp);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rbp == shadow_vmm_regs_precall.rbp);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rsi == shadow_vmm_regs_precall.rsi);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rdi == shadow_vmm_regs_precall.rdi);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r8 == shadow_vmm_regs_precall.r8);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r9 == shadow_vmm_regs_precall.r9);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r10 == shadow_vmm_regs_precall.r10);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r11 == shadow_vmm_regs_precall.r11);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r12 == shadow_vmm_regs_precall.r12);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r13 == shadow_vmm_regs_precall.r13);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r14 == shadow_vmm_regs_precall.r14);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r15 == shadow_vmm_regs_precall.r15);
}
void tdg_vm_wr__expected__precond() {
    tdg_vm_wr__common_precond();
    assume_exit_if_not(input_rcx_is_valid() && input_field_id_is_valid())
    ;
}
void tdg_vm_wr__expected__postcond() {
    __VERIFIER_assert(((bool_t)1));
    tdg_vm_wr__common_postcond();
}
int main() {
    // before_target methods
    init_tdg_vm_xxx();
    tdg_vm_wr__expected__precond();

    // Target method
    tdg_vm_wr__call();

    // after_target methods
    tdg_vm_wr__expected__postcond();
    close_tdg_vm_xxx_with_check();

    return 0;
}
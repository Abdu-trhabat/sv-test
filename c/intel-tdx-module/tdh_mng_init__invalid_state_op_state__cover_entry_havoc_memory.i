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
typedef signed int int32_t;
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
extern unsigned int __VERIFIER_nondet_u32();
extern unsigned long __VERIFIER_nondet_ulong();
static inline uint8_t TDXFV_NONDET_uint8t() { return __VERIFIER_nondet_uchar(); }
static inline uint32_t TDXFV_NONDET_uint32t() { return __VERIFIER_nondet_u32(); }
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
    void* ptr = malloc(size);
    assume_exit_if_not(ptr != (void*)0);
    return ptr;
}
typedef int32_t crypto_api_error;
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
crypto_api_error sha384_init(sha384_ctx_t * ctx);

#pragma pack(push)
#pragma pack(1)
typedef enum seamcall_leaf_opcode_e
{
    TDH_VP_ENTER_LEAF = 0,
    TDH_MNG_ADDCX_LEAF = 1,
    TDH_MEM_PAGE_ADD_LEAF = 2,
    TDH_MEM_SEPT_ADD_LEAF = 3,
    TDH_VP_ADDCX_LEAF = 4,
    TDH_MEM_PAGE_RELOCATE = 5,
    TDH_MEM_PAGE_AUG_LEAF = 6,
    TDH_MEM_RANGE_BLOCK_LEAF = 7,
    TDH_MNG_KEY_CONFIG_LEAF = 8,
    TDH_MNG_CREATE_LEAF = 9,
    TDH_VP_CREATE_LEAF = 10,
    TDH_MNG_RD_LEAF = 11,
    TDH_MEM_RD_LEAF = 12,
    TDH_MNG_WR_LEAF = 13,
    TDH_MEM_WR_LEAF = 14,
    TDH_MEM_PAGE_DEMOTE_LEAF = 15,
    TDH_MR_EXTEND_LEAF = 16,
    TDH_MR_FINALIZE_LEAF = 17,
    TDH_VP_FLUSH_LEAF = 18,
    TDH_MNG_VPFLUSHDONE_LEAF = 19,
    TDH_MNG_KEY_FREEID_LEAF = 20,
    TDH_MNG_INIT_LEAF = 21,
    TDH_VP_INIT_LEAF = 22,
    TDH_MEM_PAGE_PROMOTE_LEAF = 23,
    TDH_PHYMEM_PAGE_RDMD_LEAF = 24,
    TDH_MEM_SEPT_RD_LEAF = 25,
    TDH_VP_RD_LEAF = 26,
    TDH_MNG_KEY_RECLAIMID_LEAF = 27,
    TDH_PHYMEM_PAGE_RECLAIM_LEAF = 28,
    TDH_MEM_PAGE_REMOVE_LEAF = 29,
    TDH_MEM_SEPT_REMOVE_LEAF = 30,
    TDH_SYS_KEY_CONFIG_LEAF = 31,
    TDH_SYS_INFO_LEAF = 32,
    TDH_SYS_INIT_LEAF = 33,
    TDH_SYS_RD_LEAF = 34,
    TDH_SYS_LP_INIT_LEAF = 35,
    TDH_SYS_TDMR_INIT_LEAF = 36,
    TDH_SYS_RDALL_LEAF = 37,
    TDH_MEM_TRACK_LEAF = 38,
    TDH_MEM_RANGE_UNBLOCK_LEAF = 39,
    TDH_PHYMEM_CACHE_WB_LEAF = 40,
    TDH_PHYMEM_PAGE_WBINVD_LEAF = 41,
    TDH_MEM_SEPT_WR_LEAF = 42,
    TDH_VP_WR_LEAF = 43,
    TDH_SYS_LP_SHUTDOWN_LEAF = 44,
    TDH_SYS_CONFIG_LEAF = 45,
    TDH_SERVTD_BIND_LEAF = 48,
    TDH_SERVTD_PREBIND_LEAF = 49,
    TDH_SYS_SHUTDOWN_LEAF = 52,
    TDH_SYS_UPDATE_LEAF = 53,
    TDH_EXPORT_ABORT_LEAF = 64,
    TDH_EXPORT_BLOCKW_LEAF = 65,
    TDH_EXPORT_RESTORE_LEAF = 66,
    TDH_EXPORT_MEM_LEAF = 68,
    TDH_EXPORT_PAUSE_LEAF = 70,
    TDH_EXPORT_TRACK_LEAF = 71,
    TDH_EXPORT_STATE_IMMUTABLE_LEAF = 72,
    TDH_EXPORT_STATE_TD_LEAF = 73,
    TDH_EXPORT_STATE_VP_LEAF = 74,
    TDH_EXPORT_UNBLOCKW_LEAF = 75,
    TDH_IMPORT_ABORT_LEAF = 80,
    TDH_IMPORT_END_LEAF = 81,
    TDH_IMPORT_COMMIT_LEAF = 82,
    TDH_IMPORT_MEM_LEAF = 83,
    TDH_IMPORT_TRACK_LEAF = 84,
    TDH_IMPORT_STATE_IMMUTABLE_LEAF = 85,
    TDH_IMPORT_STATE_TD_LEAF = 86,
    TDH_IMPORT_STATE_VP_LEAF = 87,
    TDH_MIG_STREAM_CREATE_LEAF = 96
} seamcall_leaf_opcode_t;
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
typedef union eptp_controls_s {
    struct
    {
        uint64_t ept_ps_mt : 3;
        uint64_t ept_pwl : 3;
        uint64_t enable_ad_bits : 1;
        uint64_t enable_sss_control : 1;
        uint64_t reserved_0 : 4;
        uint64_t base_pa : 40;
        uint64_t reserved_1 : 12;
    };
    uint64_t raw;
} eptp_controls_t;
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
typedef struct __attribute__((__packed__)) td_params_s
{
    td_param_attributes_t attributes;
    uint64_t xfam;
    uint16_t max_vcpus;
    uint8_t num_l2_vms;
    struct
    {
        uint8_t ia32_arch_cap : 1;
        uint8_t reserved_0 : 7;
    } msr_config_ctls;
    uint8_t reserved_0[4];
    eptp_controls_t eptp_controls;
    config_flags_t config_flags;
    uint16_t tsc_frequency;
    uint8_t reserved_1[38];
    measurement_t mr_config_id;
    measurement_t mr_owner;
    measurement_t mr_owner_config;
    uint64_t ia32_arch_capabilities_config;
    uint8_t reserved_2[24];
    cpuid_config_return_values_t cpuid_config_vals[18];
    uint8_t reserved_3[(768 - (sizeof(cpuid_config_return_values_t) * 18))];
} td_params_t;
typedef struct __attribute__((__packed__)) cmr_info_entry_s
{
    uint64_t cmr_base;
    uint64_t cmr_size;
} cmr_info_entry_t;
typedef uint64_t api_error_code_e;
typedef union api_error_code_u
{
    struct
    {
        union
        {
            uint32_t operand;
            uint32_t details_l2;
            struct
            {
                uint16_t details_l2_low;
                uint16_t details_l2_high;
            };
        };
        uint32_t details_l1 : 8,
                 clas : 8,
                 reserved : 12,
                 host_recoverability_hint : 1,
                 fatal : 1,
                 non_recoverable : 1,
                 error : 1;
    };
    uint64_t raw;
} api_error_code_t;
typedef uint64_t api_error_type;
static inline api_error_type api_error_with_operand_id(api_error_type error, uint64_t operand_id)
{
    return error + operand_id;
}
static inline api_error_type api_error_fatal(api_error_type error)
{
    api_error_code_t error_code;
    error_code.raw = (uint64_t)error;
    error_code.fatal = 1;
    return error_code.raw;
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
typedef enum {
    MT_UC = 0,
    MT_WC = 1,
    MT_RSVD0 = 2,
    MT_RSVD1 = 3,
    MT_WT = 4,
    MT_WP = 5,
    MT_WB = 6,
    MT_UCM = 7
} memory_type_t;
typedef enum {
    LVL_PT = 0,
    LVL_PD = 1,
    LVL_PDPT = 2,
    LVL_PML4 = 3,
    LVL_PML5 = 4,
    LVL_MAX = 5,
} ept_level_t;
typedef union ia32e_pxe_u {
    struct {
        uint64_t
            p : 1,
            rw : 1,
            us : 1,
            pwt : 1,
            pcd : 1,
            a : 1,
            d : 1,
            pat : 1,
            g : 1,
            ignore_0 : 3,
            addr : 40,
            ignore_1 : 7,
            protkey : 4,
            xd : 1;
  } fields_4k;
  uint64_t raw;
} ia32e_pxe_t;
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
typedef union
{
    struct
    {
        uint32_t level_number : 8;
        uint32_t level_type : 8;
        uint32_t rsvd : 16;
    };
    uint32_t raw;
} cpuid_topology_level_t;
typedef enum
{
    LEVEL_TYPE_INVALID = 0,
    LEVEL_TYPE_SMT = 1,
    LEVEL_TYPE_CORE = 2,
    LEVEL_TYPE_MODULE = 3,
    LEVEL_TYPE_TILE = 4,
    LEVEL_TYPE_DIE = 5,
    LEVEL_TYPE_MAX = 6
} cpuid_topology_level_type_e;
typedef union
{
    struct
    {
        uint32_t shift_count : 5;
        uint32_t rsvd : 27;
    };
    uint32_t raw;
} cpuid_topology_shift_t;
typedef union cpuid_1a_eax_u
{
    struct
    {
        uint32_t native_model_id : 24;
        uint32_t core_type : 8;
    };
    uint32_t raw;
} cpuid_1a_eax_t;
typedef union
{
    struct
    {
        uint32_t sse3 : 1;
        uint32_t pclmulqdq : 1;
        uint32_t dtes64 : 1;
        uint32_t monitor : 1;
        uint32_t ds_cpl : 1;
        uint32_t vmc : 1;
        uint32_t smx : 1;
        uint32_t est : 1;
        uint32_t tm2 : 1;
        uint32_t ssse3 : 1;
        uint32_t cnxt_id : 1;
        uint32_t sdbg : 1;
        uint32_t fma : 1;
        uint32_t cmpxchg16b : 1;
        uint32_t xtpr_update_control : 1;
        uint32_t pdcm : 1;
        uint32_t reserved_16 : 1;
        uint32_t pcid : 1;
        uint32_t dca : 1;
        uint32_t sse4_1 : 1;
        uint32_t sse4_2 : 1;
        uint32_t x2apic : 1;
        uint32_t movbe : 1;
        uint32_t popcnt : 1;
        uint32_t tsc_deadline : 1;
        uint32_t aesni : 1;
        uint32_t xsave : 1;
        uint32_t osxsave : 1;
        uint32_t avx : 1;
        uint32_t f16c : 1;
        uint32_t rdrand : 1;
        uint32_t reserved_31 : 1;
    };
    uint32_t raw;
} cpuid_01_ecx_t;
typedef union
{
    struct
    {
        uint32_t xsaveopt_support : 1;
        uint32_t xsavec_support : 1;
        uint32_t xgetbv_1_support : 1;
        uint32_t xsaves_xrstors_ia32_xss_support : 1;
        uint32_t xfd_support : 1;
        uint32_t reserved : 27;
    };
    uint32_t raw;
} cpuid_0d_01_eax_t;
typedef union cpuid_07_00_ebx_u
{
    struct
    {
        uint32_t fsgsbase : 1;
        uint32_t ia32_tsc_adjust : 1;
        uint32_t sgx : 1;
        uint32_t bmi1 : 1;
        uint32_t hle : 1;
        uint32_t avx2 : 1;
        uint32_t fdp_excptn_only : 1;
        uint32_t smep : 1;
        uint32_t bmi2 : 1;
        uint32_t enh_rep_movsb : 1;
        uint32_t invpcid : 1;
        uint32_t rtm : 1;
        uint32_t rdt_m : 1;
        uint32_t dep_fcu_cs_ds : 1;
        uint32_t mpx : 1;
        uint32_t rdt_a : 1;
        uint32_t avx512f : 1;
        uint32_t avx512dq : 1;
        uint32_t rdseed : 1;
        uint32_t adx : 1;
        uint32_t smap : 1;
        uint32_t avx512_ifma : 1;
        uint32_t reserved : 1;
        uint32_t clflushopt : 1;
        uint32_t clwb : 1;
        uint32_t pt : 1;
        uint32_t avx512pf : 1;
        uint32_t avx512er : 1;
        uint32_t avx512cd : 1;
        uint32_t sha : 1;
        uint32_t avx512bw : 1;
        uint32_t avx512vl : 1;
    };
    uint32_t raw;
} cpuid_07_00_ebx_t;
typedef union cpuid_07_00_ecx_u
{
    struct
    {
        uint32_t prefetchwt1 : 1;
        uint32_t avx512vmbi : 1;
        uint32_t umip : 1;
        uint32_t pku : 1;
        uint32_t ospke : 1;
        uint32_t waitpkg : 1;
        uint32_t vmbi2 : 1;
        uint32_t cet_ss : 1;
        uint32_t gfni : 1;
        uint32_t vaes : 1;
        uint32_t vpclmulqdq : 1;
        uint32_t vnni : 1;
        uint32_t bitalg_support : 1;
        uint32_t tme : 1;
        uint32_t dfma_for_avx512 : 1;
        uint32_t fzm : 1;
        uint32_t la57 : 1;
        uint32_t mawau_for_mpx : 5;
        uint32_t rdpid : 1;
        uint32_t kl_supported : 1;
        uint32_t buslock : 1;
        uint32_t cldemote : 1;
        uint32_t mprr : 1;
        uint32_t movdiri : 1;
        uint32_t movidr64b : 1;
        uint32_t enqstr : 1;
        uint32_t sgxle : 1;
        uint32_t pks : 1;
    };
    uint32_t raw;
} cpuid_07_00_ecx_t;
typedef union cpuid_07_00_edx_u
{
    struct
    {
        uint32_t sgx_tem : 1;
        uint32_t sgx_keys : 1;
        uint32_t avx512_4vnniw : 1;
        uint32_t avx512_4fmaps : 1;
        uint32_t fast_short_rep_mov : 1;
        uint32_t uli_unit : 1;
        uint32_t reserved0 : 2;
        uint32_t avx512_vp2intersect : 1;
        uint32_t reserved2 : 5;
        uint32_t serialize_inst : 1;
        uint32_t hetero_part : 1;
        uint32_t hle_suspend : 1;
        uint32_t reserved3 : 1;
        uint32_t pconfig_mktme : 1;
        uint32_t architectrual_lbr_support : 1;
        uint32_t cet : 1;
        uint32_t reserved4 : 1;
        uint32_t tmul_amx_bf16 : 1;
        uint32_t reserved5 : 1;
        uint32_t tmul_amx_tile : 1;
        uint32_t tmul_amx_int8 : 1;
        uint32_t ibrs_support : 1;
        uint32_t stibp_support : 1;
        uint32_t lid_flush_ia32_flush_cmd_support : 1;
        uint32_t ia32_arch_capabilities_support : 1;
        uint32_t ia32_core_capabilities_present : 1;
        uint32_t ssbd_support : 1;
    };
    uint32_t raw;
} cpuid_07_00_edx_t;
typedef union cpuid_07_01_eax_u
{
    struct
    {
        uint32_t unspecified_5_0 : 6;
        uint32_t lass : 1;
        uint32_t unspecified_7 : 1;
        uint32_t perfmon_ext_leaf : 1;
        uint32_t unspecified_25_9 : 17;
        uint32_t lam : 1;
        uint32_t unspecified_31_27 : 5;
    };
    uint32_t raw;
} cpuid_07_01_eax_t;
typedef union cpuid_07_02_edx_u
{
    struct
    {
        uint32_t psfd : 1;
        uint32_t ipred_ctrl : 1;
        uint32_t rrsba_ctrl : 1;
        uint32_t ddpd : 1;
        uint32_t bhi_ctrl : 1;
        uint32_t mcdt_no : 1;
        uint32_t reserved_0 : 26;
    };
    uint32_t raw;
} cpuid_07_02_edx_t;
typedef union cpuid_80000008_eax_u
{
    struct
    {
        uint32_t pa_bits : 8;
        uint32_t la_bits : 8;
        uint32_t reserved : 16;
    };
    uint32_t raw;
} cpuid_80000008_eax_t;

extern bool_t fv_exception_tracker_gp;
uint64_t tdxfv_abst_msr_read(uint64_t addr);
static inline void ia32_invalidate_tlb_entries(uint64_t addr)
{
    TDXFV_ABST_incomplete();
}
static inline void ia32_cpuid(uint32_t leaf, uint32_t subleaf, uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx)
{
    *eax = TDXFV_NONDET_uint32t();
    *ebx = TDXFV_NONDET_uint32t();
    *ecx = TDXFV_NONDET_uint32t();
    *edx = TDXFV_NONDET_uint32t();
}
static inline void ia32_clear_ac( void )
{
}
static inline void ia32_set_ac( void )
{
}
static inline void ia32_ud2( void )
{
    exit(0);
}
static inline uint64_t ia32_rdmsr(uint64_t addr)
{
    return tdxfv_abst_msr_read(addr);
}
static inline uint64_t ia32_rdtsc( void )
{
    return TDXFV_NONDET_uint64t();
}
static inline uint64_t ia32_xgetbv(uint64_t xcr)
{
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_uint64t();
}
static inline void ia32_xsetbv(uint64_t xcr, uint64_t value)
{
    TDXFV_ABST_incomplete();
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
static inline uint16_t _lock_xadd_16b(uint16_t *mem, uint16_t quantum)
{
    uint16_t old_value = *mem;
    *mem = old_value + quantum;
    return old_value;
}
static inline void _lock_or_16b(uint16_t *mem, uint16_t quantum)
{
    *mem |= quantum;
}
static inline void _lock_and_16b(uint16_t *mem, uint16_t quantum)
{
    *mem &= quantum;
}
static inline void btr_32b(volatile uint32_t* mem, uint32_t bit)
{
    uint32_t bit_position = bit % 32;
    uint32_t bit_mask = 1U << bit_position;
    *mem &= ~bit_mask;
}
static inline void lfence(void)
{
}
static inline void store_xmms_in_buffer(uint128_t xmms[16])
{
    xmms[0] = TDXFV_NONDET_uint128t();
    xmms[1] = TDXFV_NONDET_uint128t();
    xmms[2] = TDXFV_NONDET_uint128t();
    xmms[3] = TDXFV_NONDET_uint128t();
    xmms[4] = TDXFV_NONDET_uint128t();
    xmms[5] = TDXFV_NONDET_uint128t();
    xmms[6] = TDXFV_NONDET_uint128t();
    xmms[7] = TDXFV_NONDET_uint128t();
    xmms[8] = TDXFV_NONDET_uint128t();
    xmms[9] = TDXFV_NONDET_uint128t();
    xmms[10] = TDXFV_NONDET_uint128t();
    xmms[11] = TDXFV_NONDET_uint128t();
    xmms[12] = TDXFV_NONDET_uint128t();
    xmms[13] = TDXFV_NONDET_uint128t();
    xmms[14] = TDXFV_NONDET_uint128t();
    xmms[15] = TDXFV_NONDET_uint128t();
}
static inline void load_xmms_from_buffer(const uint128_t xmms[16])
{
    TDXFV_ABST_incomplete();
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

typedef enum
{
    TDX_LOCK_NO_LOCK = 0,
    TDX_LOCK_SHARED = 1,
    TDX_LOCK_EXCLUSIVE = 2
} lock_type_t;
typedef uint8_t mutex_lock_t;
typedef enum
{
    SHAREX_HP_FREE = 0,
    SHAREX_HP_EXCLUSIVE_LOCK = (uint64_t)(1ULL<<(0)),
    SHAREX_HP_HOST_PRIORITY = (uint64_t)(1ULL<<(1)),
    SHAREX_HP_SINGLE_READER = (uint64_t)(1ULL<<(2))
} sharex_hp_state_t;
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
static inline api_error_code_e acquire_sharex_lock_hp_sh(sharex_hp_lock_t * lock_ptr, bool_t is_guest)
{
    sharex_hp_lock_t retval;
                                      ;
    if (is_guest)
    {
        retval.raw = _lock_xadd_16b(&lock_ptr->raw, SHAREX_HP_SINGLE_READER);
        if (retval.host_prio)
        {
            retval.raw = _lock_xadd_16b(&lock_ptr->raw, (uint16_t)-SHAREX_HP_SINGLE_READER);
            return 0x8000020400000000ULL;
        }
        else if (retval.exclusive)
        {
            return 0x8000020000000000ULL;
        }
        if ( __builtin_expect((!((retval.counter != 0x3FFF))), 0) ) { ; tdx_report_error_and_halt(0x0001, 10); };
        return 0x0000000000000000ULL;
    }
    else
    {
        retval.raw = _lock_xadd_16b(&lock_ptr->raw, SHAREX_HP_SINGLE_READER);
        if (retval.exclusive)
        {
            _lock_or_16b(&lock_ptr->raw, SHAREX_HP_HOST_PRIORITY);
            return 0x8000020000000000ULL;
        }
        else if (retval.host_prio)
        {
            _lock_and_16b(&lock_ptr->raw, (uint16_t)~SHAREX_HP_HOST_PRIORITY);
        }
        if ( __builtin_expect((!((retval.counter != 0x3FFF))), 0) ) { ; tdx_report_error_and_halt(0x0001, 11); };
        return 0x0000000000000000ULL;
    }
}
static inline api_error_code_e acquire_sharex_lock_hp_ex(sharex_hp_lock_t * lock_ptr, bool_t is_guest)
{
    sharex_hp_lock_t retval;
                                      ;
    retval.raw = _lock_cmpxchg_16b(SHAREX_HP_FREE, SHAREX_HP_EXCLUSIVE_LOCK, &lock_ptr->raw);
    if (retval.raw == SHAREX_HP_FREE)
    {
        return 0x0000000000000000ULL;
    }
    else if (retval.raw == SHAREX_HP_HOST_PRIORITY)
    {
        if (is_guest)
        {
            return 0x8000020400000000ULL;
        }
        else
        {
            retval.raw = _lock_cmpxchg_16b(SHAREX_HP_HOST_PRIORITY, SHAREX_HP_EXCLUSIVE_LOCK, &lock_ptr->raw);
            return (retval.raw == SHAREX_HP_HOST_PRIORITY) ? 0x0000000000000000ULL : 0x8000020000000000ULL;
        }
    }
    else
    {
        if (is_guest)
        {
            return 0x8000020000000000ULL;
        }
        else
        {
            _lock_or_16b(&lock_ptr->raw, SHAREX_HP_HOST_PRIORITY);
            return 0x8000020000000000ULL;
        }
    }
}
static inline api_error_code_e acquire_sharex_lock_hp(sharex_hp_lock_t * lock_ptr, lock_type_t lock_type,
                                                        bool_t is_guest)
{
    if (lock_type == TDX_LOCK_EXCLUSIVE)
    {
        return acquire_sharex_lock_hp_ex(lock_ptr, is_guest);
    }
    else if (lock_type == TDX_LOCK_SHARED)
    {
        return acquire_sharex_lock_hp_sh(lock_ptr, is_guest);
    }
    if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0001, 12); };
    return 0xFFFFFFFFFFFFFFFFULL;
}
static inline void release_sharex_lock_hp_sh(sharex_hp_lock_t * lock_ptr)
{
    sharex_hp_lock_t retval;
                                      ;
    retval.raw = _lock_xadd_16b(&lock_ptr->raw, (uint16_t)-SHAREX_HP_SINGLE_READER);
    if ( __builtin_expect((!(!(retval.exclusive == 1 || retval.counter == 0))), 0) ) { ; tdx_report_error_and_halt(0x0001, 13); };
}
static inline void release_sharex_lock_hp_ex(sharex_hp_lock_t * lock_ptr)
{
                                      ;
    if ( __builtin_expect((!(lock_ptr->exclusive == 1)), 0) ) { ; tdx_report_error_and_halt(0x0001, 14); };
    _lock_and_16b(&lock_ptr->raw, SHAREX_HP_HOST_PRIORITY);
}
static inline void release_sharex_lock_hp(sharex_hp_lock_t * lock_ptr, lock_type_t lock_type)
{
    if (lock_type == TDX_LOCK_EXCLUSIVE)
    {
        release_sharex_lock_hp_ex(lock_ptr);
        return;
    }
    else if (lock_type == TDX_LOCK_SHARED)
    {
        release_sharex_lock_hp_sh(lock_ptr);
        return;
    }
    if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0001, 15); };
}
static inline api_error_code_e promote_sharex_lock_hp(sharex_hp_lock_t * lock_ptr)
{
    sharex_hp_lock_t retval;
                                      ;
    retval.raw = _lock_cmpxchg_16b(SHAREX_HP_SINGLE_READER, SHAREX_HP_EXCLUSIVE_LOCK, &lock_ptr->raw);
    if ( __builtin_expect((!(!(retval.exclusive == 1 || retval.raw == SHAREX_HP_FREE))), 0) ) { ; tdx_report_error_and_halt(0x0001, 16); };
    if (retval.raw == SHAREX_HP_SINGLE_READER)
    {
        return 0x0000000000000000ULL;
    }
    else if (retval.raw == (SHAREX_HP_SINGLE_READER | SHAREX_HP_HOST_PRIORITY))
    {
        retval.raw = _lock_cmpxchg_16b((SHAREX_HP_SINGLE_READER | SHAREX_HP_HOST_PRIORITY),
                                        SHAREX_HP_EXCLUSIVE_LOCK, &lock_ptr->raw);
        if ( __builtin_expect((!(!(retval.exclusive == 1 || retval.raw == SHAREX_HP_FREE))), 0) ) { ; tdx_report_error_and_halt(0x0001, 17); };
        if (retval.raw == (SHAREX_HP_SINGLE_READER | SHAREX_HP_HOST_PRIORITY))
        {
            return 0x0000000000000000ULL;
        }
        else
        {
            return 0x8000020000000000ULL;
        }
    }
    else
    {
        _lock_or_16b(&lock_ptr->raw, SHAREX_HP_HOST_PRIORITY);
        return 0x8000020000000000ULL;
    }
}
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
typedef enum
{
    PINBASED_CTLS_L2_INIT = 0x00000029,
    PINBASED_CTLS_L2_VARIABLE = 0x00000000,
    PINBASED_CTLS_L2_UNKNOWN = 0xFFFFFF16,
    PINBASED_CTLS_L1_WR_MASK = 0x00000000,
    PROCBASED_CTLS_L2_INIT = 0x91220088,
    PROCBASED_CTLS_L2_VARIABLE = 0x68D81E04,
    PROCBASED_CTLS_L2_UNKNOWN = 0x04046173,
    PROCBASED_CTLS_L1_WR_MASK = 0x48D99A04,
    PROCBASED_CTLS2_L2_INIT = 0x1338B3FA,
    PROCBASED_CTLS2_L2_VARIABLE = 0x0C513E0C,
    PROCBASED_CTLS2_L2_UNKNOWN = 0x00000000,
    PROCBASED_CTLS2_L1_WR_MASK = 0x0C513E0C,
    PROCBASED_CTLS3_L2_INIT = 0x0000000000000000,
    PROCBASED_CTLS3_L2_VARIABLE = 0x00000000000000AE,
    PROCBASED_CTLS3_L2_UNKNOWN = 0xFFFFFFFFFFFFFF40,
    PROCBASED_CTLS3_L1_WR_MASK = 0x000000000000000E,
    EXIT_CTLS_L2_INIT = 0x1F3C8204,
    EXIT_CTLS_L2_VARIABLE = 0x40001000,
    EXIT_CTLS_L2_UNKNOWN = 0x00036DFB,
    EXIT_CTLS_L1_WR_MASK = 0x00000000,
    ENTRY_CTLS_L2_INIT = 0x003EC004,
    ENTRY_CTLS_L2_VARIABLE = 0x00402200,
    ENTRY_CTLS_L2_UNKNOWN = 0xFF8011FB,
    ENTRY_CTLS_L1_WR_MASK = 0x00000200,
    GUEST_CR0_L2_INIT = 0x00000021,
    GUEST_CR0_L2_VARIABLE = 0x000000008005001F,
    CR0_READ_L2_SHADOW = 0x0000000000000021,
    CR0_L1_VMM_WRITE_MASK = 0x000000008005001F,
    GUEST_CR4_L2_INIT = 0x00002040,
    GUEST_CR4_L2_VARIABLE = 0x0000000003FF1FBF,
    CR4_READ_L2_SHADOW = 0x0000000000000040,
    CR4_L1_VMM_WRITE_MASK = 0x000000001BFF1FBF
} td_l2_vmcs_ctl_values_e;
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
extern const bool_t seamcall_state_lookup[128][11];
extern const bool_t servtd_bind_othertd_state_lookup[11];
extern const bool_t tdcall_state_lookup[32][11];
typedef enum {
    PT_NDA = 0,
    PT_RSVD = 1,
    PT_REG = 3,
    PT_TDR = 4,
    PT_TDCX = 5,
    PT_TDVPR = 6,
    PT_EPT = 8
} page_type_t;
typedef enum {
    PT_4KB = 0,
    PT_2MB = 1,
    PT_1GB = 2
} page_size_t;
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
bool_t pamt_get_block(pa_t pa, pamt_block_t* pamt_block);
api_error_code_e pamt_walk(pa_t pa, pamt_block_t pamt_block, lock_type_t leaf_lock_type,
                           page_size_t* leaf_size, bool_t walk_to_leaf_size, bool_t is_guest,
                           pamt_entry_t** pamt_entry);
void pamt_unwalk(pa_t pa, pamt_block_t pamt_block, pamt_entry_t* pamt_entry_p,
                 lock_type_t leaf_lock_type, page_size_t leaf_size);
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
static inline bool_t is_required_tdcs_allocated(tdr_t *tdr_p, uint16_t num_l2_vms)
{
    return (tdr_p->management_fields.num_tdcx >=
            (uint32_t)(MIN_NUM_TDCS_PAGES + (TDCS_PAGES_PER_L2_VM * num_l2_vms)));
}
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
extern tdx_module_local_t* local_data_fv_ptr;
extern tdx_module_global_t* global_data_fv_ptr;
extern sysinfo_table_t* sysinfo_table_fv_ptr;
extern tdr_t* tdr_fv_ptr;
extern tdcs_t* tdcs_fv_ptr;
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
void init_vmm_dispatcher();
void fv_setup_module_state();
void fv_teardown_module_state();
void fv_setup_tdr();
void fv_teardown_tdr();
void fv_setup_tdcs();
void fv_teardown_tdcs();
void tdxfv_abst_msr_init();
uint64_t tdxfv_abst_msr_read(uint64_t addr);
void tdxfv_abst_exception_init();
void tdxfv_abst_exception_insert_gp();
void tdxfv_abst_exception_insert_ve();
void tdxfv_abst_vcpu_init();

bool_t fv_exception_tracker_gp;
bool_t fv_exception_tracker_ve;
void tdxfv_abst_exception_init() {
    fv_exception_tracker_gp = ((bool_t)0);
    fv_exception_tracker_ve = ((bool_t)0);
}
void tdxfv_abst_exception_insert_gp() {
    fv_exception_tracker_gp = ((bool_t)1);
}
void tdxfv_abst_exception_insert_ve() {
    fv_exception_tracker_ve = ((bool_t)1);
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
uint64_t tdxfv_abst_msr_read(uint64_t addr) {
    if (addr == 0x0010) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0048) {
        return fv_msr_IA32_SPEC_CTRL;
    }
    if (addr == 0x0049) {
        return fv_msr_IA32_PRED_CMD;
    }
    if (addr == 0x0087) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x008C && addr < 0x008C + 4) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0098) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0099) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x009A) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x009B) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x009E) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x00BC) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x00BD) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x00C1 && addr < 0x00C1 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x00E1) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x010A) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x010B) {
        return fv_msr_IA32_FLUSH_CMD;
    }
    if (addr == 0x0122) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0174) {
        return fv_msr_IA32_SYSENTER_CS;
    }
    if (addr == 0x0175) {
        return fv_msr_IA32_SYSENTER_ESP;
    }
    if (addr == 0x0176) {
        return fv_msr_IA32_SYSENTER_EIP;
    }
    if (addr >= 0x0186 && addr < 0x0186 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0195) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01A0) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x01A6 && addr < 0x01A6 + 2) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01C4) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01C5) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01D9) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01F8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01F9) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x01FA) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0276) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0277) {
        return fv_msr_IA32_PAT;
    }
    if (addr >= 0x0309 && addr < 0x0309 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0329) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0345) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x038D) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x038E) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x038F) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0390) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0391) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0392) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F1) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F2) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F6) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x03F7) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0480) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0481) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0482) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0483) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0484) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0485) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0486) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0487) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0488) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0489) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048A) {
        tdxfv_abst_exception_insert_ve();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048B) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048C) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048D) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048E) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x048F) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0490) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0491) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0492) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x04C1 && addr < 0x04C1 + 8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0500) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0560) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0561) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0570) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0571) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0572) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0580) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0581) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0582) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0583) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0584) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0585) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0586) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0587) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0600) {
        return fv_msr_IA32_DS_AREA;
    }
    if (addr == 0x06A0) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A2) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A4) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A5) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A6) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A7) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06A8) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06E0) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x06E1) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x0800 && addr < 0x0800 + 2) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0802) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x0804 && addr < 0x0804 + 4) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0808) {
        return fv_msr_IA32_X2APIC_TPR;
    }
    if (addr == 0x0809) {
        return fv_msr_0x0809;
    }
    if (addr == 0x080A) {
        return fv_msr_IA32_X2APIC_PPR;
    }
    if (addr == 0x080B) {
        return fv_msr_IA32_X2APIC_EOI;
    }
    if (addr == 0x080C) {
        return fv_msr_0x080C;
    }
    if (addr == 0x080E) {
        return fv_msr_0x080E;
    }
    if (addr >= 0x0810 && addr < 0x0810 + 8) {
        return fv_msr_IA32_X2APIC_ISRx[addr - 0x0810];
    }
    if (addr >= 0x0818 && addr < 0x0818 + 8) {
        return fv_msr_IA32_X2APIC_TMRx[addr - 0x0818];
    }
    if (addr >= 0x0820 && addr < 0x0820 + 8) {
        return fv_msr_IA32_X2APIC_IRRx[addr - 0x0820];
    }
    if (addr >= 0x0829 && addr < 0x0829 + 6) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0831) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x083F) {
        return fv_msr_IA32_X2APIC_SELF_IPI;
    }
    if (addr >= 0x0840 && addr < 0x0840 + 64) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x0880 && addr < 0x0880 + 64) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x08C0 && addr < 0x08C0 + 64) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0981) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0982) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0983) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0984) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0985) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0986) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0987) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0988) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0989) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x098A) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0C80) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0D90) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0D93) {
        tdxfv_abst_exception_insert_gp();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x0DA0) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x1200 && addr < 0x1200 + 256) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x14CE) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x14CF) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x1500 && addr < 0x1500 + 256) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr >= 0x1600 && addr < 0x1600 + 256) {
        TDXFV_ABST_incomplete();
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0x1B01) {
        return fv_msr_IA32_UARCH_MISC_CTL;
    }
    if (addr == 0xC0000080) {
        return TDXFV_NONDET_uint64t();
    }
    if (addr == 0xC0000081) {
        return fv_msr_IA32_STAR;
    }
    if (addr == 0xC0000082) {
        return fv_msr_IA32_LSTAR;
    }
    if (addr == 0xC0000084) {
        return fv_msr_IA32_FMASK;
    }
    if (addr == 0xC0000100) {
        return fv_msr_IA32_FSBASE;
    }
    if (addr == 0xC0000101) {
        return fv_msr_IA32_GSBASE;
    }
    if (addr == 0xC0000102) {
        return fv_msr_IA32_KERNEL_GS_BASE;
    }
    if (addr == 0xC0000103) {
        return fv_msr_IA32_TSC_AUX;
    }
    __VERIFIER_assert(((bool_t)0));
    return TDXFV_NONDET_uint64t();
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
extern void __VERIFIER_nondet_memory(void *dst, size_t size);
static inline void TDXFV_NONDET_struct_tdx_module_local_t(tdx_module_local_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(tdx_module_local_t));
}
static inline void TDXFV_NONDET_struct_tdx_module_global_t(tdx_module_global_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(tdx_module_global_t));
}
static inline void TDXFV_NONDET_struct_sysinfo_table_t(sysinfo_table_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(sysinfo_table_t));
}
static inline void TDXFV_NONDET_struct_tdr_t(tdr_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(tdr_t));
}
static inline void TDXFV_NONDET_struct_tdcs_t(tdcs_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(tdcs_t));
}
static inline void TDXFV_NONDET_struct_gprs_state_t(gprs_state_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(gprs_state_t));
}
static inline void TDXFV_NONDET_struct_pamt_entry_t(pamt_entry_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(pamt_entry_t));
}
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
static inline bool_t tdr_td_management_fields_t_has_valid_num_tdcx(const tdr_td_management_fields_t* management_fields_ptr) {
    return (
        management_fields_ptr->num_tdcx >= MIN_NUM_TDCS_PAGES &&
        management_fields_ptr->num_tdcx <= MAX_NUM_TDCS_PAGES
    );
}
static inline bool_t tdr_td_management_fields_t_has_valid_lifecycle_state(const tdr_td_management_fields_t* management_fields_ptr) {
    return (
        management_fields_ptr->lifecycle_state == TD_HKID_ASSIGNED ||
        management_fields_ptr->lifecycle_state == TD_KEYS_CONFIGURED ||
        management_fields_ptr->lifecycle_state == TD_BLOCKED ||
        management_fields_ptr->lifecycle_state == TD_TEARDOWN
    );
}
static inline bool_t tdr_td_management_fields_t_has_valid_tdcx_pa(const tdr_td_management_fields_t* management_fields_ptr) {
    return (
        (management_fields_ptr->tdcx_pa[0] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[0] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[1] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[1] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[2] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[2] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[3] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[3] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[4] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[4] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[5] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[5] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[6] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[6] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[7] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[7] < (uint64_t)(1ULL<<(52ULL)) &&
        (management_fields_ptr->tdcx_pa[8] & 0xFFF) == 0 && management_fields_ptr->tdcx_pa[8] < (uint64_t)(1ULL<<(52ULL))
    );
}
static inline bool_t tdr_td_management_fields_t_has_valid_td_uuid(const tdr_td_management_fields_t* management_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdr_td_management_fields_t(const tdr_td_management_fields_t* management_fields_ptr) {
    return (
        tdr_td_management_fields_t_has_valid_num_tdcx(management_fields_ptr) &&
        tdr_td_management_fields_t_has_valid_lifecycle_state(management_fields_ptr) &&
        tdr_td_management_fields_t_has_valid_tdcx_pa(management_fields_ptr) &&
        tdr_td_management_fields_t_has_valid_td_uuid(management_fields_ptr)
    );
}
static inline bool_t tdr_key_managment_fields_t_has_valid_hkid(const tdr_key_managment_fields_t* key_management_fields_ptr) {
    return key_management_fields_ptr->hkid <= 2048;
}
static inline bool_t tdr_key_managment_fields_t_has_valid_pkg_config_bitmap(const tdr_key_managment_fields_t* key_management_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t fv_invariant_tdr_key_managment_fields_t(const tdr_key_managment_fields_t* key_management_fields_ptr) {
    return (
        tdr_key_managment_fields_t_has_valid_hkid(key_management_fields_ptr) &&
        tdr_key_managment_fields_t_has_valid_pkg_config_bitmap(key_management_fields_ptr)
    );
}
static inline bool_t fv_invariant_tdr_td_preserving_fields_t(const tdr_td_preserving_fields_t* preserving_fields_ptr) {
    return ((bool_t)1);
}
static inline bool_t tdr_t_has_valid_management_fields(const tdr_t* tdr_ptr) {
    return fv_invariant_tdr_td_management_fields_t(&tdr_ptr->management_fields);
}
static inline bool_t tdr_t_has_valid_key_management_fields(const tdr_t* tdr_ptr) {
    return fv_invariant_tdr_key_managment_fields_t(&tdr_ptr->key_management_fields);
}
static inline bool_t tdr_t_has_valid_td_preserving_fields(const tdr_t* tdr_ptr) {
    return fv_invariant_tdr_td_preserving_fields_t(&tdr_ptr->td_preserving_fields);
}
static inline bool_t fv_invariant_tdr_t(const tdr_t* tdr_ptr) {
    return (
        tdr_t_has_valid_management_fields(tdr_ptr) &&
        tdr_t_has_valid_key_management_fields(tdr_ptr) &&
        tdr_t_has_valid_td_preserving_fields(tdr_ptr)
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
void fv_teardown_module_state() {
    pamt_entry_t* tdr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdr_pamt_entry;
    pamt_entry_t* tdvpr_pamt_entry_ptr = local_data_fv_ptr->vp_ctx.tdvpr_pamt_entry;
    free(tdr_pamt_entry_ptr);
    free(tdvpr_pamt_entry_ptr);
    free(sysinfo_table_fv_ptr);
    free(local_data_fv_ptr);
    free(global_data_fv_ptr);
}
void fv_setup_tdr() {
    tdr_fv_ptr = TDXFV_malloc(sizeof(tdr_t));
    TDXFV_NONDET_struct_tdr_t(tdr_fv_ptr);
    assume_exit_if_not(fv_invariant_tdr_t(tdr_fv_ptr));
    do { assume_exit_if_not(local_data_fv_ptr->vp_ctx.tdr == tdr_fv_ptr); if (1) { local_data_fv_ptr->vp_ctx.tdr = tdr_fv_ptr; } } while (0);
}
void fv_teardown_tdr() {
    free(tdr_fv_ptr);
}
void fv_setup_tdcs() {
    tdcs_fv_ptr = TDXFV_malloc(sizeof(tdcs_t));
    TDXFV_NONDET_struct_tdcs_t(tdcs_fv_ptr);
    assume_exit_if_not(fv_invariant_tdcs_t(tdcs_fv_ptr));
    do { assume_exit_if_not(local_data_fv_ptr->vp_ctx.tdcs == tdcs_fv_ptr); if (1) { local_data_fv_ptr->vp_ctx.tdcs = tdcs_fv_ptr; } } while (0);
}
void fv_teardown_tdcs() {
    free(tdcs_fv_ptr);
}
tdx_module_local_t* local_data_fv_ptr;
tdx_module_global_t* global_data_fv_ptr;
sysinfo_table_t* sysinfo_table_fv_ptr;
tdr_t* tdr_fv_ptr;
tdcs_t* tdcs_fv_ptr;
gprs_state_t shadow_td_regs_precall;
gprs_state_t shadow_vmm_regs_precall;
gprs_state_t shadow_guest_gpr_state_precall;
bool_t fv_is_called_by_host;
bool_t fv_is_called_by_guest;
void init_vmm_dispatcher() {
    fv_is_called_by_host = ((bool_t)1);
    fv_is_called_by_guest = ((bool_t)0);
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    bool_t lp_is_busy = local_data->lp_is_busy == ((bool_t)1);
    bool_t leaf_opcode_reserved_is_valid = (
        (leaf_opcode.reserved0 == 0) &&
        (leaf_opcode.reserved1 == 0)
    );
    bool_t leaf_opcode_with_multi_versions = (
        (leaf_opcode.version == 0) ||
        (leaf_opcode.leaf == TDH_MEM_PAGE_PROMOTE_LEAF) ||
        (leaf_opcode.leaf == TDH_MEM_SEPT_ADD_LEAF) ||
        (leaf_opcode.leaf == TDH_MEM_SEPT_REMOVE_LEAF) ||
        (leaf_opcode.leaf == TDH_MNG_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_VP_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_VP_INIT_LEAF)
    );
    bool_t module_in_shutdown_state = (
        (global_data->global_state.sys_state != SYS_SHUTDOWN) ||
        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF)
    );
    bool_t module_not_in_ready_state = (
        (global_data->global_state.sys_state == SYS_READY) ||
        (leaf_opcode.leaf == TDH_SYS_INFO_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_RD_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_RDALL_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_INIT_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_LP_INIT_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_CONFIG_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_KEY_CONFIG_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF) ||
        (leaf_opcode.leaf == TDH_SYS_UPDATE_LEAF)
    );
    assume_exit_if_not(lp_is_busy && leaf_opcode_reserved_is_valid && leaf_opcode_with_multi_versions && module_in_shutdown_state && module_not_in_ready_state);
}
void init_tdh_mng_xxx() {
    fv_setup_module_state();
    fv_setup_tdr();
    fv_setup_tdcs();
    init_vmm_dispatcher();
}
void close_tdh_mng_xxx() {
    fv_teardown_tdcs();
    fv_teardown_tdr();
    fv_teardown_module_state();
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
extern const cpuid_config_return_values_t xfam_mask_0x7_0x1[18 + 1];
extern const cpuid_config_return_values_t xfam_mask_0x7_0x0[18 + 1];
extern const cpuid_config_return_values_t xfam_mask_0x1_0xffffffff[18 + 1];
extern const cpuid_config_return_values_t xfam_mask_0xd_0x0[18 + 1];
extern const cpuid_config_return_values_t xfam_mask_0xd_0x1[18 + 1];
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
const cpuid_config_return_values_t xfam_mask_0x1_0xffffffff[18 + 1] = {
    [2]={ .ecx = 0x30001000 } ,
};
const cpuid_config_return_values_t xfam_mask_0x7_0x0[18 + 1] = {
    [2]={ .ebx = 0x20 , .ecx = 0x600 } ,
    [5]={ .ebx = 0xdc230000 , .ecx = 0x5842 , .edx = 0x80010c } ,
    [6]={ .ebx = 0xdc230000 , .ecx = 0x5842 , .edx = 0x80010c } ,
    [7]={ .ebx = 0xdc230000 , .ecx = 0x5842 , .edx = 0x80010c } ,
    [8]={ .ebx = 0x2000000 } ,
    [9]={ .ecx = 0x8 } ,
    [11]={ .ecx = 0x80 , .edx = 0x100000 } ,
    [12]={ .ecx = 0x80 , .edx = 0x100000 } ,
    [14]={ .edx = 0x20 } ,
    [15]={ .edx = 0x80000 } ,
    [17]={ .edx = 0x3400000 } ,
    [18]={ .edx = 0x3400000 } ,
};
const cpuid_config_return_values_t xfam_mask_0x7_0x1[18 + 1] = {
    [2]={ .eax = 0x10 , .edx = 0x430 } ,
    [5]={ .eax = 0x20 } ,
    [6]={ .eax = 0x20 } ,
    [7]={ .eax = 0x20 } ,
};
const cpuid_config_return_values_t xfam_mask_0xd_0x0[18 + 1] = {
    [2]={ .eax = 0x4 } ,
    [5]={ .eax = 0xe0 } ,
    [6]={ .eax = 0xe0 } ,
    [7]={ .eax = 0xe0 } ,
    [9]={ .eax = 0x200 } ,
    [17]={ .eax = 0x60000 } ,
    [18]={ .eax = 0x60000 } ,
};
const cpuid_config_return_values_t xfam_mask_0xd_0x1[18 + 1] = {
    [8]={ .ecx = 0x100 } ,
    [11]={ .ecx = 0x1800 } ,
    [12]={ .ecx = 0x1800 } ,
    [14]={ .ecx = 0x4000 } ,
    [15]={ .ecx = 0x8000 } ,
};
typedef enum
{
    TDX_RANGE_RO = 0,
    TDX_RANGE_RW = 1
} mapping_type_t;
void* map_pa(void* pa, mapping_type_t mapping_type);
void free_la(void* la);
void* map_continuous_pages(uint64_t* pa_array, uint16_t array_size, mapping_type_t mapping_type,
                           uint16_t starting_static_keyhole);

typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

static inline uint32_t calculate_xsave_area_max_size(ia32_xcr0_t xfam)
{
    ia32_xcr0_t original_xcr0;
    original_xcr0.raw = ia32_xgetbv(0);
    ia32_xsetbv(0, xfam.raw & 0x000602FF);
    uint32_t eax, ebx, ecx, edx;
    ia32_cpuid(0xD, 0, &eax, &ebx, &ecx, &edx);
    ia32_xsetbv(0, original_xcr0.raw);
    return ebx;
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
static inline pa_t set_hkid_to_pa(pa_t pa, uint16_t hkid)
{
    tdx_module_global_t* global_data = get_global_data();
    pa.full_pa &= ~(global_data->hkid_mask);
    pa.full_pa |= ((uint64_t)hkid << global_data->hkid_start_bit);
    return pa;
}
static inline bool_t is_addr_aligned_pwr_of_2(uint64_t addr, uint64_t size)
{
                                                              ;
    return ((addr & (size - 1)) == 0);
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
static inline void* map_pa_with_hkid(void* pa, uint16_t hkid, mapping_type_t mapping_type)
{
    pa_t temp_pa = {.raw_void = pa};
    pa_t pa_with_hkid = set_hkid_to_pa(temp_pa, hkid);
    return map_pa((void*) pa_with_hkid.raw, mapping_type);
}
static inline void* map_pa_with_global_hkid(void* pa, mapping_type_t mapping_type)
{
    uint16_t tdx_global_hkid = get_global_data()->hkid;
    return map_pa_with_hkid(pa, tdx_global_hkid, mapping_type);
}
void basic_memset(uint64_t dst, uint64_t dst_bytes, uint8_t val, uint64_t nbytes);
void basic_memset_to_zero(void * dst, uint64_t nbytes);
static inline void tdx_memcpy(void * dst, uint64_t dst_bytes, void * src, uint64_t nbytes)
{
    volatile uint64_t junk_a, junk_b;
    if ( __builtin_expect((!(dst_bytes >= nbytes)), 0) ) { ; tdx_report_error_and_halt(0x0002, 1); };
    memcpy((void*)dst, (void*)src, nbytes);
}
static inline bool_t tdx_memcmp_to_zero(void *a, uint64_t nBytes)
{
    uint64_t i = 0;
    uint8_t* a_8 = (uint8_t*)a;
    for ( ; (i + (uint64_t)sizeof(uint64_t)) <= nBytes; i += (uint64_t)sizeof(uint64_t))
    {
        uint64_t* a_64 = (uint64_t*)(&a_8[i]);
        if (*a_64 != 0)
        {
            return ((bool_t)0);
        }
    }
    for ( ; i < nBytes; i++)
    {
        if (a_8[i] != 0)
        {
            return ((bool_t)0);
        }
    }
    return ((bool_t)1);
}
api_error_code_e non_shared_hpa_metadata_check_and_lock(
        pa_t hpa,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        page_size_t* leaf_size,
        bool_t walk_to_leaf_size,
        bool_t is_guest
        );
pa_t assign_hkid_to_hpa(tdr_t* tdr_p, pa_t hpa);
api_error_code_e shared_hpa_check(pa_t hpa, uint64_t size);
api_error_code_e shared_hpa_check_with_pwr_2_alignment(pa_t hpa, uint64_t size);
api_error_code_e hpa_check_with_pwr_2_alignment(pa_t hpa, uint64_t size);
api_error_type check_lock_and_map_explicit_tdr(
        pa_t tdr_hpa,
        uint64_t operand_id,
        mapping_type_t mapping_type,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        bool_t* is_locked,
        tdr_t** tdr_p
        );
api_error_type check_lock_and_map_explicit_private_4k_hpa(
        pa_t hpa,
        uint64_t operand_id,
        tdr_t* tdr_p,
        mapping_type_t mapping_type,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        bool_t* is_locked,
        void** la
        );
api_error_type check_and_lock_explicit_private_hpa(
        pa_t hpa,
        uint64_t operand_id,
        uint64_t alignment,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        page_size_t* leaf_size,
        bool_t walk_to_leaf_size,
        bool_t* is_locked
        );
api_error_type check_and_lock_explicit_4k_private_hpa(
        pa_t hpa,
        uint64_t operand_id,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        bool_t* is_locked
        );
tdcs_t* map_implicit_tdcs(
        tdr_t* tdr_p,
        mapping_type_t mapping_type,
        bool_t other_td
        );
api_error_type check_state_map_tdcs_and_lock(
        tdr_t* tdr_p,
        mapping_type_t mapping_type,
        lock_type_t op_state_lock_type,
        bool_t map_migsc_links,
        seamcall_leaf_opcode_t current_leaf,
        tdcs_t** tdcs_p
        );
uint32_t get_cpuid_lookup_entry(uint32_t leaf, uint32_t subleaf);
static inline bool_t is_perfmon_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return (bool_t)tdcs_ptr->executions_ctl_fields.attributes.perfmon;
}
static inline bool_t is_cet_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return ((tdcs_ptr->executions_ctl_fields.xfam & ((uint64_t)(1ULL<<(11)))) |
            (tdcs_ptr->executions_ctl_fields.xfam & ((uint64_t)(1ULL<<(12))))) ? ((bool_t)1) : ((bool_t)0);
}
static inline bool_t is_pt_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return (tdcs_ptr->executions_ctl_fields.xfam & ((uint64_t)(1ULL<<(8)))) ? ((bool_t)1) : ((bool_t)0);
}
static inline bool_t is_uli_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return (tdcs_ptr->executions_ctl_fields.xfam & ((uint64_t)(1ULL<<(14)))) ? ((bool_t)1) : ((bool_t)0);
}
static inline bool_t is_lbr_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return (tdcs_ptr->executions_ctl_fields.xfam & ((uint64_t)(1ULL<<(15)))) ? ((bool_t)1) : ((bool_t)0);
}
static inline bool_t is_waitpkg_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported;
}
static inline bool_t is_pks_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return tdcs_ptr->executions_ctl_fields.attributes.pks;
}
static inline bool_t is_xfd_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return tdcs_ptr->executions_ctl_fields.cpuid_flags.xfd_supported;
}
static inline bool_t is_tsx_supported_in_tdcs(tdcs_t * tdcs_ptr)
{
    return tdcs_ptr->executions_ctl_fields.cpuid_flags.tsx_supported;
}
bool_t verify_td_attributes(td_param_attributes_t attributes, bool_t is_import);
bool_t verify_td_config_flags(config_flags_t config_flags);
bool_t check_xfam(ia32_xcr0_t xfam);
bool_t verify_and_set_td_eptp_controls(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, bool_t gpaw, ia32e_eptp_t eptp);
void calculate_tsc_virt_params(uint64_t tsc, uint64_t native_tsc_freq, uint16_t virt_tsc_frequency,
                               uint64_t virt_tsc, uint64_t* tsc_multiplier, uint64_t* tsc_offset);
static inline bool_t op_state_is_seamcall_allowed(seamcall_leaf_opcode_t current_leaf,
                                                    op_state_e op_state, bool_t other_td)
{
                                                                                            ;
    bool_t is_allowed = ((bool_t)0);
    if ( __builtin_expect((other_td), 0) )
    {
                                                              ;
        is_allowed = servtd_bind_othertd_state_lookup[op_state];
    }
    else
    {
        is_allowed = seamcall_state_lookup[current_leaf][op_state];
    }
    return is_allowed;
}
static inline bool_t op_state_is_tdcall_allowed(tdcall_leaf_opcode_t current_leaf,
                                                  op_state_e op_state, bool_t other_td)
{
                                                                                          ;
    bool_t is_allowed = ((bool_t)0);
    if ( __builtin_expect((other_td), 1) )
    {
        is_allowed = tdcall_state_lookup[current_leaf][op_state];
    }
    else
    {
        { ; tdx_arch_fatal_error(); };
    }
    return is_allowed;
}
typedef enum
{
    MSR_BITMAP_FIXED_0,
    MSR_BITMAP_FIXED_1,
    MSR_BITMAP_DYN_PERFMON,
    MSR_BITMAP_DYN_XFAM_CET,
    MSR_BITMAP_DYN_XFAM_PT,
    MSR_BITMAP_DYN_XFAM_ULI,
    MSR_BITMAP_DYN_XFAM_LBR,
    MSR_BITMAP_DYN_UMWAIT,
    MSR_BITMAP_DYN_XFD,
    MSR_BITMAP_DYN_PKS,
    MSR_BITMAP_DYN_TSX,
    MSR_BITMAP_DYN_OTHER
} msr_bitmap_bit_type;
typedef enum
{
    MSR_ACTION_VE,
    MSR_ACTION_GP,
    MSR_ACTION_GP_OR_VE,
    MSR_ACTION_FATAL_ERROR,
    MSR_ACTION_OTHER,
} msr_bitmap_action;
bool_t is_msr_dynamic_bit_cleared(tdcs_t* tdcs_ptr, uint32_t msr_addr, msr_bitmap_bit_type bit_meaning);
void set_msr_bitmaps(tdcs_t * tdcs_ptr);
void set_xbuff_offsets_and_size(tdcs_t* tdcs_ptr, uint64_t xfam);
bool_t td_immutable_state_cross_check(tdcs_t* tdcs_ptr);
static inline uint64_t translate_usec_to_tsc(uint32_t time_usec, uint32_t tsc_frequency)
{
    uint64_t tsc = ((uint64_t)time_usec * (uint64_t)tsc_frequency) / 1000000ULL;
    return tsc;
}
static inline ia32_cr4_t calc_base_l2_cr4_write_mask(tdcs_t* tdcs_ptr)
{
    td_param_attributes_t attributes = tdcs_ptr->executions_ctl_fields.attributes;
    ia32_xcr0_t xfam = { .raw = tdcs_ptr->executions_ctl_fields.xfam };
    ia32_cr4_t mask;
    mask.raw = CR4_L1_VMM_WRITE_MASK;
    uint64_t ia32_vmx_cr4_fixed0 = get_global_data()->plt_common_config.ia32_vmx_cr4_fixed0.raw;
    uint64_t ia32_vmx_cr4_fixed1 = get_global_data()->plt_common_config.ia32_vmx_cr4_fixed1.raw;
    mask.raw &= ~ia32_vmx_cr4_fixed0;
    mask.raw &= ia32_vmx_cr4_fixed1;
    if (!xfam.pk)
    {
        mask.pke = 0;
    }
    if (!xfam.cet_s || !xfam.cet_u)
    {
        mask.cet = 0;
    }
    if (!xfam.uli)
    {
        mask.uintr = 0;
    }
    mask.keylocker = 0;
    if (!attributes.pks)
    {
        mask.pks = 0;
    }
    if (!attributes.lass)
    {
        mask.lass = 0;
    }
    return mask;
}
api_error_type check_cpuid_1f(tdcs_t* tdcs_p, bool_t allow_null);
typedef struct
{
    uint32_t start_address;
    uint32_t end_address;
    msr_bitmap_bit_type rd_bit_meaning;
    msr_bitmap_action rd_action;
    msr_bitmap_bit_type wr_bit_meaning;
    msr_bitmap_action wr_action;
} msr_lookup_t;
extern const msr_lookup_t msr_lookup[135];
const msr_lookup_t msr_lookup[135] = {
 {
  .start_address = 0x10, .end_address = 0x10,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_VE
 },
 {
  .start_address = 0x48, .end_address = 0x48,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x49, .end_address = 0x49,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x87, .end_address = 0x87,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x8c, .end_address = 0x8f,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x98, .end_address = 0x98,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x99, .end_address = 0x99,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x9a, .end_address = 0x9a,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x9b, .end_address = 0x9b,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x9e, .end_address = 0x9e,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0xbc, .end_address = 0xbc,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_VE
 },
 {
  .start_address = 0xbd, .end_address = 0xbd,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc1, .end_address = 0xc8,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0xe1, .end_address = 0xe1,
  .rd_bit_meaning = MSR_BITMAP_DYN_UMWAIT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_UMWAIT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x10a, .end_address = 0x10a,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x10b, .end_address = 0x10b,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x122, .end_address = 0x122,
  .rd_bit_meaning = MSR_BITMAP_DYN_TSX, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_TSX, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x174, .end_address = 0x174,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x175, .end_address = 0x175,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x176, .end_address = 0x176,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x186, .end_address = 0x18d,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x195, .end_address = 0x195,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x1a0, .end_address = 0x1a0,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_VE
 },
 {
  .start_address = 0x1a6, .end_address = 0x1a7,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x1c4, .end_address = 0x1c4,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFD, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFD, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x1c5, .end_address = 0x1c5,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFD, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFD, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x1d9, .end_address = 0x1d9,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_OTHER
 },
 {
  .start_address = 0x1f8, .end_address = 0x1f8,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x1f9, .end_address = 0x1f9,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x1fa, .end_address = 0x1fa,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x276, .end_address = 0x276,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x277, .end_address = 0x277,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x309, .end_address = 0x310,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x329, .end_address = 0x329,
  .rd_bit_meaning = MSR_BITMAP_DYN_OTHER, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_OTHER, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x345, .end_address = 0x345,
  .rd_bit_meaning = MSR_BITMAP_DYN_OTHER, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x38d, .end_address = 0x38d,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x38e, .end_address = 0x38e,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x38f, .end_address = 0x38f,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x390, .end_address = 0x390,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x391, .end_address = 0x391,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x392, .end_address = 0x392,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x3f1, .end_address = 0x3f1,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x3f2, .end_address = 0x3f2,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x3f6, .end_address = 0x3f6,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x3f7, .end_address = 0x3f7,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x480, .end_address = 0x480,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x481, .end_address = 0x481,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x482, .end_address = 0x482,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x483, .end_address = 0x483,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x484, .end_address = 0x484,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x485, .end_address = 0x485,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x486, .end_address = 0x486,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x487, .end_address = 0x487,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x488, .end_address = 0x488,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x489, .end_address = 0x489,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x48a, .end_address = 0x48a,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x48b, .end_address = 0x48b,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x48c, .end_address = 0x48c,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x48d, .end_address = 0x48d,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x48e, .end_address = 0x48e,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x48f, .end_address = 0x48f,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x490, .end_address = 0x490,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x491, .end_address = 0x491,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x492, .end_address = 0x492,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x4c1, .end_address = 0x4c8,
  .rd_bit_meaning = MSR_BITMAP_DYN_PERFMON, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PERFMON, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x500, .end_address = 0x500,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x560, .end_address = 0x560,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x561, .end_address = 0x561,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x570, .end_address = 0x570,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x571, .end_address = 0x571,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x572, .end_address = 0x572,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x580, .end_address = 0x580,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x581, .end_address = 0x581,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x582, .end_address = 0x582,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x583, .end_address = 0x583,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x584, .end_address = 0x584,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x585, .end_address = 0x585,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x586, .end_address = 0x586,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x587, .end_address = 0x587,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_PT, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x600, .end_address = 0x600,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x6a0, .end_address = 0x6a0,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x6a2, .end_address = 0x6a2,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x6a4, .end_address = 0x6a4,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x6a5, .end_address = 0x6a5,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x6a6, .end_address = 0x6a6,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x6a7, .end_address = 0x6a7,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x6a8, .end_address = 0x6a8,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_CET, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x6e0, .end_address = 0x6e0,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x6e1, .end_address = 0x6e1,
  .rd_bit_meaning = MSR_BITMAP_DYN_PKS, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_PKS, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x800, .end_address = 0x801,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x802, .end_address = 0x802,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_OTHER,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x804, .end_address = 0x807,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x808, .end_address = 0x808,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x809, .end_address = 0x809,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x80a, .end_address = 0x80a,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x80b, .end_address = 0x80b,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x80c, .end_address = 0x80c,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x80e, .end_address = 0x80e,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x810, .end_address = 0x817,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x818, .end_address = 0x81f,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x820, .end_address = 0x827,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x829, .end_address = 0x82e,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x831, .end_address = 0x831,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x83f, .end_address = 0x83f,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0x840, .end_address = 0x87f,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x880, .end_address = 0x8bf,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x8c0, .end_address = 0x8ff,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x981, .end_address = 0x981,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x982, .end_address = 0x982,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x983, .end_address = 0x983,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x984, .end_address = 0x984,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP_OR_VE,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP_OR_VE
 },
 {
  .start_address = 0x985, .end_address = 0x985,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x986, .end_address = 0x986,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x987, .end_address = 0x987,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x988, .end_address = 0x988,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x989, .end_address = 0x989,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x98a, .end_address = 0x98a,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_ULI, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0xc80, .end_address = 0xc80,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_VE
 },
 {
  .start_address = 0xd90, .end_address = 0xd90,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0xd93, .end_address = 0xd93,
  .rd_bit_meaning = MSR_BITMAP_FIXED_1, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0xda0, .end_address = 0xda0,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_OTHER
 },
 {
  .start_address = 0x1200, .end_address = 0x12ff,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x14ce, .end_address = 0x14ce,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x14cf, .end_address = 0x14cf,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x1500, .end_address = 0x15ff,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x1600, .end_address = 0x16ff,
  .rd_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .rd_action = MSR_ACTION_GP,
  .wr_bit_meaning = MSR_BITMAP_DYN_XFAM_LBR, .wr_action = MSR_ACTION_GP
 },
 {
  .start_address = 0x1b01, .end_address = 0x1b01,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc0000080, .end_address = 0xc0000080,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_1, .wr_action = MSR_ACTION_OTHER
 },
 {
  .start_address = 0xc0000081, .end_address = 0xc0000081,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc0000082, .end_address = 0xc0000082,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc0000084, .end_address = 0xc0000084,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc0000100, .end_address = 0xc0000100,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc0000101, .end_address = 0xc0000101,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc0000102, .end_address = 0xc0000102,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 },
 {
  .start_address = 0xc0000103, .end_address = 0xc0000103,
  .rd_bit_meaning = MSR_BITMAP_FIXED_0, .rd_action = MSR_ACTION_FATAL_ERROR,
  .wr_bit_meaning = MSR_BITMAP_FIXED_0, .wr_action = MSR_ACTION_FATAL_ERROR
 }
};
const bool_t seamcall_state_lookup[128][11] = {
    [0] = {0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0 },
    [1] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [2] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [3] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0 },
    [4] = {0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    [5] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0 },
    [6] = {0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0 },
    [7] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0 },
    [10] = {0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    [11] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    [12] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    [13] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1 },
    [14] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1 },
    [15] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0 },
    [16] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [17] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [18] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    [21] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [22] = {0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [23] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0 },
    [25] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    [26] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    [29] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 },
    [30] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    [38] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
    [39] = {0, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0 },
    [43] = {0, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1 },
    [48] = {1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0 },
    [49] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [64] = {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
    [65] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
    [66] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0 },
    [68] = {0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0 },
    [70] = {0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0 },
    [71] = {0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0 },
    [72] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0 },
    [73] = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
    [74] = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0 },
    [75] = {0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 },
    [80] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 1 },
    [81] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0 },
    [82] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 },
    [83] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0 },
    [84] = {0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0 },
    [85] = {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
    [86] = {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0 },
    [87] = {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0 },
    [96] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 }
};
const bool_t servtd_bind_othertd_state_lookup[11] = { 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0 };
const bool_t tdcall_state_lookup[32][11] = {
    [18] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
    [20] = {1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 1 }
};
typedef unsigned char Ipp8u;
typedef signed int IppStatus;
typedef struct _cpHashMethod_rmf IppsHashMethod;
typedef struct _cpHashCtx_rmf IppsHashState_rmf;
IppStatus ippsHashMethodGetSize (int* pSize);
IppStatus ippsHashMethodSet_SHA384 (IppsHashMethod* pMethod);
IppStatus ippsHashGetSize_rmf (int* pSize);
IppStatus ippsHashInit_rmf (IppsHashState_rmf* pState, const IppsHashMethod* pMethod);
IppStatus ippsHashPack_rmf (const IppsHashState_rmf* pState, Ipp8u* pBuffer, int bufSize);

static IppsHashMethod* sha384_init_and_get_global_method(void)
{
    int32_t method_buffer_size;
    IppStatus ret_val = -2;
    hash_method_t* sha384_method = &get_global_data()->sha384_method;
    IppsHashMethod* hash_method_ptr = (IppsHashMethod*)sha384_method->hash_method_buffer;
    if (sha384_method->is_initialized)
    {
        return hash_method_ptr;
    }
    ret_val = ippsHashMethodGetSize(&method_buffer_size);
    if (ret_val != 0 || method_buffer_size > (int32_t)64)
    {
                                                                            ;
        return ((void*)0);
    }
    ret_val = ippsHashMethodSet_SHA384(hash_method_ptr);
    if (ret_val != 0)
    {
                                                   ;
        return ((void*)0);
    }
    sha384_method->is_initialized = ((bool_t)1);
    return hash_method_ptr;
}
crypto_api_error sha384_init(sha384_ctx_t * ctx)
{
    sha384_ctx_t local_ctx;
    int32_t ctx_size = 0;
    IppStatus ret_val = -2;
    IppsHashMethod* hash_method = sha384_init_and_get_global_method();
    if (hash_method == ((void*)0))
    {
        goto EXIT_NO_COPY;
    }
    basic_memset_to_zero(local_ctx.buffer, 256);
    ret_val = ippsHashGetSize_rmf(&ctx_size);
    if ((ret_val != 0) || (ctx_size <= 0) || ((uint32_t)ctx_size > 256))
    {
        goto EXIT_NO_COPY;
    }
    IppsHashState_rmf* ipp_hash_state = (IppsHashState_rmf*)(local_ctx.buffer);
    ret_val = ippsHashInit_rmf(ipp_hash_state, hash_method);
    if (ret_val != 0)
    {
        goto EXIT;
    }
    ctx->last_init_seamdb_index = get_global_data()->seamdb_index;
EXIT:
    if (ret_val == 0)
    {
        ret_val = ippsHashPack_rmf(ipp_hash_state, (Ipp8u*)ctx->buffer, sizeof(sha384_ctx_t));
    }
EXIT_NO_COPY:
    basic_memset_to_zero(local_ctx.buffer, 256);
    return ret_val;
}
extern const fms_info_t allowed_fms[6];
bool_t check_fms_config(fms_info_t fms_config);
const fms_info_t allowed_fms[6] = {
        { .raw = (0xD06D0 | 0x0) },
        { .raw = (0xA06E0 | 0x0) },
        { .raw = (0xA06D0 | 0x0) },
        { .raw = (0xA06F0 | 0x3) },
        { .raw = (0xC06F0 | 0x2) },
        { .raw = (0x806F0 | 0x8) },
};
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
bool_t check_fms_config(fms_info_t fms_config)
{
    fms_info_t platform_fms = get_global_data()->platform_fms;
    if (are_equal_family_and_model(platform_fms, fms_config) &&
        (fms_config.stepping_id > platform_fms.stepping_id))
    {
        return ((bool_t)0);
    }
    uint16_t table_start = find_table_start();
    bool_t family_model_found = ((bool_t)0);
    for (uint16_t i = table_start; i < 6; i++)
    {
        if (are_equal_family_and_model(fms_config, allowed_fms[i]))
        {
            family_model_found = ((bool_t)1);
            if (fms_config.stepping_id > allowed_fms[i].stepping_id)
            {
                return ((bool_t)0);
            }
        }
    }
    return family_model_found;
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

static inline ia32_vmx_basic_t calc_virt_ia32_vmx_basic(void)
{
    ia32_vmx_basic_t msr;
    msr.raw = 0;
    msr.vmexit_info_on_ios = 1;
    msr.ia32_vmx_true_available = 1;
    msr.voe_without_err_code = 1;
    return msr;
}
static inline ia32_vmx_misc_t calc_virt_ia32_vmx_misc(void)
{
    ia32_vmx_misc_t msr;
    msr.raw = 0;
    msr.unrestricted_guest = 1;
    msr.activity_hlt = 1;
    msr.activity_shutdown = 1;
    msr.pt_in_vmx = 1;
    msr.max_cr3_targets = 4;
    msr.vmwrite_any_vmcs_field = 1;
    msr.voe_with_0_instr_length = 1;
    return msr;
}
static inline ia32_vmx_allowed_bits_t calc_allowed32_vmx_ctls(uint32_t init, uint32_t variable_mask)
{
    ia32_vmx_allowed_bits_t allowed;
    allowed.not_allowed0 = init & ~variable_mask;
    allowed.allowed1 = init | variable_mask;
    if ( __builtin_expect((!((allowed.not_allowed0 & ~allowed.allowed1) == 0)), 0) ) { ; tdx_report_error_and_halt(0x0002, 30); };
    return allowed;
}
static inline uint64_t calc_allowed1_vmx_ctls(uint64_t init, uint64_t variable_mask)
{
    return init | variable_mask;
}
static inline void calc_allowed64_vmx_ctls(uint64_t init, uint64_t variable_mask,
                                             uint64_t* not_allowed0, uint64_t* allowed1)
{
    *not_allowed0 = init & ~variable_mask;
    *allowed1 = init | variable_mask;
    if ( __builtin_expect((!((*not_allowed0 & ~(*allowed1)) == 0)), 0) ) { ; tdx_report_error_and_halt(0x0002, 31); };
}
static inline uint32_t calc_l2_vmcs_pinbased_ctls_init(void)
{
    return get_global_data()->l2_vmcs_values.pinbased_ctls;
}
static inline uint32_t calc_l2_vmcs_procbased_ctls_init(tdcs_t* tdcs_p)
{
    td_vmcs_values_t* td_vmcs_values_ptr = &get_global_data()->l2_vmcs_values;
    vmx_procbased_ctls_t ctls = { .raw = td_vmcs_values_ptr->procbased_ctls };
    ctls.mwait_exiting = ~tdcs_p->executions_ctl_fields.cpuid_flags.monitor_mwait_supported;
    ctls.rdpmc_exiting = ~tdcs_p->executions_ctl_fields.attributes.perfmon;
    ctls.monitor_exiting = ~tdcs_p->executions_ctl_fields.cpuid_flags.monitor_mwait_supported;
    return (uint32_t)ctls.raw;
}
static inline uint32_t calc_l2_vmcs_procbased_ctls2_init(tdcs_t* tdcs_p)
{
    td_vmcs_values_t* td_vmcs_values_ptr = &get_global_data()->l2_vmcs_values;
    vmx_procbased_ctls2_t ctls = { .raw = td_vmcs_values_ptr->procbased_ctls2 };
    ctls.en_guest_wait_pause = tdcs_p->executions_ctl_fields.cpuid_flags.waitpkg_supported;
    ctls.en_pconfig = tdcs_p->executions_ctl_fields.cpuid_flags.pconfig_supported;
    return (uint32_t)ctls.raw;
}
static inline uint64_t calc_l2_vmcs_procbased_ctls3_init(void)
{
    td_vmcs_values_t* td_vmcs_values_ptr = &get_global_data()->l2_vmcs_values;
    vmx_procbased_ctls3_t ctls = { .raw = td_vmcs_values_ptr->procbased_ctls3 };
    return ctls.raw;
}
static inline uint32_t calc_l2_vmcs_vm_exit_ctls_init(tdcs_t* tdcs_p)
{
    td_vmcs_values_t* td_vmcs_values_ptr = &get_global_data()->l2_vmcs_values;
    uint32_t ctls = td_vmcs_values_ptr->exit_ctls;
    if (tdcs_p->executions_ctl_fields.attributes.perfmon || tdcs_p->executions_ctl_fields.attributes.debug)
    {
        ctls |= (uint32_t)(uint64_t)(1ULL<<(12));
        ctls |= (uint32_t)(uint64_t)(1ULL<<(30));
    }
    else
    {
        ctls &= ~((uint32_t)(uint64_t)(1ULL<<(12)));
        ctls &= ~((uint32_t)(uint64_t)(1ULL<<(30)));
    }
    return ctls;
}
static inline uint32_t calc_l2_vmcs_vm_entry_ctls_init(tdcs_t* tdcs_p)
{
    td_vmcs_values_t* td_vmcs_values_ptr = &get_global_data()->l2_vmcs_values;
    uint32_t ctls = td_vmcs_values_ptr->entry_ctls;
    if (tdcs_p->executions_ctl_fields.attributes.perfmon || tdcs_p->executions_ctl_fields.attributes.debug)
    {
        ctls |= (uint32_t)(uint64_t)(1ULL<<(13));
    }
    else
    {
        ctls &= ~((uint32_t)(uint64_t)(1ULL<<(13)));
    }
    if (tdcs_p->executions_ctl_fields.attributes.pks || tdcs_p->executions_ctl_fields.attributes.debug)
    {
        ctls |= (uint32_t)(uint64_t)(1ULL<<(22));
    }
    else
    {
        ctls &= ~((uint32_t)(uint64_t)(1ULL<<(22)));
    }
    return ctls;
}
static inline ia32_vmx_allowed_bits_t calc_virt_ia32_vmx_true_pinbased_ctls(void)
{
    return calc_allowed32_vmx_ctls(calc_l2_vmcs_pinbased_ctls_init(), PINBASED_CTLS_L1_WR_MASK);
}
static inline ia32_vmx_allowed_bits_t calc_virt_ia32_vmx_true_procbased_ctls(tdcs_t *tdcs_p)
{
    vmx_procbased_ctls_t wr_mask = {.raw = PROCBASED_CTLS_L1_WR_MASK};
    wr_mask.rdpmc_exiting = tdcs_p->executions_ctl_fields.attributes.perfmon;
    return calc_allowed32_vmx_ctls(calc_l2_vmcs_procbased_ctls_init(tdcs_p), (uint32_t)wr_mask.raw);
}
static inline ia32_vmx_allowed_bits_t calc_virt_ia32_vmx_procbased_ctls2(tdcs_t *tdcs_ptr)
{
    vmx_procbased_ctls2_t wr_mask = {.raw = PROCBASED_CTLS2_L1_WR_MASK};
    wr_mask.en_guest_wait_pause = tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported;
    wr_mask.en_pconfig = tdcs_ptr->executions_ctl_fields.cpuid_flags.pconfig_supported;
    return calc_allowed32_vmx_ctls(calc_l2_vmcs_procbased_ctls2_init(tdcs_ptr), (uint32_t)wr_mask.raw);
}
static inline uint64_t calc_virt_ia32_vmx_procbased_ctls3(void)
{
    return calc_allowed1_vmx_ctls(calc_l2_vmcs_procbased_ctls3_init(), PROCBASED_CTLS3_L1_WR_MASK);
}
static inline ia32_vmx_allowed_bits_t calc_virt_ia32_vmx_true_vmexit_ctls(tdcs_t* tdcs_p)
{
    return calc_allowed32_vmx_ctls(calc_l2_vmcs_vm_exit_ctls_init(tdcs_p), EXIT_CTLS_L1_WR_MASK);
}
static inline ia32_vmx_allowed_bits_t calc_virt_ia32_vmx_true_vmentry_ctls(tdcs_t* tdcs_p)
{
    return calc_allowed32_vmx_ctls(calc_l2_vmcs_vm_entry_ctls_init(tdcs_p), ENTRY_CTLS_L1_WR_MASK);
}
static inline ia32_vmx_ept_vpid_cap_t calc_virt_ia32_vmx_ept_vpid_cap(tdcs_t* tdcs_p)
{
    ia32_vmx_ept_vpid_cap_t msr, platform_msr;
    platform_msr.raw = get_global_data()->plt_common_config.ia32_vmx_ept_vpid_cap;
    msr.raw = 0;
    msr.exe_only_supported = 1;
    msr.ps_2m_supported = 1;
    msr.ps_1g_supported = 1;
    msr.advanced_vmexit_info_supported = 1;
    msr.sss_support = ((ia32_xcr0_t)tdcs_p->executions_ctl_fields.xfam).cet_s;
    msr.hlat_prefix_size = platform_msr.hlat_prefix_size;
    return msr;
}
static inline uint64_t calc_virt_ia32_vmx_vmfunc(void)
{
    return 0;
}
static inline void calc_virt_ia32_vmx_cr0_fixed(uint64_t* not_allowed0, uint64_t* allowed1)
{
    calc_allowed64_vmx_ctls(GUEST_CR0_L2_INIT, GUEST_CR0_L2_VARIABLE, not_allowed0, allowed1);
}
static inline void calc_virt_ia32_vmx_cr4_fixed(tdcs_t* tdcs_p, uint64_t* not_allowed0, uint64_t* allowed1)
{
    ia32_cr4_t write_mask;
    write_mask = calc_base_l2_cr4_write_mask(tdcs_p);
    calc_allowed64_vmx_ctls(GUEST_CR4_L2_INIT, write_mask.raw, not_allowed0, allowed1);
}
void init_virt_ia32_vmx_msrs(tdcs_t* tdcs_ptr);
bool_t init_virt_ia32_arch_capabilities(tdcs_t* tdcs_p, bool_t config_flag, uint64_t config_val);
void basic_memset(uint64_t dst, uint64_t dst_bytes, uint8_t val, uint64_t nbytes)
{
    if ( __builtin_expect((!(dst_bytes >= nbytes)), 0) ) { ; tdx_report_error_and_halt(0x0002, 2); };
    memset((void*)dst, val, nbytes);
}
void basic_memset_to_zero(void * dst, uint64_t nbytes)
{
    basic_memset((uint64_t)dst, nbytes, 0, nbytes);
}
api_error_code_e non_shared_hpa_metadata_check_and_lock(
        pa_t hpa,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        page_size_t* leaf_size,
        bool_t walk_to_leaf_size,
        bool_t is_guest
        )
{
    if (!pamt_get_block(hpa, pamt_block))
    {
                                                                 ;
        return 0xC000010100000000ULL;
    }
    pamt_entry_t* pamt_entry_lp;
    page_size_t requested_leaf_size = *leaf_size;
    api_error_code_e errc = pamt_walk(hpa, *pamt_block, lock_type, leaf_size,
                                      walk_to_leaf_size, is_guest, &pamt_entry_lp);
    if (errc != 0x0000000000000000ULL)
    {
                                      ;
        return errc;
    }
    if (walk_to_leaf_size && (requested_leaf_size != *leaf_size))
    {
                                                                                                   ;
        pamt_unwalk(hpa, *pamt_block, pamt_entry_lp, lock_type, *leaf_size);
        return 0xC000030000000000ULL;
    }
    if (pamt_entry_lp->pt != expected_pt)
    {
                                                                                                ;
        pamt_unwalk(hpa, *pamt_block, pamt_entry_lp, lock_type, *leaf_size);
        return 0xC000030000000000ULL;
    }
    *pamt_entry = pamt_entry_lp;
    return 0x0000000000000000ULL;
}
pa_t assign_hkid_to_hpa(tdr_t* tdr_p, pa_t hpa)
{
    uint16_t hkid;
    if (tdr_p == ((void*)0))
    {
        hkid = get_global_data()->hkid;
    }
    else
    {
        hkid = tdr_p->key_management_fields.hkid;
    }
    return set_hkid_to_pa(hpa, hkid);
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
api_error_code_e shared_hpa_check_with_pwr_2_alignment(pa_t hpa, uint64_t size)
{
    if (!is_addr_aligned_pwr_of_2(hpa.raw, size))
    {
        return 0xC000010000000000ULL;
    }
    return shared_hpa_check(hpa, size);
}
api_error_code_e hpa_check_with_pwr_2_alignment(pa_t hpa, uint64_t size)
{
    if (!is_addr_aligned_pwr_of_2(hpa.raw, size))
    {
        return 0xC000010000000000ULL;
    }
    if (get_hkid_from_pa(hpa) != 0)
    {
        return 0xC000010000000000ULL;
    }
    if (!is_pa_smaller_than_max_pa(hpa.raw))
    {
        return 0xC000010000000000ULL;
    }
    return 0x0000000000000000ULL;
}
api_error_type check_lock_and_map_explicit_private_4k_hpa(
        pa_t hpa,
        uint64_t operand_id,
        tdr_t* tdr_p,
        mapping_type_t mapping_type,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        bool_t* is_locked,
        void** la
        )
{
    api_error_type errc;
    errc = check_and_lock_explicit_4k_private_hpa( hpa, operand_id,
             lock_type, expected_pt, pamt_block, pamt_entry, is_locked);
    if (errc != 0x0000000000000000ULL)
    {
        return errc;
    }
    pa_t hpa_with_hkid = assign_hkid_to_hpa(tdr_p, hpa);
    *la = map_pa((void*)hpa_with_hkid.full_pa, mapping_type);
    return 0x0000000000000000ULL;
}
api_error_type check_lock_and_map_explicit_tdr(
        pa_t tdr_hpa,
        uint64_t operand_id,
        mapping_type_t mapping_type,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        bool_t* is_locked,
        tdr_t** tdr_p
        )
{
    return check_lock_and_map_explicit_private_4k_hpa(tdr_hpa, operand_id, ((void*)0), mapping_type,
            lock_type, expected_pt, pamt_block, pamt_entry, is_locked, (void**)tdr_p);
}
api_error_type check_and_lock_explicit_private_hpa(
        pa_t hpa,
        uint64_t operand_id,
        uint64_t alignment,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        page_size_t* leaf_size,
        bool_t walk_to_leaf_size,
        bool_t* is_locked
        )
{
    api_error_code_e errc;
    errc = hpa_check_with_pwr_2_alignment(hpa, alignment);
    if (errc != 0x0000000000000000ULL)
    {
        return api_error_with_operand_id(0xC000010000000000ULL, operand_id);
    }
    errc = non_shared_hpa_metadata_check_and_lock(hpa, lock_type,
            expected_pt, pamt_block, pamt_entry, leaf_size, walk_to_leaf_size, ((bool_t)0));
    if (errc != 0x0000000000000000ULL)
    {
        return api_error_with_operand_id(errc, operand_id);
    }
    *is_locked = ((bool_t)1);
    return 0x0000000000000000ULL;
}
api_error_type check_and_lock_explicit_4k_private_hpa(
        pa_t hpa,
        uint64_t operand_id,
        lock_type_t lock_type,
        page_type_t expected_pt,
        pamt_block_t* pamt_block,
        pamt_entry_t** pamt_entry,
        bool_t* is_locked
        )
{
    api_error_type errc;
    page_size_t leaf_size = PT_4KB;
    errc = check_and_lock_explicit_private_hpa(hpa, operand_id, (4 * 0x400ULL), lock_type,
              expected_pt, pamt_block, pamt_entry, &leaf_size, ((bool_t)1), is_locked);
    if (errc != 0x0000000000000000ULL)
    {
        return errc;
    }
    return 0x0000000000000000ULL;
}
tdcs_t* map_implicit_tdcs(
        tdr_t* tdr_p,
        mapping_type_t mapping_type,
        bool_t other_td
        )
{
    return map_continuous_pages(tdr_p->management_fields.tdcx_pa, (uint16_t)tdr_p->management_fields.num_tdcx,
                                mapping_type,
                                other_td ? (((0 + 1) + MAX_MAPPED_TDCS_PAGES) + MAX_TDVPS_PAGES) : (0 + 1));
}
static api_error_type check_td_in_correct_build_state(tdr_t *tdr_p)
{
    if (tdr_p->management_fields.fatal)
    {
                                           ;
        return api_error_fatal(0xE000060400000000ULL);
    }
    if (tdr_p->management_fields.lifecycle_state != TD_KEYS_CONFIGURED)
    {
                                                ;
        return 0x8000081000000000ULL;
    }
    if (tdr_p->management_fields.num_tdcx < MIN_NUM_TDCS_PAGES)
    {
                                                                                        ;
        return 0xC000060600000000ULL;
    }
    return 0x0000000000000000ULL;
}
static api_error_type check_any_td_state_map_tdcs_and_lock(
        tdr_t* tdr_p,
        mapping_type_t mapping_type,
        lock_type_t op_state_lock_type,
        bool_t map_migsc_links,
        uint32_t current_leaf,
        bool_t other_td,
        bool_t guest_side_flow,
        tdcs_t** tdcs_p
        )
{
    (void)(map_migsc_links);
    api_error_code_e errc = 0xFFFFFFFFFFFFFFFFULL;
    *tdcs_p = ((void*)0);
    errc = check_td_in_correct_build_state(tdr_p);
    if (errc != 0x0000000000000000ULL)
    {
                                                     ;
        return errc;
    }
    tdcs_t* tmp_tdcs_p = map_implicit_tdcs(tdr_p, mapping_type, other_td);
    if (op_state_lock_type != TDX_LOCK_NO_LOCK)
    {
        if ((errc = acquire_sharex_lock_hp(&(tmp_tdcs_p->management_fields.op_state_lock),
                                     op_state_lock_type, guest_side_flow)) != 0x0000000000000000ULL)
        {
            free_la(tmp_tdcs_p);
                                                            ;
            return api_error_with_operand_id(errc, 172ULL);
        }
    }
    bool_t is_allowed = ((bool_t)0);
    if ( __builtin_expect((!guest_side_flow), 1) )
    {
        seamcall_leaf_opcode_t seamcall_leaf = (seamcall_leaf_opcode_t)current_leaf;
        is_allowed = op_state_is_seamcall_allowed(seamcall_leaf, tmp_tdcs_p->management_fields.op_state, other_td);
    }
    else
    {
        tdcall_leaf_opcode_t tdcall_leaf = (tdcall_leaf_opcode_t)current_leaf;
        is_allowed = op_state_is_tdcall_allowed(tdcall_leaf, tmp_tdcs_p->management_fields.op_state, other_td);
    }
    if (!is_allowed)
    {
        if (op_state_lock_type != TDX_LOCK_NO_LOCK)
        {
            release_sharex_lock_hp(&(tmp_tdcs_p->management_fields.op_state_lock), op_state_lock_type);
        }
        free_la(tmp_tdcs_p);
                                                                         ;
        return 0xC000060800000000ULL;
    }
    *tdcs_p = tmp_tdcs_p;
    return 0x0000000000000000ULL;
}
api_error_type check_state_map_tdcs_and_lock(
        tdr_t* tdr_p,
        mapping_type_t mapping_type,
        lock_type_t op_state_lock_type,
        bool_t map_migsc_links,
        seamcall_leaf_opcode_t current_leaf,
        tdcs_t** tdcs_p
        )
{
    return check_any_td_state_map_tdcs_and_lock(tdr_p, mapping_type, op_state_lock_type,
                                                map_migsc_links, (uint32_t)current_leaf, ((bool_t)0), ((bool_t)0), tdcs_p);
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
bool_t verify_td_attributes(td_param_attributes_t attributes, bool_t is_import)
{
    tdx_module_global_t* tdx_global_data_ptr = get_global_data();
    if (((attributes.raw & ~tdx_global_data_ptr->attributes_fixed0) != 0) ||
        ((attributes.raw & tdx_global_data_ptr->attributes_fixed1) != tdx_global_data_ptr->attributes_fixed1))
    {
        return ((bool_t)0);
    }
    if (attributes.migratable)
    {
        if (attributes.debug || attributes.perfmon)
        {
            return ((bool_t)0);
        }
    }
    else if (is_import)
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
bool_t verify_td_config_flags(config_flags_t config_flags)
{
    tdx_module_global_t* tdx_global_data_ptr = get_global_data();
    if (((config_flags.raw & ~tdx_global_data_ptr->config_flags_fixed0.raw) != 0) ||
        ((config_flags.raw & tdx_global_data_ptr->config_flags_fixed1.raw) != tdx_global_data_ptr->config_flags_fixed1.raw))
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
bool_t check_xfam(ia32_xcr0_t xfam)
{
    tdx_module_global_t* tdx_global_data_ptr = get_global_data();
    if ((xfam.raw &
         ~(uint64_t)(0x0006DBE7ULL & (tdx_global_data_ptr->xcr0_supported_mask |
                             tdx_global_data_ptr->ia32_xss_supported_mask))) != 0)
    {
        return ((bool_t)0);
    }
    if (((xfam.raw & 0x00000003ULL) != 0x00000003ULL) ||
        (xfam.avx3_kmask && !xfam.avx) ||
        (xfam.avx3_kmask != xfam.avx3_zmm_hi) ||
        (xfam.avx3_kmask != xfam.avx3_zmm) ||
        (xfam.cet_s != xfam.cet_u) ||
        (xfam.amx_xtilecfg != xfam.amx_xtiledata))
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
bool_t verify_and_set_td_eptp_controls(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, bool_t gpaw, ia32e_eptp_t eptp)
{
    uint64_t max_pwl = LVL_PML5;
    ia32_vmx_ept_vpid_cap_t vpid_cap = { .raw = get_global_data()->plt_common_config.ia32_vmx_ept_vpid_cap };
    if (!vpid_cap.pml5_supported)
    {
        max_pwl = LVL_PML4;
    }
    if ((eptp.fields.ept_ps_mt != MT_WB) ||
        (eptp.fields.ept_pwl < LVL_PML4) ||
        (eptp.fields.ept_pwl > max_pwl) ||
        (eptp.fields.enable_ad_bits != 0) ||
        (eptp.fields.enable_sss_control != 0) ||
        (eptp.fields.reserved_0 != 0) ||
        (eptp.fields.base_pa != 0) ||
        (eptp.fields.reserved_1 != 0))
    {
        return ((bool_t)0);
    }
    uint64_t tdx_max_pa = get_global_data()->max_pa;
    if ((eptp.fields.ept_pwl == LVL_PML5) &&
        (tdx_max_pa < 49ULL))
    {
        return ((bool_t)0);
    }
    if (gpaw && (eptp.fields.ept_pwl < LVL_PML5))
    {
        return ((bool_t)0);
    }
    tdcs_ptr->executions_ctl_fields.gpaw = gpaw;
    pa_t sept_root_pa;
    sept_root_pa.raw = tdr_ptr->management_fields.tdcx_pa[SEPT_ROOT_PAGE_INDEX];
    sept_root_pa = set_hkid_to_pa(sept_root_pa, 0);
    eptp.fields.base_pa = sept_root_pa.page_4k_num;
    tdcs_ptr->executions_ctl_fields.eptp.raw = eptp.raw;
    return ((bool_t)1);
}
void calculate_tsc_virt_params(uint64_t tsc, uint64_t native_tsc_freq, uint16_t virt_tsc_frequency,
                               uint64_t virt_tsc, uint64_t* tsc_multiplier, uint64_t* tsc_offset)
{
    uint64_t tmp_tsc_multiplier, tmp_tsc_offset;
    if ( __builtin_expect((!((native_tsc_freq >= 0x2540c))), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_MNG_INIT_LEAF) & 0xFF)), 0); };
    tmp_tsc_multiplier = TDXFV_NONDET_uint64t();
    uint128_t tmp_128b;
    tmp_128b = TDXFV_NONDET_uint128t();
    tmp_tsc_offset = (tmp_128b.qwords[1] << 16) | (tmp_128b.qwords[0] >> 48);
    *tsc_multiplier = tmp_tsc_multiplier;
    *tsc_offset = -(tmp_tsc_offset) + virt_tsc;
}
bool_t is_msr_dynamic_bit_cleared(tdcs_t* tdcs_ptr, uint32_t msr_addr, msr_bitmap_bit_type bit_meaning)
{
    if (((bit_meaning == MSR_BITMAP_DYN_PERFMON) && is_perfmon_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_XFAM_CET) && is_cet_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_XFAM_PT) && is_pt_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_XFAM_ULI) && is_uli_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_XFAM_LBR) && is_lbr_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_UMWAIT) && is_waitpkg_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_PKS) && is_pks_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_XFD) && is_xfd_supported_in_tdcs(tdcs_ptr)) ||
        ((bit_meaning == MSR_BITMAP_DYN_TSX) && is_tsx_supported_in_tdcs(tdcs_ptr)))
    {
        return ((bool_t)1);
    }
    if (bit_meaning == MSR_BITMAP_DYN_OTHER)
    {
                                                                  ;
        if ((msr_addr == 0x345) &&
            (is_perfmon_supported_in_tdcs(tdcs_ptr) && is_pt_supported_in_tdcs(tdcs_ptr)))
        {
            return ((bool_t)1);
        }
        if ((msr_addr == 0x329) &&
            (is_perfmon_supported_in_tdcs(tdcs_ptr) &&
             get_global_data()->plt_common_config.ia32_perf_capabilities.perf_metrics_available))
        {
            return ((bool_t)1);
        }
    }
    return ((bool_t)0);
}
void set_msr_bitmaps(tdcs_t * tdcs_ptr)
{
    for (uint32_t i = 0; i < 135; i++)
    {
        uint32_t msr_addr = msr_lookup[i].start_address;
        bool_t clear_rd_bit = is_msr_dynamic_bit_cleared(tdcs_ptr, msr_addr, msr_lookup[i].rd_bit_meaning) ||
                              (msr_lookup[i].rd_bit_meaning == MSR_BITMAP_FIXED_0);
        bool_t clear_wr_bit = is_msr_dynamic_bit_cleared(tdcs_ptr, msr_addr, msr_lookup[i].wr_bit_meaning) ||
                              (msr_lookup[i].wr_bit_meaning == MSR_BITMAP_FIXED_0);
        if (!clear_rd_bit && !clear_wr_bit)
        {
            continue;
        }
        for (; msr_addr <= msr_lookup[i].end_address; msr_addr++)
        {
            uint32_t byte_offset, bit_offset;
            byte_offset = (msr_addr & ~((uint32_t)~(((uint32_t)(((uint64_t)(1ULL<<(31)) - (uint64_t)(1ULL<<(30)) + (uint64_t)(1ULL<<(31)))))))) ? 0x400ULL : 0;
            byte_offset += (msr_addr & ((uint32_t)~(((uint32_t)(((uint64_t)(1ULL<<(31)) - (uint64_t)(1ULL<<(30)) + (uint64_t)(1ULL<<(31)))))))) / 8;
            bit_offset = (msr_addr & ((uint32_t)~(((uint32_t)(((uint64_t)(1ULL<<(31)) - (uint64_t)(1ULL<<(30)) + (uint64_t)(1ULL<<(31)))))))) % 8;
            uint32_t* byte_addr_rd = (uint32_t*)&tdcs_ptr->MSR_BITMAPS[byte_offset];
            uint32_t* byte_addr_wr = (uint32_t*)&tdcs_ptr->MSR_BITMAPS[byte_offset + (0x400ULL * 2)];
            if (clear_rd_bit)
            {
                btr_32b(byte_addr_rd, bit_offset);
            }
            if (clear_wr_bit)
            {
                btr_32b(byte_addr_wr, bit_offset);
            }
        }
    }
}
void set_xbuff_offsets_and_size(tdcs_t* tdcs_ptr, uint64_t xfam)
{
    tdx_module_global_t* tdx_global_data_ptr = get_global_data();
    uint32_t offset = __builtin_offsetof(xsave_area_t, extended_region);
    for (uint32_t xfam_i = 2; xfam_i <= 18; xfam_i++)
    {
        if ((xfam & (uint64_t)(1ULL<<(xfam_i))) != 0)
        {
            if (tdx_global_data_ptr->xsave_comp[xfam_i].align)
            {
                offset = ( ((offset) + ((64U) - 1)) & (~((64U) - 1)) );
            }
            tdcs_ptr->executions_ctl_fields.xbuff_offsets[xfam_i] = offset;
            offset += tdx_global_data_ptr->xsave_comp[xfam_i].size;
        }
    }
    tdcs_ptr->executions_ctl_fields.xbuff_size = offset;
}
bool_t td_immutable_state_cross_check(tdcs_t* tdcs_ptr)
{
    if (tdcs_ptr->executions_ctl_fields.attributes.migratable &&
        (tdcs_ptr->management_fields.num_l2_vms > 0))
    {
                                                                     ;
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
api_error_type check_cpuid_1f(tdcs_t* tdcs_p, bool_t allow_null)
{
    uint32_t cpuid_0b_idx;
    cpuid_topology_level_type_e prev_level_type;
    cpuid_topology_level_type_e level_type = LEVEL_TYPE_INVALID;
    cpuid_topology_shift_t cpuid_1f_eax;
    cpuid_topology_level_t cpuid_1f_ecx;
    bool_t null_config = ((bool_t)0);
    bool_t core_level_scanned = ((bool_t)0);
    for (uint32_t subleaf = 0; subleaf < LEVEL_TYPE_MAX; subleaf++)
    {
        uint32_t cpuid_1f_idx = get_cpuid_lookup_entry(0x1F, subleaf);
        cpuid_config_return_values_t cpuid_values = tdcs_p->cpuid_config_vals[cpuid_1f_idx];
        if (subleaf == 0)
        {
            if ((cpuid_values.high == 0) && (cpuid_values.low == 0))
            {
                if (allow_null)
                {
                    null_config = ((bool_t)1);
                }
                else
                {
                    return 0xC000090400000000ULL;
                }
            }
        }
        else if ((null_config) && (cpuid_values.high || cpuid_values.low))
        {
            return 0xC000090400000000ULL;
        }
        if (null_config)
        {
            cpuid_values = get_global_data()->cpuid_values[cpuid_1f_idx].values;
            tdcs_p->cpuid_config_vals[cpuid_1f_idx].low = cpuid_values.low;
            tdcs_p->cpuid_config_vals[cpuid_1f_idx].high = cpuid_values.high;
        }
        cpuid_1f_eax.raw = cpuid_values.eax;
        cpuid_1f_ecx.raw = cpuid_values.ecx;
        prev_level_type = level_type;
        level_type = cpuid_1f_ecx.level_type;
        if (level_type != LEVEL_TYPE_INVALID)
        {
            if ((level_type <= prev_level_type) || (level_type >= LEVEL_TYPE_MAX))
            {
                return 0xC000090400000000ULL;
            }
            if (level_type == LEVEL_TYPE_SMT)
            {
                cpuid_0b_idx = get_cpuid_lookup_entry(0xB, 0);
                tdcs_p->cpuid_config_vals[cpuid_0b_idx] = cpuid_values;
            }
            else if (level_type == LEVEL_TYPE_CORE)
            {
                core_level_scanned = ((bool_t)1);
            }
        }
        else
        {
            if (subleaf == 0)
            {
                return 0xC000090400000000ULL;
            }
            if (!core_level_scanned)
            {
                return 0xC000090400000000ULL;
            }
        }
        cpuid_0b_idx = get_cpuid_lookup_entry(0xB, 1);
        cpuid_1f_ecx.level_type = LEVEL_TYPE_CORE;
        cpuid_values.ecx = cpuid_1f_ecx.raw;
        tdcs_p->cpuid_config_vals[cpuid_0b_idx] = cpuid_values;
    }
    return 0x0000000000000000ULL;
}
void init_virt_ia32_vmx_msrs(tdcs_t* tdcs_ptr)
{
    tdcs_ptr->virt_msrs.virt_ia32_vmx_basic = calc_virt_ia32_vmx_basic();
    tdcs_ptr->virt_msrs.virt_ia32_vmx_misc = calc_virt_ia32_vmx_misc();
    tdcs_ptr->virt_msrs.virt_ia32_vmx_true_pinbased_ctls = calc_virt_ia32_vmx_true_pinbased_ctls();
    tdcs_ptr->virt_msrs.virt_ia32_vmx_true_procbased_ctls = calc_virt_ia32_vmx_true_procbased_ctls(tdcs_ptr);
    tdcs_ptr->virt_msrs.virt_ia32_vmx_procbased_ctls2 = calc_virt_ia32_vmx_procbased_ctls2(tdcs_ptr);
    tdcs_ptr->virt_msrs.virt_ia32_vmx_procbased_ctls3 = calc_virt_ia32_vmx_procbased_ctls3();
    tdcs_ptr->virt_msrs.virt_ia32_vmx_true_exit_ctls = calc_virt_ia32_vmx_true_vmexit_ctls(tdcs_ptr);
    tdcs_ptr->virt_msrs.virt_ia32_vmx_true_entry_ctls = calc_virt_ia32_vmx_true_vmentry_ctls(tdcs_ptr);
    tdcs_ptr->virt_msrs.virt_ia32_vmx_ept_vpid_cap = calc_virt_ia32_vmx_ept_vpid_cap(tdcs_ptr);
    tdcs_ptr->virt_msrs.virt_ia32_vmx_vmfunc = calc_virt_ia32_vmx_vmfunc();
    calc_virt_ia32_vmx_cr0_fixed(&tdcs_ptr->virt_msrs.virt_ia32_vmx_cr0_fixed0.raw,
                                 &tdcs_ptr->virt_msrs.virt_ia32_vmx_cr0_fixed1.raw);
    calc_virt_ia32_vmx_cr4_fixed(tdcs_ptr, &tdcs_ptr->virt_msrs.virt_ia32_vmx_cr4_fixed0.raw,
                                           &tdcs_ptr->virt_msrs.virt_ia32_vmx_cr4_fixed1.raw);
}
bool_t init_virt_ia32_arch_capabilities(tdcs_t* tdcs_p, bool_t config_flag, uint64_t config_val)
{
    ia32_arch_capabilities_t config_value = { .raw = config_val };
    ia32_arch_capabilities_t arch_cap_value;
    if (!config_flag && (config_value.raw != 0))
    {
        return ((bool_t)0);
    }
    arch_cap_value = get_global_data()->plt_common_config.ia32_arch_capabilities;
    if (!config_value.ssb_no)
    {
        arch_cap_value.ssb_no = 0;
    }
    else
    {
        config_value.ssb_no = 0;
    }
    if (!tdcs_p->executions_ctl_fields.cpuid_flags.tsx_supported)
    {
        arch_cap_value.tsx_ctrl = 0;
    }
    arch_cap_value.mcu_ctls = 0;
    arch_cap_value.misc_package_ctls = 0;
    arch_cap_value.energy_filtering_ctl = 0;
    arch_cap_value.reserved_1 = 0;
    arch_cap_value.fb_clear = 0;
    arch_cap_value.fb_clear_ctrl = 0;
    if (config_value.rrsba)
    {
        arch_cap_value.rrsba = 1;
        config_value.rrsba = 0;
    }
    if (!config_value.bhi_no)
    {
        arch_cap_value.bhi_no = 0;
    }
    else
    {
        config_value.bhi_no = 0;
    }
    arch_cap_value.xapic_disable_status = 1;
    arch_cap_value.reserved_2 = 0;
    arch_cap_value.overclocking_status = 0;
    if (!config_value.pbrsb_no)
    {
        arch_cap_value.pbrsb_no = 0;
    }
    else
    {
        config_value.pbrsb_no = 0;
    }
    arch_cap_value.reserved_3 = 0;
    if (config_value.raw != 0)
    {
        return ((bool_t)0);
    }
    tdcs_p->virt_msrs.virt_ia32_arch_capabilities = arch_cap_value.raw;
    return ((bool_t)1);
}
static inline uint64_t la_from_keyhole_idx(uint16_t keyhole_idx)
{
                                                      ;
    return get_sysinfo_table()->keyhole_rgn_base +
            (((uint64_t)get_local_data()->lp_info.lp_id * 128 + keyhole_idx) * (uint64_t)0x1000);
}
static inline uint16_t keyhole_idx_from_la(uint64_t la)
{
                                                                             ;
                                                                                    ;
    uint16_t keyhole_idx = (uint16_t)(((la - get_sysinfo_table()->keyhole_rgn_base) / 0x1000) -
                                      (get_local_data()->lp_info.lp_id * 128));
                                                      ;
    return keyhole_idx;
}
static void fill_keyhole_pte(uint16_t keyhole_idx, uint64_t pa, bool_t is_writable, bool_t is_wb_memtype)
{
    uint64_t lp_keyhole_edit_base = get_sysinfo_table()->keyhole_edit_rgn_base +
            (uint64_t)(get_local_data()->lp_info.lp_id * 128 * sizeof(ia32e_pxe_t));
    ia32e_pxe_t* pte_p = (ia32e_pxe_t*)(lp_keyhole_edit_base + (uint64_t)((uint32_t)keyhole_idx * sizeof(ia32e_pxe_t)));
    ia32e_pxe_t new_pte;
    new_pte.raw = (uint64_t)0;
    new_pte.fields_4k.addr = (pa >> 12);
    new_pte.fields_4k.p = 1;
    new_pte.fields_4k.a = 1;
    new_pte.fields_4k.xd = 1;
    new_pte.fields_4k.rw = is_writable;
    new_pte.fields_4k.d = is_writable;
    if (is_wb_memtype == ((bool_t)0))
    {
        new_pte.fields_4k.pat = 1;
        new_pte.fields_4k.pwt = 1;
        new_pte.fields_4k.pcd = 1;
    }
    ia32_set_ac();
    pte_p->raw = new_pte.raw;
    ia32_clear_ac();
    return;
}
static uint16_t hash_pa(uint64_t bits)
{
    uint16_t res;
    res = (uint16_t)(bits & 0xFFFFULL);
    res ^= (uint16_t)((bits >> 16) & 0xFFFFULL);
    res ^= (uint16_t)((bits >> 32) & 0xFFFFULL);
    res ^= (uint16_t)((bits >> 48) & 0xFFFFULL);
    res %= (uint16_t)128;
    return res;
}
static uint16_t hash_table_find_entry(uint64_t pa, bool_t is_writable, bool_t is_wb_memtype, uint16_t* prev_idx)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    uint64_t pa_pg_start = ((pa) & ~0xFFFLLU);
    uint16_t hash_idx = hash_pa(pa_pg_start);
    uint16_t keyhole_idx = keyhole_state->hash_table[hash_idx];
    uint16_t ret_idx = 0xFFFF;
    keyhole_entry_t* keyhole;
    while (keyhole_idx != 0xFFFF)
    {
                                                          ;
        keyhole = &keyhole_state->keyhole_array[keyhole_idx];
        if ((keyhole->mapped_pa == pa_pg_start) && (keyhole->is_writable == is_writable) &&
            (keyhole->is_wb_memtype == is_wb_memtype))
        {
            ret_idx = keyhole_idx;
            break;
        }
        if (prev_idx != ((void*)0))
        {
            *prev_idx = keyhole_idx;
        }
        keyhole_idx = keyhole->hash_list_next;
    }
    return ret_idx;
}
static void hash_table_remove_entry(uint64_t pa, bool_t is_writable, bool_t is_wb_memtype)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    uint64_t pa_pg_start = ((pa) & ~0xFFFLLU);
    uint16_t hash_idx = hash_pa(pa_pg_start);
    uint16_t prev_idx = 0xFFFF;
    uint16_t keyhole_idx = hash_table_find_entry(pa, is_writable, is_wb_memtype, &prev_idx);
    keyhole_entry_t* keyhole;
    keyhole = &keyhole_state->keyhole_array[keyhole_idx];
    if (prev_idx == 0xFFFF)
    {
        keyhole_state->hash_table[hash_idx] = keyhole->hash_list_next;
    }
    else
    {
                                                       ;
        keyhole_state->keyhole_array[prev_idx].hash_list_next = keyhole->hash_list_next;
    }
    keyhole->hash_list_next = (uint16_t)0xFFFF;
}
static void hash_table_insert_entry(uint64_t pa, uint16_t new_keyhole_idx)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    uint64_t pa_pg_start = ((pa) & ~0xFFFLLU);
    uint16_t hash_idx = hash_pa(pa_pg_start);
    uint16_t keyhole_idx = keyhole_state->hash_table[hash_idx];
    keyhole_state->keyhole_array[new_keyhole_idx].hash_list_next = keyhole_idx;
    keyhole_state->hash_table[hash_idx] = new_keyhole_idx;
}
static void lru_cache_remove_entry(uint16_t keyhole_idx)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    uint16_t lru_prev = keyhole_state->keyhole_array[keyhole_idx].lru_prev;
    uint16_t lru_next = keyhole_state->keyhole_array[keyhole_idx].lru_next;
    if (keyhole_state->lru_head == keyhole_idx)
    {
        keyhole_state->lru_head = lru_prev;
    }
    if (keyhole_state->lru_tail == keyhole_idx)
    {
        keyhole_state->lru_tail = lru_next;
    }
    if (lru_prev != 0xFFFF)
    {
                                                       ;
        keyhole_state->keyhole_array[lru_prev].lru_next = lru_next;
    }
    if (lru_next != 0xFFFF)
    {
                                                       ;
        keyhole_state->keyhole_array[lru_next].lru_prev = lru_prev;
    }
}
static void lru_cache_add_head_entry(uint16_t keyhole_idx)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    uint16_t lru_prev = keyhole_state->lru_head;
    if (lru_prev == 0xFFFF)
    {
        keyhole_state->lru_head = keyhole_idx;
    } else {
                                                       ;
        keyhole_state->keyhole_array[lru_prev].lru_next = keyhole_idx;
    }
    keyhole_state->keyhole_array[keyhole_idx].lru_prev = lru_prev;
    keyhole_state->keyhole_array[keyhole_idx].lru_next = (uint16_t)0xFFFF;
    keyhole_state->lru_head = keyhole_idx;
}
static void* map_pa_with_memtype(void* pa, mapping_type_t mapping_type, bool_t is_wb_memtype)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    bool_t is_writable = (mapping_type == TDX_RANGE_RW) ? ((bool_t)1) : ((bool_t)0);
    uint16_t keyhole_idx = hash_table_find_entry((uint64_t)pa, is_writable, is_wb_memtype, ((void*)0));
    keyhole_state->total_ref_count += 1;
    if ( __builtin_expect((!(keyhole_state->total_ref_count != 0)), 0) ) { ; tdx_report_error_and_halt(0x0005, 0); };
    if (keyhole_idx != 0xFFFF)
    {
                                                          ;
        if (keyhole_state->keyhole_array[keyhole_idx].state == 2)
        {
            lru_cache_remove_entry(keyhole_idx);
            keyhole_state->keyhole_array[keyhole_idx].state = (uint8_t)1;
        }
        keyhole_state->keyhole_array[keyhole_idx].ref_count += 1;
        if ( __builtin_expect((!(keyhole_state->keyhole_array[keyhole_idx].ref_count != 0)), 0) ) { ; tdx_report_error_and_halt(0x0005, 1); };
        lfence();
        return (void*)(la_from_keyhole_idx(keyhole_idx) | (((uint64_t)pa) & 0xFFFLLU));
    }
    keyhole_idx = keyhole_state->lru_tail;
    if ( __builtin_expect((!(keyhole_idx != 0xFFFF)), 0) ) { ; tdx_report_error_and_halt(0x0005, 2); };
    keyhole_entry_t* target_keyhole = &keyhole_state->keyhole_array[keyhole_idx];
    uint64_t la = la_from_keyhole_idx(keyhole_idx) | (((uint64_t)pa) & 0xFFFLLU);
    lru_cache_remove_entry(keyhole_idx);
    bool_t flush = (target_keyhole->state == 2);
    if (flush)
    {
        hash_table_remove_entry(target_keyhole->mapped_pa, target_keyhole->is_writable,
                                target_keyhole->is_wb_memtype);
    }
    target_keyhole->state = 1;
    target_keyhole->mapped_pa = (((uint64_t)pa) & ~0xFFFLLU);
    target_keyhole->is_writable = is_writable;
    target_keyhole->is_wb_memtype = is_wb_memtype;
    target_keyhole->ref_count = 1;
    hash_table_insert_entry((uint64_t)pa, keyhole_idx);
    fill_keyhole_pte(keyhole_idx, (uint64_t)pa, is_writable, is_wb_memtype);
    if (flush)
    {
        ia32_invalidate_tlb_entries(la);
    }
    lfence();
    return (void*)la;
}
void* map_pa(void* pa, mapping_type_t mapping_type)
{
    return map_pa_with_memtype(pa, mapping_type, ((bool_t)1));
}
void free_la(void* la)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    uint16_t keyhole_idx = keyhole_idx_from_la((uint64_t)la);
    if ( __builtin_expect((!((keyhole_state->keyhole_array[keyhole_idx].state != 0) && (keyhole_state->keyhole_array[keyhole_idx].state != 2))), 0) ) { ; tdx_report_error_and_halt(0x0005, 3); };
    if (keyhole_idx >= (128 - 34))
    {
        return;
    }
    if ( __builtin_expect((!((keyhole_state->total_ref_count > 0) && (keyhole_state->keyhole_array[keyhole_idx].ref_count > 0))), 0) ) { ; tdx_report_error_and_halt(0x0005, 4); };
    keyhole_state->total_ref_count -= 1;
    keyhole_state->keyhole_array[keyhole_idx].ref_count -= 1;
    if (keyhole_state->keyhole_array[keyhole_idx].ref_count == 0)
    {
        keyhole_state->keyhole_array[keyhole_idx].state = (uint8_t)2;
        lru_cache_add_head_entry(keyhole_idx);
    }
    return;
}
void* map_continuous_pages(uint64_t* pa_array, uint16_t array_size, mapping_type_t mapping_type,
                           uint16_t starting_static_keyhole)
{
    keyhole_state_t* keyhole_state = &get_local_data()->keyhole_state;
    bool_t is_writable = (mapping_type == TDX_RANGE_RW) ? ((bool_t)1) : ((bool_t)0);
                                                                   ;
                                                                                   ;
    for (uint16_t i = 0; i < array_size; i++)
    {
        uint64_t pa = ((pa_array[i]) & ~0xFFFLLU);
        uint16_t keyhole_idx = (uint16_t)(128 - 34) + starting_static_keyhole + i;
        keyhole_entry_t* target_keyhole = &keyhole_state->keyhole_array[keyhole_idx];
        bool_t flush = (target_keyhole->state == 1) &&
                        ((target_keyhole->mapped_pa != pa) || (target_keyhole->is_writable != is_writable));
        if ( __builtin_expect((flush || (target_keyhole->state != 1)), 0) )
        {
            target_keyhole->state = (uint8_t)1;
            target_keyhole->mapped_pa = pa;
            target_keyhole->is_writable = is_writable;
            target_keyhole->is_wb_memtype = ((bool_t)1);
            fill_keyhole_pte(keyhole_idx, pa, is_writable, ((bool_t)1));
        }
        if ( __builtin_expect((flush), 0) )
        {
            uint64_t la = la_from_keyhole_idx(keyhole_idx);
            ia32_invalidate_tlb_entries(la);
        }
    }
    lfence();
    return (void*)(la_from_keyhole_idx((128 - 34) + starting_static_keyhole));
}
bool_t pamt_get_block(pa_t pa, pamt_block_t* pamt_block)
{
    tdmr_entry_t* covering_tdmr = ((void*)0);
    tdx_module_global_t* global_data_ptr = get_global_data();
    uint64_t pa_addr = get_addr_from_pa(pa);
    for (uint32_t i = 0; i < global_data_ptr->num_of_tdmr_entries; i++)
    {
        if (global_data_ptr->tdmr_table[i].base <= pa_addr)
        {
            covering_tdmr = &global_data_ptr->tdmr_table[i];
        }
        else
        {
            break;
        }
    }
    if (covering_tdmr == ((void*)0) || pa_addr >= (covering_tdmr->base + covering_tdmr->size))
    {
                                                                           ;
        return ((bool_t)0);
    }
    pa_t offset_pa;
    offset_pa.raw = pa_addr - covering_tdmr->base;
    uint32_t pamt_block_num = (uint32_t)offset_pa.page_1g_num;
    if ( __builtin_expect((!(pamt_block_num < covering_tdmr->num_of_pamt_blocks)), 0) ) { ; tdx_report_error_and_halt(0x0003, 0); };
    if (pa_addr >= (covering_tdmr->last_initialized & ~(((0x400ULL * 0x400ULL) * 0x400ULL) - 1)))
    {
                                                         ;
        return ((bool_t)0);
    }
    pamt_block->pamt_1gb_p = (pamt_entry_t*) (covering_tdmr->pamt_1g_base
            + (uint64_t)(pamt_block_num * sizeof(pamt_entry_t)));
    pamt_block->pamt_2mb_p = (pamt_entry_t*) (covering_tdmr->pamt_2m_base
            + (uint64_t)(pamt_block_num * sizeof(pamt_entry_t) * ( ( 512 ) )));
    pamt_block->pamt_4kb_p = (pamt_entry_t*) (covering_tdmr->pamt_4k_base
            + (uint64_t)(pamt_block_num * sizeof(pamt_entry_t) * ( ( 512 ) * ( ( 512 ) ) )));
    return ((bool_t)1);
}
api_error_code_e pamt_walk(pa_t pa, pamt_block_t pamt_block, lock_type_t leaf_lock_type,
                           page_size_t* leaf_size, bool_t walk_to_leaf_size, bool_t is_guest,
                           pamt_entry_t** pamt_entry)
{
    pamt_entry_t* pamt_1gb = map_pa_with_global_hkid(pamt_block.pamt_1gb_p, TDX_RANGE_RW);
    pamt_entry_t* pamt_2mb = map_pa_with_global_hkid(&pamt_block.pamt_2mb_p[pa.pamt_2m.idx], TDX_RANGE_RW);
    pamt_entry_t* pamt_4kb = map_pa_with_global_hkid(&pamt_block.pamt_4kb_p[pa.pamt_4k.idx], TDX_RANGE_RW);
    pamt_entry_t* ret_entry_pp = ((void*)0);
    page_size_t target_size = walk_to_leaf_size ? *leaf_size : PT_4KB;
    api_error_code_e retval = 0xFFFFFFFFFFFFFFFFULL;
    *pamt_entry = ((void*)0);
                                                                           ;
    if ((retval = acquire_sharex_lock_hp(&pamt_1gb->entry_lock, TDX_LOCK_SHARED, is_guest)) != 0x0000000000000000ULL)
    {
        goto EXIT;
    }
    if ((pamt_1gb->pt == PT_REG) || (target_size == PT_1GB))
    {
        if ((leaf_lock_type == TDX_LOCK_EXCLUSIVE) &&
            ((retval = promote_sharex_lock_hp(&pamt_1gb->entry_lock)) != 0x0000000000000000ULL))
        {
            goto EXIT_FAILURE_RELEASE_ROOT;
        }
        *leaf_size = PT_1GB;
        ret_entry_pp = pamt_block.pamt_1gb_p;
        goto EXIT;
    }
    if ((retval = acquire_sharex_lock_hp(&pamt_2mb->entry_lock, TDX_LOCK_SHARED, is_guest)) != 0x0000000000000000ULL)
    {
        goto EXIT_FAILURE_RELEASE_ROOT;
    }
    if ((pamt_2mb->pt == PT_REG) || (target_size == PT_2MB))
    {
        if ((leaf_lock_type == TDX_LOCK_EXCLUSIVE) &&
            ((retval = promote_sharex_lock_hp(&pamt_2mb->entry_lock)) != 0x0000000000000000ULL))
        {
            goto EXIT_FAILURE_RELEASE_ALL;
        }
        *leaf_size = PT_2MB;
        ret_entry_pp = &pamt_block.pamt_2mb_p[pa.pamt_2m.idx];
        goto EXIT;
    }
    if ((retval = acquire_sharex_lock_hp(&pamt_4kb->entry_lock, leaf_lock_type, is_guest)) != 0x0000000000000000ULL)
    {
        goto EXIT_FAILURE_RELEASE_ALL;
    }
    *leaf_size = PT_4KB;
    ret_entry_pp = &pamt_block.pamt_4kb_p[pa.pamt_4k.idx];
    goto EXIT;
EXIT_FAILURE_RELEASE_ALL:
    release_sharex_lock_hp_sh(&pamt_2mb->entry_lock);
EXIT_FAILURE_RELEASE_ROOT:
    release_sharex_lock_hp_sh(&pamt_1gb->entry_lock);
EXIT:
    free_la(pamt_1gb);
    free_la(pamt_2mb);
    free_la(pamt_4kb);
    if (ret_entry_pp != ((void*)0))
    {
        *pamt_entry = map_pa_with_global_hkid(ret_entry_pp,
                (leaf_lock_type == TDX_LOCK_EXCLUSIVE) ? TDX_RANGE_RW : TDX_RANGE_RO);
    }
    return retval;
}
void pamt_unwalk(pa_t pa, pamt_block_t pamt_block, pamt_entry_t* pamt_entry_p,
                 lock_type_t leaf_lock_type, page_size_t leaf_size)
{
    pamt_entry_t* pamt_1gb = map_pa_with_global_hkid(pamt_block.pamt_1gb_p, TDX_RANGE_RW);
    pamt_entry_t* pamt_2mb = map_pa_with_global_hkid(&pamt_block.pamt_2mb_p[pa.pamt_2m.idx], TDX_RANGE_RW);
    pamt_entry_t* pamt_4kb = map_pa_with_global_hkid(&pamt_block.pamt_4kb_p[pa.pamt_4k.idx], TDX_RANGE_RW);
    switch (leaf_size)
    {
        case PT_4KB:
            release_sharex_lock_hp(&pamt_4kb->entry_lock, leaf_lock_type);
            release_sharex_lock_hp_sh(&pamt_2mb->entry_lock);
            release_sharex_lock_hp_sh(&pamt_1gb->entry_lock);
            break;
        case PT_2MB:
            release_sharex_lock_hp(&pamt_2mb->entry_lock, leaf_lock_type);
            release_sharex_lock_hp_sh(&pamt_1gb->entry_lock);
            break;
        case PT_1GB:
            release_sharex_lock_hp(&pamt_1gb->entry_lock, leaf_lock_type);
            break;
        default:
            if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0003, 2); };
    }
    free_la(pamt_1gb);
    free_la(pamt_2mb);
    free_la(pamt_4kb);
    free_la(pamt_entry_p);
    return;
}
api_error_type tdh_mng_init(uint64_t tdr_pa, uint64_t td_params_pa);
static void apply_cpuid_xfam_masks(cpuid_config_return_values_t* cpuid_values,
                                   uint64_t xfam,
                                   const cpuid_config_return_values_t* cpuid_masks)
{
    uint64_t xfam_mask;
    xfam_mask = 1ULL;
    for (uint32_t xfam_bit = 0; xfam_bit <= 18; xfam_bit++)
    {
        if ((xfam & xfam_mask) == 0)
        {
            for (uint32_t i = 0; i < 4; i++)
            {
                cpuid_values->values[i] &= ~cpuid_masks[xfam_bit].values[i];
            }
        }
        xfam_mask <<= 1;
    }
}
static api_error_type read_and_set_td_configurations(tdr_t * tdr_ptr,
                                                     tdcs_t * tdcs_ptr,
                                                     td_params_t * td_params_ptr)
{
    ia32e_eptp_t target_eptp = { .raw = 0 };
    td_param_attributes_t tmp_attributes;
    ia32_xcr0_t tmp_xfam;
    tdx_module_global_t* tdx_global_data_ptr = get_global_data();
    api_error_type return_val = 0xFFFFFFFFFFFFFFFFULL;
    tmp_attributes.raw = td_params_ptr->attributes.raw;
    if (!verify_td_attributes(tmp_attributes, ((bool_t)0)))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 64ULL);
        goto EXIT;
    }
    tdcs_ptr->executions_ctl_fields.attributes.raw = tmp_attributes.raw;
    tdcs_ptr->executions_ctl_fields.td_ctls.pending_ve_disable = tmp_attributes.sept_ve_disable;
    tmp_xfam.raw = td_params_ptr->xfam;
    if (!check_xfam(tmp_xfam))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 65ULL);
        goto EXIT;
    }
    tdcs_ptr->executions_ctl_fields.xfam = tmp_xfam.raw;
    set_xbuff_offsets_and_size(tdcs_ptr, tmp_xfam.raw);
    uint32_t max_vcpus = (uint32_t)td_params_ptr->max_vcpus;
    if ((max_vcpus == 0) || (max_vcpus > 576))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 68ULL);
        goto EXIT;
    }
    tdcs_ptr->executions_ctl_fields.max_vcpus = max_vcpus;
    uint16_t num_l2_vms = (uint16_t)td_params_ptr->num_l2_vms;
    if (num_l2_vms > (4 - 1))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 71ULL);
        goto EXIT;
    }
    if (!is_required_tdcs_allocated(tdr_ptr, num_l2_vms))
    {
        return_val = 0xC000060600000000ULL;
        goto EXIT;
    }
    tdcs_ptr->management_fields.num_l2_vms = num_l2_vms;
    if (!tdx_memcmp_to_zero(td_params_ptr->reserved_0, 4))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 2ULL);
        goto EXIT;
    }
    config_flags_t config_flags_local_var;
    config_flags_local_var.raw = td_params_ptr->config_flags.raw;
    if (!verify_td_config_flags(config_flags_local_var))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 66ULL);
        goto EXIT;
    }
    target_eptp.raw = td_params_ptr->eptp_controls.raw;
    if (!verify_and_set_td_eptp_controls(tdr_ptr, tdcs_ptr, config_flags_local_var.gpaw, target_eptp))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 67ULL);
        goto EXIT;
    }
    tdcs_ptr->executions_ctl_fields.config_flags.raw = config_flags_local_var.raw;
    tdcs_ptr->executions_ctl_fields.gpaw = config_flags_local_var.gpaw;
    uint16_t virt_tsc_freq = td_params_ptr->tsc_frequency;
    if ((virt_tsc_freq < 4) || (virt_tsc_freq > 400))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 70ULL);
        goto EXIT;
    }
    tdcs_ptr->executions_ctl_fields.tsc_frequency = virt_tsc_freq;
    if (ia32_rdmsr(0x3B) != tdx_global_data_ptr->plt_common_config.ia32_tsc_adjust)
    {
        return_val = api_error_with_operand_id(0xC000092000000000ULL, 0x3B);
        goto EXIT;
    }
    calculate_tsc_virt_params(ia32_rdtsc(),tdx_global_data_ptr->native_tsc_frequency,
                              virt_tsc_freq, 0,
                              &tdcs_ptr->executions_ctl_fields.tsc_multiplier,
                              &tdcs_ptr->executions_ctl_fields.tsc_offset);
    if (!tdx_memcmp_to_zero(td_params_ptr->reserved_1, 38))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 2ULL);
        goto EXIT;
    }
    tdx_memcpy(tdcs_ptr->measurement_fields.mr_config_id.bytes, sizeof(measurement_t),
               td_params_ptr->mr_config_id.bytes, sizeof(measurement_t));
    tdx_memcpy(tdcs_ptr->measurement_fields.mr_owner.bytes, sizeof(measurement_t),
               td_params_ptr->mr_owner.bytes, sizeof(measurement_t));
    tdx_memcpy(tdcs_ptr->measurement_fields.mr_owner_config.bytes, sizeof(measurement_t),
               td_params_ptr->mr_owner_config.bytes, sizeof(measurement_t));
    if (td_params_ptr->msr_config_ctls.reserved_0 != 0)
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 2ULL);
        goto EXIT;
    }
    if (!tdx_memcmp_to_zero(td_params_ptr->reserved_2, 24))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 2ULL);
        goto EXIT;
    }
    return_val = 0x0000000000000000ULL;
EXIT:
    return return_val;
}
static api_error_type read_and_set_cpuid_configurations(tdcs_t * tdcs_ptr,
                                                        td_params_t * td_params_ptr,
                                                        tdx_module_global_t * global_data_ptr,
                                                        tdx_module_local_t * local_data_ptr)
{
    uint32_t cpuid_index = 0;
    cpuid_config_leaf_subleaf_t cpuid_leaf_subleaf;
    cpuid_config_return_values_t config_values;
    cpuid_config_return_values_t final_tdcs_values;
    td_param_attributes_t attributes;
    ia32_xcr0_t xfam;
    api_error_type return_val = 0xFFFFFFFFFFFFFFFFULL;
    attributes.raw = tdcs_ptr->executions_ctl_fields.attributes.raw;
    xfam.raw = tdcs_ptr->executions_ctl_fields.xfam;
    for (cpuid_index = 0; cpuid_index < 68; cpuid_index++)
    {
        cpuid_leaf_subleaf = cpuid_lookup[cpuid_index].leaf_subleaf;
        final_tdcs_values.low = global_data_ptr->cpuid_values[cpuid_index].values.low;
        final_tdcs_values.high = global_data_ptr->cpuid_values[cpuid_index].values.high;
        uint32_t config_index = cpuid_lookup[cpuid_index].config_index;
        if (cpuid_lookup[cpuid_index].valid_entry && (config_index != 0xFFFFFFFF))
        {
            config_values = td_params_ptr->cpuid_config_vals[config_index];
                                                                                                           ;
            for (uint32_t i = 0; i < 4; i++)
            {
                if ((config_values.values[i] &
                     ~(cpuid_configurable[config_index].config_direct.values[i] |
                       cpuid_configurable[config_index].allow_direct.values[i])) != 0)
                {
                    local_data_ptr->vmm_regs.rcx = cpuid_leaf_subleaf.raw;
                    return_val = api_error_with_operand_id(0xC000010000000000ULL, 69ULL);
                    goto EXIT;
                }
                final_tdcs_values.values[i] &= ~cpuid_lookup[cpuid_index].fixed0_or_dynamic.values[i];
                final_tdcs_values.values[i] |= cpuid_lookup[cpuid_index].fixed1.values[i];
                final_tdcs_values.values[i] &= ~cpuid_configurable[config_index].config_direct.values[i];
                final_tdcs_values.values[i] |= config_values.values[i] & cpuid_configurable[config_index].config_direct.values[i];
                final_tdcs_values.values[i] &= config_values.values[i] | ~cpuid_configurable[config_index].allow_direct.values[i];
            }
        }
        if (cpuid_leaf_subleaf.leaf == 1)
        {
            fms_info_t cpuid_01_eax = { .raw = final_tdcs_values.eax };
            if (cpuid_01_eax.raw == 0)
            {
                cpuid_01_eax = global_data_ptr->platform_fms;
                final_tdcs_values.eax = cpuid_01_eax.raw;
            }
            if (tdcs_ptr->executions_ctl_fields.attributes.migratable)
            {
                if (!check_fms_config(cpuid_01_eax))
                {
                    local_data_ptr->vmm_regs.rcx = cpuid_leaf_subleaf.raw;
                    return_val = api_error_with_operand_id(0xC000010000000000ULL, 69ULL);
                    goto EXIT;
                }
            }
            else if (cpuid_01_eax.raw != global_data_ptr->platform_fms.raw)
            {
                local_data_ptr->vmm_regs.rcx = cpuid_leaf_subleaf.raw;
                return_val = api_error_with_operand_id(0xC000010000000000ULL, 69ULL);
                goto EXIT;
            }
            if (!xfam.avx)
            {
                final_tdcs_values.ecx &= ~(xfam_mask_0x1_0xffffffff[2].ecx);
            }
            cpuid_01_ecx_t cpuid_01_ecx;
            cpuid_01_ecx.raw = final_tdcs_values.ecx;
            tdcs_ptr->executions_ctl_fields.cpuid_flags.monitor_mwait_supported = cpuid_01_ecx.monitor;
            tdcs_ptr->executions_ctl_fields.cpuid_flags.dca_supported = cpuid_01_ecx.dca;
            tdcs_ptr->executions_ctl_fields.cpuid_flags.tsc_deadline_supported = cpuid_01_ecx.tsc_deadline;
        }
        else if (cpuid_leaf_subleaf.leaf == 5)
        {
            if (!tdcs_ptr->executions_ctl_fields.cpuid_flags.monitor_mwait_supported)
            {
                final_tdcs_values.low = 0;
                final_tdcs_values.high = 0;
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 7)
        {
           if (cpuid_leaf_subleaf.subleaf == 0)
           {
               cpuid_07_00_ecx_t cpuid_07_00_ecx;
               cpuid_07_00_edx_t cpuid_07_00_edx;
               apply_cpuid_xfam_masks(&final_tdcs_values, xfam.raw, xfam_mask_0x7_0x0);
               cpuid_07_00_ebx_t cpuid_07_00_ebx = { .raw = final_tdcs_values.ebx };
               if (cpuid_07_00_ebx.hle != cpuid_07_00_ebx.rtm)
               {
                   local_data_ptr->vmm_regs.rcx = cpuid_leaf_subleaf.raw;
                   return_val = api_error_with_operand_id(0xC000010000000000ULL, 69ULL);
                   goto EXIT;
               }
               if (cpuid_07_00_ebx.hle && !global_data_ptr->plt_common_config.ia32_arch_capabilities.tsx_ctrl)
               {
                   return_val = api_error_with_operand_id(0xC000092100000000ULL, 0x10A);
                   goto EXIT;
               }
               tdcs_ptr->executions_ctl_fields.cpuid_flags.tsx_supported = cpuid_07_00_ebx.hle;
               cpuid_07_00_ecx.raw = final_tdcs_values.ecx;
               cpuid_07_00_ecx.pks = attributes.pks;
               cpuid_07_00_ecx.kl_supported = 0;
               final_tdcs_values.ecx = cpuid_07_00_ecx.raw;
               tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported = cpuid_07_00_ecx.waitpkg;
               tdcs_ptr->executions_ctl_fields.cpuid_flags.tme_supported = cpuid_07_00_ecx.tme;
               tdcs_ptr->executions_ctl_fields.cpuid_flags.la57_supported = cpuid_07_00_ecx.la57;
               cpuid_07_00_edx.raw = final_tdcs_values.edx;
               tdcs_ptr->executions_ctl_fields.cpuid_flags.pconfig_supported = cpuid_07_00_edx.pconfig_mktme;
           }
           else if (cpuid_leaf_subleaf.subleaf == 1)
           {
               apply_cpuid_xfam_masks(&final_tdcs_values, xfam.raw, xfam_mask_0x7_0x1);
               cpuid_07_01_eax_t cpuid_07_01_eax = { .raw = final_tdcs_values.eax };
               tdcs_ptr->executions_ctl_fields.cpuid_flags.perfmon_ext_leaf_supported =
                       cpuid_07_01_eax.perfmon_ext_leaf;
               cpuid_07_01_eax.lass = tdcs_ptr->executions_ctl_fields.attributes.lass;
               final_tdcs_values.eax = cpuid_07_01_eax.raw;
           }
           else if (cpuid_leaf_subleaf.subleaf == 2)
           {
               cpuid_07_02_edx_t cpuid_07_02_edx;
               cpuid_07_02_edx.raw = final_tdcs_values.edx;
               tdcs_ptr->executions_ctl_fields.cpuid_flags.ddpd_supported = cpuid_07_02_edx.ddpd;
                                                                ;
                                                                                                                ;
           }
           else
           {
               { ; tdx_arch_fatal_error(); };
           }
        }
        else if (cpuid_leaf_subleaf.leaf == 0xA)
        {
            if (!attributes.perfmon)
            {
                final_tdcs_values.low = 0;
                final_tdcs_values.high = 0;
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 0xD)
        {
            if (cpuid_leaf_subleaf.subleaf == 0)
            {
                apply_cpuid_xfam_masks(&final_tdcs_values, xfam.raw, xfam_mask_0xd_0x0);
                final_tdcs_values.ecx = calculate_xsave_area_max_size(xfam);
            }
            else if (cpuid_leaf_subleaf.subleaf == 1)
            {
                apply_cpuid_xfam_masks(&final_tdcs_values, xfam.raw, xfam_mask_0xd_0x1);
                cpuid_0d_01_eax_t cpuid_0d_01_eax;
                cpuid_0d_01_eax.raw = final_tdcs_values.eax;
                if ((global_data_ptr->xfd_faulting_mask & xfam.raw) == 0)
                {
                    cpuid_0d_01_eax.xfd_support = 0;
                }
                tdcs_ptr->executions_ctl_fields.cpuid_flags.xfd_supported = cpuid_0d_01_eax.xfd_support;
                final_tdcs_values.eax = cpuid_0d_01_eax.raw;
            }
            else if (cpuid_leaf_subleaf.subleaf <= 18)
            {
                if ((xfam.raw & (uint64_t)(1ULL<<(cpuid_leaf_subleaf.subleaf))) == 0)
                {
                    final_tdcs_values.low = 0;
                    final_tdcs_values.high = 0;
                }
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 0x14)
        {
            if (!xfam.pt)
            {
                final_tdcs_values.low = 0;
                final_tdcs_values.high = 0;
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 0x15)
        {
            final_tdcs_values.ebx = tdcs_ptr->executions_ctl_fields.tsc_frequency;
        }
        else if (cpuid_leaf_subleaf.leaf == 0x19)
        {
            final_tdcs_values.low = 0;
            final_tdcs_values.high = 0;
        }
        else if (cpuid_leaf_subleaf.leaf == 0x1C)
        {
            if (xfam.lbr == 0)
            {
                final_tdcs_values.low = 0;
                final_tdcs_values.high = 0;
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 0x1D)
        {
            if (!xfam.amx_xtilecfg || !xfam.amx_xtiledata)
            {
                final_tdcs_values.low = 0;
                final_tdcs_values.high = 0;
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 0x1A)
        {
            if (tdcs_ptr->executions_ctl_fields.attributes.migratable)
            {
                final_tdcs_values.low = 0;
                final_tdcs_values.high = 0;
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 0x23)
        {
            if (!attributes.perfmon || !tdcs_ptr->executions_ctl_fields.cpuid_flags.perfmon_ext_leaf_supported)
            {
                final_tdcs_values.low = 0;
                final_tdcs_values.high = 0;
            }
        }
        else if (cpuid_leaf_subleaf.leaf == 0x80000008)
        {
            cpuid_80000008_eax_t cpuid_80000008_eax = { .raw = final_tdcs_values.eax };
            if (tdcs_ptr->executions_ctl_fields.cpuid_flags.la57_supported)
            {
                cpuid_80000008_eax.la_bits = 57;
            }
            else
            {
                cpuid_80000008_eax.la_bits = 48;
            }
            final_tdcs_values.eax = cpuid_80000008_eax.raw;
        }
        tdcs_ptr->cpuid_config_vals[cpuid_index].low = final_tdcs_values.low;
        tdcs_ptr->cpuid_config_vals[cpuid_index].high = final_tdcs_values.high;
        tdcs_ptr->executions_ctl_fields.cpuid_valid[cpuid_index] = !cpuid_lookup[cpuid_index].faulting;
    }
    return_val = check_cpuid_1f(tdcs_ptr, ((bool_t)1));
    if (return_val != 0x0000000000000000ULL)
    {
        goto EXIT;
    }
    tdcs_ptr->executions_ctl_fields.topology_enum_configured = ((bool_t)1);
    if (!tdx_memcmp_to_zero(td_params_ptr->reserved_3, (768 - (sizeof(cpuid_config_return_values_t) * 18))))
    {
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 2ULL);
        goto EXIT;
    }
    return_val = 0x0000000000000000ULL;
EXIT:
    return return_val;
}
api_error_type tdh_mng_init(uint64_t target_tdr_pa, uint64_t target_td_params_pa)
{
    tdx_module_global_t * global_data_ptr = get_global_data();
    tdx_module_local_t * local_data_ptr = get_local_data();
    pa_t tdr_pa;
    tdr_t * tdr_ptr;
    pamt_block_t tdr_pamt_block;
    pamt_entry_t * tdr_pamt_entry_ptr;
    bool_t tdr_locked_flag = ((bool_t)0);
    tdcs_t * tdcs_ptr = ((void*)0);
    pa_t td_params_pa;
    td_params_t * td_params_ptr = ((void*)0);
    uint128_t xmms[16];
    crypto_api_error sha_error_code;
    api_error_type return_val = 0xFFFFFFFFFFFFFFFFULL;
    tdr_pa.raw = target_tdr_pa;
    td_params_pa.raw = target_td_params_pa;
    local_data_ptr->vmm_regs.rcx = 0ULL;
    if ((ia32_rdmsr(0x1A0) & (uint64_t)(1ULL<<(22)) ) != 0)
    {
        return_val = 0xC000090100000000ULL;
        goto EXIT;
    }
    return_val = check_lock_and_map_explicit_tdr(tdr_pa,
                                                 1ULL,
                                                 TDX_RANGE_RW,
                                                 TDX_LOCK_EXCLUSIVE,
                                                 PT_TDR,
                                                 &tdr_pamt_block,
                                                 &tdr_pamt_entry_ptr,
                                                 &tdr_locked_flag,
                                                 &tdr_ptr);
    if (return_val != 0x0000000000000000ULL)
    {
                                                                                ;
        goto EXIT;
    }
    return_val = check_state_map_tdcs_and_lock(tdr_ptr, TDX_RANGE_RW, TDX_LOCK_NO_LOCK,
                                               ((bool_t)0), TDH_MNG_INIT_LEAF, &tdcs_ptr);
    if (return_val != 0x0000000000000000ULL)
    {
                                                                                  ;
        goto EXIT;
    }
    if ((return_val = shared_hpa_check_with_pwr_2_alignment(td_params_pa, 1024)) != 0x0000000000000000ULL)
    {
                                                                                                            ;
        return_val = api_error_with_operand_id(return_val, 2ULL);
        goto EXIT;
    }
    td_params_ptr = (td_params_t *)map_pa((void*)td_params_pa.raw, TDX_RANGE_RO);
    tdcs_ptr->management_fields.num_vcpus = 0U;
    tdcs_ptr->management_fields.num_assoc_vcpus = 0U;
    tdcs_ptr->epoch_tracking.epoch_and_refcount.td_epoch = 1ULL;
    tdcs_ptr->epoch_tracking.epoch_and_refcount.refcount[0] = 0;
    tdcs_ptr->epoch_tracking.epoch_and_refcount.refcount[1] = 0;
    uint64_t native_tsc_frequency = get_global_data()->native_tsc_frequency;
    if ( __builtin_expect((!((native_tsc_frequency <= 0xFFFFFFFFULL))), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_MNG_INIT_LEAF) & 0xFF)), 0); };
    tdcs_ptr->executions_ctl_fields.hp_lock_timeout = translate_usec_to_tsc(1000000UL, (uint32_t)native_tsc_frequency);
    return_val = read_and_set_td_configurations(tdr_ptr, tdcs_ptr, td_params_ptr);
    if (return_val != 0x0000000000000000ULL)
    {
                                                            ;
        goto EXIT;
    }
    return_val = read_and_set_cpuid_configurations(tdcs_ptr, td_params_ptr, global_data_ptr,
                                                   local_data_ptr);
    if (return_val != 0x0000000000000000ULL)
    {
                                                               ;
        goto EXIT;
    }
    if (!init_virt_ia32_arch_capabilities(tdcs_ptr, td_params_ptr->msr_config_ctls.ia32_arch_cap,
                                          td_params_ptr->ia32_arch_capabilities_config))
    {
                                                                     ;
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 72ULL);
        goto EXIT;
    }
    if (!td_immutable_state_cross_check(tdcs_ptr))
    {
                                                            ;
        return_val = api_error_with_operand_id(0xC000010000000000ULL, 2ULL);
        goto EXIT;
    }
    set_msr_bitmaps(tdcs_ptr);
    init_virt_ia32_vmx_msrs(tdcs_ptr);
    store_xmms_in_buffer(xmms);
    if ((sha_error_code = sha384_init(&(tdcs_ptr->measurement_fields.td_sha_ctx))) != 0)
    {
                                                                              ;
        { ; tdx_arch_fatal_error(); };
    }
    load_xmms_from_buffer(xmms);
    basic_memset_to_zero(xmms, sizeof(xmms));
    basic_memset_to_zero(tdcs_ptr->measurement_fields.rtmr, (6<<3)*4);
    tdcs_ptr->management_fields.op_state = OP_STATE_INITIALIZED;
EXIT:
    if (tdr_locked_flag)
    {
        pamt_unwalk(tdr_pa, tdr_pamt_block, tdr_pamt_entry_ptr, TDX_LOCK_EXCLUSIVE, PT_4KB);
        free_la(tdr_ptr);
    }
    if (tdcs_ptr != ((void*)0))
    {
        free_la(tdcs_ptr);
    }
    if (td_params_ptr != ((void*)0))
    {
        free_la(td_params_ptr);
    }
    return return_val;
}
void insert_cover_point() {
    __VERIFIER_assert(((bool_t)0));
}
void tdh_mng_init__call() {
    tdx_module_local_t* local_data = get_local_data();
    local_data->vmm_regs.rax = tdh_mng_init(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);
}
static inline void tdh_mng_init__common_precond() {
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = get_local_data()->vmm_regs.rax;
    assume_exit_if_not(leaf_opcode.leaf == TDH_MNG_INIT_LEAF);
}
static inline bool_t input_tdr_pa_is_valid() {
    pa_t pa = { .raw = get_local_data()->vmm_regs.rcx };
    return (
        ((get_local_data()->vmm_regs.rcx & ((4 * 0x400ULL) - 1)) == 0) &&
        (((pa.full_pa & get_global_data()->hkid_mask) >> get_global_data()->hkid_start_bit) == 0) &&
        (get_local_data()->vmm_regs.rcx < (uint64_t)(1ULL<<(52ULL)))
    );
}
static inline bool_t state_td_state_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.fatal == ((bool_t)0));
}
static inline bool_t state_lifecycle_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.lifecycle_state == TD_KEYS_CONFIGURED);
}
static inline bool_t state_num_tdcx_is_valid() {
    return (get_local_data()->vp_ctx.tdr->management_fields.num_tdcx != 0);
}
static inline bool_t state_op_state_is_valid() {
    return (get_local_data()->vp_ctx.tdcs->management_fields.op_state == OP_STATE_UNINITIALIZED);
}
static inline bool_t state_pamt_metadata_is_valid() {
    pa_t tdr_pa = { .raw = get_local_data()->vmm_regs.rcx };
    pamt_block_t tdr_pamt_block;
    pamt_entry_t* tdr_pamt_entry_ptr = ((void*)0);
    bool_t tdr_locked_flag = ((bool_t)0);
    tdr_t* tdr_ptr = ((void*)0);
    api_error_type fwd_eval_check_tdr = check_lock_and_map_explicit_tdr(
        tdr_pa, 1ULL, 1, TDX_LOCK_EXCLUSIVE,
        PT_TDR, &tdr_pamt_block, &tdr_pamt_entry_ptr, &tdr_locked_flag, &tdr_ptr
    );
    if (!(
        fwd_eval_check_tdr == 0x0000000000000000ULL &&
        tdr_pamt_entry_ptr != ((void*)0)
    )) {
        return ((bool_t)0);
    }
    return (tdr_pamt_entry_ptr->pt == PT_TDR);
}
void tdh_mng_init__invalid_state_op_state__precond() {
    tdh_mng_init__common_precond();
    assume_exit_if_not(input_tdr_pa_is_valid() && state_td_state_is_valid() && state_lifecycle_is_valid() && state_num_tdcx_is_valid() && !state_op_state_is_valid() && state_pamt_metadata_is_valid());
}
int main() {
    // before_target methods
    init_tdh_mng_xxx();
    tdh_mng_init__invalid_state_op_state__precond();
    insert_cover_point();

    // Target method
    tdh_mng_init__call();

    // after_target methods
    close_tdh_mng_xxx();

    return 0;
}
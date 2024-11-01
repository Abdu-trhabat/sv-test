// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2024 The SV-Benchmarks Community
//
// SPDX-License-Identifier: Apache-2.0

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
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
typedef uint64_t api_error_type;
static inline api_error_type api_error_with_operand_id(api_error_type error, uint64_t operand_id)
{
    return error + operand_id;
}
static inline api_error_type api_error_with_multiple_info(api_error_type error, uint8_t info_0,
                                                            uint8_t info_1, uint8_t info_2, uint8_t info_3)
{
    return error + (uint64_t)info_0 + ((uint64_t)info_1 << 8) + ((uint64_t)info_2 << 16) + ((uint64_t)info_3 << 24);
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
typedef union
{
    struct
    {
        uint32_t rsvd :14;
        uint32_t max_num_of_lps_sharing_cache :12;
        uint32_t rsvd1 :4;
    };
    uint32_t raw;
} cpu_cache_params_t;
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
typedef union cpuid_0a_eax_u
{
    struct
    {
        uint32_t version : 8;
        uint32_t num_gp_counters : 8;
        uint32_t gp_counters_width : 8;
        uint32_t num_ebx_flags : 8;
    };
    uint32_t raw;
} cpuid_0a_eax_t;
typedef union cpuid_0a_ecx_u
{
    struct
    {
        uint32_t fc_ditmap : 4;
        uint32_t reserved : 28;
    };
    uint32_t raw;
} cpuid_0a_ecx_t;
typedef union cpuid_0a_edx_u
{
    struct
    {
        uint32_t num_fcs : 5;
        uint32_t fc_width : 8;
        uint32_t reserved_0 : 2;
        uint32_t any_thread_deprecated : 1;
        uint32_t reserved_1 : 8;
        uint32_t bit_vector_length : 8;
    };
    uint32_t raw;
} cpuid_0a_edx_t;
typedef union cpuid_0d_ecx_u
{
    struct
    {
        uint32_t ia32_xss : 1;
        uint32_t align_64 : 1;
        uint32_t xfd_faulting : 1;
        uint32_t reserved : 29;
    };
    uint32_t raw;
} cpuid_0d_ecx_t;
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
extern void abort(void);
void assume_abort_if_not(int cond) {
    if (!cond) {
        abort();
    }
}
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() {
    __assert_fail("0", "even.c", 3, "reach_error");
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
extern unsigned int __VERIFIER_nondet_u32();
extern unsigned long __VERIFIER_nondet_ulong();
static inline uint8_t TDXFV_NONDET_uint8t() { return __VERIFIER_nondet_uchar(); }
static inline uint32_t TDXFV_NONDET_uint32t() { return __VERIFIER_nondet_u32(); }
static inline uint64_t TDXFV_NONDET_uint64t() { return __VERIFIER_nondet_ulong(); }
static inline uint256_t TDXFV_NONDET_uint256t() {
    uint256_t tmp;
    tmp.qwords[0] = TDXFV_NONDET_uint64t();
    tmp.qwords[1] = TDXFV_NONDET_uint64t();
    tmp.qwords[2] = TDXFV_NONDET_uint64t();
    tmp.qwords[3] = TDXFV_NONDET_uint64t();
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
api_error_type tdh_sys_init(void);

void tdx_report_error_and_halt(uint32_t source_id, uint32_t code);
void tdx_arch_fatal_error(void);

extern bool_t fv_exception_tracker_gp;
uint64_t tdxfv_abst_msr_read(uint64_t addr);
void tdxfv_abst_msr_write(uint64_t addr, uint64_t value);
static inline void ia32_cpuid(uint32_t leaf, uint32_t subleaf, uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx)
{
    *eax = TDXFV_NONDET_uint32t();
    *ebx = TDXFV_NONDET_uint32t();
    *ecx = TDXFV_NONDET_uint32t();
    *edx = TDXFV_NONDET_uint32t();
}
static inline void ia32_ud2( void )
{
    TDXFV_ABST_incomplete();
    abort();
}
static inline uint64_t ia32_rdmsr(uint64_t addr)
{
    return tdxfv_abst_msr_read(addr);
}
static inline void ia32_wrmsr(uint64_t addr, uint64_t value)
{
    tdxfv_abst_msr_write(addr, value);
}
static inline bool_t ia32_rdrand(uint64_t* rand)
{
    *rand = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_bool();
}
static inline uint16_t _lock_cmpxchg_16b(uint16_t cmp_val, uint16_t set_val, uint16_t *sem)
{
    if (cmp_val == *sem) {
        *sem = set_val;
        return cmp_val;
    } else {
        return *sem;
    }
}
static inline uint16_t _xchg_16b(uint16_t *mem, uint16_t quantum)
{
    *mem = quantum;
    return quantum;
}
static inline bool_t bit_scan_forward64(uint64_t mask, uint64_t* lsb_position)
{
    *lsb_position = TDXFV_NONDET_uint64t();
    return (mask != 0);
}
static inline bool_t bit_scan_reverse64(uint64_t value, uint64_t* msb_position)
{
    *msb_position = TDXFV_NONDET_uint64t();
    return (value != 0);
}
typedef enum
{
    LOCK_RET_FAIL, LOCK_RET_SUCCESS, LOCK_RET_FAIL_HOST_PRIORITY
} lock_return_t;
typedef uint8_t mutex_lock_t;
typedef enum
{
    SHAREX_FREE = 0, SHAREX_SINGLE_READER = (uint64_t)(1ULL<<(1)), SHAREX_EXCLUSIVE_LOCK = (uint64_t)(1ULL<<(0))
} sharex_state_t;
typedef union __attribute__ ((aligned(2)))
{
    struct
    {
        uint16_t exclusive :1;
        uint16_t counter :15;
    };
    uint16_t raw;
} sharex_lock_t;
static inline lock_return_t acquire_sharex_lock_ex(sharex_lock_t * lock_ptr)
{
    sharex_lock_t retval;
                                      ;
    retval.raw = _lock_cmpxchg_16b(SHAREX_FREE, SHAREX_EXCLUSIVE_LOCK, &lock_ptr->raw);
    return (retval.raw == SHAREX_FREE) ? LOCK_RET_SUCCESS : LOCK_RET_FAIL;
}
static inline void release_sharex_lock_ex(sharex_lock_t * lock_ptr)
{
    sharex_lock_t retval;
                                      ;
    retval.raw = _xchg_16b(&lock_ptr->raw, SHAREX_FREE);
    if ( __builtin_expect((!(retval.exclusive == 1)), 0) ) { ; tdx_report_error_and_halt(0x0001, 4); };
}
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
typedef union ia32_tsx_ctrl_u
{
    struct
    {
        uint64_t rtm_disable : 1;
        uint64_t tsx_cpuid_clear : 1;
        uint64_t rsvd : 62;
    };
    uint64_t raw;
} ia32_tsx_ctrl_t;
typedef union ia32_misc_enable_u
{
    struct
    {
        uint64_t fast_strings : 1;
        uint64_t rsvd1 : 2;
        uint64_t thermal_monitor_enable : 1;
        uint64_t rsvd2 : 3;
        uint64_t perfmon_available : 1;
        uint64_t rsvd3 : 3;
        uint64_t bts_unavailable : 1;
        uint64_t pebs_unavailable : 1;
        uint64_t rsvd4 : 3;
        uint64_t enable_gv3 : 1;
        uint64_t rsvd5 : 1;
        uint64_t enable_monitor_fsm : 1;
        uint64_t rsvd6 : 3;
        uint64_t limit_cpuid_maxval : 1;
        uint64_t tpr_message_disable : 1;
        uint64_t rsvd7 : 3;
        uint64_t rsvd8 : 1;
        uint64_t hlep_disable : 1;
        uint64_t rsvd9 : 9;
        uint64_t turbo_mode_disable : 1;
        uint64_t rsvd10 : 25;
    };
    uint64_t raw;
} ia32_misc_enable_t;
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
    PINBASED_CTLS_INIT = 0x00000029,
    PINBASED_CTLS_VARIABLE = 0x00000080,
    PINBASED_CTLS_UNKNOWN = 0xFFFFFF16,
    PROCBASED_CTLS_INIT = 0x91220088,
    PROCBASED_CTLS_VARIABLE = 0x20400C00,
    PROCBASED_CTLS_UNKNOWN = 0x04046173,
    PROCBASED_CTLS2_INIT = 0x133CB3FA,
    PROCBASED_CTLS2_VARIABLE = 0xCC000400,
    PROCBASED_CTLS2_UNKNOWN = 0x00000000,
    PROCBASED_CTLS3_INIT = 0x0000000000000000,
    PROCBASED_CTLS3_VARIABLE = 0x00000000000000A0,
    PROCBASED_CTLS3_UNKNOWN = 0xFFFFFFFFFFFFFF40,
    EXIT_CTLS_INIT = 0x1F3C8204,
    EXIT_CTLS_VARIABLE = 0x40001000,
    EXIT_CTLS_UNKNOWN = 0x00036DFB,
    ENTRY_CTLS_INIT = 0x003EC004,
    ENTRY_CTLS_VARIABLE = 0x00402200,
    ENTRY_CTLS_UNKNOWN = 0xFF8011FB,
    GUEST_CR0_INIT = 0x00000021,
    CR0_READ_SHADOW = 0x0000000000000021,
    GUEST_CR4_INIT = 0x00002040,
    CR4_READ_SHADOW = 0x0000000000000040,
} td_vmcs_ctl_values_e;
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
static const uint64_t IA32_VMX_EPT_VPID_CAP_MASK = 0x10106334041;
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

typedef uint256_t key256_t;
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
extern tdx_module_local_t local_data_fv;
extern tdx_module_global_t global_data_fv;
extern sysinfo_table_t sysinfo_table_fv;
static inline tdx_module_local_t* get_local_data(void)
{
    return &local_data_fv;
}
static inline sysinfo_table_t* get_sysinfo_table(void)
{
    return &sysinfo_table_fv;
}
static inline tdx_module_global_t* get_global_data(void)
{
    return &global_data_fv;
}
static inline uint64_t get_num_addressable_lps(sysinfo_table_t* sysinfo_table)
{
    return ((sysinfo_table->stack_rgn_size / (4 * 0x400ULL)) /
            (sysinfo_table->num_stack_pages + 1 + 1));
}
static inline tdx_module_local_t* calculate_local_data(void)
{
    return &local_data_fv;
}
static inline sysinfo_table_t* calculate_sysinfo_table(void)
{
    return &sysinfo_table_fv;
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
static inline tdx_module_local_t* init_data_fast_ref_ptrs(void)
{
    tdx_module_local_t* local_data = calculate_local_data();
    if ( __builtin_expect((!local_data->local_data_fast_ref_ptr), 0) )
    {
        local_data->local_data_fast_ref_ptr = local_data;
        local_data->sysinfo_fast_ref_ptr = calculate_sysinfo_table();
        local_data->global_data_fast_ref_ptr = calculate_global_data((sysinfo_table_t*)
                                                    local_data->sysinfo_fast_ref_ptr);
    }
    return local_data;
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
static inline uint64_t ia32_seamops_capabilities(void)
{
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_uint64t();
}
static inline uint64_t ia32_seamops_seamdb_getref(uint64_t* last_entry, uint256_t* last_entry_nonce,
                                                    uint64_t* seamdb_size)
{
    TDXFV_ABST_incomplete();
    *last_entry = TDXFV_NONDET_uint64t();
    *last_entry_nonce = TDXFV_NONDET_uint256t();
    *seamdb_size = TDXFV_NONDET_uint64t();
    return TDXFV_NONDET_uint64t();
}

void save_vmcs_non_lp_host_fields(vmcs_host_values_t* host_fields_ptr);
typedef long unsigned int size_t;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

                                           ;
                                         ;
                                          ;
                                                  ;
static inline bool_t is_addr_aligned_any(uint64_t addr, uint64_t size)
{
                              ;
    return ((addr % size) == 0);
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
static inline uint64_t mask_to_size(uint64_t mask)
{
    if (mask == 0)
    {
        { ; tdx_arch_fatal_error(); };
    }
    uint64_t lsb_position;
    (void)bit_scan_forward64(mask, &lsb_position);
    return (uint64_t)(1ULL<<(lsb_position));
}
void basic_memset(uint64_t dst, uint64_t dst_bytes, uint8_t val, uint64_t nbytes);
void basic_memset_to_zero(void * dst, uint64_t nbytes);
uint32_t check_mem_enc_alg(ia32_tme_capability_t tme_capability, ia32_tme_activate_t tme_activate);
static inline bool_t check_native_ia32_arch_capabilities(ia32_arch_capabilities_t arch_cap)
{
    return (arch_cap.rdcl_no == 1) &&
           (arch_cap.irbs_all == 1) &&
           (arch_cap.rsba == 0) &&
           (arch_cap.skip_l1dfl_vmentry == 1) &&
           (arch_cap.mds_no == 1) &&
           (arch_cap.if_pschange_mc_no == 1) &&
           (arch_cap.taa_no == 1) &&
           (arch_cap.misc_package_ctls == 1) &&
           (arch_cap.energy_filtering_ctl == 1) &&
           (arch_cap.doitm == 1) &&
           (arch_cap.sbdr_ssdp_no == 1) &&
           (arch_cap.fbsdp_no == 1) &&
           (arch_cap.psdp_no == 1) &&
           (arch_cap.fb_clear_ctrl == 0) &&
           (arch_cap.xapic_disable_status == 1)
           ;
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
extern const cpuid_lookup_t cpuid_lookup[68];
extern tdx_module_local_t local_data_fv;
extern tdx_module_global_t global_data_fv;
extern sysinfo_table_t sysinfo_table_fv;
extern tdr_t tdr_fv;
extern tdcs_t tdcs_fv;
extern tdvps_t tdvps_fv;
extern tdmr_info_entry_t tdmr_info_fv[64];
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
void init_tdx_general();
void init_vmm_dispatcher();
void tdxfv_abst_msr_init();
uint64_t tdxfv_abst_msr_read(uint64_t addr);
void tdxfv_abst_msr_write(uint64_t addr, uint64_t value);
void tdxfv_abst_exception_init();
void tdxfv_abst_exception_insert_gp();
void tdxfv_abst_exception_insert_ve();
void tdxfv_abst_vcpu_init();

void tdh_sys_init__common_precond() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    assume_abort_if_not(leaf_opcode.leaf == TDH_SYS_INIT_LEAF);
}
void tdh_sys_init__invalid_input_rcx() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    assume_abort_if_not(local_data->vmm_regs.rcx != 0);
    assume_abort_if_not(global_data->global_state.sys_state == SYSINIT_PENDING);
    local_data->vmm_regs.rax = tdh_sys_init();
    __VERIFIER_assert(local_data->vmm_regs.rax == api_error_with_operand_id(0xC000010000000000ULL, 1ULL));
    __VERIFIER_assert(local_data->vmm_regs.rcx == 0);
    __VERIFIER_assert(local_data->vmm_regs.rdx == 0);
    __VERIFIER_assert(local_data->vmm_regs.r8 == 0);
    __VERIFIER_assert(local_data->vmm_regs.r9 == 0);
    __VERIFIER_assert(local_data->vmm_regs.r10 == 0);
}
void tdh_sys_init__common_postcond() {
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
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax == shadow_guest_gpr_state_precall.rax);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbx == shadow_guest_gpr_state_precall.rbx);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rcx == shadow_guest_gpr_state_precall.rcx);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdx == shadow_guest_gpr_state_precall.rdx);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsp == shadow_guest_gpr_state_precall.rsp);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rbp == shadow_guest_gpr_state_precall.rbp);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rsi == shadow_guest_gpr_state_precall.rsi);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rdi == shadow_guest_gpr_state_precall.rdi);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r8 == shadow_guest_gpr_state_precall.r8);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r9 == shadow_guest_gpr_state_precall.r9);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r10 == shadow_guest_gpr_state_precall.r10);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r11 == shadow_guest_gpr_state_precall.r11);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r12 == shadow_guest_gpr_state_precall.r12);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r13 == shadow_guest_gpr_state_precall.r13);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r14 == shadow_guest_gpr_state_precall.r14);
    __VERIFIER_assert(tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.r15 == shadow_guest_gpr_state_precall.r15);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rbx == shadow_vmm_regs_precall.rbx);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rsp == shadow_vmm_regs_precall.rsp);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rbp == shadow_vmm_regs_precall.rbp);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rsi == shadow_vmm_regs_precall.rsi);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.rdi == shadow_vmm_regs_precall.rdi);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r11 == shadow_vmm_regs_precall.r11);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r12 == shadow_vmm_regs_precall.r12);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r13 == shadow_vmm_regs_precall.r13);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r14 == shadow_vmm_regs_precall.r14);
    __VERIFIER_assert(tdx_local_data_ptr->vmm_regs.r15 == shadow_vmm_regs_precall.r15);
}
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
void tdxfv_abst_msr_write(uint64_t addr, uint64_t value) {
    if (addr == 0x0010) {
        return;
    }
    if (addr == 0x0048) {
        fv_msr_IA32_SPEC_CTRL = value;
        return;
    }
    if (addr == 0x0049) {
        fv_msr_IA32_PRED_CMD = value;
        return;
    }
    if (addr == 0x0087) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x008C && addr < 0x008C + 4) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0098) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0099) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x009A) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x009B) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x009E) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x00BC) {
        return;
    }
    if (addr == 0x00BD) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x00C1 && addr < 0x00C1 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x00E1) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x010A) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x010B) {
        fv_msr_IA32_FLUSH_CMD = value;
        return;
    }
    if (addr == 0x0122) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0174) {
        fv_msr_IA32_SYSENTER_CS = value;
        return;
    }
    if (addr == 0x0175) {
        fv_msr_IA32_SYSENTER_ESP = value;
        return;
    }
    if (addr == 0x0176) {
        fv_msr_IA32_SYSENTER_EIP = value;
        return;
    }
    if (addr >= 0x0186 && addr < 0x0186 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0195) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x01A0) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x01A6 && addr < 0x01A6 + 2) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01C4) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01C5) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01D9) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01F8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01F9) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x01FA) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0276) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0277) {
        fv_msr_IA32_PAT = value;
        return;
    }
    if (addr >= 0x0309 && addr < 0x0309 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0329) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0345) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x038D) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x038E) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x038F) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0390) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0391) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0392) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F1) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F2) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F6) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x03F7) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0480) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0481) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0482) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0483) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0484) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x0485) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0486) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0487) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0488) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0489) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048A) {
        tdxfv_abst_exception_insert_ve();
        return;
    }
    if (addr == 0x048B) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048C) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048D) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048E) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x048F) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0490) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0491) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0492) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x04C1 && addr < 0x04C1 + 8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0500) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0560) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0561) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0570) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0571) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0572) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0580) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0581) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0582) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0583) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0584) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0585) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0586) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0587) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0600) {
        fv_msr_IA32_DS_AREA = value;
        return;
    }
    if (addr == 0x06A0) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A2) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A4) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A5) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A6) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A7) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06A8) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06E0) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x06E1) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x0800 && addr < 0x0800 + 2) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0802) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x0804 && addr < 0x0804 + 4) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0808) {
        fv_msr_IA32_X2APIC_TPR = value;
        return;
    }
    if (addr == 0x0809) {
        fv_msr_0x0809 = value;
        return;
    }
    if (addr == 0x080A) {
        fv_msr_IA32_X2APIC_PPR = value;
        return;
    }
    if (addr == 0x080B) {
        fv_msr_IA32_X2APIC_EOI = value;
        return;
    }
    if (addr == 0x080C) {
        fv_msr_0x080C = value;
        return;
    }
    if (addr == 0x080E) {
        fv_msr_0x080E = value;
        return;
    }
    if (addr >= 0x0810 && addr < 0x0810 + 8) {
        fv_msr_IA32_X2APIC_ISRx[addr - 0x0810] = value;
        return;
    }
    if (addr >= 0x0818 && addr < 0x0818 + 8) {
        fv_msr_IA32_X2APIC_TMRx[addr - 0x0818] = value;
        return;
    }
    if (addr >= 0x0820 && addr < 0x0820 + 8) {
        fv_msr_IA32_X2APIC_IRRx[addr - 0x0820] = value;
        return;
    }
    if (addr >= 0x0829 && addr < 0x0829 + 6) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0831) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x083F) {
        fv_msr_IA32_X2APIC_SELF_IPI = value;
        return;
    }
    if (addr >= 0x0840 && addr < 0x0840 + 64) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr >= 0x0880 && addr < 0x0880 + 64) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr >= 0x08C0 && addr < 0x08C0 + 64) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0981) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0982) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0983) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0984) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0985) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0986) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0987) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0988) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0989) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x098A) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x0C80) {
        return;
    }
    if (addr == 0x0D90) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0D93) {
        tdxfv_abst_exception_insert_gp();
        return;
    }
    if (addr == 0x0DA0) {
        return;
    }
    if (addr >= 0x1200 && addr < 0x1200 + 256) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x14CE) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x14CF) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x1500 && addr < 0x1500 + 256) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr >= 0x1600 && addr < 0x1600 + 256) {
        TDXFV_ABST_incomplete();
        return;
    }
    if (addr == 0x1B01) {
        fv_msr_IA32_UARCH_MISC_CTL = value;
        return;
    }
    if (addr == 0xC0000080) {
        return;
    }
    if (addr == 0xC0000081) {
        fv_msr_IA32_STAR = value;
        return;
    }
    if (addr == 0xC0000082) {
        fv_msr_IA32_LSTAR = value;
        return;
    }
    if (addr == 0xC0000084) {
        fv_msr_IA32_FMASK = value;
        return;
    }
    if (addr == 0xC0000100) {
        fv_msr_IA32_FSBASE = value;
        return;
    }
    if (addr == 0xC0000101) {
        fv_msr_IA32_GSBASE = value;
        return;
    }
    if (addr == 0xC0000102) {
        fv_msr_IA32_KERNEL_GS_BASE = value;
        return;
    }
    if (addr == 0xC0000103) {
        fv_msr_IA32_TSC_AUX = value;
        return;
    }
    __VERIFIER_assert(((bool_t)0));
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
    __VERIFIER_nondet_array_1D_unsigned_long_long(&((*dest).gprs), 16);
}
extern unsigned int __VERIFIER_nondet_uint(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
void __VERIFIER_nondet_array_1D_unsigned_char(unsigned char (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i] = __VERIFIER_nondet_uchar();
    }
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
void __VERIFIER_nondet_array_1D_unsigned_int(unsigned int (*dest)[], int dim0) {
    for (int i = 0; i < dim0; i++) {
        (*dest)[i] = __VERIFIER_nondet_uint();
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
void __VERIFIER_nondet_uint128_t(uint128_t *dest) {
    __VERIFIER_nondet_array_1D_unsigned_char(&((*dest).bytes), 16);
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
extern signed int __VERIFIER_nondet_int(void);
void __VERIFIER_nondet_sharex_hp_lock_t(sharex_hp_lock_t *dest) {
    (*dest).raw = __VERIFIER_nondet_ushort();
}
void __VERIFIER_nondet_union_bepoch_u(union bepoch_u *dest) {
    (*dest).raw = __VERIFIER_nondet_ulonglong();
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
static inline void TDXFV_NONDET_struct_tdr_t(tdr_t* dest) {
    __VERIFIER_nondet_struct_tdr_s(dest);
}
static inline void TDXFV_NONDET_struct_tdcs_t(tdcs_t* dest) {
    __VERIFIER_nondet_struct_tdcs_s(dest);
}
static inline void TDXFV_NONDET_struct_tdvps_t(tdvps_t* dest) {
    __VERIFIER_nondet_struct_tdvps_s(dest);
}
static inline void TDXFV_NONDET_struct_tdmr_info_entry_t(tdmr_info_entry_t* dest) {
    __VERIFIER_nondet_struct_tdmr_info_entry_s(dest);
}
static inline void TDXFV_NONDET_struct_gprs_state_t(gprs_state_t* dest) {
    __VERIFIER_nondet_union_gprs_state_u(dest);
}
tdx_module_local_t local_data_fv;
tdx_module_global_t global_data_fv;
sysinfo_table_t sysinfo_table_fv;
tdr_t tdr_fv;
tdcs_t tdcs_fv;
tdvps_t tdvps_fv;
tdmr_info_entry_t tdmr_info_fv[64];
gprs_state_t shadow_td_regs_precall;
gprs_state_t shadow_vmm_regs_precall;
gprs_state_t shadow_guest_gpr_state_precall;
bool_t fv_is_called_by_host;
bool_t fv_is_called_by_guest;
void init_tdx_general() {
    TDXFV_NONDET_struct_tdx_module_local_t(&local_data_fv);
    TDXFV_NONDET_struct_tdx_module_global_t(&global_data_fv);
    TDXFV_NONDET_struct_sysinfo_table_t(&sysinfo_table_fv);
    TDXFV_NONDET_struct_tdr_t(&tdr_fv);
    TDXFV_NONDET_struct_tdcs_t(&tdcs_fv);
    TDXFV_NONDET_struct_tdvps_t(&tdvps_fv);
    for (int i = 0; i < 64; i++) {
        TDXFV_NONDET_struct_tdmr_info_entry_t(&(tdmr_info_fv[i]));
    }
    TDXFV_NONDET_struct_gprs_state_t(&shadow_td_regs_precall);
    TDXFV_NONDET_struct_gprs_state_t(&shadow_vmm_regs_precall);
    TDXFV_NONDET_struct_gprs_state_t(&shadow_guest_gpr_state_precall);
    init_data_fast_ref_ptrs();
    tdx_module_local_t* local_data_ptr = get_local_data();
    assume_abort_if_not(local_data_ptr->local_data_fast_ref_ptr == &local_data_fv);
    assume_abort_if_not(local_data_ptr->sysinfo_fast_ref_ptr == &sysinfo_table_fv);
    assume_abort_if_not(local_data_ptr->global_data_fast_ref_ptr == &global_data_fv);
    assume_abort_if_not(local_data_ptr->vp_ctx.tdr == &tdr_fv);
    assume_abort_if_not(local_data_ptr->vp_ctx.tdvps == &tdvps_fv);
    assume_abort_if_not(local_data_ptr->vp_ctx.tdcs == &tdcs_fv);
    tdx_module_global_t* global_data_ptr = get_global_data();
    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();
    assume_abort_if_not(global_data_ptr->num_of_lps == sysinfo_table_ptr->mcheck_fields.tot_num_lps);
    assume_abort_if_not(global_data_ptr->num_of_pkgs == sysinfo_table_ptr->mcheck_fields.tot_num_sockets);
    assume_abort_if_not(global_data_ptr->hkid_mask == (((uint64_t)(1ULL<<(52ULL - 1)) - (uint64_t)(1ULL<<(global_data_ptr->hkid_start_bit)) + (uint64_t)(1ULL<<(52ULL - 1)))));
    assume_abort_if_not(local_data_ptr->vp_ctx.tdvps->management.last_seamdb_index == global_data_ptr->seamdb_index);
    assume_abort_if_not(local_data_ptr->vp_ctx.tdvps->management.assoc_lpid == local_data_ptr->lp_info.lp_id);
    fv_is_called_by_host = TDXFV_NONDET_bool();
    fv_is_called_by_guest = TDXFV_NONDET_bool();
    tdxfv_abst_exception_init();
    tdxfv_abst_msr_init();
    tdxfv_abst_vcpu_init();
}
void init_vmm_dispatcher() {
    tdx_module_local_t* local_data = init_data_fast_ref_ptrs();
    tdx_module_global_t* global_data = get_global_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    assume_abort_if_not((leaf_opcode.reserved0 == 0) && (leaf_opcode.reserved1 == 0));
    assume_abort_if_not((leaf_opcode.version == 0) || ( (leaf_opcode.leaf == TDH_MEM_PAGE_PROMOTE_LEAF) || (leaf_opcode.leaf == TDH_MEM_SEPT_ADD_LEAF) || (leaf_opcode.leaf == TDH_MEM_SEPT_REMOVE_LEAF) || (leaf_opcode.leaf == TDH_MNG_RD_LEAF) || (leaf_opcode.leaf == TDH_VP_RD_LEAF) || (leaf_opcode.leaf == TDH_VP_INIT_LEAF) ));
    assume_abort_if_not((SYS_SHUTDOWN != global_data->global_state.sys_state) || (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF));
    assume_abort_if_not((global_data->global_state.sys_state == SYS_READY) || (leaf_opcode.leaf == TDH_SYS_INFO_LEAF) || (leaf_opcode.leaf == TDH_SYS_RD_LEAF) || (leaf_opcode.leaf == TDH_SYS_RDALL_LEAF) || (leaf_opcode.leaf == TDH_SYS_INIT_LEAF) || (leaf_opcode.leaf == TDH_SYS_LP_INIT_LEAF) || (leaf_opcode.leaf == TDH_SYS_CONFIG_LEAF) || (leaf_opcode.leaf == TDH_SYS_KEY_CONFIG_LEAF) || (leaf_opcode.leaf == TDH_SYS_LP_SHUTDOWN_LEAF) || (leaf_opcode.leaf == TDH_SYS_UPDATE_LEAF));
    shadow_td_regs_precall= local_data->td_regs;
    shadow_vmm_regs_precall = local_data->vmm_regs;
    shadow_guest_gpr_state_precall = local_data->vp_ctx.tdvps->guest_state.gpr_state;
    fv_is_called_by_host = ((bool_t)1);
    fv_is_called_by_guest = ((bool_t)0);
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
uint32_t check_mem_enc_alg (ia32_tme_capability_t tme_capability,
                            ia32_tme_activate_t tme_activate)
{
    if (tme_activate.lock == 0)
    {
        return 0x982;
    }
    if (get_sysinfo_table()->mcheck_fields.tdx_without_integrity)
    {
        if ((tme_capability.aes_xts_256 == 0) && (tme_capability.aes_xts_128 == 0))
        {
            return 0x981;
        }
        if ((tme_activate.algs_aes_xts_256 == 0) &&
            (tme_activate.algs_aes_xts_128 == 0))
        {
            return 0x982;
        }
    }
    else
    {
        if ((tme_capability.aes_xts_256_with_integrity == 0) &&
            (tme_capability.aes_xts_128_with_integrity == 0))
        {
            return 0x981;
        }
        if ((tme_activate.algs_aes_xts_256_with_integrity == 0) &&
            (tme_activate.algs_aes_xts_128_with_integrity == 0))
        {
            return 0x982;
        }
    }
    return 0;
}
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
static inline void read_vmcs_field_info(uint64_t encoding, vmcs_fields_info_t *fields_info)
{
    fields_info->encoding = encoding;
    ia32_vmread(fields_info->encoding, &fields_info->value);
}
void save_vmcs_non_lp_host_fields(vmcs_host_values_t* host_fields_ptr)
{
    read_vmcs_field_info(0x6C00, &host_fields_ptr->CR0);
    read_vmcs_field_info(0x6C02, &host_fields_ptr->CR3);
    read_vmcs_field_info(0x6C04ULL, &host_fields_ptr->CR4);
    read_vmcs_field_info(0x0C02ULL, &host_fields_ptr->CS);
    read_vmcs_field_info(0x0C04ULL, &host_fields_ptr->SS);
    read_vmcs_field_info(0x0C08ULL, &host_fields_ptr->FS);
    read_vmcs_field_info(0x0C0AULL, &host_fields_ptr->GS);
    read_vmcs_field_info(0x0C0CULL, &host_fields_ptr->TR);
    read_vmcs_field_info(0x6C18, &host_fields_ptr->IA32_S_CET);
    read_vmcs_field_info(0x2c00ULL, &host_fields_ptr->IA32_PAT);
    read_vmcs_field_info(0x2c02, &host_fields_ptr->IA32_EFER);
    read_vmcs_field_info(0x6C06, &host_fields_ptr->FS_BASE);
    read_vmcs_field_info(0x6C0E, &host_fields_ptr->IDTR_BASE);
    read_vmcs_field_info(0x6C0C, &host_fields_ptr->GDTR_BASE);
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
static inline bool_t check_allowed_vmx_ctls(uint32_t* dest,
                                              ia32_vmx_allowed_bits_t src,
                                              uint32_t init,
                                              uint32_t variable_mask,
                                              uint32_t unknown_mask)
{
    if ( __builtin_expect((!((src.not_allowed0 & ~src.allowed1) == 0)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 0); };
    if ( __builtin_expect((!(((init | variable_mask) & unknown_mask) == 0)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 1); };
    if ((src.not_allowed0 & ~(init | unknown_mask)) != 0)
    {
        return ((bool_t)0);
    }
    if ((~src.allowed1 & init) != 0)
    {
        return ((bool_t)0);
    }
    if (((src.not_allowed0 | ~src.allowed1) & variable_mask) != 0)
    {
        return ((bool_t)0);
    }
    *dest = (init | src.not_allowed0);
    return ((bool_t)1);
}
static inline bool_t check_allowed64_vmx_ctls(uint64_t not_allowed0, uint64_t allowed1,
                                                uint64_t init, uint64_t variable_mask)
{
    if ( __builtin_expect((!((not_allowed0 & ~allowed1) == 0)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 2); };
    if ((not_allowed0 & ~init) || (~allowed1 & init) || ((not_allowed0 | ~allowed1) & variable_mask))
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
static inline bool_t check_allowed1_vmx_ctls(uint64_t* dest,
                                              uint64_t allowed1,
                                              uint64_t init,
                                              uint64_t variable_mask,
                                              uint64_t unknown_mask)
{
    if ( __builtin_expect((!(((init | variable_mask) & unknown_mask) == 0)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 3); };
    if ((~allowed1 & init) != 0)
    {
        return ((bool_t)0);
    }
    if ((~allowed1 & variable_mask) != 0)
    {
        return ((bool_t)0);
    }
    *dest = init;
    return ((bool_t)1);
}
static inline bool_t is_smrr_mask_valid_for_tdx(smrr_base_t smrr_base, smrr_mask_t smrr_mask)
{
    uint32_t actual_mask = (uint32_t)(smrr_mask.raw & (((uint64_t)(1ULL<<(31)) - (uint64_t)(1ULL<<(12)) + (uint64_t)(1ULL<<(31)))));
    uint64_t mask_lsb;
    if (!bit_scan_forward64(actual_mask, &mask_lsb))
    {
        return ((bool_t)0);
    }
    uint32_t bitmask = (uint32_t)((((uint64_t)(1ULL<<(31)) - (uint64_t)(1ULL<<(mask_lsb)) + (uint64_t)(1ULL<<(31)))));
    if ((actual_mask ^ bitmask) != 0)
    {
        return ((bool_t)0);
    }
    uint32_t actual_base = (uint32_t)(smrr_base.raw & (((uint64_t)(1ULL<<(31)) - (uint64_t)(1ULL<<(12)) + (uint64_t)(1ULL<<(31)))));
    if ((actual_base & ~bitmask) != 0)
    {
        return ((bool_t)0);
    }
    return ((bool_t)1);
}
static inline api_error_type check_and_store_smrr_smrr2(tdx_module_global_t* tdx_global_data_ptr)
{
    uint8_t num_of_smrrs = 1;
    tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.raw = ia32_rdmsr(0xFE);
    if (tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.smrr == 0)
    {
                                       ;
        return 0xC000091400000000ULL;
    }
    if (tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.smrr_lock == 0)
    {
                                                ;
            return 0xC000091300000000ULL;
    }
    tdx_global_data_ptr->plt_common_config.smrr[0].smrr_mask.raw = ia32_rdmsr(0x1F3);
    tdx_global_data_ptr->plt_common_config.smrr[0].smrr_base.raw = ia32_rdmsr(0x1F2);
    sysinfo_table_t * sysinfo_table_ptr = get_sysinfo_table();
    if (sysinfo_table_ptr->mcheck_fields.smrr2_not_supported == 0 && tdx_global_data_ptr->plt_common_config.ia32_mtrrcap.smrr2 != 0)
    {
        tdx_global_data_ptr->plt_common_config.smrr[1].smrr_mask.raw = ia32_rdmsr(0x1F7);
        tdx_global_data_ptr->plt_common_config.smrr[1].smrr_base.raw = ia32_rdmsr(0x1F6);
        num_of_smrrs = 2U;
    }
    for (uint8_t smrr_idx = 0; smrr_idx < num_of_smrrs; smrr_idx++)
    {
        if (tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_mask.lock == 0)
        {
                                                         ;
            return api_error_with_operand_id(0xC000091000000000ULL, (uint64_t)smrr_idx);
        }
    }
    for (uint8_t smrr_idx = 0; smrr_idx < num_of_smrrs; smrr_idx++)
    {
        if (tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_mask.vld == 0)
        {
            continue;
        }
        smrr_base_t smrr_base = { .raw = 0 };
        smrr_base.base = tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_base.base;
        smrr_mask_t smrr_mask = { .raw = 0 };
        smrr_mask.mask = tdx_global_data_ptr->plt_common_config.smrr[smrr_idx].smrr_mask.mask;
        if (!is_smrr_mask_valid_for_tdx(smrr_base, smrr_mask))
        {
                                                             ;
            return api_error_with_operand_id(0xC000091100000000ULL, (uint64_t)smrr_idx);
        }
        uint64_t smrr_size = mask_to_size(smrr_mask.raw);
                                                                          ;
        for (uint8_t cmr_i = 0; cmr_i < 32; cmr_i++)
        {
            if (sysinfo_table_ptr->cmr_data[cmr_i].cmr_size != 0 &&
                    is_overlap(smrr_base.raw, smrr_size, sysinfo_table_ptr->cmr_data[cmr_i].cmr_base,
                    sysinfo_table_ptr->cmr_data[cmr_i].cmr_size))
            {
                                                                              ;
                return api_error_with_multiple_info(0xC000091200000000ULL, smrr_idx, cmr_i, 0, 0);
            }
        };
    }
    return 0x0000000000000000ULL;
}
static inline api_error_type check_key_management_config(tdx_module_global_t* tdx_global_data_ptr)
{
    tdx_global_data_ptr->plt_common_config.ia32_tme_capability.raw = ia32_rdmsr(0x981);
    tdx_global_data_ptr->plt_common_config.ia32_tme_activate.raw = ia32_rdmsr(0x982);
    uint32_t msr_addr = check_mem_enc_alg(tdx_global_data_ptr->plt_common_config.ia32_tme_capability,
                                          tdx_global_data_ptr->plt_common_config.ia32_tme_activate);
    if (msr_addr != 0)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, msr_addr);
    }
    tdx_global_data_ptr->hkid_start_bit = (uint32_t)(52ULL -
            (uint64_t)tdx_global_data_ptr->plt_common_config.ia32_tme_activate.mk_tme_keyid_bits);
    tdx_global_data_ptr->hkid_mask = (((uint64_t)(1ULL<<(52ULL - 1)) - (uint64_t)(1ULL<<(tdx_global_data_ptr->hkid_start_bit)) + (uint64_t)(1ULL<<(52ULL - 1))));
    tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.raw =
            ia32_rdmsr(0x87);
    tdx_global_data_ptr->private_hkid_min =
            tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids + 1;
    tdx_global_data_ptr->private_hkid_max =
            tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_mktme_kids +
            tdx_global_data_ptr->plt_common_config.ia32_tme_keyid_partitioning.num_tdx_priv_kids;
    if (tdx_global_data_ptr->private_hkid_max >= 2048)
    {
        return api_error_with_operand_id(0xC000082500000000ULL, 2048);
    }
    tdx_global_data_ptr->num_of_cached_sub_blocks = ia32_rdmsr(0x98);
    if (ia32_rdmsr(0x99) != tdx_global_data_ptr->num_of_cached_sub_blocks)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x99);
    }
    return 0x0000000000000000ULL;
}
static inline api_error_type check_cpuid_configurations(tdx_module_global_t* global_data_ptr)
{
    cpuid_config_t cpuid_config;
    sysinfo_table_t *sysinfo_table_ptr = get_sysinfo_table();
    uint32_t lpids_sharing_l3_cache = (uint32_t)-1;
    bool_t core_level_scanned = ((bool_t)0);
    uint32_t shift_count = (uint32_t)-1;
    uint32_t prev_level_type = LEVEL_TYPE_INVALID;
    bool_t perfmon_ext_leaf_checked = ((bool_t)0);
    bool_t perfmon_ext_leaf_supported = ((bool_t)0);
    global_data_ptr->xfd_faulting_mask = 0;
    global_data_ptr->x2apic_core_id_shift_count = 0;
    ia32_misc_enable_t misc_enable = { .raw = ia32_rdmsr(0x1A0) };
    if (misc_enable.limit_cpuid_maxval)
    {
     return 0xC000090100000000ULL;
    }
    if ((!misc_enable.perfmon_available) || (misc_enable.bts_unavailable))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x1A0);
    }
    uint32_t last_base_leaf, last_extended_leaf;
    uint32_t ebx, ecx, edx;
    ia32_cpuid(0, 0, &last_base_leaf, &ebx, &ecx, &edx);
    if (last_base_leaf < 0x1F)
    {
        return api_error_with_operand_id(0xC000090800000000ULL, 0x1F);
    }
    global_data_ptr->cpuid_last_base_leaf = 0x23;
    ia32_cpuid(0x80000000, 0, &last_extended_leaf, &ebx, &ecx, &edx);
    if (last_extended_leaf < 0x80000008)
    {
        return api_error_with_operand_id(0xC000090800000000ULL, 0x80000008);
    }
    if ( __builtin_expect((!(last_extended_leaf >= 0x80000000)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 4); };
    global_data_ptr->cpuid_last_extended_leaf = last_extended_leaf;
    for (uint32_t i = 0; i < 68; i++)
    {
        if (!cpuid_lookup[i].valid_entry)
        {
            continue;
        }
        cpuid_config.leaf_subleaf = cpuid_lookup[i].leaf_subleaf;
        if ((cpuid_config.leaf_subleaf.leaf <= last_base_leaf) ||
            ((cpuid_config.leaf_subleaf.leaf >= 0x80000000) &&
             (cpuid_config.leaf_subleaf.leaf <= last_extended_leaf)))
        {
            ia32_cpuid(cpuid_config.leaf_subleaf.leaf, cpuid_config.leaf_subleaf.subleaf,
                    &cpuid_config.values.eax, &cpuid_config.values.ebx,
                    &cpuid_config.values.ecx, &cpuid_config.values.edx);
        }
        else
        {
            cpuid_config.values.low = 0;
            cpuid_config.values.high = 0;
        }
        if (!(((cpuid_config.values.low & cpuid_lookup[i].verify_mask.low)
                == cpuid_lookup[i].verify_value.low)
                && ((cpuid_config.values.high
                        & cpuid_lookup[i].verify_mask.high)
                        == cpuid_lookup[i].verify_value.high)))
        {
            tdx_module_local_t *tdx_local_data_ptr = get_local_data();
            tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;
            tdx_local_data_ptr->vmm_regs.rdx = cpuid_lookup[i].verify_mask.low;
            tdx_local_data_ptr->vmm_regs.r8 = cpuid_lookup[i].verify_mask.high;
            tdx_local_data_ptr->vmm_regs.r9 = cpuid_lookup[i].verify_value.low;
            tdx_local_data_ptr->vmm_regs.r10 = cpuid_lookup[i].verify_value.high;
                                                                                      ;
                                                                                     ;
                                                                                       ;
                                                                     ;
            return 0xC000090000000000ULL;
        }
        uint32_t leaf = cpuid_config.leaf_subleaf.leaf;
        uint32_t subleaf = cpuid_config.leaf_subleaf.subleaf;
        if (leaf == 1)
        {
            global_data_ptr->platform_fms.raw = sysinfo_table_ptr->mcheck_fields.socket_cpuid_table[0].raw;
            for (uint32_t pkg_index = 1; pkg_index < sysinfo_table_ptr->mcheck_fields.tot_num_sockets; pkg_index++)
            {
                if (global_data_ptr->platform_fms.stepping_id >
                    sysinfo_table_ptr->mcheck_fields.socket_cpuid_table[pkg_index].stepping_id)
                {
                    global_data_ptr->platform_fms.stepping_id = sysinfo_table_ptr->mcheck_fields.socket_cpuid_table[pkg_index].stepping_id;
                }
            }
            cpuid_config.values.eax = global_data_ptr->platform_fms.raw;
        }
        else if (leaf == 4 && subleaf == 3)
        {
            lpids_sharing_l3_cache =
                    ((cpu_cache_params_t)cpuid_config.values.eax).max_num_of_lps_sharing_cache;
        }
        else if (leaf == 7)
        {
            if (subleaf == 0)
            {
                cpuid_07_00_ebx_t cpuid_07_00_ebx = {.raw = cpuid_config.values.ebx};
                global_data_ptr->hle_supported = cpuid_07_00_ebx.hle;
                global_data_ptr->rtm_supported = cpuid_07_00_ebx.rtm;
                cpuid_07_00_ecx_t cpuid_07_00_ecx = { .raw = cpuid_config.values.ecx };
                global_data_ptr->waitpkg_supported = cpuid_07_00_ecx.waitpkg;
                global_data_ptr->la57_supported = cpuid_07_00_ecx.la57;
            }
            else if (subleaf == 1)
            {
                cpuid_07_01_eax_t cpuid_7_1_eax = {.raw = cpuid_config.values.eax};
                perfmon_ext_leaf_supported = cpuid_7_1_eax.perfmon_ext_leaf;
                perfmon_ext_leaf_checked = ((bool_t)1);
                global_data_ptr->lam_supported = cpuid_7_1_eax.lam;
                global_data_ptr->lass_supported = cpuid_7_1_eax.lass;
                global_data_ptr->perfmon_ext_leaf_supported = perfmon_ext_leaf_supported;
            }
            else if (subleaf == 2)
            {
                cpuid_07_02_edx_t cpuid_07_02_edx;
                cpuid_07_02_edx.raw = cpuid_config.values.edx;
                global_data_ptr->ddpd_supported = cpuid_07_02_edx.ddpd;
            }
        }
        else if (leaf == 0xA)
        {
            tdx_module_local_t *tdx_local_data_ptr = get_local_data();
            cpuid_0a_eax_t cpuid_0a_eax;
            cpuid_0a_ecx_t cpuid_0a_ecx;
            cpuid_0a_edx_t cpuid_0a_edx;
            cpuid_0a_eax.raw = cpuid_config.values.eax;
            cpuid_0a_ecx.raw = cpuid_config.values.ecx;
            cpuid_0a_edx.raw = cpuid_config.values.edx;
            if (cpuid_0a_eax.version < 5)
            {
                tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;
                tdx_local_data_ptr->vmm_regs.rdx = 0xF;
                tdx_local_data_ptr->vmm_regs.r8 = 0x0;
                tdx_local_data_ptr->vmm_regs.r9 = 0x5;
                tdx_local_data_ptr->vmm_regs.r10 = 0x0;
                                                ;
                return 0xC000090000000000ULL;
            }
            global_data_ptr->num_fixed_ctrs = cpuid_0a_edx.num_fcs;
            if (global_data_ptr->num_fixed_ctrs > 7ULL)
            {
                tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;
                tdx_local_data_ptr->vmm_regs.rdx = 0x0;
                tdx_local_data_ptr->vmm_regs.r8 = (0x1FULL << 32ULL);
                tdx_local_data_ptr->vmm_regs.r9 = 0x0;
                tdx_local_data_ptr->vmm_regs.r10 = (7ULL << 32ULL);
                                             ;
                return 0xC000090000000000ULL;
            }
            global_data_ptr->fc_bitmap = (uint32_t)(((uint64_t)(1ULL<<(cpuid_0a_edx.num_fcs)) - 1) | cpuid_0a_ecx.raw);
        }
        else if (leaf == 0xD)
        {
            if (subleaf == 0)
            {
                global_data_ptr->xcr0_supported_mask = cpuid_config.values.eax & 0x000602FF;
            }
            else if (subleaf == 1)
            {
                cpuid_0d_01_eax_t cpuid_0D_01_eax;
                cpuid_0D_01_eax.raw = cpuid_config.values.eax;
                global_data_ptr->xfd_supported = cpuid_0D_01_eax.xfd_support;
                global_data_ptr->ia32_xss_supported_mask = cpuid_config.values.ecx & 0x0001FD00;
                if ( __builtin_expect((!((global_data_ptr->xcr0_supported_mask & global_data_ptr->ia32_xss_supported_mask) == 0)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 5); };
            }
            else
            {
                cpuid_0d_ecx_t cpuid_0d_ecx = { .raw = cpuid_config.values.ecx };
                global_data_ptr->xsave_comp[subleaf].size = cpuid_config.values.eax;
                global_data_ptr->xsave_comp[subleaf].align = cpuid_0d_ecx.align_64;
                if (global_data_ptr->xfd_supported && cpuid_0d_ecx.xfd_faulting)
                {
                    global_data_ptr->xfd_faulting_mask |= (1 << subleaf);
                }
                if (cpuid_0d_ecx.ia32_xss)
                {
                    if ((uint64_t)global_data_ptr->xcr0_supported_mask & ((uint64_t)(1ULL<<(subleaf))))
                    {
                        { ; tdx_arch_fatal_error(); };
                    }
                }
                else
                {
                    if ((uint64_t)global_data_ptr->ia32_xss_supported_mask & ((uint64_t)(1ULL<<(subleaf))))
                    {
                        { ; tdx_arch_fatal_error(); };
                    }
                }
            }
        }
        else if (leaf == 0x15)
        {
            if (cpuid_config.values.ebx == 0)
            {
                return api_error_with_operand_id(0xC000090800000000ULL, 0x15);
            }
            global_data_ptr->crystal_clock_frequency = cpuid_config.values.ecx;
            global_data_ptr->native_tsc_frequency =
                    ((uint64_t)cpuid_config.values.ecx * (uint64_t)cpuid_config.values.ebx) /
                     (uint64_t)cpuid_config.values.eax;
            if (global_data_ptr->native_tsc_frequency < 0x2540c)
            {
                { ; tdx_arch_fatal_error(); };
            }
        }
        else if (leaf == 0x1A)
        {
            global_data_ptr->native_model_info.raw = cpuid_config.values.eax;
        }
        else if (leaf == 0x1C)
        {
            uint32_t cpuid_1c_eax;
            cpuid_1c_eax = (uint32_t)cpuid_config.values.eax;
                                                             ;
            uint64_t msb;
            if (!bit_scan_reverse64(cpuid_1c_eax & ((uint64_t)(1ULL<<(8))-1), &msb))
            {
                { ; tdx_arch_fatal_error(); };
            }
            global_data_ptr->max_lbr_depth = 8 * ((uint32_t)msb + 1);
        }
        else if (leaf == 0x1F)
        {
            if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type != (uint32_t)LEVEL_TYPE_INVALID)
            {
                if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type <= prev_level_type ||
                    ((cpuid_topology_level_t)cpuid_config.values.ecx).level_type >= (uint32_t)LEVEL_TYPE_MAX)
                {
                    return 0xC000090400000000ULL;
                }
                shift_count = ((cpuid_topology_shift_t)cpuid_config.values.eax).shift_count;
                if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type == LEVEL_TYPE_SMT)
                {
                    global_data_ptr->x2apic_core_id_shift_count = shift_count;
                }
                else if (((cpuid_topology_level_t)cpuid_config.values.ecx).level_type == LEVEL_TYPE_CORE)
                {
                    core_level_scanned = ((bool_t)1);
                }
            }
            else
            {
                if (cpuid_config.leaf_subleaf.subleaf == 0)
                {
                    return api_error_with_operand_id(0xC000090800000000ULL, 0ULL);
                }
                if (!core_level_scanned)
                {
                    return api_error_with_operand_id(0xC000090800000000ULL, 0ULL);
                }
                if (prev_level_type != LEVEL_TYPE_INVALID)
                {
                    if ( __builtin_expect((!(shift_count != (uint32_t)-1)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 6); };
                    if ( __builtin_expect((!(lpids_sharing_l3_cache != (uint32_t)-1)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 7); };
                    global_data_ptr->x2apic_pkg_id_shift_count = shift_count;
                    if ( __builtin_expect((!((shift_count - global_data_ptr->x2apic_core_id_shift_count) < 32)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 8); };
                    global_data_ptr->x2apic_core_id_mask =
                            (uint32_t)((uint64_t)(1ULL<<(shift_count - global_data_ptr->x2apic_core_id_shift_count))) - 1U;
                    if ((lpids_sharing_l3_cache >> (shift_count - 1)) != (uint32_t)0x00000001)
                    {
                                                           ;
                        return 0xC000090500000000ULL;
                    }
                }
            }
            prev_level_type = ((cpuid_topology_level_t)cpuid_config.values.ecx).level_type;
        }
        else if (cpuid_config.leaf_subleaf.leaf == 0x23)
        {
            if ( __builtin_expect((!(perfmon_ext_leaf_checked == ((bool_t)1))), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 9); };
        }
        else if (cpuid_config.leaf_subleaf.leaf == 0x80000008)
        {
            tdx_module_local_t *tdx_local_data_ptr = get_local_data();
            cpuid_80000008_eax_t cpuid_80000008_eax = { .raw = cpuid_config.values.eax };
            global_data_ptr->max_pa = cpuid_80000008_eax.pa_bits;
            if (global_data_ptr->la57_supported)
            {
                if (cpuid_80000008_eax.la_bits != 57)
                {
                    tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;
                    tdx_local_data_ptr->vmm_regs.rdx = 0xFF00;
                    tdx_local_data_ptr->vmm_regs.r8 = 0x0;
                    tdx_local_data_ptr->vmm_regs.r9 = 0x3900;
                    tdx_local_data_ptr->vmm_regs.r10 = 0x0;
                                                                                    ;
                    return 0xC000090000000000ULL;
                }
            }
            else
            {
                if (cpuid_80000008_eax.la_bits != 48)
                {
                    tdx_local_data_ptr->vmm_regs.rcx = cpuid_config.leaf_subleaf.raw;
                    tdx_local_data_ptr->vmm_regs.rdx = 0xFF00;
                    tdx_local_data_ptr->vmm_regs.r8 = 0x0;
                    tdx_local_data_ptr->vmm_regs.r9 = 0x3000;
                    tdx_local_data_ptr->vmm_regs.r10 = 0x0;
                                                                                    ;
                    return 0xC000090000000000ULL;
                }
            }
        }
        global_data_ptr->cpuid_values[i] = cpuid_config;
    }
    return 0x0000000000000000ULL;
}
static inline bool_t check_cmrs()
{
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();
    tdx_module_global_t* tdx_global_data_ptr = get_global_data();
    uint64_t prev_cmr_area_start = 0;
    uint64_t prev_cmr_area_end = 0;
    for (uint32_t i = 0; i < 32; i++)
    {
        if (sysinfo_table->cmr_data[i].cmr_size > 0)
        {
            if (!is_valid_integer_range(sysinfo_table->cmr_data[i].cmr_base,
                                        sysinfo_table->cmr_data[i].cmr_size))
            {
                return ((bool_t)0);
            }
            uint64_t cmr_area_start = sysinfo_table->cmr_data[i].cmr_base;
            uint64_t cmr_area_end = sysinfo_table->cmr_data[i].cmr_base
                    + sysinfo_table->cmr_data[i].cmr_size-1;
            if ( ((cmr_area_start & tdx_global_data_ptr->hkid_mask) != 0) ||
                 ((cmr_area_end & tdx_global_data_ptr->hkid_mask) != 0) ||
                  (cmr_area_end > (uint64_t)(1ULL<<(52ULL)))
               )
            {
                return ((bool_t)0);
            }
            if (!is_addr_aligned_any(cmr_area_start, (4 * 0x400ULL)) ||
                !is_addr_aligned_any(sysinfo_table->cmr_data[i].cmr_size,(4 * 0x400ULL)))
            {
                return ((bool_t)0);
            }
            if (prev_cmr_area_end > 0 && (prev_cmr_area_start > cmr_area_start ||
                                          prev_cmr_area_end > cmr_area_start))
            {
                return ((bool_t)0);
            }
            prev_cmr_area_start = cmr_area_start;
            prev_cmr_area_end = cmr_area_end;
        }
    }
    return ((bool_t)1);
}
static inline api_error_type check_msrs(tdx_module_global_t* tdx_global_data_ptr, bool_t* tsx_ctrl_modified_flag,
                                          ia32_tsx_ctrl_t* tsx_ctrl_original, ia32_tsx_ctrl_t* tsx_ctrl_modified)
{
    platform_common_config_t* msr_values_ptr = &tdx_global_data_ptr->plt_common_config;
    msr_values_ptr->ia32_core_capabilities.raw = ia32_rdmsr(0xCF);
    msr_values_ptr->ia32_arch_capabilities.raw = ia32_rdmsr(0x10A);
    if (!check_native_ia32_arch_capabilities(msr_values_ptr->ia32_arch_capabilities))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x10A);
    }
    msr_values_ptr->ia32_xapic_disable_status.raw = ia32_rdmsr(0xBD);
    if ((msr_values_ptr->ia32_xapic_disable_status.legacy_xapic_disabled != 1) ||
        (msr_values_ptr->ia32_xapic_disable_status.reserved != 0))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0xBD);
    }
    if (msr_values_ptr->ia32_arch_capabilities.tsx_ctrl)
    {
     tsx_ctrl_original->raw = ia32_rdmsr(0x122);
        if (tsx_ctrl_original->tsx_cpuid_clear)
        {
            tsx_ctrl_modified->raw = tsx_ctrl_original->raw;
            tsx_ctrl_modified->tsx_cpuid_clear = 0;
            ia32_wrmsr(0x122, tsx_ctrl_modified->raw);
            *tsx_ctrl_modified_flag = ((bool_t)1);
        }
    }
    msr_values_ptr->ia32_misc_package_ctls.raw = ia32_rdmsr(0xBC);
    if (!msr_values_ptr->ia32_misc_package_ctls.energy_filtering_enable)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0xBC);
    }
    msr_values_ptr->ia32_perf_capabilities.raw = ia32_rdmsr(0x345);
    if ((msr_values_ptr->ia32_perf_capabilities.freeze_while_smm_supported != 1) ||
        (msr_values_ptr->ia32_perf_capabilities.full_write != 1))
    {
                                                     ;
        return api_error_with_operand_id(0xC000092100000000ULL, 0x345);
    }
    msr_values_ptr->ia32_tsc_adjust = ia32_rdmsr(0x3B);
    return 0x0000000000000000ULL;
}
static inline api_error_type check_l2_vmx_msrs(tdx_module_global_t* tdx_global_data_ptr)
{
    platform_common_config_t* msr_values_ptr = &tdx_global_data_ptr->plt_common_config;
    td_vmcs_values_t* l2_vmcs_values_ptr = &tdx_global_data_ptr->l2_vmcs_values;
    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->pinbased_ctls, msr_values_ptr->ia32_vmx_true_pinbased_ctls,
            PINBASED_CTLS_L2_INIT, PINBASED_CTLS_L2_VARIABLE, PINBASED_CTLS_L2_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48D);
    }
    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->procbased_ctls, msr_values_ptr->ia32_vmx_true_procbased_ctls,
            PROCBASED_CTLS_L2_INIT, PROCBASED_CTLS_L2_VARIABLE, PROCBASED_CTLS_L2_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48E);
    }
    vmx_procbased_ctls2_t procbased_ctls2_init = { .raw = PROCBASED_CTLS2_L2_INIT };
    procbased_ctls2_init.en_guest_wait_pause = tdx_global_data_ptr->waitpkg_supported;
    vmx_procbased_ctls2_t procbased_ctls2_allowed1 = { .raw = msr_values_ptr->ia32_vmx_procbased_ctls2.allowed1 };
    if (!procbased_ctls2_allowed1.en_enclv_exiting)
    {
        procbased_ctls2_init.en_enclv_exiting = 0;
    }
    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->procbased_ctls2, msr_values_ptr->ia32_vmx_procbased_ctls2,
            (uint32_t)procbased_ctls2_init.raw, PROCBASED_CTLS2_L2_VARIABLE, PROCBASED_CTLS2_L2_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48B);
    }
    vmx_procbased_ctls3_t procbased_ctls3_init = { .raw = PROCBASED_CTLS3_L2_INIT };
    vmx_procbased_ctls3_t procbased_ctls3_variable = { .raw = PROCBASED_CTLS3_L2_VARIABLE };
    procbased_ctls3_variable.virt_ia32_spec_ctrl = 0;
    if (!check_allowed1_vmx_ctls(&l2_vmcs_values_ptr->procbased_ctls3, msr_values_ptr->ia32_vmx_procbased_ctls3.raw,
            (uint32_t)procbased_ctls3_init.raw, procbased_ctls3_variable.raw, PROCBASED_CTLS3_L2_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x492);
    }
    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->exit_ctls, msr_values_ptr->ia32_vmx_true_exit_ctls,
            EXIT_CTLS_L2_INIT, EXIT_CTLS_L2_VARIABLE, EXIT_CTLS_L2_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48F);
    }
    if (!check_allowed_vmx_ctls(&l2_vmcs_values_ptr->entry_ctls, msr_values_ptr->ia32_vmx_true_entry_ctls,
            ENTRY_CTLS_L2_INIT, ENTRY_CTLS_L2_VARIABLE, ENTRY_CTLS_L2_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x490);
    }
    ia32_cr0_t cr0_fixed0;
    cr0_fixed0.raw = msr_values_ptr->ia32_vmx_cr0_fixed0.raw;
    cr0_fixed0.pe = 0;
    cr0_fixed0.pg = 0;
    if (!check_allowed64_vmx_ctls(cr0_fixed0.raw, msr_values_ptr->ia32_vmx_cr0_fixed1.raw,
                                  GUEST_CR0_L2_INIT, GUEST_CR0_L2_VARIABLE))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x486);
    }
    if ((msr_values_ptr->ia32_vmx_cr4_fixed0.raw & (uint64_t)~GUEST_CR4_L2_INIT) != 0)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x488);
    }
    if ((~msr_values_ptr->ia32_vmx_cr4_fixed1.raw & GUEST_CR4_L2_INIT) != 0)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x489);
    }
    return 0x0000000000000000ULL;
}
static inline api_error_type check_vmx_msrs(tdx_module_global_t* tdx_global_data_ptr)
{
    platform_common_config_t* msr_values_ptr = &tdx_global_data_ptr->plt_common_config;
    td_vmcs_values_t* td_vmcs_values_ptr = &tdx_global_data_ptr->td_vmcs_values;
    msr_values_ptr->ia32_vmx_basic.raw = ia32_rdmsr(0x480);
    if ((msr_values_ptr->ia32_vmx_basic.vmcs_region_size > (4 * 0x400ULL)) ||
        (msr_values_ptr->ia32_vmx_basic.vmexit_info_on_ios != 1) ||
        (msr_values_ptr->ia32_vmx_basic.ia32_vmx_true_available != 1))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x480);
    }
    msr_values_ptr->ia32_vmx_true_pinbased_ctls.raw = ia32_rdmsr(0x48D);
    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->pinbased_ctls, msr_values_ptr->ia32_vmx_true_pinbased_ctls,
            PINBASED_CTLS_INIT, PINBASED_CTLS_VARIABLE, PINBASED_CTLS_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48D);
    }
    msr_values_ptr->ia32_vmx_true_procbased_ctls.raw = ia32_rdmsr(0x48E);
    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->procbased_ctls, msr_values_ptr->ia32_vmx_true_procbased_ctls,
            PROCBASED_CTLS_INIT, PROCBASED_CTLS_VARIABLE, PROCBASED_CTLS_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48E);
    }
    vmx_procbased_ctls2_t procbased_ctls2_init = {.raw = PROCBASED_CTLS2_INIT};
    procbased_ctls2_init.en_guest_wait_pause = tdx_global_data_ptr->waitpkg_supported;
    msr_values_ptr->ia32_vmx_procbased_ctls2.raw = ia32_rdmsr(0x48B);
    vmx_procbased_ctls2_t procbased_ctls2_allowed1 = {.raw = msr_values_ptr->ia32_vmx_procbased_ctls2.allowed1};
    if (!procbased_ctls2_allowed1.en_enclv_exiting)
    {
        procbased_ctls2_init.en_enclv_exiting = 0;
    }
    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->procbased_ctls2, msr_values_ptr->ia32_vmx_procbased_ctls2,
            (uint32_t)procbased_ctls2_init.raw, PROCBASED_CTLS2_VARIABLE, PROCBASED_CTLS2_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48B);
    }
    vmx_procbased_ctls3_t procbased_ctls3_init = {.raw = PROCBASED_CTLS3_INIT};
    msr_values_ptr->ia32_vmx_procbased_ctls3.raw = ia32_rdmsr(0x492);
    if (tdx_global_data_ptr->ddpd_supported &&
        !msr_values_ptr->ia32_vmx_procbased_ctls3.virt_ia32_spec_ctrl)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x492);
    }
    vmx_procbased_ctls3_t procbased_ctls3_variable = { .raw = PROCBASED_CTLS3_VARIABLE };
    procbased_ctls3_variable.virt_ia32_spec_ctrl = 0;
    if (!check_allowed1_vmx_ctls(&td_vmcs_values_ptr->procbased_ctls3, msr_values_ptr->ia32_vmx_procbased_ctls3.raw,
            (uint32_t)procbased_ctls3_init.raw, procbased_ctls3_variable.raw, PROCBASED_CTLS3_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x492);
    }
    msr_values_ptr->ia32_vmx_true_exit_ctls.raw = ia32_rdmsr(0x48F);
    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->exit_ctls, msr_values_ptr->ia32_vmx_true_exit_ctls,
            EXIT_CTLS_INIT, EXIT_CTLS_VARIABLE, EXIT_CTLS_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48F);
    }
    msr_values_ptr->ia32_vmx_true_entry_ctls.raw = ia32_rdmsr(0x490);
    if (!check_allowed_vmx_ctls(&td_vmcs_values_ptr->entry_ctls, msr_values_ptr->ia32_vmx_true_entry_ctls,
            ENTRY_CTLS_INIT, ENTRY_CTLS_VARIABLE, ENTRY_CTLS_UNKNOWN))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x490);
    }
    msr_values_ptr->ia32_vmx_misc.raw = ia32_rdmsr(0x485);
    if ((msr_values_ptr->ia32_vmx_misc.unrestricted_guest == 0) ||
        (msr_values_ptr->ia32_vmx_misc.activity_hlt == 0) ||
        (msr_values_ptr->ia32_vmx_misc.activity_shutdown == 0) ||
        (msr_values_ptr->ia32_vmx_misc.pt_in_vmx == 0) ||
        (msr_values_ptr->ia32_vmx_misc.max_cr3_targets < 4) ||
        (msr_values_ptr->ia32_vmx_misc.vmwrite_any_vmcs_field == 0))
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x485);
    }
    msr_values_ptr->ia32_vmx_ept_vpid_cap = ia32_rdmsr(0x48C);
    if ((msr_values_ptr->ia32_vmx_ept_vpid_cap & IA32_VMX_EPT_VPID_CAP_MASK) != IA32_VMX_EPT_VPID_CAP_MASK)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x48C);
    }
    ia32_cr0_t cr0_fixed0;
    cr0_fixed0.raw = ia32_rdmsr(0x486);
    msr_values_ptr->ia32_vmx_cr0_fixed0.raw = cr0_fixed0.raw;
    cr0_fixed0.pe = 0;
    cr0_fixed0.pg = 0;
    if ((cr0_fixed0.raw & (uint64_t)~GUEST_CR0_INIT) != 0)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x486);
    }
    msr_values_ptr->ia32_vmx_cr0_fixed1.raw = ia32_rdmsr(0x487);
    if ((~msr_values_ptr->ia32_vmx_cr0_fixed1.raw & GUEST_CR0_INIT) != 0)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x487);
    }
    msr_values_ptr->ia32_vmx_cr4_fixed0.raw = ia32_rdmsr(0x488);
    if ((msr_values_ptr->ia32_vmx_cr4_fixed0.raw & (uint64_t)~GUEST_CR4_INIT) != 0)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x488);
    }
    msr_values_ptr->ia32_vmx_cr4_fixed1.raw = ia32_rdmsr(0x489);
    if ((~msr_values_ptr->ia32_vmx_cr4_fixed1.raw & GUEST_CR4_INIT) != 0)
    {
        return api_error_with_operand_id(0xC000092100000000ULL, 0x489);
    }
    return check_l2_vmx_msrs(tdx_global_data_ptr);
}
static inline api_error_type check_platform_config_and_cpu_enumeration(tdx_module_global_t* tdx_global_data_ptr,
                                                                         bool_t* tsx_ctrl_modified_flag,
                                                                         ia32_tsx_ctrl_t* tsx_ctrl_original,
                                                                         ia32_tsx_ctrl_t* tsx_ctrl_modified)
{
    api_error_type err;
    if ((err = check_msrs(tdx_global_data_ptr, tsx_ctrl_modified_flag, tsx_ctrl_original, tsx_ctrl_modified)) != 0x0000000000000000ULL)
    {
                                            ;
        return err;
    }
    if ((err = check_cpuid_configurations(tdx_global_data_ptr)) != 0x0000000000000000ULL)
    {
                                                         ;
        return err;
    }
    if ((err = check_vmx_msrs(tdx_global_data_ptr)) != 0x0000000000000000ULL)
    {
                                                    ;
        return err;
    }
    if ((err = check_key_management_config(tdx_global_data_ptr)) != 0x0000000000000000ULL)
    {
                                                                   ;
        return err;
    }
    if (!check_cmrs())
    {
        err = 0xC0000A2200000000ULL;
        return err;
    }
    if ((err = check_and_store_smrr_smrr2(tdx_global_data_ptr)) != 0x0000000000000000ULL)
    {
                                                         ;
        return err;
    }
    return 0x0000000000000000ULL;
}
static inline void tdx_init_global_data(tdx_module_global_t* tdx_global_data_ptr)
{
    sysinfo_table_t* sysinfo_table_ptr = get_sysinfo_table();
    tdx_global_data_ptr->num_of_lps = sysinfo_table_ptr->mcheck_fields.tot_num_lps;
    tdx_global_data_ptr->num_of_pkgs = sysinfo_table_ptr->mcheck_fields.tot_num_sockets;
    tdx_global_data_ptr->num_of_init_pkgs = (uint32_t)0;
    tdx_global_data_ptr->pkg_config_bitmap = (uint32_t)0;
    tdx_global_data_ptr->seamrr_base = ia32_rdmsr(0x1400) & (((uint64_t)(1ULL<<((52ULL -1))) - (uint64_t)(1ULL<<(25)) + (uint64_t)(1ULL<<((52ULL -1)))));
    uint64_t seamrr_mask = ia32_rdmsr(0x1401) & (((uint64_t)(1ULL<<((52ULL -1))) - (uint64_t)(1ULL<<(25)) + (uint64_t)(1ULL<<((52ULL -1)))));
    tdx_global_data_ptr->seamrr_size = mask_to_size(seamrr_mask);
    tdx_global_data_ptr->num_of_init_lps = 0;
    tdx_global_data_ptr->global_state.sys_state = SYSINIT_DONE;
    tdx_global_data_ptr->xbuf.xsave_header.xstate_bv = 0;
    tdx_global_data_ptr->xbuf.xsave_header.xcomp_bv = (uint64_t)(1ULL<<(63));
    basic_memset_to_zero(&tdx_global_data_ptr->xbuf.xsave_header.reserved, sizeof(tdx_global_data_ptr->xbuf.xsave_header.reserved));
    save_vmcs_non_lp_host_fields(&tdx_global_data_ptr->seam_vmcs_host_values);
    tdx_global_data_ptr->num_rdseed_retries = 6;
    tdx_global_data_ptr->num_rdseed_pauses = 32;
}
static inline api_error_type tdx_init_stack_canary(void)
{
    uint64_t canary;
    if (!ia32_rdrand(&canary))
    {
        return 0x8000020300000000ULL;
    }
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();
    uint64_t last_page_addr = sysinfo_table->data_rgn_base + sysinfo_table->data_rgn_size - (4 * 0x400ULL);
    sysinfo_table_t* last_page_ptr = (sysinfo_table_t*)(last_page_addr);
    last_page_ptr->stack_canary.canary = canary;
    ia32_vmwrite(0x6C06, last_page_addr);
    for (uint64_t i = 0; i < 32; i++)
    {
        last_page_ptr->cmr_data[i].cmr_base = sysinfo_table->cmr_data[i].cmr_base;
        last_page_ptr->cmr_data[i].cmr_size = sysinfo_table->cmr_data[i].cmr_size;
    }
    last_page_ptr->code_rgn_base = sysinfo_table->code_rgn_base;
    last_page_ptr->code_rgn_size = sysinfo_table->code_rgn_size;
    last_page_ptr->data_rgn_base = sysinfo_table->data_rgn_base;
    last_page_ptr->data_rgn_size = sysinfo_table->data_rgn_size;
    last_page_ptr->keyhole_edit_rgn_base = sysinfo_table->keyhole_edit_rgn_base;
    last_page_ptr->keyhole_edit_rgn_size = sysinfo_table->keyhole_edit_rgn_size;
    last_page_ptr->keyhole_rgn_base = sysinfo_table->keyhole_rgn_base;
    last_page_ptr->keyhole_rgn_size = sysinfo_table->keyhole_rgn_size;
    last_page_ptr->num_stack_pages = sysinfo_table->num_stack_pages;
    last_page_ptr->num_tls_pages = sysinfo_table->num_tls_pages;
    last_page_ptr->seam_status = sysinfo_table->seam_status;
    last_page_ptr->module_hv = sysinfo_table->module_hv;
    last_page_ptr->min_update_hv = sysinfo_table->min_update_hv;
    last_page_ptr->no_downgrade = sysinfo_table->no_downgrade;
    last_page_ptr->num_handoff_pages = sysinfo_table->num_handoff_pages;
    last_page_ptr->stack_rgn_base = sysinfo_table->stack_rgn_base;
    last_page_ptr->stack_rgn_size = sysinfo_table->stack_rgn_size;
    return 0x0000000000000000ULL;
}
static inline bool_t is_td_preserving_available(seam_ops_capabilities_t caps)
{
    if ((caps.raw & (((uint64_t)(1ULL<<(5)) - (uint64_t)(1ULL<<(4)) + (uint64_t)(1ULL<<(5))))) == (((uint64_t)(1ULL<<(5)) - (uint64_t)(1ULL<<(4)) + (uint64_t)(1ULL<<(5)))))
    {
        return ((bool_t)1);
    }
    return ((bool_t)0);
}
static inline api_error_type check_module_build_time_defs(tdx_module_global_t* tdx_global_data_ptr)
{
    sysinfo_table_t* sysinfo_table = get_sysinfo_table();
    tdx_global_data_ptr->module_hv = sysinfo_table->module_hv;
    tdx_global_data_ptr->min_update_hv = sysinfo_table->min_update_hv;
    tdx_global_data_ptr->no_downgrade = sysinfo_table->no_downgrade;
    tdx_global_data_ptr->num_handoff_pages = sysinfo_table->num_handoff_pages;
    if ((tdx_global_data_ptr->module_hv != 0) ||
        (tdx_global_data_ptr->min_update_hv < 0) ||
        ((tdx_global_data_ptr->no_downgrade == 0) && (0 == 1)) ||
        ((tdx_global_data_ptr->num_handoff_pages + 1) < ((( ((sizeof(((tdx_module_global_t *)0)->kot.entries) + sizeof(((tdx_module_global_t *)0)->wbt_entries) + sizeof(((tdx_module_global_t *)0)->tdmr_table) + sizeof(((tdx_module_global_t *)0)->num_of_tdmr_entries) + sizeof(((tdx_module_global_t *)0)->hkid) + sizeof(((tdx_module_global_t *)0)->pkg_config_bitmap)) + (((4 * 0x400ULL)) - 1)) & (~(((4 * 0x400ULL)) - 1)) )) / (4 * 0x400ULL))))
    {
                                                      ;
        return 0xC000050A00000000ULL;
    }
    return 0x0000000000000000ULL;
}
api_error_type tdh_sys_init(void)
{
    bool_t global_lock_acquired = ((bool_t)0);
    tdx_module_global_t* tdx_global_data_ptr = get_global_data();
    tdx_module_local_t *tdx_local_data_ptr = get_local_data();
    api_error_type retval = 0x8000020200000000ULL;
    api_error_type err;
    ia32_tsx_ctrl_t tsx_ctrl_original = { .raw = 0 };
    ia32_tsx_ctrl_t tsx_ctrl_modified = { .raw = 0 };
    bool_t tsx_ctrl_modified_flag = ((bool_t)0);
    td_param_attributes_t attributes_fixed0;
    td_param_attributes_t attributes_fixed1;
    uint64_t reserved_rcx = tdx_local_data_ptr->vmm_regs.rcx;
    tdx_local_data_ptr->vmm_regs.rcx = 0;
    tdx_local_data_ptr->vmm_regs.rdx = 0;
    tdx_local_data_ptr->vmm_regs.r8 = 0;
    tdx_local_data_ptr->vmm_regs.r9 = 0;
    tdx_local_data_ptr->vmm_regs.r10 = 0;
    if (acquire_sharex_lock_ex(&tdx_global_data_ptr->global_lock) != LOCK_RET_SUCCESS)
    {
                                                    ;
        retval = 0x8000020200000000ULL;
        goto EXIT;
    }
    global_lock_acquired = ((bool_t)1);
    if (reserved_rcx != 0)
    {
                                             ;
        retval = api_error_with_operand_id(0xC000010000000000ULL, 1ULL);
        goto EXIT;
    }
    if (tdx_global_data_ptr->global_state.sys_state != SYSINIT_PENDING)
    {
                                                                                            ;
        retval = 0xC000050000000000ULL;
        goto EXIT;
    }
    if ((err = check_platform_config_and_cpu_enumeration(tdx_global_data_ptr, &tsx_ctrl_modified_flag,
                                                         &tsx_ctrl_original, &tsx_ctrl_modified))!= 0x0000000000000000ULL)
    {
                                                                 ;
        retval = err;
        goto EXIT;
    }
    seam_ops_capabilities_t caps = {.raw = ia32_seamops_capabilities()};
    if (!is_td_preserving_available(caps))
    {
                                                                     ;
        retval = 0xC000050D00000000ULL;
        goto EXIT;
    }
    tdx_global_data_ptr->seam_capabilities = caps;
    uint64_t seamdb_size;
    if ((err = check_module_build_time_defs(tdx_global_data_ptr)) != 0x0000000000000000ULL)
    {
                                                             ;
        retval = err;
        goto EXIT;
    }
    uint64_t result = ia32_seamops_seamdb_getref(&tdx_global_data_ptr->seamdb_index,
                                                 &tdx_global_data_ptr->seamdb_nonce,
                                                 &seamdb_size);
    if ( __builtin_expect((!((result == 0))), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_SYS_INIT_LEAF) & 0xFF)), 20); };
    tdx_global_data_ptr->seamverifyreport_available = ((caps.raw & (uint64_t)(1ULL<<(6))) != 0);
    attributes_fixed0.raw = (0x1 | (uint64_t)(1ULL<<(29)) | (uint64_t)(1ULL<<(30)) | (uint64_t)(1ULL<<(63)) | (uint64_t)(1ULL<<(28)) | (uint64_t)(1ULL<<(27)));
    attributes_fixed1.raw = 0x0;
    if (!tdx_global_data_ptr->lass_supported)
    {
        attributes_fixed0.raw &= ~(uint64_t)(1ULL<<(27));
    }
    tdx_global_data_ptr->attributes_fixed0 = attributes_fixed0.raw;
    tdx_global_data_ptr->attributes_fixed1 = attributes_fixed1.raw;
    config_flags_t config_flags_fixed0 = { .raw = ((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(1)) | (uint64_t)(1ULL<<(2))) };
    config_flags_t config_flags_fixed1 = { .raw = 0x0 };
    if (tdx_global_data_ptr->max_pa <= 48)
    {
        config_flags_fixed1.gpaw = 0;
    }
    tdx_global_data_ptr->config_flags_fixed0.raw = config_flags_fixed0.raw;
    tdx_global_data_ptr->config_flags_fixed1.raw = config_flags_fixed1.raw;
    if (tdx_init_stack_canary() != 0x0000000000000000ULL)
    {
        retval = 0x8000020300000000ULL;
        goto EXIT;
    }
    tdx_init_global_data(tdx_global_data_ptr);
    retval = 0x0000000000000000ULL;
    EXIT:
    if (tsx_ctrl_modified_flag)
    {
        ia32_wrmsr(0x122, tsx_ctrl_original.raw);
    }
    if (global_lock_acquired)
    {
        release_sharex_lock_ex(&tdx_global_data_ptr->global_lock);
    }
    return retval;
}
int main() {
    init_tdx_general();
    init_vmm_dispatcher();
    tdh_sys_init__common_precond();
    tdh_sys_init__invalid_input_rcx();
    tdh_sys_init__common_postcond();
    return 0;
}
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
typedef union cpuid_1a_eax_u
{
    struct
    {
        uint32_t native_model_id : 24;
        uint32_t core_type : 8;
    };
    uint32_t raw;
} cpuid_1a_eax_t;
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
extern unsigned long __VERIFIER_nondet_ulong();
static inline uint8_t TDXFV_NONDET_uint8t() { return __VERIFIER_nondet_uchar(); }
static inline uint16_t TDXFV_NONDET_uint16t() { return __VERIFIER_nondet_ushort(); }
static inline uint64_t TDXFV_NONDET_uint64t() { return __VERIFIER_nondet_ulong(); }
static inline bool_t TDXFV_NONDET_bool() {
    if (TDXFV_NONDET_uint8t()) {
        return ((bool_t)1);
    } else {
        return ((bool_t)0);
    }
}
void TDXFV_NONDET_custom_type(void* base, unsigned int size) {
    for (int i = 0; i < size; i++) {
        *((char*)base + i) = TDXFV_NONDET_uint8t();
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
api_error_type tdh_mng_add_cx(uint64_t tdcx_pa, uint64_t tdr_pa);


void tdx_report_error_and_halt(uint32_t source_id, uint32_t code);
void tdx_arch_fatal_error(void);

extern bool_t fv_exception_tracker_gp;
static inline void ia32_invalidate_tlb_entries(uint64_t addr)
{
    TDXFV_ABST_incomplete();
}
static inline void ia32_clear_ac( void )
{
    TDXFV_ABST_incomplete();
}
static inline void ia32_set_ac( void )
{
    TDXFV_ABST_incomplete();
}
static inline void ia32_ud2( void )
{
    TDXFV_ABST_incomplete();
    abort();
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
static inline uint16_t _lock_cmpxchg_16b(uint16_t cmp_val, uint16_t set_val, uint16_t *sem)
{
    if (cmp_val == *sem) {
        *sem = set_val;
        return cmp_val;
    } else {
        return *sem;
    }
}
static inline uint16_t _lock_xadd_16b(uint16_t *mem, uint16_t quantum)
{
    *mem = TDXFV_NONDET_uint16t();
    return TDXFV_NONDET_uint16t();
}
static inline void _lock_or_16b(uint16_t *mem, uint16_t quantum)
{
    *mem = TDXFV_NONDET_uint16t();
}
static inline void _lock_and_16b(uint16_t *mem, uint16_t quantum)
{
    *mem = TDXFV_NONDET_uint16t();
}
static inline void movdir64b(const void *src, uint64_t dst)
{
    for (int i = 0; i < 8; i++) {
        *((uint64_t*)src + i) = *((uint64_t*)dst + i);
    }
}
static inline void lfence(void)
{
}
static inline void mfence(void)
{
}
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
static inline void set_pamt_entry_owner(pamt_entry_t* pamt_entry, pa_t owner)
{
    pamt_entry->owner = owner.page_4k_num;
}
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
typedef enum
{
    TDX_RANGE_RO = 0,
    TDX_RANGE_RW = 1
} mapping_type_t;
void* map_pa(void* pa, mapping_type_t mapping_type);
void free_la(void* la);
void* map_continuous_pages(uint64_t* pa_array, uint16_t array_size, mapping_type_t mapping_type,
                           uint16_t starting_static_keyhole);

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
typedef long unsigned int size_t;
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

                                           ;
                                         ;
                                          ;
                                                  ;
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
static inline void fill_cachelines_no_sfence(void* dst, uint8_t* cacheline_with_value, uint64_t num_of_cachelines)
{
                                                                ;
                                                                                 ;
    uint64_t tmp_dst = (uint64_t)dst;
    for (uint64_t i = 0; i < num_of_cachelines; i++, tmp_dst+=64)
    {
        movdir64b(cacheline_with_value, tmp_dst);
    }
}
static inline void fill_cachelines(void* dst, uint8_t* cacheline_with_value, uint64_t num_of_cachelines)
{
    fill_cachelines_no_sfence(dst, cacheline_with_value, num_of_cachelines);
    mfence();
}
static inline void fill_area_cacheline(void* dst, uint64_t nBytes, uint64_t val64)
{
                                                         ;
                                                              ;
    __attribute__ ((aligned(64))) uint64_t chunk[64 / sizeof(uint64_t)];
    for (uint32_t i = 0; i < 64 / sizeof(uint64_t); i++)
    {
        chunk[i] = val64;
    }
    fill_cachelines(dst, (uint8_t*)chunk, nBytes/64);
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
bool_t generate_256bit_random(uint256_t* rand);
typedef enum sept_state_mask_e
{
    SEPT_STATE_FREE_MASK = ( (((uint64_t)(1ULL<<(0)) & (0xe)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0xe)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0xe)) >> 5) << 6)),
    SEPT_STATE_NL_MAPPED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x0)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x0)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x0)) >> 5) << 6)),
    SEPT_STATE_NL_BLOCKED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x8)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x8)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x8)) >> 5) << 6)),
    SEPT_STATE_MAPPED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x60)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x60)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x60)) >> 5) << 6)),
    SEPT_STATE_BLOCKED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x68)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x68)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x68)) >> 5) << 6)),
    SEPT_STATE_REMOVED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0xc)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0xc)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0xc)) >> 5) << 6)),
    SEPT_STATE_BLOCKEDW_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x64)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x64)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x64)) >> 5) << 6)),
    SEPT_STATE_EXP_BLOCKEDW_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x66)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x66)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x66)) >> 5) << 6)),
    SEPT_STATE_EXP_DIRTY_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x63)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x63)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x63)) >> 5) << 6)),
    SEPT_STATE_EXP_DIRTY_BLOCKEDW_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x67)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x67)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x67)) >> 5) << 6)),
    SEPT_STATE_PEND_BLOCKEDW_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x74)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x74)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x74)) >> 5) << 6)),
    SEPT_STATE_PEND_EXP_BLOCKEDW_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x76)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x76)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x76)) >> 5) << 6)),
    SEPT_STATE_PEND_EXP_DIRTY_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x73)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x73)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x73)) >> 5) << 6)),
    SEPT_STATE_PEND_EXP_DIRTY_BLOCKEDW_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x77)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x77)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x77)) >> 5) << 6)),
    SEPT_STATE_PEND_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x70)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x70)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x70)) >> 5) << 6)),
    SEPT_STATE_PEND_BLOCKED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x78)) << 9) | ((((((uint64_t)(1ULL<<(4)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(4)))) & (0x78)) >> 1) << 53) | ((((((uint64_t)(1ULL<<(6)) - (uint64_t)(1ULL<<(5)) + (uint64_t)(1ULL<<(6)))) & (0x78)) >> 5) << 6)),
    SEPT_STATE_L2_FREE_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x0)) << 55) | ((((((uint64_t)(1ULL<<(2)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(2)))) & (0x0)) >> 1) << 6)),
    SEPT_STATE_L2_NL_MAPPED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x8)) << 55) | ((((((uint64_t)(1ULL<<(2)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(2)))) & (0x8)) >> 1) << 6)),
    SEPT_STATE_L2_NL_BLOCKED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x1)) << 55) | ((((((uint64_t)(1ULL<<(2)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(2)))) & (0x1)) >> 1) << 6)),
    SEPT_STATE_L2_MAPPED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x6)) << 55) | ((((((uint64_t)(1ULL<<(2)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(2)))) & (0x6)) >> 1) << 6)),
    SEPT_STATE_L2_BLOCKED_MASK = ( (((uint64_t)(1ULL<<(0)) & (0x7)) << 55) | ((((((uint64_t)(1ULL<<(2)) - (uint64_t)(1ULL<<(1)) + (uint64_t)(1ULL<<(2)))) & (0x7)) >> 1) << 6))
} sept_state_mask_t;
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
void tdxfv_abst_exception_init();
void tdxfv_abst_vcpu_init();

void tdh_mng_addcx__common_precond() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_leaf_and_version_t leaf_opcode;
    leaf_opcode.raw = local_data->vmm_regs.rax;
    assume_abort_if_not(leaf_opcode.leaf == TDH_MNG_ADDCX_LEAF);
}
void tdh_mng_addcx__invalid_state_pamt_metadata() {
    tdx_module_local_t* local_data = get_local_data();
    tdx_module_global_t* global_data = get_global_data();
    bool_t precond = ((bool_t)1);
    assume_abort_if_not(((((pa_t) local_data->vmm_regs.rcx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);
    assume_abort_if_not(((((pa_t) local_data->vmm_regs.rdx).full_pa & global_data->hkid_mask) >> global_data->hkid_start_bit) == 0);
    assume_abort_if_not(tdr_fv.management_fields.fatal == ((bool_t)0));
    assume_abort_if_not(tdr_fv.management_fields.num_tdcx <= MAX_NUM_TDCS_PAGES);
    assume_abort_if_not(tdr_fv.management_fields.lifecycle_state == TD_KEYS_CONFIGURED);
    pa_t tdr_pa = { .raw = local_data->vmm_regs.rdx };
    pamt_block_t tdr_pamt_block;
    pamt_entry_t* tdr_pamt_entry_ptr = ((void*)0);
    bool_t tdr_locked_flag = ((bool_t)0);
    tdr_t* tdr_ptr = ((void*)0);
    api_error_type fwd_eval_check_tdr = check_lock_and_map_explicit_tdr(tdr_pa, 1ULL, 1, TDX_LOCK_EXCLUSIVE,
        PT_TDR, &tdr_pamt_block, &tdr_pamt_entry_ptr, &tdr_locked_flag, &tdr_ptr);
    assume_abort_if_not(fwd_eval_check_tdr == 0x0000000000000000ULL);
    assume_abort_if_not(tdr_pamt_entry_ptr != ((void*)0));
    assume_abort_if_not(tdr_ptr != ((void*)0));
    precond = precond && (tdr_pamt_entry_ptr->pt == PT_TDR);
    precond = precond && (local_data->vp_ctx.tdr_pamt_entry->pt == PT_TDR);
    pa_t tdcx_pa = { .raw = local_data->vmm_regs.rcx };
    pamt_block_t tdcx_pamt_block;
    pamt_entry_t* tdcx_pamt_entry_ptr = ((void*)0);
    bool_t tdcx_locked_flag = ((bool_t)0);
    tdr_t* tdcx_ptr = ((void*)0);
    api_error_type fwd_eval_check_hpa = check_lock_and_map_explicit_private_4k_hpa(tdcx_pa, 1ULL, tdr_ptr, 1, TDX_LOCK_EXCLUSIVE, PT_NDA, &tdcx_pamt_block, &tdcx_pamt_entry_ptr, &tdcx_locked_flag, (void**) &tdcx_ptr);
    assume_abort_if_not(fwd_eval_check_hpa == 0x0000000000000000ULL);
    assume_abort_if_not(tdcx_pamt_entry_ptr != ((void*)0));
    precond = precond && (tdcx_pamt_entry_ptr->pt == PT_NDA);
    assume_abort_if_not(precond == ((bool_t)0));
    local_data->vmm_regs.rax = tdh_mng_add_cx(local_data->vmm_regs.rcx, local_data->vmm_regs.rdx);
    __VERIFIER_assert(local_data->vmm_regs.rax == 0xC000030000000000ULL);
}
void tdh_mng_addcx__common_postcond() {
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
extern unsigned short __VERIFIER_nondet_ushort(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern unsigned long __VERIFIER_nondet_ulong(void);

static inline void TDXFV_NONDET_struct_tdx_module_local_t(tdx_module_local_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(tdx_module_local_t));
}
static inline void TDXFV_NONDET_struct_tdx_module_global_t(tdx_module_global_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(tdx_module_global_t));
}
static inline void TDXFV_NONDET_struct_sysinfo_table_t(sysinfo_table_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(sysinfo_table_t));
}
static inline void TDXFV_NONDET_struct_tdr_t(tdr_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(tdr_t));
}
static inline void TDXFV_NONDET_struct_tdcs_t(tdcs_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(tdcs_t));
}
static inline void TDXFV_NONDET_struct_tdvps_t(tdvps_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(tdvps_t));
}
static inline void TDXFV_NONDET_struct_tdmr_info_entry_t(tdmr_info_entry_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(tdmr_info_entry_t));
}
static inline void TDXFV_NONDET_struct_gprs_state_t(gprs_state_t* dest) {
    TDXFV_NONDET_custom_type(dest, sizeof(gprs_state_t));
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
api_error_type tdh_mng_add_cx(uint64_t target_tdcx_pa, uint64_t target_tdr_pa)
{
    pa_t tdcx_pa;
    void * tdcx_ptr;
    pamt_block_t tdcx_pamt_block;
    pamt_entry_t * tdcx_pamt_entry_ptr;
    bool_t tdcx_locked_flag = ((bool_t)0);
    pa_t tdr_pa;
    tdr_t * tdr_ptr;
    pamt_block_t tdr_pamt_block;
    pamt_entry_t * tdr_pamt_entry_ptr;
    bool_t tdr_locked_flag = ((bool_t)0);
    tdcs_t * tdcs_p = ((void*)0);
    uint32_t tdcx_index_num;
    api_error_type return_val = 0xFFFFFFFFFFFFFFFFULL;
    tdcx_pa.raw = target_tdcx_pa;
    tdr_pa.raw = target_tdr_pa;
    return_val = check_lock_and_map_explicit_tdr(tdr_pa,
                                                 2ULL,
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
    if (tdr_ptr->management_fields.fatal)
    {
                                         ;
        return_val = 0xE000060400000000ULL;
        goto EXIT;
    }
    if (tdr_ptr->management_fields.lifecycle_state != TD_KEYS_CONFIGURED)
    {
                                                   ;
        return_val = 0x8000081000000000ULL;
        goto EXIT;
    }
    tdcx_index_num = tdr_ptr->management_fields.num_tdcx;
    if (tdcx_index_num > (MAX_NUM_TDCS_PAGES-1))
    {
                                                                                                                      ;
        return_val = 0xC000061000000000ULL;
        goto EXIT;
    }
    return_val = check_lock_and_map_explicit_private_4k_hpa(tdcx_pa,
                                                            1ULL,
                                                            tdr_ptr,
                                                            TDX_RANGE_RW,
                                                            TDX_LOCK_EXCLUSIVE,
                                                            PT_NDA,
                                                            &tdcx_pamt_block,
                                                            &tdcx_pamt_entry_ptr,
                                                            &tdcx_locked_flag,
                                                            (void**)&tdcx_ptr);
    if (return_val != 0x0000000000000000ULL)
    {
                                                                                 ;
        goto EXIT;
    }
    if (tdcx_index_num == MSR_BITMAPS_PAGE_INDEX)
    {
        fill_area_cacheline(tdcx_ptr, (4 * 0x400ULL), (~(uint64_t)0));
    }
    else if (tdcx_index_num == SEPT_ROOT_PAGE_INDEX)
    {
        fill_area_cacheline(tdcx_ptr, (4 * 0x400ULL), (SEPT_STATE_FREE_MASK | (uint64_t)(1ULL<<(63))));
    }
    else
    {
        fill_area_cacheline(tdcx_ptr, (4 * 0x400ULL), (SEPT_STATE_L2_FREE_MASK));
    }
    if ( __builtin_expect((!(__builtin_offsetof(tdcs_t, management_fields) + __builtin_offsetof(tdcs_management_fields_t, op_state) <= (4 * 0x400ULL) - sizeof(tdcs_p->management_fields.op_state))), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_MNG_ADDCX_LEAF) & 0xFF)), 0); };
    if ( __builtin_expect((!(0 == OP_STATE_UNINITIALIZED)), 0) ) { ; tdx_report_error_and_halt((0xB000 | ((TDH_MNG_ADDCX_LEAF) & 0xFF)), 0); };
    if ((tdcx_index_num + 1) >= MIN_NUM_TDCS_PAGES)
    {
        tdcs_p = map_implicit_tdcs(tdr_ptr, TDX_RANGE_RW, ((bool_t)0));
        if ((tdcx_index_num + 1) == MIN_NUM_TDCS_PAGES)
        {
            if (!generate_256bit_random(&tdcs_p->migration_fields.mig_enc_key))
            {
                                                                         ;
                return_val = 0x8000020300000000ULL;
                goto EXIT;
            }
        }
        else
        {
            if (!op_state_is_seamcall_allowed(TDH_MNG_ADDCX_LEAF, tdcs_p->management_fields.op_state, ((bool_t)0)))
            {
                                                                                                   ;
                return_val = 0xC000060800000000ULL;
                goto EXIT;
            }
        }
    }
    tdr_ptr->management_fields.tdcx_pa[tdcx_index_num] = assign_hkid_to_hpa(tdr_ptr, tdcx_pa).raw;
    tdr_ptr->management_fields.num_tdcx = (tdcx_index_num + 1);
    tdr_ptr->management_fields.chldcnt++;
    tdcx_pamt_entry_ptr->pt = PT_TDCX;
    set_pamt_entry_owner(tdcx_pamt_entry_ptr, tdr_pa);
EXIT:
    if (tdcs_p)
    {
        free_la(tdcs_p);
    }
    if (tdr_locked_flag)
    {
        pamt_unwalk(tdr_pa, tdr_pamt_block, tdr_pamt_entry_ptr, TDX_LOCK_EXCLUSIVE, PT_4KB);
        free_la(tdr_ptr);
    }
    if (tdcx_locked_flag)
    {
        pamt_unwalk(tdcx_pa, tdcx_pamt_block, tdcx_pamt_entry_ptr, TDX_LOCK_EXCLUSIVE, PT_4KB);
        free_la(tdcx_ptr);
    }
    return return_val;
}
int main() {
    init_tdx_general();
    init_vmm_dispatcher();
    tdh_mng_addcx__common_precond();
    tdh_mng_addcx__invalid_state_pamt_metadata();
    tdh_mng_addcx__common_postcond();
    return 0;
}
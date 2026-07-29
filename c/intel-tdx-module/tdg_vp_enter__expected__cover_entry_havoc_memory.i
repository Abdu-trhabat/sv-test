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
extern unsigned long __VERIFIER_nondet_ulong();
static inline uint8_t TDXFV_NONDET_uint8t() { return __VERIFIER_nondet_uchar(); }
static inline uint64_t TDXFV_NONDET_uint64t() { return __VERIFIER_nondet_ulong(); }
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
typedef union l2_enter_guest_state_u
{
    struct
    {
        gprs_state_t gpr_state;
        uint64_t rflags;
        uint64_t rip;
        uint64_t ssp;
        uint16_t interrupt_status;
    };
    struct
    {
        uint64_t gprs[16];
        uint8_t other_regs[26];
    };
} l2_enter_guest_state_t;
typedef union td_exit_qualification_u
{
    struct
    {
        union
        {
            uint32_t exit_qualification;
            struct
            {
                uint16_t gpr_select;
                uint16_t xmm_select;
            };
        };
        uint16_t vm : 2,
                 reserved_0 : 14;
        uint16_t reserved_1;
    };
    uint64_t raw;
} td_exit_qualification_t;
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
            cf : 1,
            reserved_0 : 1,
            pf : 1,
            reserved_1 : 1,
            af : 1,
            reserved_2 : 1,
            zf : 1,
            sf : 1,
            tf : 1,
            ief : 1,
            df : 1,
            of : 1,
            iopl : 2,
            nt : 1,
            reserved_3 : 1,
            rf : 1,
            vm : 1,
            ac : 1,
            vif : 1,
            vip : 1,
            id : 1,
            reserved_4 : 42;
    };
    uint64_t raw;
} ia32_rflags_t;
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
typedef union ia32e_ept_u {
    struct {
        uint64_t
            r : 1,
            w : 1,
            x : 1,
            reserved_0 : 5,
            accessed : 1,
            dirty : 1,
            xu : 1,
            ignore_0 : 1,
            base : 40,
            ignore_1 : 12;
    } fields_ps;
    struct {
        uint64_t
            r : 1,
            w : 1,
            x : 1,
            mt : 3,
            ipat : 1,
            leaf : 1,
            accessed : 1,
            ignore_0 : 1,
            xu : 1,
            ignore_1 : 1,
            reserved_0 : 18,
            base : 22,
            ignore_2 : 11,
            supp_ve : 1;
    } fields_1g;
    struct {
        uint64_t
            r : 1,
            w : 1,
            x : 1,
            mt : 3,
            ipat : 1,
            leaf : 1,
            accessed : 1,
            ignore_0 : 1,
            xu : 1,
            ignore_1 : 1,
            reserved_0 : 9,
            base : 31,
            ignore_2 : 11,
            supp_ve : 1;
    } fields_2m;
    struct {
        uint64_t
            r : 1,
            w : 1,
            x : 1,
            mt : 3,
            ipat : 1,
            ignore_0 : 1,
            accessed : 1,
            ignore_1 : 1,
            xu : 1,
            ignore_2 : 1,
            base : 40,
            ignore_3 : 11,
            supp_ve : 1;
    } fields_4k;
    uint64_t raw;
    struct {
        uint64_t
            rwx : 3,
            ignore : 61;
    } present;
} ia32e_ept_t;
typedef union ia32e_sept_u {
    struct {
        uint64_t
            r_ps : 1,
            w_ps : 1,
            x_ps : 1,
            reserved_0 : 5,
            ignore_0 : 1,
            reserved_1 : 3,
            base_ps : 40,
            reserved_52 : 4,
            tdp_ps : 1,
            reserved_2 : 7;
    } fields_ps;
    struct {
        uint64_t
            reserved_0_1g : 30,
            base_1g : 22,
            unused_1g : 12;
    } fields_1g;
    struct {
        uint64_t
            reserved_0_2m : 21,
            base_2m : 31,
            unused_2m : 12;
    } fields_2m;
    struct {
        uint64_t
            r : 1,
            w : 1,
            x : 1,
            mt : 3,
            ipat : 1,
            leaf : 1,
            a : 1,
            d : 1,
            reserved_0 : 1,
            tdel : 1,
            base : 40,
            hp : 1,
            tdex : 1,
            tdbw : 1,
            tdb : 1,
            tdp : 1,
            vpw : 1,
            pw : 1,
            ignored_0 : 1,
            sss_tdsa : 1,
            tdup : 1,
            reserved_1 : 1,
            supp_ve : 1;
    };
    uint64_t raw;
    struct {
        uint64_t
            rwx : 3,
            ignore_0 : 9,
            accept_counter : 9,
            ignore_1 : 37,
            tdal : 3,
            ignore_2 : 3;
    };
    struct {
        uint64_t
            reserved_0 : 6,
            state_encoding_5_6 : 2,
            reserved_1 : 1,
            state_encoding_0 : 1,
            reserved_2 : 43,
            state_encoding_1_4 : 4,
            reserved_3 : 6,
            supp_ve : 1;
    } state_encoding;
    struct {
        uint64_t
            placeholder_11_0 : 12,
            mig_epoch : 32,
            mig_epoch_valid : 1,
            reserved_51_45 : 7,
            placeholder_63_52: 12;
    };
    struct
    {
        uint64_t
            r : 1,
            w : 1,
            x : 1,
            mt0_tdrd : 1,
            mt1_tdxs : 1,
            mt2_tdxu : 1,
            ipat_tdmem : 1,
            ps : 1,
            a : 1,
            d : 1,
            xu : 1,
            reserved_11 : 1,
            hpa : 40,
            reserved_52 : 1,
            reserved_53 : 1,
            reserved_54 : 1,
            tdb : 1,
            reserved_56 : 1,
            vgp : 1,
            pwa : 1,
            tdwr : 1,
            sss : 1,
            reserved_61 : 1,
            reserved_62 : 1,
            sve : 1;
    } l2_encoding;
} ia32e_sept_t;
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
typedef union ia32e_paging_table_u {
  ia32e_sept_t sept[512];
  ia32e_ept_t ept[512];
} ia32e_paging_table_t;
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
uint64_t tdxfv_abst_msr_read(uint64_t addr);
void tdxfv_abst_msr_write(uint64_t addr, uint64_t value);
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
static inline void ia32_invalidate_tlb_entries(uint64_t addr)
{
    TDXFV_ABST_incomplete();
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
static inline void ia32_wrmsr(uint64_t addr, uint64_t value)
{
    tdxfv_abst_msr_write(addr, value);
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
static inline void ia32_xsaves(void* xsave_area, uint64_t xfam)
{
    TDXFV_ABST_incomplete();
}
static inline void ia32_xrstors(const void* xsave_area, uint64_t xfam)
{
    TDXFV_ABST_incomplete();
}
static inline void ia32_load_cr2(uint64_t cr2)
{
    tdxfv_abst_vcpu_write_cr2(cr2);
}
static inline void ia32_load_dr0(uint64_t dr0)
{
    tdxfv_abst_vcpu_write_dr0(dr0);
}
static inline void ia32_load_dr1(uint64_t dr1)
{
    tdxfv_abst_vcpu_write_dr1(dr1);
}
static inline void ia32_load_dr2(uint64_t dr2)
{
    tdxfv_abst_vcpu_write_dr2(dr2);
}
static inline void ia32_load_dr3(uint64_t dr3)
{
    tdxfv_abst_vcpu_write_dr3(dr3);
}
static inline void ia32_load_dr6(uint64_t dr6)
{
    tdxfv_abst_vcpu_write_dr6(dr6);
}
static inline uint64_t ia32_store_cr2(void)
{
    return tdxfv_abst_vcpu_read_cr2();
}
static inline uint64_t ia32_store_dr0(void)
{
    return tdxfv_abst_vcpu_read_dr0();
}
static inline uint64_t ia32_store_dr1(void)
{
    return tdxfv_abst_vcpu_read_dr1();
}
static inline uint64_t ia32_store_dr2(void)
{
    return tdxfv_abst_vcpu_read_dr2();
}
static inline uint64_t ia32_store_dr3(void)
{
    return tdxfv_abst_vcpu_read_dr3();
}
static inline uint64_t ia32_store_dr6(void)
{
    return tdxfv_abst_vcpu_read_dr6();
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
static inline uint16_t _xchg_16b(uint16_t *mem, uint16_t quantum)
{
    uint16_t temp = *mem;
    *mem = quantum;
    return temp;
}
static inline uint16_t _lock_xadd_16b(uint16_t *mem, uint16_t quantum)
{
    uint16_t old_value = *mem;
    *mem = old_value + quantum;
    return old_value;
}
static inline void _lock_and_16b(uint16_t *mem, uint16_t quantum)
{
    *mem &= quantum;
}
static inline void lfence(void)
{
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
typedef enum
{
    LOCK_RET_FAIL, LOCK_RET_SUCCESS, LOCK_RET_FAIL_HOST_PRIORITY
} lock_return_t;
typedef uint8_t mutex_lock_t;
typedef enum
{
    SHAREX_FREE = 0, SHAREX_SINGLE_READER = (uint64_t)(1ULL<<(1)), SHAREX_EXCLUSIVE_LOCK = (uint64_t)(1ULL<<(0))
} sharex_state_t;
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
static inline lock_return_t acquire_sharex_lock_sh(sharex_lock_t * lock_ptr)
{
    sharex_lock_t retval;
                                      ;
    retval.raw = _lock_xadd_16b(&lock_ptr->raw, 2);
    if ( __builtin_expect((!((retval.raw != 0xFFFE))), 0) ) { ; tdx_report_error_and_halt(0x0001, 1); };
    return (retval.exclusive == 0) ? LOCK_RET_SUCCESS : LOCK_RET_FAIL;
}
static inline lock_return_t acquire_sharex_lock_ex(sharex_lock_t * lock_ptr)
{
    sharex_lock_t retval;
                                      ;
    retval.raw = _lock_cmpxchg_16b(SHAREX_FREE, SHAREX_EXCLUSIVE_LOCK, &lock_ptr->raw);
    return (retval.raw == SHAREX_FREE) ? LOCK_RET_SUCCESS : LOCK_RET_FAIL;
}
static inline lock_return_t acquire_sharex_lock(sharex_lock_t * lock_ptr, lock_type_t lock_type)
{
    if (lock_type == TDX_LOCK_EXCLUSIVE)
    {
        return acquire_sharex_lock_ex(lock_ptr);
    }
    else if (lock_type == TDX_LOCK_SHARED)
    {
        return acquire_sharex_lock_sh(lock_ptr);
    }
    if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0001, 2); };
    return LOCK_RET_FAIL;
}
static inline void release_sharex_lock_sh(sharex_lock_t * lock_ptr)
{
    sharex_lock_t retval;
                                      ;
    retval.raw = _lock_xadd_16b(&lock_ptr->raw, (uint16_t)-2);
    if ( __builtin_expect((!(!(retval.exclusive == 1 || retval.counter == 0))), 0) ) { ; tdx_report_error_and_halt(0x0001, 3); };
}
static inline void release_sharex_lock_ex(sharex_lock_t * lock_ptr)
{
    sharex_lock_t retval;
                                      ;
    retval.raw = _xchg_16b(&lock_ptr->raw, SHAREX_FREE);
    if ( __builtin_expect((!(retval.exclusive == 1)), 0) ) { ; tdx_report_error_and_halt(0x0001, 4); };
}
static inline void release_sharex_lock(sharex_lock_t * lock_ptr, lock_type_t lock_type)
{
    if (lock_type == TDX_LOCK_EXCLUSIVE)
    {
        release_sharex_lock_ex(lock_ptr);
    }
    else if (lock_type == TDX_LOCK_SHARED)
    {
        release_sharex_lock_sh(lock_ptr);
    }
    else
    {
        if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0001, 5); };
    }
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
typedef struct __attribute__ ((aligned(16))) ept_descriptor_s
{
    uint64_t ept;
    uint64_t reserved;
} ept_descriptor_t;
typedef struct __attribute__ ((aligned(16))) invvpid_descriptor_s
{
    union
    {
        struct
        {
            uint16_t vpid;
            uint16_t reserved[3];
        };
        uint64_t raw_low;
    };
    uint64_t la;
} invvpid_descriptor_t;
typedef enum invvpid_type_e
{
    INVVPID_INDIVIDUAL_ADDRESS = 0,
    INVVPID_SINGLE_CONTEXT = 1,
    INVVPID_ALL_CONTEXTS = 2,
    INVVPID_SINGLE_CONTEXT_RETAINING_GLOBAL = 3
} invvpid_type_t;
typedef union
{
    struct
    {
        uint64_t b0 : 1;
        uint64_t b1 : 1;
        uint64_t b2 : 1;
        uint64_t b3 : 1;
        uint64_t rsvd_0 : 8;
        uint64_t enable : 1;
        uint64_t rsvd_1 : 1;
        uint64_t bs : 1;
        uint64_t rsvd_2 : 1;
        uint64_t rtm : 1;
        uint64_t rsvd_3 : 47;
    };
    uint64_t raw;
} pending_debug_exception_t;
typedef enum {
    VMEXIT_REASON_EXCEPTION_OR_NMI = 0,
    VMEXIT_REASON_INTERRUPT = 1,
    VMEXIT_REASON_TRIPLE_FAULT = 2,
    VMEXIT_REASON_INIT_EVENT = 3,
    VMEXIT_REASON_SIPI_EVENT = 4,
    VMEXIT_REASON_SMI_IO_EVENT = 5,
    VMEXIT_REASON_SMI_OTHER_EVENT = 6,
    VMEXIT_REASON_INTERRUPT_WINDOW = 7,
    VMEXIT_REASON_NMI_WINDOW = 8,
    VMEXIT_REASON_TASK_SWITCH = 9,
    VMEXIT_REASON_CPUID_INSTRUCTION = 10,
    VMEXIT_REASON_GETSEC_INSTRUCTION = 11,
    VMEXIT_REASON_HLT_INSTRUCTION = 12,
    VMEXIT_REASON_INVD_INSTRUCTION = 13,
    VMEXIT_REASON_INVLPG_INSTRUCTION = 14,
    VMEXIT_REASON_RDPMC_INSTRUCTION = 15,
    VMEXIT_REASON_RDTSC_INSTRUCTION = 16,
    VMEXIT_REASON_RSM_INSTRUCTION = 17,
    VMEXIT_REASON_VMCALL_INSTRUCTION = 18,
    VMEXIT_REASON_VMCLEAR_INSTRUCTION = 19,
    VMEXIT_REASON_VMLAUNCH_INSTRUCTION = 20,
    VMEXIT_REASON_VMPTRLD_INSTRUCTION = 21,
    VMEXIT_REASON_VMPTRST_INSTRUCTION = 22,
    VMEXIT_REASON_VMREAD_INSTRUCTION = 23,
    VMEXIT_REASON_VMRESUME_INSTRUCTION = 24,
    VMEXIT_REASON_VMWRITE_INSTRUCTION = 25,
    VMEXIT_REASON_VMXOFF_INSTRUCTION = 26,
    VMEXIT_REASON_VMXON_INSTRUCTION = 27,
    VMEXIT_REASON_CR_ACCESS = 28,
    VMEXIT_REASON_DR_ACCESS = 29,
    VMEXIT_REASON_IO_INSTRUCTION = 30,
    VMEXIT_REASON_MSR_READ = 31,
    VMEXIT_REASON_MSR_WRITE = 32,
    VMEXIT_REASON_FAILED_VMENTER_GS = 33,
    VMEXIT_REASON_FAILED_VMENTER_MSR = 34,
    VMEXIT_REASON_VMEXIT_FAILURE = 35,
    VMEXIT_REASON_MWAIT_INSTRUCTION = 36,
    VMEXIT_REASON_MTF = 37,
    VMEXIT_REASON_MONITOR_INSTRUCTION = 39,
    VMEXIT_REASON_PAUSE_INSTRUCTION = 40,
    VMEXIT_REASON_FAILED_VMENTER_MC = 41,
    VMEXIT_REASON_C_STATE_SMI = 42,
    VMEXIT_REASON_TPR_BELOW_THRESHOLD = 43,
    VMEXIT_REASON_APIC_ACCESS = 44,
    VMEXIT_REASON_VIRTUALIZED_EOI = 45,
    VMEXIT_REASON_GDTR_IDTR_ACCESS = 46,
    VMEXIT_REASON_LDTR_TR_ACCESS = 47,
    VMEXIT_REASON_EPT_VIOLATION = 48,
    VMEXIT_REASON_EPT_MISCONFIGURATION = 49,
    VMEXIT_REASON_INVLEPT = 50,
    VMEXIT_REASON_RDTSCP = 51,
    VMEXIT_REASON_PREEMPTION_TIMER_EXPIRED = 52,
    VMEXIT_REASON_INVLVPID = 53,
    VMEXIT_REASON_WBINVD_INSTRUCTION = 54,
    VMEXIT_REASON_XSETBV_INSTRUCTION = 55,
    VMEXIT_REASON_APIC_WRITE = 56,
    VMEXIT_REASON_RDRAND_INSTRUCTION = 57,
    VMEXIT_REASON_INVPCID_INSTRUCTION = 58,
    VMEXIT_REASON_VMFUNC_INSTRUCTION = 59,
    VMEXIT_REASON_ENCLS_INSTRUCTION = 60,
    VMEXIT_REASON_RDSEED_INSTRUCTION = 61,
    VMEXIT_REASON_EPT_PML_FULL = 62,
    VMEXIT_REASON_XSAVES_INSTRUCTION = 63,
    VMEXIT_REASON_XRSTORS_INSTRUCTION = 64,
    VMEXIT_REASON_PCONFIG = 65,
    VMEXIT_REASON_SPP_INDUCED = 66,
    VMEXIT_REASON_UMWAIT = 67,
    VMEXIT_REASON_TPAUSE = 68,
    VMEXIT_REASON_LOADIWK_INSTRUCTION = 69,
    VMEXIT_REASON_ENCLV_INSTRUCTION = 70,
    VMEXIT_REASON_SGX_CONFLICT = 71,
    VMEXIT_REASON_ENQCMD_PASID_TRANSLATION_FAILURE = 72,
    VMEXIT_REASON_ENQCMDS_PASID_TRANSLATION_FAILURE = 73,
    VMEXIT_REASON_BUS_LOCK = 74,
    VMEXIT_REASON_NOTIFICATION = 75,
    VMEXIT_REASON_SEAMCALL = 76,
    VMEXIT_REASON_TDCALL = 77
} vm_exit_basic_reason_e;
typedef union vm_vmexit_exit_reason_s {
    struct
    {
        uint64_t basic_reason : 16;
        uint64_t reserved_0 : 10;
        uint64_t bus_lock_preempted : 1;
        uint64_t enclave_interruption : 1;
        uint64_t pending_mtf : 1;
        uint64_t parallel : 1;
        uint64_t reserved_1 : 1;
        uint64_t vmenter_fail : 1;
        uint64_t reserved_2 : 32;
    };
    uint64_t raw;
} vm_vmexit_exit_reason_t;
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
typedef union vmx_guest_inter_state_u
{
    struct
    {
        uint32_t blocking_by_sti : 1;
        uint32_t blocking_by_mov_ss : 1;
        uint32_t blocking_by_smi : 1;
        uint32_t blocking_by_nmi : 1;
        uint32_t enclave_interruption : 1;
        uint32_t reserved : 27;
    };
    uint64_t raw;
} vmx_guest_inter_state_t;
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
void pamt_unwalk(pa_t pa, pamt_block_t pamt_block, pamt_entry_t* pamt_entry_p,
                 lock_type_t leaf_lock_type, page_size_t leaf_size);
void pamt_implicit_release_lock(pamt_entry_t* pamt_entry, lock_type_t leaf_lock_type);
void pamt_implicit_release_lock(pamt_entry_t* pamt_entry, lock_type_t leaf_lock_type);
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
static inline uint32_t get_tdcs_sept_root_page_index(uint16_t vm_id)
{
    uint32_t index = (vm_id == 0) ? SEPT_ROOT_PAGE_INDEX :
                     L2_SEPT_ROOT_PAGE_BASE_INDEX + ((vm_id - 1) * L2_SEPT_ROOT_PAGE_BASE_INC);
                                                ;
    return index;
}
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
extern tdx_module_local_t* local_data_fv_ptr;
extern tdx_module_global_t* global_data_fv_ptr;
extern sysinfo_table_t* sysinfo_table_fv_ptr;
extern tdr_t* tdr_fv_ptr;
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
void fv_teardown_module_state();
void fv_setup_tdr();
void fv_teardown_tdr();
void fv_setup_tdcs();
void fv_teardown_tdcs();
void fv_setup_tdvps();
void fv_teardown_tdvps();
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
uint64_t tdxfv_abst_vcpu_read_cr2() { return fv_vcpu_cr2; } void tdxfv_abst_vcpu_write_cr2(uint64_t value) { fv_vcpu_cr2 = value; };
uint64_t tdxfv_abst_vcpu_read_dr0() { return fv_vcpu_dr0; } void tdxfv_abst_vcpu_write_dr0(uint64_t value) { fv_vcpu_dr0 = value; };
uint64_t tdxfv_abst_vcpu_read_dr1() { return fv_vcpu_dr1; } void tdxfv_abst_vcpu_write_dr1(uint64_t value) { fv_vcpu_dr1 = value; };
uint64_t tdxfv_abst_vcpu_read_dr2() { return fv_vcpu_dr2; } void tdxfv_abst_vcpu_write_dr2(uint64_t value) { fv_vcpu_dr2 = value; };
uint64_t tdxfv_abst_vcpu_read_dr3() { return fv_vcpu_dr3; } void tdxfv_abst_vcpu_write_dr3(uint64_t value) { fv_vcpu_dr3 = value; };
uint64_t tdxfv_abst_vcpu_read_dr6() { return fv_vcpu_dr6; } void tdxfv_abst_vcpu_write_dr6(uint64_t value) { fv_vcpu_dr6 = value; };
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
static inline void TDXFV_NONDET_struct_tdvps_t(tdvps_t* dest) {
    __VERIFIER_nondet_memory(dest, sizeof(tdvps_t));
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
void fv_setup_tdvps() {
    tdvps_fv_ptr = TDXFV_malloc(sizeof(tdvps_t));
    TDXFV_NONDET_struct_tdvps_t(tdvps_fv_ptr);
    assume_exit_if_not(fv_invariant_tdvps_t(tdvps_fv_ptr));
    do { assume_exit_if_not(local_data_fv_ptr->vp_ctx.tdvps == tdvps_fv_ptr); if (1) { local_data_fv_ptr->vp_ctx.tdvps = tdvps_fv_ptr; } } while (0);
    shadow_guest_gpr_state_precall = tdvps_fv_ptr->guest_state.gpr_state;
}
void fv_teardown_tdvps() {
    free(tdvps_fv_ptr);
}
tdx_module_local_t* local_data_fv_ptr;
tdx_module_global_t* global_data_fv_ptr;
sysinfo_table_t* sysinfo_table_fv_ptr;
tdr_t* tdr_fv_ptr;
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
void init_tdg_vp_xxx() {
    fv_setup_module_state();
    fv_setup_tdr();
    fv_setup_tdcs();
    fv_setup_tdvps();
    init_tdcall();
}
void close_tdg_vp_xxx() {
    fv_teardown_tdvps();
    fv_teardown_tdcs();
    fv_teardown_tdr();
    fv_teardown_module_state();
}
typedef struct sept_special_flags_s
{
    uint32_t public_state;
    bool_t live_export_allowed;
    bool_t paused_export_allowed;
    bool_t first_time_export_allowed;
    bool_t re_export_allowed;
    bool_t export_cancel_allowed;
    bool_t first_time_import_allowed;
    bool_t re_import_allowed;
    bool_t import_cancel_allowed;
    bool_t mapped_or_pending;
    bool_t any_exported;
    bool_t any_exported_and_dirty;
    bool_t any_exported_and_non_dirty;
    bool_t any_pending;
    bool_t any_pending_and_guest_acceptable;
    bool_t any_blocked;
    bool_t any_blockedw;
    bool_t guest_fully_accessible_leaf;
    bool_t tlb_tracking_required;
    bool_t guest_accessible_leaf;
    uint32_t index;
} sept_special_flags_t;
extern const sept_special_flags_t sept_special_flags_lookup[128];
const sept_special_flags_t sept_special_flags_lookup[128] = {
  [14] = {
    .public_state = 0,
    .live_export_allowed = 0,
    .paused_export_allowed = 0,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 1,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 0,
    .guest_accessible_leaf = 0,
    .index = 0
  },
  [12] = {
    .public_state = 5,
    .live_export_allowed = 0,
    .paused_export_allowed = 0,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 1,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 0,
    .guest_accessible_leaf = 0,
    .index = 1
  },
  [0] = {
    .public_state = 132,
    .live_export_allowed = 0,
    .paused_export_allowed = 0,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 2
  },
  [8] = {
    .public_state = 129,
    .live_export_allowed = 0,
    .paused_export_allowed = 0,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 1,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 3
  },
  [96] = {
    .public_state = 4,
    .live_export_allowed = 0,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 1,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 1,
    .import_cancel_allowed = 1,
    .mapped_or_pending = 1,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 1,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 1,
    .index = 4
  },
  [104] = {
    .public_state = 1,
    .live_export_allowed = 0,
    .paused_export_allowed = 0,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 1,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 5
  },
  [100] = {
    .public_state = 8,
    .live_export_allowed = 1,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 1,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 1,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 1,
    .index = 6
  },
  [102] = {
    .public_state = 9,
    .live_export_allowed = 1,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 1,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 1,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 1,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 1,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 0,
    .guest_accessible_leaf = 1,
    .index = 7
  },
  [99] = {
    .public_state = 11,
    .live_export_allowed = 0,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 0,
    .re_export_allowed = 1,
    .export_cancel_allowed = 1,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 1,
    .any_exported_and_dirty = 1,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 1,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 1,
    .index = 8
  },
  [103] = {
    .public_state = 12,
    .live_export_allowed = 1,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 0,
    .re_export_allowed = 1,
    .export_cancel_allowed = 1,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 1,
    .any_exported_and_dirty = 1,
    .any_exported_and_non_dirty = 0,
    .any_pending = 0,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 1,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 1,
    .index = 9
  },
  [112] = {
    .public_state = 2,
    .live_export_allowed = 0,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 1,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 1,
    .import_cancel_allowed = 1,
    .mapped_or_pending = 1,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 1,
    .any_pending_and_guest_acceptable = 1,
    .any_blocked = 0,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 10
  },
  [120] = {
    .public_state = 3,
    .live_export_allowed = 0,
    .paused_export_allowed = 0,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 1,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 1,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 11
  },
  [116] = {
    .public_state = 16,
    .live_export_allowed = 1,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 1,
    .re_export_allowed = 0,
    .export_cancel_allowed = 0,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 0,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 0,
    .any_pending = 1,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 1,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 12
  },
  [118] = {
    .public_state = 17,
    .live_export_allowed = 1,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 0,
    .re_export_allowed = 0,
    .export_cancel_allowed = 1,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 1,
    .any_exported_and_dirty = 0,
    .any_exported_and_non_dirty = 1,
    .any_pending = 1,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 1,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 0,
    .guest_accessible_leaf = 0,
    .index = 13
  },
  [115] = {
    .public_state = 19,
    .live_export_allowed = 0,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 0,
    .re_export_allowed = 1,
    .export_cancel_allowed = 1,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 1,
    .any_exported_and_dirty = 1,
    .any_exported_and_non_dirty = 0,
    .any_pending = 1,
    .any_pending_and_guest_acceptable = 1,
    .any_blocked = 0,
    .any_blockedw = 0,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 14
  },
  [119] = {
    .public_state = 20,
    .live_export_allowed = 1,
    .paused_export_allowed = 1,
    .first_time_export_allowed = 0,
    .re_export_allowed = 1,
    .export_cancel_allowed = 1,
    .first_time_import_allowed = 0,
    .re_import_allowed = 0,
    .import_cancel_allowed = 0,
    .mapped_or_pending = 0,
    .any_exported = 1,
    .any_exported_and_dirty = 1,
    .any_exported_and_non_dirty = 0,
    .any_pending = 1,
    .any_pending_and_guest_acceptable = 0,
    .any_blocked = 0,
    .any_blockedw = 1,
    .guest_fully_accessible_leaf = 0,
    .tlb_tracking_required = 1,
    .guest_accessible_leaf = 0,
    .index = 15
  }
};
typedef uint64_t vmcs_ptr_t;
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
static inline void ia32_invept(const ept_descriptor_t * ept_descriptor, uint64_t instruction)
{
    TDXFV_ABST_incomplete();
}
static inline bool_t ia32_invvpid(const invvpid_descriptor_t * invvpid_descriptor, invvpid_type_t instruction)
{
    TDXFV_ABST_incomplete();
    return TDXFV_NONDET_bool();
}

typedef union tdx_vpid_u
{
    struct
    {
        uint16_t vm : 2;
        uint16_t hkid : 14;
    };
    uint16_t raw;
} tdx_vpid_t;
static inline uint16_t compose_vpid(uint16_t vm_id, uint16_t hkid)
{
    tdx_vpid_t vpid;
    if ((vm_id >= 4) || (hkid >= 4096))
    {
        return 0;
    }
    vpid.vm = vm_id;
    vpid.hkid = hkid;
    return vpid.raw;
}
void init_module_lp_host_state_in_td_vmcs(tdx_module_local_t* ld_p);
void init_module_host_state_in_td_vmcs(void);
__attribute__((visibility("hidden"))) void tdx_tdexit_entry_point(void);
void tdx_return_to_td(bool_t launch_state, bool_t called_from_tdenter, gprs_state_t* gpr_state);
__attribute__((visibility("hidden"))) void tdx_tdentry_to_td(bool_t launch_state, gprs_state_t* gpr_state);
typedef enum
{
    TDX_RANGE_RO = 0,
    TDX_RANGE_RW = 1
} mapping_type_t;
void* map_pa(void* pa, mapping_type_t mapping_type);
void free_la(void* la);
typedef long unsigned int size_t;
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1)));

static inline bool_t get_gpa_shared_bit(uint64_t gpa, bool_t gpaw)
{
    uint16_t gpa_width_minus_1 = gpaw ? 51 : 47;
    return (gpa & (uint64_t)(1ULL<<(gpa_width_minus_1))) != 0;
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
static inline uint64_t leaf_ept_entry_to_hpa(ia32e_sept_t entry, uint64_t gpa, ept_level_t level)
{
    switch(level)
    {
        case LVL_PT:
        {
            return ((entry.base << 12) | (gpa & ((uint64_t) 0x0000000000000FFFLLU)));
        }
        case LVL_PD:
        {
            return (((uint64_t)(entry.fields_2m.base_2m) << 21) | (gpa & ((uint64_t) 0x00000000001FFFFFLLU)));
        }
        case LVL_PDPT:
        {
            return (((uint64_t)(entry.fields_1g.base_1g) << 30) | (gpa & ((uint64_t) 0x000000003FFFFFFFLLU)));
        }
        default:
        {
            if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0002, 0); };
            return 0;
        }
    }
}
void basic_memset(uint64_t dst, uint64_t dst_bytes, uint8_t val, uint64_t nbytes);
void basic_memset_to_zero(void * dst, uint64_t nbytes);
static inline void tdx_memcpy(void * dst, uint64_t dst_bytes, void * src, uint64_t nbytes)
{
    volatile uint64_t junk_a, junk_b;
    if ( __builtin_expect((!(dst_bytes >= nbytes)), 0) ) { ; tdx_report_error_and_halt(0x0002, 1); };
    memcpy((void*)dst, (void*)src, nbytes);
}
bool_t check_gpa_validity(
        pa_t gpa,
        bool_t gpaw,
        bool_t check_is_private
        );
api_error_type check_and_walk_private_gpa_to_leaf(
        tdcs_t* tdcs_p,
        uint64_t operand_id,
        pa_t gpa,
        uint16_t hkid,
        ia32e_sept_t** sept_entry_ptr,
        ept_level_t* level,
        ia32e_sept_t* cached_sept_entry
        );
static inline void set_seam_vmcs_as_active(void)
{
    uint64_t seam_vmcs_pa = get_global_data()->seamrr_base +
                            ((4 * 0x400ULL) * (get_local_data()->lp_info.lp_id + 1));
    ia32_vmptrld((vmcs_ptr_t*)seam_vmcs_pa);
    get_local_data()->vp_ctx.active_vmcs = ((uint16_t)(~0U));
}
static inline void current_vmcs_guest_rip_advance(uint64_t instruction_len)
{
    uint64_t current_vmm_rip;
    ia32_vmread(0x681EULL, &current_vmm_rip);
    if (instruction_len == 0)
    {
        ia32_vmread(0x440CULL, &instruction_len);
        if ( __builtin_expect((!(instruction_len != 0)), 0) ) { ; tdx_report_error_and_halt(0x0002, 1); };
    }
    ia32_vmwrite(0x681EULL, current_vmm_rip + instruction_len);
}
static inline void save_guest_td_extended_state(tdvps_t* tdvps_ptr, uint64_t xfam)
{
    ia32_xsetbv(0, xfam & 0x000602FF);
    ia32_wrmsr(0xDA0, xfam & 0x0001FD00);
    ia32_xsaves(&tdvps_ptr->guest_extension_state.xbuf, xfam);
}
static inline ia32e_eptp_t get_l2_septp(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, uint16_t vm_id)
{
    pa_t sept_root_hpa = { .raw = tdr_ptr->management_fields.tdcx_pa[get_tdcs_sept_root_page_index(vm_id)] };
    sept_root_hpa = set_hkid_to_pa(sept_root_hpa, 0);
    ia32e_eptp_t eptp = tdcs_ptr->executions_ctl_fields.eptp;
    eptp.fields.base_pa = sept_root_hpa.page_4k_num;
    return eptp;
}
static inline void flush_td_asid(tdr_t* tdr_ptr, tdcs_t* tdcs_ptr, uint16_t vm_id)
{
    ia32e_eptp_t eptp = get_l2_septp(tdr_ptr, tdcs_ptr, vm_id);
    ept_descriptor_t ept_desc = {.ept = eptp.raw, .reserved = 0};
    ia32_invept(&ept_desc, 1);
}
static inline void wrmsr_opt(uint64_t addr, uint64_t new_value, uint64_t cur_value)
{
    if (new_value != cur_value)
    {
        ia32_wrmsr(addr, new_value);
    }
}
void initialize_extended_state(uint64_t xfam);
void set_guest_pde_bs(void);
void advance_guest_rip(void);
void clear_movss_sti_blocking(void);
static inline void set_vm_vmcs_as_active(tdvps_t* tdvps_p, uint16_t vm_id)
{
    if (get_local_data()->vp_ctx.active_vmcs != vm_id)
    {
        uint64_t vm_vmcs_pa = tdvps_p->management.tdvps_pa[get_tdvps_vmcs_page_index(vm_id)];
        ia32_vmptrld((vmcs_ptr_t*)vm_vmcs_pa);
        get_local_data()->vp_ctx.active_vmcs = vm_id;
    }
}
static inline void update_host_state_in_td_vmcs(tdx_module_local_t* ld_p, tdvps_t* tdvps_p, uint16_t vm_id)
{
    if (!tdvps_p->management.module_dependent_hpa_updated[vm_id])
    {
        init_module_host_state_in_td_vmcs();
        tdvps_p->management.module_dependent_hpa_updated[vm_id] = ((bool_t)1);
        tdvps_p->management.lp_dependent_hpa_updated[vm_id] = ((bool_t)1);
    }
    else if (!tdvps_p->management.lp_dependent_hpa_updated[vm_id])
    {
        init_module_lp_host_state_in_td_vmcs(ld_p);
        tdvps_p->management.lp_dependent_hpa_updated[vm_id] = ((bool_t)1);
    }
}
void set_vmx_preemption_timer(tdvps_t* tdvps_p, uint16_t vm_id);
bool_t translate_l2_enter_guest_state_gpa(
    tdr_t * tdr_ptr,
    tdcs_t * tdcs_ptr,
    tdvps_t * tdvps_ptr,
    uint16_t vm_id,
    uint64_t * failed_gpa);
bool_t translate_gpas(
    tdr_t * tdr_ptr,
    tdcs_t * tdcs_ptr,
    tdvps_t * tdvps_ptr,
    uint16_t vm_id,
    uint64_t * failed_gpa);

static void init_td_vmcs_non_lp_host_fields(vmcs_host_values_t* host_fields_ptr)
{
    ia32_vmwrite(host_fields_ptr->CR0.encoding, host_fields_ptr->CR0.value);
    ia32_vmwrite(host_fields_ptr->CR3.encoding, host_fields_ptr->CR3.value);
    ia32_vmwrite(host_fields_ptr->CR4.encoding, host_fields_ptr->CR4.value);
    ia32_vmwrite(host_fields_ptr->CS.encoding, host_fields_ptr->CS.value);
    ia32_vmwrite(host_fields_ptr->SS.encoding, host_fields_ptr->SS.value);
    ia32_vmwrite(host_fields_ptr->FS.encoding, host_fields_ptr->FS.value);
    ia32_vmwrite(host_fields_ptr->GS.encoding, host_fields_ptr->GS.value);
    ia32_vmwrite(host_fields_ptr->TR.encoding, host_fields_ptr->TR.value);
    ia32_vmwrite(host_fields_ptr->IA32_S_CET.encoding, host_fields_ptr->IA32_S_CET.value);
    ia32_vmwrite(host_fields_ptr->IA32_PAT.encoding, host_fields_ptr->IA32_PAT.value);
    ia32_vmwrite(host_fields_ptr->IA32_EFER.encoding, host_fields_ptr->IA32_EFER.value);
    ia32_vmwrite(host_fields_ptr->FS_BASE.encoding, host_fields_ptr->FS_BASE.value);
    ia32_vmwrite(host_fields_ptr->IDTR_BASE.encoding, host_fields_ptr->IDTR_BASE.value);
    ia32_vmwrite(host_fields_ptr->GDTR_BASE.encoding, host_fields_ptr->GDTR_BASE.value);
}
void init_module_lp_host_state_in_td_vmcs(tdx_module_local_t* ld_p)
{
    ia32_vmwrite(0x6C14ULL, ld_p->host_rsp);
    ia32_vmwrite(0x6C1A, ld_p->host_ssp);
    ia32_vmwrite(0x6C08, ld_p->host_gs_base);
}
void init_module_host_state_in_td_vmcs(void)
{
    init_td_vmcs_non_lp_host_fields(&get_global_data()->seam_vmcs_host_values);
    init_module_lp_host_state_in_td_vmcs(get_local_data());
    void (*td_entry_func_ptr)(void) = tdx_tdexit_entry_point;
    ia32_vmwrite(0x6C16ULL, (uint64_t)td_entry_func_ptr);
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
static inline bool_t is_l2_sept_free(const ia32e_sept_t* ept_entry)
{
    return ((ept_entry->raw & ((uint64_t)(1ULL<<(0)) | (uint64_t)(1ULL<<(6)) | (uint64_t)(1ULL<<(7)) | (uint64_t)(1ULL<<(55)))) == SEPT_STATE_L2_FREE_MASK);
}
static inline bool_t sept_state_is_guest_accessible_leaf(ia32e_sept_t ept_entry)
{
    uint64_t idx = ( ((uint64_t)(ept_entry).state_encoding.state_encoding_0) | (((uint64_t)(ept_entry).state_encoding.state_encoding_1_4) << 1ULL) | (((uint64_t)(ept_entry).state_encoding.state_encoding_5_6) << 5ULL) );
                                              ;
    return sept_special_flags_lookup[idx].guest_accessible_leaf;
}
static inline bool_t is_secure_ept_leaf_entry(const ia32e_sept_t * ept_entry)
{
    return (ept_entry->leaf == 1);
}
ia32e_sept_t* secure_ept_walk(ia32e_eptp_t septp, pa_t gpa, uint16_t private_hkid,
                              ept_level_t* level, ia32e_sept_t* cached_sept_entry,
                              bool_t l2_sept_guest_side_walk);

void write_l2_enter_outputs(tdvps_t* tdvps_ptr, uint16_t vm_id);
void async_tdexit_to_vmm(api_error_code_e tdexit_case,
                         vm_vmexit_exit_reason_t vm_exit_reason,
                         uint64_t exit_qualification,
                         uint64_t extended_exit_qualification,
                         uint64_t gpa,
                         uint64_t vm_exit_interruption_information);
void async_tdexit_empty_reason(api_error_code_e tdexit_case);
void td_vmexit_to_vmm(uint8_t vcpu_state, uint8_t last_td_exit, uint64_t scrub_mask,
                      uint16_t xmm_select, bool_t is_td_dead, bool_t is_trap_exit);

static inline void conditionally_write_vmcs_ia32_spec_ctrl_shadow(const tdcs_t* tdcs_p, uint64_t msr_value)
{
    tdx_module_global_t* global_data = get_global_data();
    ia32_spec_ctrl_t spec_ctrl = { .raw = msr_value };
    if (global_data->ddpd_supported && !tdcs_p->executions_ctl_fields.cpuid_flags.ddpd_supported)
    {
                                                                                                     ;
        spec_ctrl.ddpd_u = 0;
        ia32_vmwrite(0x204C, spec_ctrl.raw);
    }
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
typedef enum sept_walk_type_e
{
    SEPT_WALK_TO_LEVEL,
    SEPT_WALK_TO_LEAF,
    SEPT_WALK_TO_LEAF_LEVEL
} sept_walk_type_t;
static api_error_type lock_sept_check_and_walk_internal(
        tdcs_t* tdcs_p,
        uint64_t operand_id,
        pa_t gpa,
        uint16_t hkid,
        lock_type_t lock_type,
        bool_t check_validity,
        sept_walk_type_t walk_type,
        ia32e_sept_t** sept_entry_ptr,
        ept_level_t* level,
        ia32e_sept_t* cached_sept_entry,
        bool_t* is_sept_locked
        )
{
    bool_t gpaw = tdcs_p->executions_ctl_fields.gpaw;
    *is_sept_locked = ((bool_t)0);
    if (check_validity && !check_gpa_validity(gpa, gpaw, ((bool_t)1)))
    {
        return api_error_with_operand_id(0xC000010000000000ULL, operand_id);
    }
    ia32e_eptp_t septp = tdcs_p->executions_ctl_fields.eptp;
    if (lock_type != TDX_LOCK_NO_LOCK)
    {
        if (acquire_sharex_lock(&tdcs_p->executions_ctl_fields.secure_ept_lock, lock_type) != LOCK_RET_SUCCESS)
        {
            return api_error_with_operand_id(0x8000020000000000ULL, 146ULL);
        }
    }
    ept_level_t requested_level = *level;
    *sept_entry_ptr = secure_ept_walk(septp, gpa, hkid, level, cached_sept_entry, ((bool_t)0));
    if (
        ((walk_type == SEPT_WALK_TO_LEAF) &&
        (!is_secure_ept_leaf_entry(cached_sept_entry) || !cached_sept_entry->rwx)) ||
        ((walk_type == SEPT_WALK_TO_LEVEL) && (*level != requested_level)) ||
        ((walk_type == SEPT_WALK_TO_LEAF_LEVEL) && !is_secure_ept_leaf_entry(cached_sept_entry))
       )
    {
        if (lock_type != TDX_LOCK_NO_LOCK)
        {
            release_sharex_lock(&tdcs_p->executions_ctl_fields.secure_ept_lock, lock_type);
        }
        free_la(*sept_entry_ptr);
        *sept_entry_ptr = ((void*)0);
        return api_error_with_operand_id(0xC0000B0000000000ULL, operand_id);
    }
    if (lock_type != TDX_LOCK_NO_LOCK)
    {
        *is_sept_locked = ((bool_t)1);
    }
    return 0x0000000000000000ULL;
}
api_error_type check_and_walk_private_gpa_to_leaf(
        tdcs_t* tdcs_p,
        uint64_t operand_id,
        pa_t gpa,
        uint16_t hkid,
        ia32e_sept_t** sept_entry_ptr,
        ept_level_t* level,
        ia32e_sept_t* cached_sept_entry
        )
{
    bool_t is_sept_locked;
    *level = LVL_PT;
    return lock_sept_check_and_walk_internal(tdcs_p, operand_id, gpa, hkid,
                                             TDX_LOCK_NO_LOCK,
                                             ((bool_t)1),
                                             SEPT_WALK_TO_LEAF,
                                             sept_entry_ptr, level, cached_sept_entry, &is_sept_locked);
}
void initialize_extended_state(uint64_t xfam)
{
    ia32_xsetbv(0, xfam & 0x000602FF);
    ia32_wrmsr(0xDA0, xfam & 0x0001FD00);
    ia32_xrstors(&get_global_data()->xbuf, xfam);
}
void set_guest_pde_bs(void)
{
    ia32_rflags_t rflags;
    ia32_vmread(0x6820ULL, &rflags.raw);
    ia32_debugctl_t debugctl;
    ia32_vmread(0x2802ULL, &debugctl.raw);
    pending_debug_exception_t pde;
    ia32_vmread(0x6822ULL, &pde.raw);
    pde.bs = (rflags.tf == 1 && debugctl.btf == 0) ? 1 : 0;
    ia32_vmwrite(0x6822ULL, pde.raw);
}
void advance_guest_rip(void)
{
    current_vmcs_guest_rip_advance(0);
    clear_movss_sti_blocking();
    set_guest_pde_bs();
}
void clear_movss_sti_blocking(void)
{
    vmx_guest_inter_state_t guest_inter_state;
    ia32_vmread(0x4824ULL, &guest_inter_state.raw);
    if (guest_inter_state.blocking_by_mov_ss != 0 || guest_inter_state.blocking_by_sti != 0)
    {
        guest_inter_state.blocking_by_mov_ss = 0;
        guest_inter_state.blocking_by_sti = 0;
        ia32_vmwrite(0x4824ULL, guest_inter_state.raw);
    }
}
void set_vmx_preemption_timer(tdvps_t* tdvps_p, uint16_t vm_id)
{
    vmx_pinbased_ctls_t pinbased_exec_ctls;
    ia32_vmread(0x4000ULL, &pinbased_exec_ctls.raw);
    if (tdvps_p->management.tsc_deadline[vm_id] == -1ULL)
    {
        pinbased_exec_ctls.activate_vmx_preemption_timer = 0;
    }
    else
    {
        uint64_t preempt_time;
        uint64_t current_time = ia32_rdtsc();
        uint64_t future_delta = tdvps_p->management.shadow_tsc_deadline[vm_id] - current_time;
        uint64_t past_delta = current_time - tdvps_p->management.shadow_tsc_deadline[vm_id];
        if (past_delta < future_delta)
        {
            preempt_time = 0;
        }
        else
        {
            preempt_time = tdvps_p->management.shadow_tsc_deadline[vm_id] - current_time;
            preempt_time >>= get_global_data()->plt_common_config.ia32_vmx_misc.vmx_preempt_timer_tsc_factor;
            if (preempt_time >= (uint64_t)(1ULL<<(32)))
            {
                preempt_time = (uint64_t)(1ULL<<(32)) - 1;
            }
        }
        pinbased_exec_ctls.activate_vmx_preemption_timer = 1;
        ia32_vmwrite(0x482EULL, preempt_time);
    }
    ia32_vmwrite(0x4000ULL, pinbased_exec_ctls.raw);
}
bool_t translate_l2_enter_guest_state_gpa(
    tdr_t * tdr_ptr,
    tdcs_t * tdcs_ptr,
    tdvps_t * tdvps_ptr,
    uint16_t vm_id,
    uint64_t * failed_gpa)
{
    uint64_t hpa;
    uint64_t gpa;
    ia32e_sept_t * sept_entry_ptr = ((void*)0);
    ia32e_sept_t sept_entry_copy;
    ept_level_t sept_entry_level = LVL_PT;
    api_error_type return_val = 0xC000010000000000ULL;
                                ;
    hpa = tdvps_ptr->management.l2_enter_guest_state_hpa[vm_id];
    if (hpa == ~(0ULL))
    {
        gpa = tdvps_ptr->management.l2_enter_guest_state_gpa[vm_id];
        return_val = check_and_walk_private_gpa_to_leaf(tdcs_ptr, 1ULL, (pa_t)gpa,
                                          tdr_ptr->key_management_fields.hkid,
                                          &sept_entry_ptr, &sept_entry_level, &sept_entry_copy);
        if (return_val != 0x0000000000000000ULL)
        {
            *failed_gpa = gpa;
            goto EXIT;
        }
        if (!sept_state_is_guest_accessible_leaf(sept_entry_copy))
        {
            *failed_gpa = gpa;
            goto EXIT;
        }
        hpa = leaf_ept_entry_to_hpa(sept_entry_copy, gpa, sept_entry_level);
        tdvps_ptr->management.l2_enter_guest_state_hpa[vm_id] = set_hkid_to_pa((pa_t)hpa, tdr_ptr->key_management_fields.hkid).raw;
        if (sept_entry_ptr != ((void*)0))
        {
            free_la(sept_entry_ptr);
            sept_entry_ptr = ((void*)0);
        }
    }
    return ((bool_t)1);
EXIT:
    if (sept_entry_ptr != ((void*)0))
    {
        free_la(sept_entry_ptr);
    }
    return ((bool_t)0);
}
bool_t translate_gpas(
    tdr_t * tdr_ptr,
    tdcs_t * tdcs_ptr,
    tdvps_t * tdvps_ptr,
    uint16_t vm_id,
    uint64_t * failed_gpa)
{
    uint64_t hpa;
    uint64_t gpa;
    ia32e_sept_t * sept_entry_ptr = ((void*)0);
    ia32e_sept_t sept_entry_copy;
    ept_level_t sept_entry_level = LVL_PT;
    api_error_type return_val = 0xC000010000000000ULL;
                                ;
                                                                   ;
    if (!translate_l2_enter_guest_state_gpa(tdr_ptr, tdcs_ptr, tdvps_ptr, vm_id, failed_gpa))
    {
        goto EXIT;
    }
    hpa = tdvps_ptr->management.l2_vapic_hpa[vm_id];
    if (hpa == ~(0ULL))
    {
        gpa = tdvps_ptr->management.l2_vapic_gpa[vm_id];
        return_val = check_and_walk_private_gpa_to_leaf(tdcs_ptr, 1ULL, (pa_t)gpa,
                                          tdr_ptr->key_management_fields.hkid,
                                          &sept_entry_ptr, &sept_entry_level, &sept_entry_copy);
        if (return_val != 0x0000000000000000ULL)
        {
            *failed_gpa = gpa;
            goto EXIT;
        }
        if (!sept_state_is_guest_accessible_leaf(sept_entry_copy))
        {
            *failed_gpa = gpa;
            goto EXIT;
        }
        hpa = leaf_ept_entry_to_hpa(sept_entry_copy, gpa, sept_entry_level);
        hpa = set_hkid_to_pa((pa_t)hpa, tdr_ptr->key_management_fields.hkid).raw;
        tdvps_ptr->management.l2_vapic_hpa[vm_id] = hpa;
        ia32_vmwrite(0x2012ULL, hpa);
        if (sept_entry_ptr != ((void*)0))
        {
            free_la(sept_entry_ptr);
        }
    }
    return ((bool_t)1);
EXIT:
    if (sept_entry_ptr != ((void*)0))
    {
        free_la(sept_entry_ptr);
    }
    return ((bool_t)0);
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
void pamt_implicit_release_lock(pamt_entry_t* pamt_entry, lock_type_t leaf_lock_type)
{
    release_sharex_lock_hp(&pamt_entry->entry_lock, leaf_lock_type);
    free_la(pamt_entry);
}
static inline uint64_t get_ept_entry_idx(pa_t gpa, ept_level_t lvl)
{
    uint64_t idx = 0;
    switch (lvl)
    {
        case LVL_PML5:
            idx = gpa.fields_4k.pml5_index;
            break;
        case LVL_PML4:
            idx = gpa.fields_4k.pml4_index;
            break;
        case LVL_PDPT:
            idx = gpa.fields_4k.pdpt_index;
            break;
        case LVL_PD:
            idx = gpa.fields_4k.pd_index;
            break;
        case LVL_PT:
            idx = gpa.fields_4k.pt_index;
            break;
        default:
            if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0004, 0); };
            break;
    }
    return idx;
}
static inline bool_t is_secure_ept_entry_misconfigured(ia32e_sept_t* pte, ept_level_t level)
{
    pa_t hpa;
    hpa.raw = pte->raw & ((uint64_t) 0x000FFFFFFFFFF000LLU);
    if (!is_pa_smaller_than_max_pa(hpa.raw))
    {
        return ((bool_t)1);
    }
    if ((pte->r == 0) && (pte->w == 1))
    {
                                                                             ;
        return ((bool_t)1);
    }
    platform_common_config_t* msr_values = &get_global_data()->plt_common_config;
    if (!(msr_values->ia32_vmx_ept_vpid_cap & 0x1))
    {
        if ((pte->r == 0) && (pte->x == 1))
        {
                                                                             ;
            return ((bool_t)1);
        }
    }
    if (pte->rwx)
    {
        if (((level > LVL_PDPT) || ((level > LVL_PT) && !pte->leaf))
                && pte->fields_ps.reserved_0)
        {
                                                                               ;
            return ((bool_t)1);
        }
        if ( ((level == LVL_PDPT) && pte->leaf && pte->reserved_1) ||
             ((level == LVL_PD) && pte->leaf && pte->reserved_1)
           )
        {
                                                                                 ;
            return ((bool_t)1);
        }
        if ( ((level == LVL_PDPT) && pte->leaf) ||
             ((level == LVL_PD) && pte->leaf) ||
              (level == LVL_PT) )
        {
            if ((pte->mt == MT_RSVD0) || (pte->mt == MT_RSVD1) ||
                (pte->mt == MT_UCM))
            {
                                                                                        ;
                return ((bool_t)1);
            }
        }
    }
    return ((bool_t)0);
}
ia32e_sept_t* secure_ept_walk(ia32e_eptp_t septp, pa_t gpa, uint16_t private_hkid,
                              ept_level_t* level, ia32e_sept_t* cached_sept_entry,
                              bool_t l2_sept_guest_side_walk)
{
    ia32e_paging_table_t *pt;
    ia32e_sept_t *pte;
    pa_t pt_pa;
    ept_level_t requested_level = *level;
    ept_level_t current_lvl;
    if ( __builtin_expect((!(requested_level <= LVL_PML5)), 0) ) { ; tdx_report_error_and_halt(0x0004, 1); };
    pt_pa.raw = septp.raw & ((uint64_t) 0x000FFFFFFFFFF000LLU);
    current_lvl = septp.fields.ept_pwl;
    for (;current_lvl >= LVL_PT; current_lvl--)
    {
        pt_pa = set_hkid_to_pa(pt_pa, private_hkid);
        pt = map_pa((void*)(pt_pa.full_pa), TDX_RANGE_RW);
        pte = &(pt->sept[get_ept_entry_idx(gpa, current_lvl)]);
        cached_sept_entry->raw = pte->raw;
        *level = current_lvl;
        if (current_lvl == requested_level)
        {
            break;
        }
        if ( __builtin_expect((is_secure_ept_entry_misconfigured(cached_sept_entry, current_lvl)), 0) )
        {
            { ; tdx_arch_fatal_error(); };
        }
        if ( __builtin_expect(((l2_sept_guest_side_walk && is_l2_sept_free(cached_sept_entry)) || (!l2_sept_guest_side_walk && (cached_sept_entry->rwx == 0)) || is_secure_ept_leaf_entry(cached_sept_entry)), 0) )
        {
            break;
        }
        if ( __builtin_expect((current_lvl == LVL_PT), 0) )
        {
            { ; tdx_arch_fatal_error(); };
        }
        pt_pa.raw = cached_sept_entry->raw & ((uint64_t) 0x000FFFFFFFFFF000LLU);
        free_la(pt);
    }
    return pte;
}
api_error_type tdg_vp_enter(uint64_t flags, uint64_t reg_list_gpa);
void tdx_return_to_td(bool_t launch_state, bool_t called_from_tdenter, gprs_state_t* gpr_state)
{
    tdx_module_local_t* local_data_ptr = get_local_data();
    if (!called_from_tdenter)
    {
        wrmsr_opt(0x48,
                  local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_spec_ctrl, ((uint64_t)(1ULL<<(2)) | (uint64_t)(1ULL<<(4))));
    }
    if ( __builtin_expect((!(local_data_ptr->keyhole_state.total_ref_count == 2)), 0) ) { ; tdx_report_error_and_halt(0x0005, 30); };
    local_data_ptr->current_td_vm_id = local_data_ptr->vp_ctx.tdvps->management.curr_vm;
    tdx_tdentry_to_td(launch_state, gpr_state);
}
void tdx_tdexit_entry_point(void) {
    TDXFV_ABST_incomplete();
}
void tdx_vmm_post_dispatching(void);
__attribute__((visibility("hidden"))) void tdx_seamret_to_vmm(void);
static void load_xmms_by_mask(tdvps_t* tdvps_ptr, uint16_t xmm_select)
{
    uint128_t xmms[16];
    basic_memset_to_zero(xmms, sizeof(xmms));
    for (uint32_t i = 0; i < 16; i++)
    {
        if (xmm_select & (uint16_t)(uint64_t)(1ULL<<(i)))
        {
            xmms[i] = tdvps_ptr->guest_extension_state.xbuf.legacy_region.xmm[i];
        }
    }
    load_xmms_from_buffer(xmms);
    basic_memset_to_zero(xmms, sizeof(xmms));
}
static void init_all_dr_opt(tdvps_t* tdvps_ptr)
{
   if (tdvps_ptr->guest_state.dr0 != 0x0ULL)
   {
       ia32_load_dr0(0x0ULL);
   }
   if (tdvps_ptr->guest_state.dr1 != 0x0ULL)
   {
       ia32_load_dr1(0x0ULL);
   }
   if (tdvps_ptr->guest_state.dr2 != 0x0ULL)
   {
       ia32_load_dr2(0x0ULL);
   }
   if (tdvps_ptr->guest_state.dr3 != 0x0ULL)
   {
       ia32_load_dr3(0x0ULL);
   }
   if (tdvps_ptr->guest_state.dr6 != 0xFFFF0FF0ULL)
   {
       ia32_load_dr6(0xFFFF0FF0ULL);
   }
}
static void init_msr_opt(uint64_t addr, uint64_t cur_value)
{
    if (addr == 0xC0000084)
    {
        if (cur_value != 0x20200ULL)
        {
            ia32_wrmsr(0xC0000084, 0x20200ULL);
        }
    }
    else if (addr == 0x14CF)
    {
        if (cur_value != 0x20ULL)
        {
            ia32_wrmsr(0x14CF, 0x20ULL);
        }
    }
    else
    {
        if (cur_value != 0)
        {
            ia32_wrmsr(addr, 0);
        }
    }
}
static void load_vmm_state_before_td_exit(tdx_module_local_t* local_data_ptr)
{
    tdx_module_global_t* global_data = get_global_data();
    ia32_load_cr2(0x0ULL);
    init_all_dr_opt(local_data_ptr->vp_ctx.tdvps);
    wrmsr_opt(0x600, local_data_ptr->vmm_non_extended_state.ia32_ds_area, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_ds_area);
    if (local_data_ptr->vp_ctx.xfd_supported)
    {
        init_msr_opt(0x1C4, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_xfd);
        init_msr_opt(0x1C5, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_xfd_err);
    }
    if (local_data_ptr->vp_ctx.attributes.perfmon)
    {
        for (uint8_t i = 0; i < global_data->num_fixed_ctrs; i++)
        {
            if ((global_data->fc_bitmap & (uint64_t)(1ULL<<(i))) != 0)
            {
                init_msr_opt(0x309 + i, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_fixed_ctr[i]);
            }
        }
        for (uint32_t i = 0; i < 8; i++)
        {
            init_msr_opt(0x4C1 + i, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_a_pmc[i]);
        }
        for (uint32_t i = 0; i < 2; i++)
        {
            init_msr_opt(0x1A6 + i, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_offcore_rsp[i]);
        }
        ia32_wrmsr(0x390, ia32_rdmsr(0x38E));
        if (1 == global_data->plt_common_config.ia32_perf_capabilities.perf_metrics_available)
        {
            init_msr_opt(0x329, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_perf_metrics);
        }
    }
    init_msr_opt(0x1B01, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_uarch_misc_ctl);
    init_msr_opt(0xC0000103, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_tsc_aux);
    init_msr_opt(0xC0000081, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_star);
    init_msr_opt(0xC0000082, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_lstar);
    init_msr_opt(0xC0000084, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_fmask);
    init_msr_opt(0xC0000102, local_data_ptr->vp_ctx.tdvps->guest_msr_state.ia32_kernel_gs_base);
    if (local_data_ptr->vp_ctx.tdcs->executions_ctl_fields.cpuid_flags.tsx_supported)
    {
        ia32_wrmsr(0x122, 0);
    }
    else if ((global_data->hle_supported || global_data->rtm_supported) &&
             (global_data->plt_common_config.ia32_arch_capabilities.tsx_ctrl))
    {
        wrmsr_opt(0x122, local_data_ptr->vmm_non_extended_state.ia32_tsx_ctrl, 0x3ULL);
    }
    uint64_t debugctl_msr_value;
    ia32_vmread(0x2802ULL, &debugctl_msr_value);
    debugctl_msr_value = debugctl_msr_value & ((uint64_t)(1ULL<<(1)) | (uint64_t)(1ULL<<(12)) | (uint64_t)(1ULL<<(14)));
    ia32_vmwrite(0x2802ULL, debugctl_msr_value);
    if (local_data_ptr->vp_ctx.attributes.perfmon)
    {
        ia32_vmwrite(0x2808ULL, 0x0);
    }
    if (((ia32_xcr0_t)local_data_ptr->vp_ctx.xfam).pt)
    {
        ia32_vmwrite(0x2814, 0x0);
    }
    if (((ia32_xcr0_t)local_data_ptr->vp_ctx.xfam).lbr)
    {
        ia32_vmwrite(0x2816, 0x0);
    }
    ia32_vmwrite(0x681AULL, 0x00000400);
}
static void save_guest_td_state_before_td_exit(tdcs_t* tdcs_ptr, tdx_module_local_t* local_data_ptr)
{
    tdx_module_global_t* global_data = get_global_data();
    tdvps_t* tdvps_ptr = local_data_ptr->vp_ctx.tdvps;
    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.xfd_supported)
    {
        tdvps_ptr->guest_msr_state.ia32_xfd = ia32_rdmsr(0x1C4);
        tdvps_ptr->guest_msr_state.ia32_xfd_err = ia32_rdmsr(0x1C5);
    }
    tdvps_ptr->guest_state.cr2 = ia32_store_cr2();
    tdvps_ptr->guest_state.xcr0 = ia32_xgetbv(0);
    tdvps_ptr->guest_state.dr0 = ia32_store_dr0();
    tdvps_ptr->guest_state.dr1 = ia32_store_dr1();
    tdvps_ptr->guest_state.dr2 = ia32_store_dr2();
    tdvps_ptr->guest_state.dr3 = ia32_store_dr3();
    tdvps_ptr->guest_state.dr6 = ia32_store_dr6();
    tdvps_ptr->guest_msr_state.ia32_ds_area = ia32_rdmsr(0x600);
    if (((ia32_xcr0_t)tdvps_ptr->management.xfam).lbr)
    {
        tdvps_ptr->guest_msr_state.ia32_lbr_depth = ia32_rdmsr(0x14CF);
    }
    if (tdcs_ptr->executions_ctl_fields.attributes.perfmon)
    {
        tdvps_ptr->guest_msr_state.ia32_fixed_ctr_ctrl = ia32_rdmsr(0x38D);
        for (uint8_t i = 0; i < global_data->num_fixed_ctrs; i++)
        {
            if ((global_data->fc_bitmap & (uint64_t)(1ULL<<(i))) != 0)
            {
                tdvps_ptr->guest_msr_state.ia32_fixed_ctr[i] = ia32_rdmsr(0x309 + i);
            }
        }
        for (uint32_t i = 0; i < 8; i++)
        {
            tdvps_ptr->guest_msr_state.ia32_a_pmc[i] = ia32_rdmsr(0x4C1 + i);
            tdvps_ptr->guest_msr_state.ia32_perfevtsel[i] = ia32_rdmsr(0x186 + i);
        }
        for (uint32_t i = 0; i < 2; i++)
        {
            tdvps_ptr->guest_msr_state.ia32_offcore_rsp[i] = ia32_rdmsr(0x1A6 + i);
        }
        tdvps_ptr->guest_msr_state.ia32_perf_global_status = ia32_rdmsr(0x38E);
        if (1 == global_data->plt_common_config.ia32_perf_capabilities.perf_metrics_available)
        {
            tdvps_ptr->guest_msr_state.ia32_perf_metrics = ia32_rdmsr(0x329);
        }
        tdvps_ptr->guest_msr_state.ia32_pebs_enable = ia32_rdmsr(0x3F1);
        tdvps_ptr->guest_msr_state.ia32_pebs_data_cfg = ia32_rdmsr(0x3F2);
        tdvps_ptr->guest_msr_state.ia32_pebs_ld_lat = ia32_rdmsr(0x3F6);
        if (global_data->native_model_info.core_type == 0x40)
        {
            tdvps_ptr->guest_msr_state.ia32_pebs_frontend = ia32_rdmsr(0x3F7);
        }
    }
    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.waitpkg_supported)
    {
        tdvps_ptr->guest_msr_state.ia32_umwait_control= ia32_rdmsr(0xE1);
    }
    if (tdcs_ptr->executions_ctl_fields.cpuid_flags.tsx_supported)
    {
        tdvps_ptr->guest_msr_state.ia32_tsx_ctrl = ia32_rdmsr(0x122);
    }
    tdvps_ptr->guest_msr_state.ia32_uarch_misc_ctl = ia32_rdmsr(0x1B01);
    tdvps_ptr->guest_msr_state.ia32_star = ia32_rdmsr(0xC0000081);
    tdvps_ptr->guest_msr_state.ia32_lstar = ia32_rdmsr(0xC0000082);
    tdvps_ptr->guest_msr_state.ia32_fmask = ia32_rdmsr(0xC0000084);
    tdvps_ptr->guest_msr_state.ia32_kernel_gs_base = ia32_rdmsr(0xC0000102);
    tdvps_ptr->guest_msr_state.ia32_tsc_aux = ia32_rdmsr(0xC0000103);
}
static void async_tdexit_internal(api_error_code_e tdexit_case,
                                  vm_vmexit_exit_reason_t vm_exit_reason,
                                  uint64_t exit_qualification,
                                  uint64_t extended_exit_qualification,
                                  uint64_t gpa,
                                  uint64_t vm_exit_interruption_information,
                                  bool_t check_bus_lock_preempted)
{
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;
    tdr_t* tdr_ptr = tdx_local_data_ptr->vp_ctx.tdr;
    uint8_t vcpu_state = tdvps_ptr->management.state;
    uint8_t last_td_exit = tdvps_ptr->management.last_td_exit;
    api_error_code_t error_code;
    error_code.raw = tdexit_case;
    if (check_bus_lock_preempted)
    {
        if (tdx_local_data_ptr->vp_ctx.bus_lock_preempted)
        {
            vm_exit_reason.bus_lock_preempted = ((bool_t)1);
        }
    }
    tdx_local_data_ptr->vp_ctx.bus_lock_preempted = ((bool_t)0);
    switch (tdexit_case)
    {
    case 0x0000000000000000ULL:
    case 0x8000000800000000ULL:
    case 0x0000114000000000ULL:
    case 0x0000114200000000ULL:
    case 0x0000114100000000ULL:
        vcpu_state = 0x2;
        last_td_exit = 0x0;
        break;
    case 0x9000000900000000ULL:
    case 0x9000020500000000ULL:
        vcpu_state = 0x2;
        last_td_exit = 0x1;
        break;
    case 0x4000000100000000ULL:
        vcpu_state = 0x8;
        break;
    case 0x6000000200000000ULL:
    case 0xE000000700000000ULL:
    case 0x6000000500000000ULL:
    case 0x6000000A00000000ULL:
        tdr_ptr->management_fields.fatal = ((bool_t)1);
        error_code.fatal = 1;
        break;
    default:
        { ; tdx_arch_fatal_error(); };
    }
    error_code.details_l2 = vm_exit_reason.raw & 0xFFFFFFFFULL;
    tdx_local_data_ptr->vmm_regs.rax = error_code.raw;
    td_exit_qualification_t td_exit_qual = { .raw = exit_qualification };
    td_exit_qual.vm = tdvps_ptr->management.curr_vm;
    tdx_local_data_ptr->vmm_regs.rcx = td_exit_qual.raw;
    tdx_local_data_ptr->vmm_regs.rdx = extended_exit_qualification;
    tdx_local_data_ptr->vmm_regs.r8 = gpa;
    tdx_local_data_ptr->vmm_regs.r9 = vm_exit_interruption_information;
    tdx_local_data_ptr->vmm_regs.r10 = 0ULL;
    tdx_local_data_ptr->vmm_regs.r11 = 0ULL;
    tdx_local_data_ptr->vmm_regs.r12 = 0ULL;
    tdx_local_data_ptr->vmm_regs.r13 = 0ULL;
    tdx_local_data_ptr->vmm_regs.r14 = 0ULL;
    tdx_local_data_ptr->vmm_regs.r15 = 0ULL;
    tdx_local_data_ptr->vmm_regs.rbx = 0ULL;
    tdx_local_data_ptr->vmm_regs.rbp = 0ULL;
    tdx_local_data_ptr->vmm_regs.rsi = 0ULL;
    tdx_local_data_ptr->vmm_regs.rdi = 0ULL;
    ia32_xcr0_t xcr0 = { .raw = tdx_local_data_ptr->vp_ctx.xfam };
    xcr0.sse = 1;
    uint64_t scrub_mask = xcr0.raw;
    if (error_code.host_recoverability_hint)
    {
                                                            ;
    }
    td_vmexit_to_vmm(vcpu_state, last_td_exit, scrub_mask,
                     0, (tdexit_case == 0x6000000500000000ULL),
                     error_code.host_recoverability_hint);
}
void write_l2_enter_outputs(tdvps_t* tdvps_ptr, uint16_t vm_id)
{
    l2_enter_guest_state_t* guest_state = map_pa((void*)tdvps_ptr->management.l2_enter_guest_state_hpa[vm_id], TDX_RANGE_RW);
    tdx_memcpy(&guest_state->gpr_state, sizeof(guest_state->gpr_state),
               &tdvps_ptr->guest_state.gpr_state, sizeof(tdvps_ptr->guest_state.gpr_state));
    ia32_vmread(0x681CULL, &guest_state->gpr_state.rsp);
    ia32_vmread(0x6820ULL, &guest_state->rflags);
    ia32_vmread(0x681EULL, &guest_state->rip);
    ia32_vmread(0x682A, &guest_state->ssp);
    uint64_t val = 0;
    ia32_vmread(0x0810, &val);
    guest_state->interrupt_status = (uint16_t)val;
    free_la(guest_state);
}
void async_tdexit_to_vmm(api_error_code_e tdexit_case,
                         vm_vmexit_exit_reason_t vm_exit_reason,
                         uint64_t exit_qualification,
                         uint64_t extended_exit_qualification,
                         uint64_t gpa,
                         uint64_t vm_exit_interruption_information)
{
    async_tdexit_internal(tdexit_case, vm_exit_reason, exit_qualification,
                          extended_exit_qualification, gpa, vm_exit_interruption_information, ((bool_t)1));
}
void async_tdexit_empty_reason(api_error_code_e tdexit_case)
{
    vm_vmexit_exit_reason_t empty_reason = { .raw = 0 };
    async_tdexit_internal(tdexit_case, empty_reason, 0, 0, 0, 0, ((bool_t)0));
}
void td_vmexit_to_vmm(uint8_t vcpu_state, uint8_t last_td_exit, uint64_t scrub_mask,
                      uint16_t xmm_select, bool_t is_td_dead, bool_t is_trap_exit)
{
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    vp_ctx_t* vp_ctx = &tdx_local_data_ptr->vp_ctx;
    tdvps_t* tdvps_ptr = tdx_local_data_ptr->vp_ctx.tdvps;
    tdcs_t* tdcs_ptr = tdx_local_data_ptr->vp_ctx.tdcs;
    if (!is_td_dead)
    {
        save_guest_td_state_before_td_exit(tdcs_ptr, tdx_local_data_ptr);
        tdvps_ptr->management.state = vcpu_state;
        tdvps_ptr->management.last_td_exit = last_td_exit;
        if ((tdvps_ptr->management.curr_vm != 0) && !is_trap_exit)
        {
            write_l2_enter_outputs(tdvps_ptr, tdvps_ptr->management.curr_vm);
        }
        save_guest_td_extended_state(tdvps_ptr, tdx_local_data_ptr->vp_ctx.xfam);
        if (is_trap_exit)
        {
            advance_guest_rip();
        }
        tdcs_epoch_tracking_fields_t* epoch_tracking = &tdcs_ptr->epoch_tracking;
        (void)_lock_xadd_16b(&epoch_tracking->epoch_and_refcount.refcount[tdvps_ptr->management.vcpu_epoch & 1], (uint16_t)-1);
    }
    pamt_implicit_release_lock(vp_ctx->tdr_pamt_entry, TDX_LOCK_SHARED);
    pamt_unwalk(vp_ctx->tdvpr_pa, vp_ctx->tdvpr_pamt_block, vp_ctx->tdvpr_pamt_entry, TDX_LOCK_SHARED, PT_4KB);
    set_seam_vmcs_as_active();
    initialize_extended_state(scrub_mask);
    load_vmm_state_before_td_exit(tdx_local_data_ptr);
    if (last_td_exit == 0x2)
    {
        load_xmms_by_mask(tdvps_ptr, xmm_select);
    }
    tdx_vmm_post_dispatching();
    if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0009, 0); };
}
static void read_l2_enter_guest_state(tdvps_t* tdvps_ptr, l2_enter_guest_state_t *reg_list_p)
{
    tdx_memcpy(&tdvps_ptr->guest_state.gpr_state, sizeof(tdvps_ptr->guest_state.gpr_state),
               &reg_list_p->gpr_state, sizeof(reg_list_p->gpr_state));
    ia32_vmwrite(0x681CULL, reg_list_p->gpr_state.rsp);
    ia32_vmwrite(0x6820ULL, reg_list_p->rflags);
    ia32_vmwrite(0x681EULL, reg_list_p->rip);
    ia32_vmwrite(0x682A, reg_list_p->ssp);
    ia32_vmwrite(0x0810, reg_list_p->interrupt_status);
}
typedef union vm_and_flags_u
{
    struct
    {
        uint64_t do_invept : 2;
        uint64_t reserved0 : 50;
        uint64_t vm : 2;
        uint64_t reserved1 : 10;
    };
    uint64_t raw;
} vm_and_flags_t;
api_error_type tdg_vp_enter(uint64_t flags, uint64_t reg_list_gpa)
{
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    tdr_t* tdr_p = tdx_local_data_ptr->vp_ctx.tdr;
    tdcs_t* tdcs_p = tdx_local_data_ptr->vp_ctx.tdcs;
    tdvps_t* tdvps_p = tdx_local_data_ptr->vp_ctx.tdvps;
    uint64_t failed_gpa;
    uint16_t vm_id = 0;
    vm_and_flags_t vm_flags = {.raw = flags};
    guest_interrupt_status_t interrupt_status;
    vm_vmexit_exit_reason_t vm_exit_reason = { .raw = 0 };
    if (!is_addr_aligned_pwr_of_2(reg_list_gpa, 256) ||
        !check_gpa_validity((pa_t)reg_list_gpa, tdcs_p->executions_ctl_fields.gpaw, ((bool_t)1)))
    {
        return api_error_with_operand_id(0xC000010000000000ULL, 2ULL);
    }
    vm_id = vm_flags.vm;
    if ((vm_id == 0) || (vm_id > tdcs_p->management_fields.num_l2_vms)
                    || (vm_flags.reserved0 != 0) || (vm_flags.reserved1 != 0))
    {
        return api_error_with_operand_id(0xC000010000000000ULL, 1ULL);
    }
    if (tdvps_p->management.l2_vapic_gpa[vm_id] == ~(0ULL))
    {
        return api_error_with_operand_id(0xC000010000000000ULL, 170ULL);
    }
    ia32_vmread(0x0810, &interrupt_status.raw);
    if ((interrupt_status.rvi & 0xF0UL) > (tdvps_p->vapic.apic[0xA0] & 0xF0UL))
    {
        return 0x0000112000000000ULL;
    }
    if (tdvps_p->management.l2_debug_ctls[vm_id].td_exit_on_l1_to_l2)
    {
                                                                             ;
        async_tdexit_empty_reason(0x0000114000000000ULL);
    }
    if (tdvps_p->management.l2_enter_guest_state_gpa[vm_id] != reg_list_gpa)
    {
        tdvps_p->management.l2_enter_guest_state_gpa[vm_id] = reg_list_gpa;
        tdvps_p->management.l2_enter_guest_state_hpa[vm_id] = ~(0ULL);
    }
    set_vm_vmcs_as_active(tdvps_p, vm_id);
    if (!translate_gpas(tdr_p, tdcs_p, tdvps_p, vm_id, &failed_gpa))
    {
        vm_exit_reason.basic_reason = VMEXIT_REASON_EPT_VIOLATION;
        async_tdexit_to_vmm(0x0000000000000000ULL, vm_exit_reason, 0, 0, failed_gpa & (((uint64_t)(1ULL<<(63)) - (uint64_t)(1ULL<<(12)) + (uint64_t)(1ULL<<(63)))), 0);
    }
    tdvps_p->management.curr_vm = vm_id;
    update_host_state_in_td_vmcs(tdx_local_data_ptr, tdvps_p, vm_id);
    invvpid_descriptor_t descriptor;
    descriptor.raw_low = 0;
    descriptor.vpid = compose_vpid(vm_id, tdr_p->key_management_fields.hkid);
    switch (vm_flags.do_invept)
    {
    case 0:
        break;
    case 1:
        flush_td_asid(tdr_p, tdcs_p, vm_id);
        break;
    case 2:
        (void)ia32_invvpid(&descriptor, INVVPID_SINGLE_CONTEXT);
        break;
    case 3:
        (void)ia32_invvpid(&descriptor, INVVPID_SINGLE_CONTEXT_RETAINING_GLOBAL);
        break;
    default:
        { ; tdx_arch_fatal_error(); };
        break;
    }
    set_vmx_preemption_timer(tdvps_p, vm_id);
    l2_enter_guest_state_t * guest_state_p;
    guest_state_p = (l2_enter_guest_state_t *)map_pa((void*)tdvps_p->management.l2_enter_guest_state_hpa[vm_id], TDX_RANGE_RW);
    read_l2_enter_guest_state(tdvps_p, guest_state_p);
    free_la(guest_state_p);
    conditionally_write_vmcs_ia32_spec_ctrl_shadow(tdcs_p, tdvps_p->guest_msr_state.ia32_spec_ctrl);
    if (tdvps_p->management.vm_launched[vm_id] == ((bool_t)1))
    {
        tdx_return_to_td(((bool_t)1), ((bool_t)0), &tdvps_p->guest_state.gpr_state);
    }
    else
    {
        tdx_return_to_td(((bool_t)0), ((bool_t)0), &tdvps_p->guest_state.gpr_state);
    }
    { ; tdx_arch_fatal_error(); };
    return 0x0000000000000000ULL;
}
void tdx_seamret_to_vmm(void) {
    TDXFV_ABST_incomplete();
    exit(0);
}

static inline void mark_lp_as_free(void)
{
    get_local_data()->lp_is_busy = ((bool_t)0);
}
void tdx_vmm_post_dispatching(void)
{
    advance_guest_rip();
    tdx_module_local_t* local_data_ptr = get_local_data();
    wrmsr_opt(0x48, local_data_ptr->vmm_non_extended_state.ia32_spec_ctrl,
                                       ((uint64_t)(1ULL<<(2)) | (uint64_t)(1ULL<<(4))));
    if (local_data_ptr->vmm_non_extended_state.ia32_lam_enable != 0)
    {
        ia32_wrmsr(0x276, local_data_ptr->vmm_non_extended_state.ia32_lam_enable);
    }
    mark_lp_as_free();
    if ( __builtin_expect((!(local_data_ptr->keyhole_state.total_ref_count == 0)), 0) ) { ; tdx_report_error_and_halt(0x0005, 20); };
                                                                   ;
    tdx_seamret_to_vmm();
    if ( __builtin_expect((!(0)), 0) ) { ; tdx_report_error_and_halt(0x0008, 0); };
}
void insert_cover_point() {
    __VERIFIER_assert(((bool_t)0));
}
void tdg_vp_enter__call() {
    tdx_module_local_t* tdx_local_data_ptr = get_local_data();
    tdx_local_data_ptr->vp_ctx.tdvps->guest_state.gpr_state.rax = tdg_vp_enter(
        tdx_local_data_ptr->td_regs.rcx,
        tdx_local_data_ptr->td_regs.rdx
    );
}
static inline void tdg_vp_enter__common_precond() {
    tdx_leaf_and_version_t leaf_opcode = { .raw = get_local_data()->td_regs.rax };
    assume_exit_if_not(leaf_opcode.leaf == TDG_VP_ENTER_LEAF);
}
static inline bool_t input_vmflag_is_valid() {
    uint64_t vmflag = get_local_data()->td_regs.rcx;
    uint64_t vmindex = (vmflag >> 52) & 0x3;
    uint64_t reserved1 = ((vmflag << 12) >> 14);
    uint64_t reserved2 = (vmflag >> 54);
    return (
        (vmindex >= 1) &&
        (vmindex <= get_local_data()->vp_ctx.tdcs->management_fields.num_l2_vms) &&
        (reserved1 == 0) &&
        (reserved2 == 0)
    );
}
static inline bool_t input_gpa_is_valid() {
    return ((get_local_data()->td_regs.rdx & 0xFF) == 0);
}
static inline bool_t all_conditions_valid() {
    return (
        input_vmflag_is_valid() &&
        input_gpa_is_valid()
    );
}
void tdg_vp_enter__expected__precond() {
    tdg_vp_enter__common_precond();
    assume_exit_if_not(all_conditions_valid());
}
int main() {
    // before_target methods
    init_tdg_vp_xxx();
    tdg_vp_enter__expected__precond();
    insert_cover_point();

    // Target method
    tdg_vp_enter__call();

    // after_target methods
    close_tdg_vp_xxx();

    return 0;
}
// This file is part of the SV-Benchmarks collection of verification tasks:
// [https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks](https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks)
//
// SPDX-FileCopyrightText: 2025 Edoardo Manino
//
// SPDX-License-Identifier: MIT


typedef unsigned int size_t;
typedef long int wchar_t;

typedef struct
  {
    int quot;
    int rem;
  } div_t;
typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;
__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;
typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;
__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef long long int __intmax_t;
__extension__ typedef unsigned long long int __uintmax_t;
__extension__ typedef __uint64_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __uint64_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __int64_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __uint64_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;
__extension__ typedef __int64_t __suseconds64_t;
__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;
__extension__ typedef int __clockid_t;
__extension__ typedef void * __timer_t;
__extension__ typedef long int __blksize_t;
__extension__ typedef long int __blkcnt_t;
__extension__ typedef __int64_t __blkcnt64_t;
__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __uint64_t __fsblkcnt64_t;
__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __uint64_t __fsfilcnt64_t;
__extension__ typedef int __fsword_t;
__extension__ typedef int __ssize_t;
__extension__ typedef long int __syscall_slong_t;
__extension__ typedef unsigned long int __syscall_ulong_t;
typedef __off64_t __loff_t;
typedef char *__caddr_t;
__extension__ typedef int __intptr_t;
__extension__ typedef unsigned int __socklen_t;
typedef int __sig_atomic_t;
__extension__ typedef __int64_t __time64_t;
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;
typedef __loff_t loff_t;
typedef __ino_t ino_t;
typedef __dev_t dev_t;
typedef __gid_t gid_t;
typedef __mode_t mode_t;
typedef __nlink_t nlink_t;
typedef __uid_t uid_t;
typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __id_t id_t;
typedef __ssize_t ssize_t;
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;
typedef __key_t key_t;
typedef __clock_t clock_t;
typedef __clockid_t clockid_t;
typedef __time_t time_t;
typedef __timer_t timer_t;
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;
typedef int register_t __attribute__ ((__mode__ (__word__)));
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{
  return __builtin_bswap16 (__bsx);
}
static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{
  return __builtin_bswap32 (__bsx);
}
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}
static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}
static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
typedef __sigset_t sigset_t;
struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
struct timespec
{
  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
typedef __suseconds_t suseconds_t;
typedef long int __fd_mask;
typedef struct
  {
    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];
  } fd_set;
typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);

typedef __blksize_t blksize_t;
typedef __blkcnt_t blkcnt_t;
typedef __fsblkcnt_t fsblkcnt_t;
typedef __fsfilcnt_t fsfilcnt_t;
typedef union
{
  __extension__ unsigned long long int __value64;
  struct
  {
    unsigned int __low;
    unsigned int __high;
  } __value32;
} __atomic_wide_counter;
typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;
  int __kind;
  unsigned int __nusers;
  __extension__ union
  {
    struct
    {
      short __espins;
      short __eelision;
    } __elision_data;
    __pthread_slist_t __list;
  };
};
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;
  unsigned char __flags;
  unsigned char __shared;
  signed char __rwelision;
  unsigned char __pad2;
  int __cur_writer;
};
struct __pthread_cond_s
{
  __atomic_wide_counter __wseq;
  __atomic_wide_counter __g1_start;
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};
typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;
typedef struct
{
  int __data ;
} __once_flag;
typedef unsigned long int pthread_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;
typedef unsigned int pthread_key_t;
typedef int pthread_once_t;
union pthread_attr_t
{
  char __size[36];
  long int __align;
};
typedef union pthread_attr_t pthread_attr_t;
typedef union
{
  struct __pthread_mutex_s __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;
typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;
typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;
typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;
typedef volatile int pthread_spinlock_t;
typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;
typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;

extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));
extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));
extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };
extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));
extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));
extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));
extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));
extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;
  };
extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern __uint32_t arc4random (void)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern void arc4random_buf (void *__buf, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern __uint32_t arc4random_uniform (__uint32_t __upper_bound)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;
extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));
extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)))
     ;
extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__))  ;

extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));

extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;
extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_align__ (1)))
     __attribute__ ((__alloc_size__ (2))) ;
extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int system (const char *__command) ;
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;
typedef int (*__compar_fn_t) (const void *, const void *);
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;
extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__))  ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__))  ;
__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__))  ;
extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__))  ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__))  ;
__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__))  ;
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;
extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;
extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));
extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));
extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));
extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3)))
  __attribute__ ((__access__ (__read_only__, 2)));
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));

float __VERIFIER_nondet_float();
inline void reach_error() { ((void) sizeof ((0) ? 1 : 0), __extension__ ({ if (0) ; else __assert_fail ("0", "/home/runner/work/plain_c_nn_benchmark/plain_c_nn_benchmark/build/verifier_functions.h", 12, __extension__ __PRETTY_FUNCTION__); })); }

typedef long double float_t;
typedef long double double_t;
extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __iseqsig (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignaling (double __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
 extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
 extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));
 extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
 extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));
extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));
extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));
extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __iseqsigf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
 extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));
 extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
 extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));
 extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
 extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));
extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int __iseqsigl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int __issignalingl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     ;
 extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));
extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));
 extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
 extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
 extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
 extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__));
extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
  ;
extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
 extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
 extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));
extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));
extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));
extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));
extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
__extension__
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));
extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) ; extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) ;
extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
     ;
extern int signgam;
enum
  {
    FP_NAN =
      0,
    FP_INFINITE =
      1,
    FP_ZERO =
      2,
    FP_SUBNORMAL =
      3,
    FP_NORMAL =
      4
  };

void entry(const float tensor_onnx__Pad_0[1][2], float tensor_43[1][1]);
int main()
{
    float tensor_onnx__Pad_0[1][2];
    float tensor_43[1][1];
 tensor_onnx__Pad_0[0][0] = __VERIFIER_nondet_float();
 tensor_onnx__Pad_0[0][1] = __VERIFIER_nondet_float();
 if(!(tensor_onnx__Pad_0[0][0] >= -1.6f && tensor_onnx__Pad_0[0][0] <= -1.4f)) abort();;
 if(!(tensor_onnx__Pad_0[0][1] >= -1.6f && tensor_onnx__Pad_0[0][1] <= -1.4f)) abort();;
 entry(tensor_onnx__Pad_0, tensor_43);
 if(!(tensor_43[0][0] <= 0.793593f)) reach_error();
    return 0;
}
typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef __int_least8_t int_least8_t;
typedef __int_least16_t int_least16_t;
typedef __int_least32_t int_least32_t;
typedef __int_least64_t int_least64_t;
typedef __uint_least8_t uint_least8_t;
typedef __uint_least16_t uint_least16_t;
typedef __uint_least32_t uint_least32_t;
typedef __uint_least64_t uint_least64_t;
typedef signed char int_fast8_t;
typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;
typedef unsigned char uint_fast8_t;
typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
typedef int intptr_t;
typedef unsigned int uintptr_t;
typedef __intmax_t intmax_t;
typedef __uintmax_t uintmax_t;

extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 4)));
extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int __memcmpeq (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
    __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2))) __attribute__ ((__access__ (__write_only__, 1, 3)));
struct __locale_struct
{
  struct __locale_data *__locales[13];
  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;
  const char *__names[13];
};
typedef struct __locale_struct *__locale_t;
typedef __locale_t locale_t;
extern int strcoll_l (const char *__s1, const char *__s2, locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)))
     __attribute__ ((__access__ (__write_only__, 1, 3)));
extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strchrnul (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
extern char *strcasestr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)))
    __attribute__ ((__access__ (__read_only__, 1, 2)))
    __attribute__ ((__access__ (__read_only__, 3, 4)));
extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)))
    __attribute__ ((__access__ (__write_only__, 2, 3)));
extern char *strerror_l (int __errnum, locale_t __l) __attribute__ ((__nothrow__ , __leaf__));

extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bcopy (const void *__src, void *__dest, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ffsl (long int __l) __attribute__ ((__nothrow__ , __leaf__)) ;
__extension__ extern int ffsll (long long int __ll)
     __attribute__ ((__nothrow__ , __leaf__)) ;
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern int strcasecmp_l (const char *__s1, const char *__s2, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));
extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, locale_t __loc)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));

extern void explicit_bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)))
    __attribute__ ((__access__ (__write_only__, 1, 2)));
extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));
extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern size_t strlcpy (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__write_only__, 1, 3)));
extern size_t strlcat (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
  __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__access__ (__read_write__, 1, 3)));

static const float tensor__0_Constant_8_output_0[1] =
{0.0000000000000000000f};
static const float tensor__1_Constant_output_0[12][12] =
{
  {-0.22627483308315277100f, -0.32376798987388610840f, -0.33836024999618530273f, 0.045693088322877883911f, 0.79617404937744140625f, 0.15444305539131164551f, -0.079917632043361663818f, 0.14118687808513641357f, 0.37714117765426635742f, -0.44956335425376892090f, -0.10401693731546401978f, 0.088009133934974670410f},
  {0.39528581500053405762f, -0.30122232437133789062f, 0.21792033314704895020f, -0.27838388085365295410f, 0.25282239913940429688f, -0.16535459458827972412f, 0.24722336232662200928f, 0.090092413127422332764f, -0.17640882730484008789f, 0.11890707910060882568f, -0.075514353811740875244f, 0.24474625289440155029f},
  {0.42509672045707702637f, 0.54239583015441894531f, -0.65278285741806030273f, 0.50493985414505004883f, 0.20457161962985992432f, -0.15589471161365509033f, 0.036007069051265716553f, -0.48283821344375610352f, 0.024357827380299568176f, 0.028416302055120468140f, -0.088100299239158630371f, -0.51401406526565551758f},
  {-0.29826128482818603516f, 0.33998188376426696777f, -0.14680936932563781738f, 0.39529636502265930176f, -0.030853299424052238464f, 0.34103795886039733887f, -0.10145464539527893066f, -0.31946033239364624023f, 0.061066199094057083130f, -0.066640935838222503662f, -0.021894311532378196716f, -0.82513755559921264648f},
  {-0.030152942985296249390f, 0.0072279507294297218323f, 0.088666476309299468994f, -0.15034525096416473389f, 0.046237640082836151123f, 0.0034591041039675474167f, -0.26625615358352661133f, 0.011282156221568584442f, 0.041899502277374267578f, 0.077912732958793640137f, 0.082173131406307220459f, -0.010183148086071014404f},
  {-0.28299340605735778809f, 0.066890329122543334961f, 0.043388426303863525391f, 0.097837820649147033691f, 0.30095377564430236816f, -0.34219634532928466797f, 0.13870616257190704346f, 0.33496895432472229004f, 0.042338997125625610352f, 0.55010372400283813477f, 0.011159555986523628235f, -0.17233024537563323975f},
  {0.25526648759841918945f, 0.32677394151687622070f, 0.12930464744567871094f, -0.0082833841443061828613f, 0.047457393258810043335f, -0.095983289182186126709f, -0.24590097367763519287f, 0.43039509654045104980f, -0.040707662701606750488f, -0.24253739416599273682f, -0.22632044553756713867f, -0.14119450747966766357f},
  {-0.20594927668571472168f, 0.29545590281486511230f, 0.077099531888961791992f, 0.38301083445549011230f, 0.21428789198398590088f, 0.023331651464104652405f, -0.018690053373575210571f, 0.18889640271663665771f, -0.12683431804180145264f, 0.30632382631301879883f, 0.19157315790653228760f, 0.22696943581104278564f},
  {-0.27772790193557739258f, 0.29243773221969604492f, -0.059851907193660736084f, -0.25542530417442321777f, 0.082022301852703094482f, 0.16097235679626464844f, -0.013317461125552654266f, -0.25716197490692138672f, -0.13558787107467651367f, 0.19590114057064056396f, -0.79152560234069824219f, 0.26893123984336853027f},
  {0.25981321930885314941f, 0.30945709347724914551f, 0.15311723947525024414f, -0.13068976998329162598f, -0.0078598195686936378479f, 0.42760387063026428223f, 0.24215009808540344238f, -0.020555108785629272461f, 0.54661685228347778320f, 0.061409395188093185425f, 0.10721850395202636719f, 0.13206152617931365967f},
  {0.33562248945236206055f, -0.38126003742218017578f, 0.38491126894950866699f, 0.27347490191459655762f, 0.15190103650093078613f, 0.095389164984226226807f, -0.076753415167331695557f, -0.14388647675514221191f, 0.035780359059572219849f, 0.18675047159194946289f, -0.29383173584938049316f, -0.12210008502006530762f},
  {-0.039627816528081893921f, 0.00071811379166319966316f, 0.22728843986988067627f, -0.069279059767723083496f, 0.098679736256599426270f, -0.35085737705230712891f, -0.0089989537373185157776f, -0.68925482034683227539f, 0.064766936004161834717f, -0.085977666079998016357f, 0.26939225196838378906f, 0.35536321997642517090f}
};
static const float tensor__1_Constant_1_output_0[12] =
{0.40558424592018127441f, 0.34377738833427429199f, -0.39172580838203430176f, 1.5183026790618896484f, 0.56103545427322387695f, 0.54118871688842773438f, -0.72241991758346557617f, 1.0090923309326171875f, -0.15030482411384582520f, 0.47955983877182006836f, -0.17911604046821594238f, -0.013997978530824184418f};
static const float tensor__1_Constant_2_output_0[12][12] =
{
  {-0.33691972494125366211f, -0.48208549618721008301f, -0.50381314754486083984f, 0.068036295473575592041f, 1.1854908466339111328f, 0.22996331751346588135f, -0.11899611353874206543f, 0.21022507548332214355f, 0.56155735254287719727f, -0.66939282417297363281f, -0.15487959980964660645f, 0.13104423880577087402f},
  {0.45198783278465270996f, -0.34443134069442749023f, 0.24918004870414733887f, -0.31831681728363037109f, 0.28908866643905639648f, -0.18907397985458374023f, 0.28268647193908691406f, 0.10301577299833297729f, -0.20171390473842620850f, 0.13596378266811370850f, -0.086346559226512908936f, 0.27985402941703796387f},
  {0.27208909392356872559f, 0.34716799855232238770f, -0.41782277822494506836f, 0.32319378852844238281f, 0.13093891739845275879f, -0.099782586097717285156f, 0.023046826943755149841f, -0.30904734134674072266f, 0.015590567141771316528f, 0.018188251182436943054f, -0.056389823555946350098f, -0.32900187373161315918f},
  {-0.079372383654117584229f, 0.090474940836429595947f, -0.039068460464477539062f, 0.10519506037235260010f, -0.0082105854526162147522f, 0.090755976736545562744f, -0.026998801156878471375f, -0.085013806819915771484f, 0.016250750049948692322f, -0.017734281718730926514f, -0.0058264471590518951416f, -0.21958309412002563477f},
  {-0.10784810781478881836f, 0.025852229446172714233f, 0.31713360548019409180f, -0.53774023056030273438f, 0.16537828743457794189f, 0.012372186407446861267f, -0.95231908559799194336f, 0.040352918207645416260f, 0.14986206591129302979f, 0.27867066860198974609f, 0.29390886425971984863f, -0.036422092467546463013f},
  {-0.35393348336219787598f, 0.083658225834369659424f, 0.054264925420284271240f, 0.12236355990171432495f, 0.37639611959457397461f, -0.42797726392745971680f, 0.17347666621208190918f, 0.41893813014030456543f, 0.052952431142330169678f, 0.68800234794616699219f, 0.013957004994153976440f, -0.21552956104278564453f},
  {0.74948734045028686523f, 0.95944017171859741211f, 0.37965106964111328125f, -0.024320824071764945984f, 0.13933953642845153809f, -0.28181630373001098633f, -0.72198927402496337891f, 1.2636820077896118164f, -0.11952167004346847534f, -0.71211344003677368164f, -0.66449892520904541016f, -0.41456085443496704102f},
  {-0.34081381559371948242f, 0.48893326520919799805f, 0.12758766114711761475f, 0.63382297754287719727f, 0.35461291670799255371f, 0.038610231131315231323f, -0.030929112806916236877f, 0.31259396672248840332f, -0.20989094674587249756f, 0.50691795349121093750f, 0.31702357530593872070f, 0.37559887766838073730f},
  {-0.50763469934463500977f, 0.53452152013778686523f, -0.10939809679985046387f, -0.46686971187591552734f, 0.14992143213748931885f, 0.29422736167907714844f, -0.024341829121112823486f, -0.47004401683807373047f, -0.24782927334308624268f, 0.35807067155838012695f, -1.4467607736587524414f, 0.49155601859092712402f},
  {0.57957911491394042969f, 0.69032233953475952148f, 0.34156674146652221680f, -0.29153659939765930176f, -0.017533315345644950867f, 0.95387858152389526367f, 0.54017704725265502930f, -0.045853368937969207764f, 1.2193671464920043945f, 0.13698919117450714111f, 0.23917798697948455811f, 0.29459664225578308105f},
  {0.80674880743026733398f, -0.91644954681396484375f, 0.92522615194320678711f, 0.65736222267150878906f, 0.36513039469718933105f, 0.22929063439369201660f, -0.18449515104293823242f, -0.34586548805236816406f, 0.086006633937358856201f, 0.44889932870864868164f, -0.70629471540451049805f, -0.29349669814109802246f},
  {-0.013806205242872238159f, 0.00025018854648806154728f, 0.079186566174030303955f, -0.024136602878570556641f, 0.034379705786705017090f, -0.12223759293556213379f, -0.0031352066434919834137f, -0.24013417959213256836f, 0.022564593702554702759f, -0.029954344034194946289f, 0.093855403363704681396f, 0.12380740791559219360f}
};
static const float tensor__2_Constant_output_0[12][12] =
{
  {0.11076007783412933350f, 0.24513518810272216797f, 0.33294048905372619629f, 0.23458255827426910400f, -0.12309264391660690308f, -0.26058959960937500000f, -0.22978691756725311279f, -0.082542955875396728516f, -0.32651785016059875488f, 0.065982945263385772705f, 0.0010917440522462129593f, 0.10262612253427505493f},
  {0.30557397007942199707f, -0.38601592183113098145f, -0.43759381771087646484f, 0.37635043263435363770f, 0.54472762346267700195f, -0.13472229242324829102f, -0.34738591313362121582f, -0.14121934771537780762f, -0.21369060873985290527f, -0.42244845628738403320f, -0.080564528703689575195f, 0.17289109528064727783f},
  {-0.025472266599535942078f, -0.025007644668221473694f, -0.061577256768941879272f, 0.041533671319484710693f, -0.18450191617012023926f, -0.22748760879039764404f, -0.14143335819244384766f, 0.16117130219936370850f, 0.24434667825698852539f, -0.12832129001617431641f, 0.16985040903091430664f, 0.060863729566335678101f},
  {-0.066144280135631561279f, -0.14192217588424682617f, 0.029377041384577751160f, 0.22500291466712951660f, -0.0036740398500114679337f, 0.16112548112869262695f, 0.18431128561496734619f, -0.0082883955910801887512f, 0.19691966474056243896f, -0.062033802270889282227f, -0.021734997630119323730f, -0.027556212618947029114f},
  {-0.11420191824436187744f, -0.082384049892425537109f, -0.099574357271194458008f, 0.12405849993228912354f, -0.36006802320480346680f, -0.25806632637977600098f, 0.46409374475479125977f, 0.033967725932598114014f, -0.21333719789981842041f, -0.47930389642715454102f, -0.43910983204841613770f, -0.25490495562553405762f},
  {-0.16948525607585906982f, 0.27029097080230712891f, -0.46437975764274597168f, -0.12088175863027572632f, -0.17183104157447814941f, -0.49797478318214416504f, 0.51612257957458496094f, -0.17480018734931945801f, -0.11416595429182052612f, -0.26113304495811462402f, -0.43136397004127502441f, 0.055308263748884201050f},
  {0.10580593347549438477f, -0.12508848309516906738f, -0.0026731444522738456726f, 0.084820225834846496582f, -0.022187413647770881653f, -0.13601487874984741211f, 0.19345155358314514160f, 0.046108983457088470459f, -0.073542669415473937988f, 0.14813922345638275146f, 0.089809946715831756592f, 0.043853495270013809204f},
  {-0.19403797388076782227f, 0.13761688768863677979f, 0.15914282202720642090f, -0.24664798378944396973f, -0.034500852227210998535f, 0.15238431096076965332f, -0.38345888257026672363f, -0.13814362883567810059f, 0.066015556454658508301f, -0.47085234522819519043f, -0.27117779850959777832f, -0.25862103700637817383f},
  {0.037914600223302841187f, 0.076920472085475921631f, 0.40628734230995178223f, -0.26479551196098327637f, 0.25616526603698730469f, -0.17917786538600921631f, 0.062391247600317001343f, 0.11337845027446746826f, -0.061685711145401000977f, -0.19981862604618072510f, -0.0022762308362871408463f, 0.42127999663352966309f},
  {-0.11733520776033401489f, -0.14742977917194366455f, -0.030409896746277809143f, -0.059422552585601806641f, -0.18520042300224304199f, 0.092536933720111846924f, -0.020288240164518356323f, -0.17668004333972930908f, -0.11494279652833938599f, -0.043670035898685455322f, 0.099550396203994750977f, 0.19594232738018035889f},
  {-0.27036944031715393066f, -0.074679523706436157227f, -0.012883348390460014343f, -0.0059777540154755115509f, 0.29913145303726196289f, 0.28953155875205993652f, 0.33567136526107788086f, 0.19686700403690338135f, -0.049271624535322189331f, -0.38452363014221191406f, 0.64084541797637939453f, -0.30326145887374877930f},
  {-0.77990800142288208008f, -0.083818241953849792480f, 0.16551737487316131592f, 0.31736412644386291504f, 0.21941924095153808594f, -0.33033424615859985352f, -0.19502730667591094971f, 0.042271845042705535889f, -0.18541316688060760498f, 0.25158485770225524902f, -0.078888930380344390869f, -0.040038496255874633789f}
};
static const float tensor__2_Constant_1_output_0[12] =
{0.19270308315753936768f, 0.20289894938468933105f, -0.44479525089263916016f, -0.21355971693992614746f, -0.32673928141593933105f, 0.53212970495223999023f, 0.092372491955757141113f, -0.013062532991170883179f, 0.25020739436149597168f, -0.74741280078887939453f, -0.81281948089599609375f, -0.24744126200675964355f};
static const float tensor__2_Constant_2_output_0[12][12] =
{
  {0.039732821285724639893f, 0.087937027215957641602f, 0.11943531036376953125f, 0.084151498973369598389f, -0.044156864285469055176f, -0.093480966985225677490f, -0.082431167364120483398f, -0.029610527679324150085f, -0.11713132262229919434f, 0.023669976741075515747f, 0.00039163994370028376579f, 0.036814935505390167236f},
  {0.46582838892936706543f, -0.58845710754394531250f, -0.66708439588546752930f, 0.57372266054153442383f, 0.83040314912796020508f, -0.20537570118904113770f, -0.52956807613372802734f, -0.21528005599975585938f, -0.32575795054435729980f, -0.64399623870849609375f, -0.12281557917594909668f, 0.26356166601181030273f},
  {-0.20411667227745056152f, -0.20039351284503936768f, -0.49343645572662353516f, 0.33282136917114257812f, -1.4784674644470214844f, -1.8229242563247680664f, -1.1333465576171875000f, 1.2915124893188476562f, 1.9580209255218505859f, -1.0282757282257080078f, 1.3610606193542480469f, 0.48771873116493225098f},
  {-0.0063373805023729801178f, -0.013597771525382995605f, 0.0028146572876721620560f, 0.021557858213782310486f, -0.00035201513674110174179f, 0.015437668189406394958f, 0.017659133300185203552f, -0.00079412333434447646141f, 0.018867161124944686890f, -0.0059435493312776088715f, -0.0020824619568884372711f, -0.0026402010116726160049f},
  {-0.028056174516677856445f, -0.020239425823092460632f, -0.024462597444653511047f, 0.030477657914161682129f, -0.088458508253097534180f, -0.063399583101272583008f, 0.11401467770338058472f, 0.0083449073135852813721f, -0.052410904318094253540f, -0.11775138229131698608f, -0.10787684470415115356f, -0.062622927129268646240f},
  {-0.12436998635530471802f, 0.19834223389625549316f, -0.34076654911041259766f, -0.088704250752925872803f, -0.12609134614467620850f, -0.36541891098022460938f, 0.37873595952987670898f, -0.12827013432979583740f, -0.083776123821735382080f, -0.19162206351757049561f, -0.31653922796249389648f, 0.040585760027170181274f},
  {0.068995766341686248779f, -0.081569865345954895020f, -0.0017431504093110561371f, 0.055311042815446853638f, -0.014468353241682052612f, -0.088694937527179718018f, 0.12614923715591430664f, 0.030067546293139457703f, -0.047956980764865875244f, 0.096601195633411407471f, 0.058564826846122741699f, 0.028596747666597366333f},
  {-0.49847126007080078125f, 0.35352906584739685059f, 0.40882781147956848145f, -0.63362300395965576172f, -0.088630504906177520752f, 0.39146563410758972168f, -0.98508155345916748047f, -0.35488221049308776855f, 0.16958977282047271729f, -1.2095898389816284180f, -0.69663858413696289062f, -0.66438102722167968750f},
  {0.10945777595043182373f, 0.22206600010395050049f, 1.1729335784912109375f, -0.76445293426513671875f, 0.73953777551651000977f, -0.51727855205535888672f, 0.18012076616287231445f, 0.32731857895851135254f, -0.17808391153812408447f, -0.57686752080917358398f, -0.0065713776275515556335f, 1.2162166833877563477f},
  {-1.3144705295562744141f, -1.6516108512878417969f, -0.34067279100418090820f, -0.66569274663925170898f, -2.0747437477111816406f, 1.0366630554199218750f, -0.22728297114372253418f, -1.9792926311492919922f, -1.2876690626144409180f, -0.48922207951545715332f, 1.1152327060699462891f, 2.1950821876525878906f},
  {-0.48044651746749877930f, -0.13270552456378936768f, -0.022893710061907768250f, -0.010622469708323478699f, 0.53155660629272460938f, 0.51449757814407348633f, 0.59648805856704711914f, 0.34983268380165100098f, -0.087555676698684692383f, -0.68329852819442749023f, 1.1387823820114135742f, -0.53889560699462890625f},
  {-1.4578500986099243164f, -0.15667800605297088623f, 0.30939483642578125000f, 0.59323573112487792969f, 0.41015139222145080566f, -0.61748027801513671875f, -0.36455655097961425781f, 0.079017028212547302246f, -0.34658524394035339355f, 0.47027724981307983398f, -0.14746384322643280029f, -0.074842318892478942871f}
};
static const float tensor__3_Constant_output_0[1][12] =
{
  {0.49198389053344726562f, -0.26243022084236145020f, 0.048084340989589691162f, -0.32902127504348754883f, -0.078036457300186157227f, 0.33276379108428955078f, -0.071456357836723327637f, -0.38962721824645996094f, -0.099701404571533203125f, -0.18452869355678558350f, -0.37667176127433776855f, 0.34482678771018981934f}
};
static const float tensor__3_Constant_1_output_0[1] =
{-0.051957976073026657104f};
static const int64_t tensor__0_Reshape_1_output_0[4] =
{0, 0, 0, 10};
union tensor_union_0 {
float tensor__0_Pad_output_0[1][12];
float tensor__2_Gemm_output_0[1][12];
float tensor__2_MatMul_output_0[1][12];
};
static union tensor_union_0 tu0;
union tensor_union_1 {
float tensor__1_Gemm_output_0[1][12];
float tensor__1_MatMul_output_0[1][12];
float tensor__2_activation_Relu_output_0[1][12];
float tensor__2_Sub_output_0[1][12];
};
static union tensor_union_1 tu1;
union tensor_union_2 {
float tensor__1_activation_Relu_output_0[1][12];
float tensor__1_Sub_output_0[1][12];
};
static union tensor_union_2 tu2;
static inline void node__0_Pad( const float data[1][2], const int64_t pads[4], const float constant_value[1], float output[1][12] )
{
 uint32_t ir0;
 for( uint32_t o0=0, il0=0; o0<1; o0++ ) {
  _Bool pad_at_0=0;
  if( o0 < 1){
   ir0=il0;
   il0++;
  }
  else {
   pad_at_0= 1;
  }
  uint32_t ir1;
  for( uint32_t o1=0, il1=0; o1<12; o1++ ) {
   _Bool pad_at_1=0;
   if( o1 < 2){
    ir1=il1;
    il1++;
   }
   else {
    pad_at_1= 1;
   }
 if ( pad_at_0 || pad_at_1)
  output[o0][o1] = 0.0000000000000000000;
 else
  output[o0][o1]= data[ir0][ir1];
  }
 }
}
static inline void node__1_Gemm( const float tensor__0_Pad_output_0[1][12], const float tensor__1_Constant_output_0[12][12], const float tensor__1_Constant_1_output_0[12], float tensor__1_Gemm_output_0[1][12] )
{
 const int M = 1;
 const int K = 12;
 const int N = 12;
 float (*A)[12] = (float(*)[12])tensor__0_Pad_output_0;
 float (*Y)[12] = (float(*)[12])tensor__1_Gemm_output_0;
 float alpha = 1.0000000000000000000;
 float beta = 1.0000000000000000000;
 float (*C)[12] = (float(*)[12])tensor__1_Constant_1_output_0;
 for( uint32_t r=0; r<M; r++ )
  for( uint32_t c=0; c<N; c++ ) {
   float ABrc = 0;
   for( uint32_t i=0; i<K; i++ ) {
    float B = tensor__1_Constant_output_0[c][i];
    ABrc += A[r][i] * B;
   }
   float tmp = ABrc * alpha;
   tmp += C[0][c] * beta;
   Y[r][c] = tmp;
 }
}
static inline void node__1_activation_Relu( const float tensor__1_Gemm_output_0[1][12], float tensor__1_activation_Relu_output_0[1][12] )
{
 float *X = (float*)tensor__1_Gemm_output_0;
 float *Y = (float*)tensor__1_activation_Relu_output_0;
 for( uint32_t i=0; i<12; i++ )
  Y[i] = X[i] > 0 ? X[i] : 0;
}
static inline void node__1_MatMul( const float A[1][12], const float B[12][12], float Y[1][12] )
{
 for( uint32_t r=0; r<1; r++ )
  for( uint32_t c=0; c<12; c++ ) {
   Y[r][c] = 0;
   for( uint32_t i=0; i<12; i++ )
    Y[r][c] += A[r][i] * B[i][c];
  }
}
static inline void node__1_Sub( const float tensor__0_Pad_output_0[1][12], const float tensor__1_MatMul_output_0[1][12], float tensor__1_Sub_output_0[1][12] )
{
 for (unsigned i0=0; i0<1; i0++) {
 for (unsigned i1=0; i1<12; i1++) {
  tensor__1_Sub_output_0[i0][i1] = tensor__0_Pad_output_0[0][i1]-tensor__1_MatMul_output_0[0][i1];;
 }
 }
}
static inline void node__2_Gemm( const float tensor__1_Sub_output_0[1][12], const float tensor__2_Constant_output_0[12][12], const float tensor__2_Constant_1_output_0[12], float tensor__2_Gemm_output_0[1][12] )
{
 const int M = 1;
 const int K = 12;
 const int N = 12;
 float (*A)[12] = (float(*)[12])tensor__1_Sub_output_0;
 float (*Y)[12] = (float(*)[12])tensor__2_Gemm_output_0;
 float alpha = 1.0000000000000000000;
 float beta = 1.0000000000000000000;
 float (*C)[12] = (float(*)[12])tensor__2_Constant_1_output_0;
 for( uint32_t r=0; r<M; r++ )
  for( uint32_t c=0; c<N; c++ ) {
   float ABrc = 0;
   for( uint32_t i=0; i<K; i++ ) {
    float B = tensor__2_Constant_output_0[c][i];
    ABrc += A[r][i] * B;
   }
   float tmp = ABrc * alpha;
   tmp += C[0][c] * beta;
   Y[r][c] = tmp;
 }
}
static inline void node__2_activation_Relu( const float tensor__2_Gemm_output_0[1][12], float tensor__2_activation_Relu_output_0[1][12] )
{
 float *X = (float*)tensor__2_Gemm_output_0;
 float *Y = (float*)tensor__2_activation_Relu_output_0;
 for( uint32_t i=0; i<12; i++ )
  Y[i] = X[i] > 0 ? X[i] : 0;
}
static inline void node__2_MatMul( const float A[1][12], const float B[12][12], float Y[1][12] )
{
 for( uint32_t r=0; r<1; r++ )
  for( uint32_t c=0; c<12; c++ ) {
   Y[r][c] = 0;
   for( uint32_t i=0; i<12; i++ )
    Y[r][c] += A[r][i] * B[i][c];
  }
}
static inline void node__2_Sub( const float tensor__1_Sub_output_0[1][12], const float tensor__2_MatMul_output_0[1][12], float tensor__2_Sub_output_0[1][12] )
{
 for (unsigned i0=0; i0<1; i0++) {
 for (unsigned i1=0; i1<12; i1++) {
  tensor__2_Sub_output_0[i0][i1] = tensor__1_Sub_output_0[0][i1]-tensor__2_MatMul_output_0[0][i1];;
 }
 }
}
static inline void node__3_Gemm( const float tensor__2_Sub_output_0[1][12], const float tensor__3_Constant_output_0[1][12], const float tensor__3_Constant_1_output_0[1], float tensor_43[1][1] )
{
 const int M = 1;
 const int K = 12;
 const int N = 1;
 float (*A)[12] = (float(*)[12])tensor__2_Sub_output_0;
 float (*Y)[1] = (float(*)[1])tensor_43;
 float alpha = 1.0000000000000000000;
 float beta = 1.0000000000000000000;
 float (*C)[1] = (float(*)[1])tensor__3_Constant_1_output_0;
 for( uint32_t r=0; r<M; r++ )
  for( uint32_t c=0; c<N; c++ ) {
   float ABrc = 0;
   for( uint32_t i=0; i<K; i++ ) {
    float B = tensor__3_Constant_output_0[c][i];
    ABrc += A[r][i] * B;
   }
   float tmp = ABrc * alpha;
   tmp += C[0][0] * beta;
   Y[r][c] = tmp;
 }
}
void entry(const float tensor_onnx__Pad_0[1][2], float tensor_43[1][1]) {
 node__0_Pad( tensor_onnx__Pad_0, tensor__0_Reshape_1_output_0, tensor__0_Constant_8_output_0, tu0.tensor__0_Pad_output_0);
 node__1_Gemm( tu0.tensor__0_Pad_output_0, tensor__1_Constant_output_0, tensor__1_Constant_1_output_0, tu1.tensor__1_Gemm_output_0);
 node__1_activation_Relu( tu1.tensor__1_Gemm_output_0, tu2.tensor__1_activation_Relu_output_0);
 node__1_MatMul( tu2.tensor__1_activation_Relu_output_0, tensor__1_Constant_2_output_0, tu1.tensor__1_MatMul_output_0);
 node__1_Sub( tu0.tensor__0_Pad_output_0, tu1.tensor__1_MatMul_output_0, tu2.tensor__1_Sub_output_0);
 node__2_Gemm( tu2.tensor__1_Sub_output_0, tensor__2_Constant_output_0, tensor__2_Constant_1_output_0, tu0.tensor__2_Gemm_output_0);
 node__2_activation_Relu( tu0.tensor__2_Gemm_output_0, tu1.tensor__2_activation_Relu_output_0);
 node__2_MatMul( tu1.tensor__2_activation_Relu_output_0, tensor__2_Constant_2_output_0, tu0.tensor__2_MatMul_output_0);
 node__2_Sub( tu2.tensor__1_Sub_output_0, tu0.tensor__2_MatMul_output_0, tu1.tensor__2_Sub_output_0);
 node__3_Gemm( tu1.tensor__2_Sub_output_0, tensor__3_Constant_output_0, tensor__3_Constant_1_output_0, tensor_43);
}

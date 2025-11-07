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

void entry(const float tensor_onnx__Pad_0[1][3], float tensor_43[1][1]);
int main()
{
    float tensor_onnx__Pad_0[1][3];
    float tensor_43[1][1];
 tensor_onnx__Pad_0[0][0] = __VERIFIER_nondet_float();
 tensor_onnx__Pad_0[0][1] = __VERIFIER_nondet_float();
 tensor_onnx__Pad_0[0][2] = __VERIFIER_nondet_float();
 if(!(tensor_onnx__Pad_0[0][0] >= -1.6f && tensor_onnx__Pad_0[0][0] <= -1.4f)) abort();;
 if(!(tensor_onnx__Pad_0[0][1] >= -1.6f && tensor_onnx__Pad_0[0][1] <= -1.4f)) abort();;
 if(!(tensor_onnx__Pad_0[0][2] >= -1.6f && tensor_onnx__Pad_0[0][2] <= -1.4f)) abort();;
 entry(tensor_onnx__Pad_0, tensor_43);
 if(!(tensor_43[0][0] <= 0.611549f)) reach_error();
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
  {0.095259808003902435303f, 0.29663807153701782227f, 0.010461648926138877869f, 0.11457742005586624146f, -0.066284030675888061523f, -0.28158387541770935059f, 0.022483695298433303833f, 0.069944478571414947510f, 0.13526901602745056152f, -0.12493263185024261475f, -0.062300197780132293701f, 0.17856824398040771484f},
  {0.26900100708007812500f, -0.16368016600608825684f, 0.24587431550025939941f, 0.019367964938282966614f, -0.37276077270507812500f, -0.021971713751554489136f, 0.20941351354122161865f, 0.020097434520721435547f, -0.56328612565994262695f, -0.23521700501441955566f, 0.055246226489543914795f, 0.17374801635742187500f},
  {-0.32527250051498413086f, -0.32349094748497009277f, -0.48727804422378540039f, -0.84224867820739746094f, -0.18515950441360473633f, 0.62849760055541992188f, -0.22679381072521209717f, -0.21254466474056243896f, -0.41292706131935119629f, 0.041245836764574050903f, 0.18368399143218994141f, -0.31864628195762634277f},
  {0.31335741281509399414f, 0.39310386776924133301f, 0.47676497697830200195f, -0.013864177279174327850f, -0.20375823974609375000f, 0.89906042814254760742f, -0.28872150182723999023f, 0.17709511518478393555f, 0.37575301527976989746f, -0.40141525864601135254f, -0.0020615216344594955444f, -0.10107374191284179688f},
  {-0.18678104877471923828f, 0.21694050729274749756f, -0.16290986537933349609f, 0.28291264176368713379f, -0.40241113305091857910f, 0.10832257568836212158f, 0.26163873076438903809f, -0.079015724360942840576f, 0.070489682257175445557f, 0.23993806540966033936f, -0.10328452289104461670f, -0.33557689189910888672f},
  {-0.14327138662338256836f, 0.21902243793010711670f, 0.15441551804542541504f, 0.33141726255416870117f, -0.20580025017261505127f, 0.083582252264022827148f, 0.19823455810546875000f, 0.0034668680746108293533f, 0.0017764357617124915123f, 0.43604972958564758301f, 0.35112825036048889160f, -0.052231494337320327759f},
  {0.21600480377674102783f, 0.13767342269420623779f, 0.14486585557460784912f, -0.024401346221566200256f, 0.10583460330963134766f, 0.0039998115971684455872f, 0.32963356375694274902f, -0.54289180040359497070f, -0.23946407437324523926f, -0.25969329476356506348f, 0.18899095058441162109f, -0.055973354727029800415f},
  {-0.023579904809594154358f, 0.38230222463607788086f, -0.42337161302566528320f, -0.095161586999893188477f, 0.26131448149681091309f, 0.43052816390991210938f, 0.24249601364135742188f, 0.15539945662021636963f, -0.34333586692810058594f, 0.14381209015846252441f, -0.17276716232299804688f, 0.44685277342796325684f},
  {0.18766348063945770264f, 0.26036080718040466309f, 0.23922574520111083984f, -0.22752377390861511230f, 0.15535694360733032227f, -0.13280498981475830078f, 0.20583319664001464844f, 0.16166894137859344482f, -0.33878362178802490234f, 0.019896984100341796875f, -0.054251357913017272949f, -0.38821440935134887695f},
  {-0.13884480297565460205f, 0.23331823945045471191f, 0.086525171995162963867f, 0.46621084213256835938f, 0.14767143130302429199f, -0.024996994063258171082f, -0.68987601995468139648f, -0.23576584458351135254f, -0.50669652223587036133f, 0.016233289614319801331f, -0.22622019052505493164f, -0.11154194176197052002f},
  {-0.30639156699180603027f, -0.71988284587860107422f, 0.10901688039302825928f, 0.29046854376792907715f, -0.15763051807880401611f, 0.45390006899833679199f, -0.49968641996383666992f, -0.62100917100906372070f, -0.12187775224447250366f, 0.55805587768554687500f, -0.39126208424568176270f, 0.48217365145683288574f},
  {-0.16036126017570495605f, 0.095924973487854003906f, 0.053207948803901672363f, 0.066964112222194671631f, -0.023726925253868103027f, 0.052503742277622222900f, -0.27062568068504333496f, 0.39746886491775512695f, -0.027819858863949775696f, 0.50721621513366699219f, 0.51898640394210815430f, -0.036534011363983154297f}
};
static const float tensor__1_Constant_1_output_0[12] =
{-0.79191213846206665039f, 0.16621288657188415527f, -0.16723830997943878174f, -0.31702089309692382812f, 0.55030679702758789062f, 0.72684991359710693359f, 0.48219069838523864746f, -0.17085960507392883301f, 0.54507142305374145508f, 0.41589409112930297852f, -0.16470052301883697510f, 0.34427812695503234863f};
static const float tensor__1_Constant_2_output_0[12][12] =
{
  {0.14112585783004760742f, 0.43946447968482971191f, 0.015498762018978595734f, 0.16974458098411560059f, -0.098198711872100830078f, -0.41716191172599792480f, 0.033309228718280792236f, 0.10362160205841064453f, 0.20039884746074676514f, -0.18508565425872802734f, -0.092296727001667022705f, 0.26454594731330871582f},
  {0.34685486555099487305f, -0.21105222404003143311f, 0.31703487038612365723f, 0.024973411113023757935f, -0.48064461350440979004f, -0.028330733999609947205f, 0.27002164721488952637f, 0.025914002209901809692f, -0.72631150484085083008f, -0.30329313874244689941f, 0.071235507726669311523f, 0.22403389215469360352f},
  {-0.083993002772331237793f, -0.083532966673374176025f, -0.12582664191722869873f, -0.21748840808868408203f, -0.047812536358833312988f, 0.16229285299777984619f, -0.058563493192195892334f, -0.054884027689695358276f, -0.10662747174501419067f, 0.010650644078850746155f, 0.047431524842977523804f, -0.082281962037086486816f},
  {0.31899610161781311035f, 0.40017753839492797852f, 0.48534408211708068848f, -0.014113655313849449158f, -0.20742474496364593506f, 0.91523849964141845703f, -0.29391688108444213867f, 0.18028183281421661377f, 0.38251447677612304688f, -0.40863847732543945312f, -0.0020986173767596483231f, -0.10289250314235687256f},
  {-0.47298917174339294434f, 0.54936254024505615234f, -0.41253972053527832031f, 0.71642500162124633789f, -1.0190333127975463867f, 0.27430731058120727539f, 0.66255271434783935547f, -0.20009300112724304199f, 0.17850235104560852051f, 0.60759967565536499023f, -0.26154935359954833984f, -0.84978771209716796875f},
  {-0.13179056346416473389f, 0.20147141814231872559f, 0.14204166829586029053f, 0.30485966801643371582f, -0.18930876255035400391f, 0.076884515583515167236f, 0.18234933912754058838f, 0.0031890559475868940353f, 0.0016340838046744465828f, 0.40110757946968078613f, 0.32299113273620605469f, -0.048046004027128219604f},
  {0.30758434534072875977f, 0.19604280591011047363f, 0.20628461241722106934f, -0.034746780991554260254f, 0.15070529282093048096f, 0.0056956112384796142578f, 0.46938824653625488281f, -0.77306157350540161133f, -0.34098961949348449707f, -0.36979541182518005371f, 0.26911741495132446289f, -0.079704374074935913086f},
  {-0.043460160493850708008f, 0.70462185144424438477f, -0.78031688928604125977f, -0.17539247870445251465f, 0.48162913322448730469f, 0.79350715875625610352f, 0.44694480299949645996f, 0.28641697764396667480f, -0.63280290365219116211f, 0.26506030559539794922f, -0.31842744350433349609f, 0.82359504699707031250f},
  {0.33788144588470458984f, 0.46877041459083557129f, 0.43071749806404113770f, -0.40964850783348083496f, 0.27971467375755310059f, -0.23911069333553314209f, 0.37059539556503295898f, 0.29107922315597534180f, -0.60996794700622558594f, 0.035823814570903778076f, -0.097677648067474365234f, -0.69896632432937622070f},
  {-0.17690707743167877197f, 0.29727903008460998535f, 0.11024478077888488770f, 0.59401571750640869141f, 0.18815338611602783203f, -0.031849555671215057373f, -0.87899541854858398438f, -0.30039760470390319824f, -0.64559996128082275391f, 0.020683407783508300781f, -0.28823512792587280273f, -0.14211952686309814453f},
  {-0.074256539344787597656f, -0.17446957528591156006f, 0.026421144604682922363f, 0.070397458970546722412f, -0.038203064352273941040f, 0.11000644415616989136f, -0.12110315263271331787f, -0.15050671994686126709f, -0.029538083821535110474f, 0.13524946570396423340f, -0.094825610518455505371f, 0.11685878783464431763f},
  {-0.078615270555019378662f, 0.047026120126247406006f, 0.026084586977958679199f, 0.032828390598297119141f, -0.011631852947175502777f, 0.025739358738064765930f, -0.13267114758491516113f, 0.19485455751419067383f, -0.013638366945087909698f, 0.24865694344043731689f, 0.25442713499069213867f, -0.017910379916429519653f}
};
static const float tensor__2_Constant_output_0[12][12] =
{
  {-0.25704139471054077148f, -0.21476499736309051514f, 0.30553331971168518066f, 0.041572012007236480713f, -0.25475689768791198730f, -0.031335927546024322510f, 0.36161297559738159180f, 0.17359378933906555176f, -0.19275695085525512695f, -0.30756434798240661621f, -0.29714795947074890137f, -0.19565978646278381348f},
  {0.12566886842250823975f, 0.26468208432197570801f, 0.12753050029277801514f, -0.063314229249954223633f, -0.11015806347131729126f, 0.23500590026378631592f, 0.024874359369277954102f, -0.22311981022357940674f, 0.035889975726604461670f, -0.011206928640604019165f, -0.14231181144714355469f, -0.11763074994087219238f},
  {0.31514051556587219238f, -0.25136721134185791016f, 0.15390203893184661865f, 0.20101305842399597168f, -0.091766506433486938477f, -0.065765559673309326172f, -0.25547733902931213379f, 0.022915773093700408936f, 0.48540887236595153809f, 0.057481322437524795532f, -0.13984343409538269043f, -0.0069063650444149971008f},
  {-0.27598223090171813965f, -0.11454419791698455811f, 0.24538870155811309814f, -0.083740375936031341553f, 0.21057567000389099121f, 0.12507943809032440186f, -0.37796473503112792969f, -0.10866647213697433472f, -0.32911345362663269043f, 0.22543914616107940674f, -0.26685172319412231445f, 0.14140802621841430664f},
  {0.50107413530349731445f, -0.030834628269076347351f, -0.041482184082269668579f, -0.35682517290115356445f, -0.15819273889064788818f, 0.069817394018173217773f, 0.18116916716098785400f, 0.28750643134117126465f, -0.34146526455879211426f, 0.077733732759952545166f, -0.15923696756362915039f, 0.47453278303146362305f},
  {-0.11352326720952987671f, -0.30147603154182434082f, -0.010924161411821842194f, -0.12092050164937973022f, 0.28690415620803833008f, 0.73994225263595581055f, -0.088400736451148986816f, 0.010456755757331848145f, -0.21962243318557739258f, -0.30185711383819580078f, 0.29960468411445617676f, 0.027706233784556388855f},
  {-0.27797943353652954102f, 0.0035319863818585872650f, 0.056571554392576217651f, -0.20301660895347595215f, -0.32581889629364013672f, 0.020290100947022438049f, 0.010454358533024787903f, -0.12162403017282485962f, 0.12617385387420654297f, 0.038774918764829635620f, 0.19758097827434539795f, 0.25617572665214538574f},
  {-0.24874803423881530762f, 0.43777731060981750488f, 0.25057536363601684570f, 0.0022722524590790271759f, 0.44549712538719177246f, 0.10367668420076370239f, 0.16404454410076141357f, 0.43141442537307739258f, 0.44300678372383117676f, -0.20195749402046203613f, -0.21057114005088806152f, 0.40491652488708496094f},
  {0.44376438856124877930f, -0.21597427129745483398f, -0.27765506505966186523f, 0.079193860292434692383f, -0.15741874277591705322f, 0.18083512783050537109f, 0.37273302674293518066f, -0.074913352727890014648f, -0.26120206713676452637f, 0.080202266573905944824f, -0.38983607292175292969f, 0.76069140434265136719f},
  {-0.25357669591903686523f, -0.55295950174331665039f, 0.49965283274650573730f, -0.15504050254821777344f, 0.058388132601976394653f, -0.091487981379032135010f, 0.71767204999923706055f, -0.14110815525054931641f, 0.087603405117988586426f, -0.072409823536872863770f, -0.28919941186904907227f, -0.32769560813903808594f},
  {-0.085757866501808166504f, 0.18079531192779541016f, -0.092222422361373901367f, -0.040023673325777053833f, 0.085193224251270294189f, -0.26995480060577392578f, -0.27805647253990173340f, -0.22850219905376434326f, -0.059189517050981521606f, -0.62782818078994750977f, -0.045985098928213119507f, 0.084805980324745178223f},
  {-0.12905807793140411377f, -0.32199537754058837891f, 0.43079218268394470215f, -0.11532808840274810791f, -0.061364561319351196289f, -0.040865153074264526367f, 0.40055245161056518555f, 0.10570755600929260254f, 0.027640122920274734497f, -0.11984509974718093872f, -0.21252183616161346436f, -0.19613958895206451416f}
};
static const float tensor__2_Constant_1_output_0[12] =
{-0.013666253536939620972f, 0.72039198875427246094f, 0.10400714725255966187f, 0.59909957647323608398f, 0.46578067541122436523f, -0.027595812454819679260f, -0.65898448228836059570f, -0.25940236449241638184f, 0.64482223987579345703f, -0.39127907156944274902f, -0.56065660715103149414f, -0.038263753056526184082f};
static const float tensor__2_Constant_2_output_0[12][12] =
{
  {-0.24753230810165405273f, -0.20681989192962646484f, 0.29423031210899353027f, 0.040034081786870956421f, -0.24533231556415557861f, -0.030176673084497451782f, 0.34823530912399291992f, 0.16717179119586944580f, -0.18562602996826171875f, -0.29618617892265319824f, -0.28615516424179077148f, -0.18842147290706634521f},
  {0.96397262811660766602f, 2.0303063392639160156f, 0.97825270891189575195f, -0.48566669225692749023f, -0.84499335289001464844f, 1.8026680946350097656f, 0.19080463051795959473f, -1.7114930152893066406f, 0.27530249953269958496f, -0.085965380072593688965f, -1.0916363000869750977f, -0.90231436491012573242f},
  {0.39864793419837951660f, -0.31797567009925842285f, 0.19468373060226440430f, 0.25427845120429992676f, -0.11608322709798812866f, -0.083192430436611175537f, -0.32317492365837097168f, 0.028988102450966835022f, 0.61403483152389526367f, 0.072712995111942291260f, -0.17689980566501617432f, -0.0087364464998245239258f},
  {-0.70899802446365356445f, -0.29426389932632446289f, 0.63040328025817871094f, -0.21512892842292785645f, 0.54096865653991699219f, 0.32132893800735473633f, -0.97099095582962036133f, -0.27916404604911804199f, -0.84549206495285034180f, 0.57915288209915161133f, -0.68554174900054931641f, 0.36327704787254333496f},
  {0.70197916030883789062f, -0.043197736144065856934f, -0.058114413172006607056f, -0.49989378452301025391f, -0.22161991894245147705f, 0.097810588777065277100f, 0.25380870699882507324f, 0.40278178453445434570f, -0.47837534546852111816f, 0.10890097916126251221f, -0.22308282554149627686f, 0.66479611396789550781f},
  {-0.15773333609104156494f, -0.41888171434402465820f, -0.015178426168859004974f, -0.16801132261753082275f, 0.39863502979278564453f, 1.0281026363372802734f, -0.12282718718051910400f, 0.014528995379805564880f, -0.30515137314796447754f, -0.41941121220588684082f, 0.41628161072731018066f, 0.038496047258377075195f},
  {-1.4497863054275512695f, 0.018420878797769546509f, 0.29504579305648803711f, -1.0588219165802001953f, -1.6992903947830200195f, 0.10582190006971359253f, 0.054524127393960952759f, -0.63432335853576660156f, 0.65805274248123168945f, 0.20222844183444976807f, 1.0304726362228393555f, 1.3360702991485595703f},
  {-0.38883146643638610840f, 0.68431335687637329102f, 0.39168787002563476562f, 0.0035518805962055921555f, 0.69638061523437500000f, 0.16206261515617370605f, 0.25642687082290649414f, 0.67436718940734863281f, 0.69248783588409423828f, -0.31569066643714904785f, -0.32915511727333068848f, 0.63294684886932373047f},
  {0.23197805881500244141f, -0.11290065944194793701f, -0.14514432847499847412f, 0.041398629546165466309f, -0.082290723919868469238f, 0.094531655311584472656f, 0.19484637677669525146f, -0.039160992950201034546f, -0.13654351234436035156f, 0.041925773024559020996f, -0.20378699898719787598f, 0.39765182137489318848f},
  {-0.11336927860975265503f, -0.24721758067607879639f, 0.22338519990444183350f, -0.069315634667873382568f, 0.026104213669896125793f, -0.040902521461248397827f, 0.32085740566253662109f, -0.063086748123168945312f, 0.039165802299976348877f, -0.032373044639825820923f, -0.12929551303386688232f, -0.14650642871856689453f},
  {-0.11531945317983627319f, 0.24311724305152893066f, -0.12401240319013595581f, -0.053820230066776275635f, 0.11456017196178436279f, -0.36301088333129882812f, -0.37390527129173278809f, -0.30726915597915649414f, -0.079592727124691009521f, -0.84424674510955810547f, -0.061836615204811096191f, 0.11403943598270416260f},
  {-0.11171053349971771240f, -0.27871385216712951660f, 0.37288656830787658691f, -0.099826082587242126465f, -0.053116146475076675415f, -0.035372197628021240234f, 0.34671154618263244629f, 0.091498710215091705322f, 0.023924831300973892212f, -0.10373593121767044067f, -0.18395537137985229492f, -0.16977517306804656982f}
};
static const float tensor__3_Constant_output_0[1][12] =
{
  {0.11003874987363815308f, 0.24524469673633575439f, 0.36977297067642211914f, 0.095697447657585144043f, 0.22408087551593780518f, -0.36388930678367614746f, 0.16231369972229003906f, -0.0061810305342078208923f, 0.40617159008979797363f, -0.43042203783988952637f, -0.19912768900394439697f, -0.42773172259330749512f}
};
static const float tensor__3_Constant_1_output_0[1] =
{-0.25297397375106811523f};
static const int64_t tensor__0_Reshape_1_output_0[4] =
{0, 0, 0, 9};
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
static inline void node__0_Pad( const float data[1][3], const int64_t pads[4], const float constant_value[1], float output[1][12] )
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
   if( o1 < 3){
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
void entry(const float tensor_onnx__Pad_0[1][3], float tensor_43[1][1]) {
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

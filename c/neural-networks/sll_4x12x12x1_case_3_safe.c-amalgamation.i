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

void entry(const float tensor_onnx__Pad_0[1][4], float tensor_43[1][1]);
int main()
{
    float tensor_onnx__Pad_0[1][4];
    float tensor_43[1][1];
 tensor_onnx__Pad_0[0][0] = __VERIFIER_nondet_float();
 tensor_onnx__Pad_0[0][1] = __VERIFIER_nondet_float();
 tensor_onnx__Pad_0[0][2] = __VERIFIER_nondet_float();
 tensor_onnx__Pad_0[0][3] = __VERIFIER_nondet_float();
 if(!(tensor_onnx__Pad_0[0][0] >= -1.6f && tensor_onnx__Pad_0[0][0] <= -1.4f)) abort();;
 if(!(tensor_onnx__Pad_0[0][1] >= -1.6f && tensor_onnx__Pad_0[0][1] <= -1.4f)) abort();;
 if(!(tensor_onnx__Pad_0[0][2] >= -1.6f && tensor_onnx__Pad_0[0][2] <= -1.4f)) abort();;
 if(!(tensor_onnx__Pad_0[0][3] >= -1.6f && tensor_onnx__Pad_0[0][3] <= -1.4f)) abort();;
 entry(tensor_onnx__Pad_0, tensor_43);
 if(!(tensor_43[0][0] <= 0.578822f)) reach_error();
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
  {0.15026488900184631348f, -0.13982002437114715576f, 0.15962097048759460449f, -0.14880006015300750732f, 0.28190058469772338867f, 0.027073083445429801941f, -0.013214640319347381592f, 0.054852414876222610474f, -0.052050646394491195679f, -0.56989747285842895508f, -0.20341500639915466309f, 0.21007926762104034424f},
  {-0.29062956571578979492f, 0.28644493222236633301f, 0.28664678335189819336f, -0.25518012046813964844f, 0.25267094373703002930f, -0.23611044883728027344f, 0.078877948224544525146f, 0.010928438976407051086f, -0.15251953899860382080f, 0.37064260244369506836f, -0.088297404348850250244f, 0.055345848202705383301f},
  {0.25918465852737426758f, 0.21942122280597686768f, -0.24813853204250335693f, 0.22157409787178039551f, 0.043957177549600601196f, 0.21798671782016754150f, -0.019117824733257293701f, -0.022482061758637428284f, -0.020419489592313766479f, -0.19650962948799133301f, -0.19748334586620330811f, 0.28656888008117675781f},
  {-0.13743317127227783203f, 0.19180533289909362793f, 0.27925634384155273438f, 0.17955727875232696533f, 0.041665922850370407104f, -0.038881313055753707886f, -0.61522614955902099609f, -0.10926514118909835815f, -0.11484999209642410278f, -0.31752383708953857422f, -0.20321017503738403320f, -0.31073039770126342773f},
  {-0.27319276332855224609f, -0.35762456059455871582f, 0.22729201614856719971f, -0.32302618026733398438f, 0.15270768105983734131f, 0.19606012105941772461f, 0.23265233635902404785f, -0.17561565339565277100f, -0.37113276124000549316f, 0.27252718806266784668f, -0.44466280937194824219f, -0.33614516258239746094f},
  {0.35331496596336364746f, 0.23776750266551971436f, 0.15832801163196563721f, 0.16142211854457855225f, -0.34457597136497497559f, 0.043460577726364135742f, -0.034040112048387527466f, -0.23314647376537322998f, -0.017975818365812301636f, 0.12092176824808120728f, 0.018765127286314964294f, 0.19608031213283538818f},
  {0.065709851682186126709f, -0.20843431353569030762f, -0.10053966194391250610f, -0.048061374574899673462f, 0.32679843902587890625f, -0.22982510924339294434f, -0.093307062983512878418f, -0.60616421699523925781f, 0.011560112237930297852f, -0.064667433500289916992f, 0.13484296202659606934f, 0.17125184834003448486f},
  {0.38446646928787231445f, 0.15243482589721679688f, -0.49976980686187744141f, -0.44353881478309631348f, -0.45731094479560852051f, -0.69347542524337768555f, -0.028163803741335868835f, 0.35836327075958251953f, -0.55277585983276367188f, -0.13089582324028015137f, -0.31747415661811828613f, -0.27883461117744445801f},
  {0.031101290136575698853f, 0.40442413091659545898f, -0.026031259447336196899f, -0.36916929483413696289f, 0.30684688687324523926f, 0.19879719614982604980f, -0.30918771028518676758f, 0.056166142225265502930f, -0.046912755817174911499f, 0.095036692917346954346f, -0.16178177297115325928f, 0.23632931709289550781f},
  {-0.16209912300109863281f, 0.13741220533847808838f, -0.16408501565456390381f, -0.15636038780212402344f, -0.12571483850479125977f, 0.24596510827541351318f, 0.13389012217521667480f, -0.24872829020023345947f, -0.32028388977050781250f, -0.074801176786422729492f, 0.094361767172813415527f, -0.16969582438468933105f},
  {-0.18003620207309722900f, -0.16211213171482086182f, -0.17812351882457733154f, 0.17969970405101776123f, 0.20450724661350250244f, 0.16832649707794189453f, -0.11007361114025115967f, 0.18918997049331665039f, -0.63580977916717529297f, 0.040948200970888137817f, 0.33625245094299316406f, 0.055564206093549728394f},
  {-0.26908004283905029297f, 0.37151241302490234375f, -0.21815116703510284424f, 0.25945678353309631348f, 0.38386541604995727539f, -0.30621069669723510742f, 0.36900028586387634277f, -0.17738243937492370605f, 0.027629043906927108765f, -0.012421499937772750854f, -0.13425189256668090820f, -0.33942350745201110840f}
};
static const float tensor__1_Constant_1_output_0[12] =
{0.50452190637588500977f, 0.012630004435777664185f, -0.45254153013229370117f, -0.15513449907302856445f, -0.47922196984291076660f, 0.047193083912134170532f, 0.13931618630886077881f, -0.35215342044830322266f, 0.0024621114134788513184f, -0.22442132234573364258f, -0.34242340922355651855f, 0.014046435244381427765f};
static const float tensor__1_Constant_2_output_0[12][12] =
{
  {0.15976814925670623779f, -0.14866271615028381348f, 0.16971594095230102539f, -0.15821067988872528076f, 0.29972892999649047852f, 0.028785277158021926880f, -0.014050379395484924316f, 0.058321468532085418701f, -0.055342506617307662964f, -0.60593974590301513672f, -0.21627965569496154785f, 0.22336539626121520996f},
  {-0.42409980297088623047f, 0.41799339652061462402f, 0.41828793287277221680f, -0.37237036228179931641f, 0.36870884895324707031f, -0.34454303979873657227f, 0.11510226875543594360f, 0.015947273001074790955f, -0.22256340086460113525f, 0.54085844755172729492f, -0.12884756922721862793f, 0.080763161182403564453f},
  {0.43463262915611267090f, 0.36795243620872497559f, -0.41610914468765258789f, 0.37156262993812561035f, 0.073712788522243499756f, 0.36554688215255737305f, -0.032059114426374435425f, -0.037700679153203964233f, -0.034241903573274612427f, -0.32953146100044250488f, -0.33116430044174194336f, 0.48055386543273925781f},
  {-0.28877291083335876465f, 0.40301904082298278809f, 0.58677005767822265625f, 0.37728360295295715332f, 0.087547935545444488525f, -0.081696949899196624756f, -1.2927057743072509766f, -0.22958660125732421875f, -0.24132141470909118652f, -0.66717725992202758789f, -0.42698276042938232422f, -0.65290296077728271484f},
  {-0.19114539027214050293f, -0.25021997094154357910f, 0.15902991592884063721f, -0.22601243853569030762f, 0.10684531927108764648f, 0.13717782497406005859f, 0.16278037428855895996f, -0.12287339568138122559f, -0.25967127084732055664f, 0.19067969918251037598f, -0.31111821532249450684f, -0.23519143462181091309f},
  {0.16190718114376068115f, 0.10895735770463943481f, 0.072554081678390502930f, 0.073971956968307495117f, -0.15790252387523651123f, 0.019915882498025894165f, -0.015598938800394535065f, -0.10683976113796234131f, -0.0082374494522809982300f, 0.055412605404853820801f, 0.0085991509258747100830f, 0.089854136109352111816f},
  {0.10821013897657394409f, -0.34324696660041809082f, -0.16556742787361145020f, -0.079146854579448699951f, 0.53816747665405273438f, -0.37847304344177246094f, -0.15365687012672424316f, -0.99822342395782470703f, 0.019037043675780296326f, -0.10649350285530090332f, 0.22205765545368194580f, 0.28201535344123840332f},
  {0.36353006958961486816f, 0.14413388073444366455f, -0.47255450487136840820f, -0.41938561201095581055f, -0.43240776658058166504f, -0.65571171045303344727f, -0.026630124077200889587f, 0.33884835243225097656f, -0.52267408370971679688f, -0.12376780062913894653f, -0.30018588900566101074f, -0.26365047693252563477f},
  {0.037587825208902359009f, 0.48877149820327758789f, -0.031460382044315338135f, -0.44616386294364929199f, 0.37084338068962097168f, 0.24025866389274597168f, -0.37367242574691772461f, 0.067880243062973022461f, -0.056696958839893341064f, 0.11485770344734191895f, -0.19552324712276458740f, 0.28561854362487792969f},
  {-0.31663995981216430664f, 0.26841720938682556152f, -0.32051911950111389160f, -0.30543005466461181641f, -0.24556788802146911621f, 0.48046144843101501465f, 0.26153725385665893555f, -0.48585897684097290039f, -0.62563371658325195312f, -0.14611455798149108887f, 0.18432366847991943359f, -0.33147913217544555664f},
  {-0.31319078803062438965f, -0.28201010823249816895f, -0.30986350774765014648f, 0.31260541081428527832f, 0.35576060414314270020f, 0.29282060265541076660f, -0.19148394465446472168f, 0.32911467552185058594f, -1.1060540676116943359f, 0.071233451366424560547f, 0.58494442701339721680f, 0.096659436821937561035f},
  {-0.19289146363735198975f, 0.26632064580917358398f, -0.15638282895088195801f, 0.18599298596382141113f, 0.27517598867416381836f, -0.21950878202915191650f, 0.26451984047889709473f, -0.12715755403041839600f, 0.019806027412414550781f, -0.0089044189080595970154f, -0.096239186823368072510f, -0.24331755936145782471f}
};
static const float tensor__2_Constant_output_0[12][12] =
{
  {0.092811718583106994629f, -0.032495662569999694824f, -0.26143416762351989746f, 0.38906762003898620605f, -0.11214345693588256836f, 0.10419572889804840088f, -0.0086340801790356636047f, -0.26727023720741271973f, 0.57441979646682739258f, -0.24112758040428161621f, 0.036252923309803009033f, -0.24345527589321136475f},
  {0.32431271672248840332f, -0.40538322925567626953f, 0.23648829758167266846f, -0.43323943018913269043f, -0.15355333685874938965f, -0.19804120063781738281f, 0.40720918774604797363f, -0.26900687813758850098f, 0.18079771101474761963f, 0.45477062463760375977f, -0.067663408815860748291f, 0.022666018456220626831f},
  {-0.15961824357509613037f, 0.044174719601869583130f, -0.30462798476219177246f, 0.054384052753448486328f, 0.59839642047882080078f, 0.17206731438636779785f, 0.45799335837364196777f, -0.20813426375389099121f, -0.16264729201793670654f, 0.098981603980064392090f, -0.49474537372589111328f, 0.0086365165188908576965f},
  {0.36429655551910400391f, -0.42364841699600219727f, 0.26789537072181701660f, 0.20240373909473419189f, 0.23712578415870666504f, -0.13214422762393951416f, -0.13866126537322998047f, 0.26559185981750488281f, -0.22045290470123291016f, -0.25093102455139160156f, -0.26765531301498413086f, 0.33658072352409362793f},
  {0.20670621097087860107f, -0.37578535079956054688f, 0.55586433410644531250f, 0.034686982631683349609f, 0.020877787843346595764f, 0.055538415908813476562f, -0.19072210788726806641f, 0.12339043617248535156f, 0.58352845907211303711f, -0.088249780237674713135f, -0.30553749203681945801f, 0.23007017374038696289f},
  {0.044785488396883010864f, -0.14087814092636108398f, 0.0011815170291811227798f, 0.033152416348457336426f, -0.23292541503906250000f, 0.18850086629390716553f, -0.29694798588752746582f, -0.15407094359397888184f, 0.22647546231746673584f, -0.050634022802114486694f, 0.037376277148723602295f, 0.15320299565792083740f},
  {0.31832769513130187988f, 0.33419594168663024902f, -0.32781738042831420898f, -0.26038867235183715820f, -0.24384772777557373047f, 0.0022068151738494634628f, 0.055344175547361373901f, 0.096843674778938293457f, -0.24682725965976715088f, 0.020947081968188285828f, -0.097908504307270050049f, 0.0064780325628817081451f},
  {-0.46950870752334594727f, -0.36474156379699707031f, -0.34673678874969482422f, -0.51985520124435424805f, -0.12196544557809829712f, 0.27468740940093994141f, -0.25362712144851684570f, 0.18264694511890411377f, 0.27883633971214294434f, 0.059463489800691604614f, -0.34497246146202087402f, -0.062401138246059417725f},
  {0.15212742984294891357f, 0.40470087528228759766f, 0.32414221763610839844f, 0.21202307939529418945f, -0.33121126890182495117f, 0.30059817433357238770f, 0.14407363533973693848f, -0.16562312841415405273f, -0.19411338865756988525f, 0.12113269418478012085f, -0.19797240197658538818f, -0.095081098377704620361f},
  {-0.12739942967891693115f, -0.033553883433341979980f, -0.13679872453212738037f, 0.25855949521064758301f, -0.37392732501029968262f, 0.033477511256933212280f, 0.80840122699737548828f, 0.18776437640190124512f, 0.28452119231224060059f, -0.27526643872261047363f, 0.30340859293937683105f, 0.52343171834945678711f},
  {0.10635907948017120361f, 0.30850830674171447754f, 0.0027233411092311143875f, -0.16903664171695709229f, 0.048193614929914474487f, -0.31218990683555603027f, 0.14870381355285644531f, -0.42814013361930847168f, 0.46227064728736877441f, 0.42240452766418457031f, 0.29297187924385070801f, -0.093856886029243469238f},
  {-0.30607679486274719238f, -0.27882903814315795898f, -0.34381255507469177246f, 0.37498024106025695801f, -0.16086006164550781250f, -0.38230159878730773926f, -0.15683370828628540039f, 0.18894617259502410889f, -0.0018691343721002340317f, 0.51725226640701293945f, -0.12611018121242523193f, 0.064905397593975067139f}
};
static const float tensor__2_Constant_1_output_0[12] =
{-0.57282322645187377930f, -0.14827913045883178711f, -0.23561416566371917725f, -0.25994196534156799316f, -0.53008884191513061523f, -0.43534758687019348145f, -0.040439330041408538818f, 0.071693941950798034668f, 0.58033233880996704102f, -0.84199708700180053711f, 0.15955162048339843750f, 0.28669744729995727539f};
static const float tensor__2_Constant_2_output_0[12][12] =
{
  {0.037759799510240554810f, -0.013220633380115032196f, -0.10636266320943832397f, 0.15828944742679595947f, -0.045624781399965286255f, 0.042391303926706314087f, -0.0035127152223140001297f, -0.10873702913522720337f, 0.23369868099689483643f, -0.098101072013378143311f, 0.014749248512089252472f, -0.099048078060150146484f},
  {0.45515578985214233398f, -0.56893396377563476562f, 0.33189886808395385742f, -0.60802870988845825195f, -0.21550400555133819580f, -0.27794039249420166016f, 0.57149660587310791016f, -0.37753698229789733887f, 0.25374004244804382324f, 0.63824659585952758789f, -0.094962023198604583740f, 0.031810563057661056519f},
  {-0.19826105237007141113f, 0.054869208484888076782f, -0.37837696075439453125f, 0.067550174891948699951f, 0.74326533079147338867f, 0.21372398734092712402f, 0.56887137889862060547f, -0.25852257013320922852f, -0.20202343165874481201f, 0.12294457852840423584f, -0.61452084779739379883f, 0.010727375745773315430f},
  {0.28494438529014587402f, -0.33136805891990661621f, 0.20954160392284393311f, 0.15831555426120758057f, 0.18547433614730834961f, -0.10336017608642578125f, -0.10845765471458435059f, 0.20773985981941223145f, -0.17243319749832153320f, -0.19627247750759124756f, -0.20935383439064025879f, 0.26326569914817810059f},
  {0.075457252562046051025f, -0.13717889785766601562f, 0.20291599631309509277f, 0.012662340886890888214f, 0.0076213511638343334198f, 0.020274071022868156433f, -0.069622322916984558105f, 0.045043174177408218384f, 0.21301467716693878174f, -0.032215222716331481934f, -0.11153521388769149780f, 0.083986178040504455566f},
  {0.14686596393585205078f, -0.46198454499244689941f, 0.0038745726924389600754f, 0.10871738940477371216f, -0.76383703947067260742f, 0.61815470457077026367f, -0.97378754615783691406f, -0.50524795055389404297f, 0.74268555641174316406f, -0.16604517400264739990f, 0.12256877869367599487f, 0.50240170955657958984f},
  {0.52104777097702026367f, 0.54702132940292358398f, -0.53658074140548706055f, -0.42621150612831115723f, -0.39913684129714965820f, 0.0036121772136539220810f, 0.090588904917240142822f, 0.15851645171642303467f, -0.40401381254196166992f, 0.034286774694919586182f, -0.16025939583778381348f, 0.010603426024317741394f},
  {-0.16906842589378356934f, -0.13134214282035827637f, -0.12485868483781814575f, -0.18719801306724548340f, -0.043919324874877929688f, 0.098913960158824920654f, -0.091330230236053466797f, 0.065770514309406280518f, 0.10040798038244247437f, 0.021412592381238937378f, -0.12422335892915725708f, -0.022470429539680480957f},
  {0.15861020982265472412f, 0.42194685339927673340f, 0.33795523643493652344f, 0.22105824947357177734f, -0.34532552957534790039f, 0.31340789794921875000f, 0.15021319687366485596f, -0.17268100380897521973f, -0.20238535106182098389f, 0.12629465758800506592f, -0.20640881359577178955f, -0.099132895469665527344f},
  {-0.10520584881305694580f, -0.027708638459444046021f, -0.11296774446964263916f, 0.21351721882820129395f, -0.30878743529319763184f, 0.027645571157336235046f, 0.66757392883300781250f, 0.15505494177341461182f, 0.23495626449584960938f, -0.22731372714042663574f, 0.25055339932441711426f, 0.43224745988845825195f},
  {0.051749095320701599121f, 0.15010496973991394043f, 0.0013250438496470451355f, -0.082244917750358581543f, 0.023448642343282699585f, -0.15189625322818756104f, 0.072351962327957153320f, -0.20831193029880523682f, 0.22491815686225891113f, 0.20552127063274383545f, 0.14254570007324218750f, -0.045666143298149108887f},
  {-0.39169901609420776367f, -0.35682892799377441406f, -0.43999099731445312500f, 0.47987756133079528809f, -0.20585919916629791260f, -0.48924699425697326660f, -0.20070651173591613770f, 0.24180215597152709961f, -0.0023920077364891767502f, 0.66194891929626464844f, -0.16138836741447448730f, 0.083062097430229187012f}
};
static const float tensor__3_Constant_output_0[1][12] =
{
  {0.030272059142589569092f, 0.39231786131858825684f, 0.12357716262340545654f, -0.29652088880538940430f, 0.10807561129331588745f, 0.086974762380123138428f, 0.38965779542922973633f, -0.16912806034088134766f, -0.49116009473800659180f, 0.25866109132766723633f, 0.069137230515480041504f, -0.47892406582832336426f}
};
static const float tensor__3_Constant_1_output_0[1] =
{0.32795324921607971191f};
static const int64_t tensor__0_Reshape_1_output_0[4] =
{0, 0, 0, 8};
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
static inline void node__0_Pad( const float data[1][4], const int64_t pads[4], const float constant_value[1], float output[1][12] )
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
   if( o1 < 4){
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
void entry(const float tensor_onnx__Pad_0[1][4], float tensor_43[1][1]) {
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

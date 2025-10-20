enum { AWS_CACHE_LINE = 64 };

typedef unsigned int __uint32_t;
typedef unsigned long int __uint64_t;

__extension__
__extension__



typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;
typedef void(aws_error_handler_fn)(int err, void *ctx);
void aws_raise_error_private(int err);
static inline
int aws_raise_error(int err);
static inline
int aws_raise_error(int err) {
    aws_raise_error_private(err);
    return (-1);
}
enum aws_common_error {
    AWS_ERROR_SUCCESS = ((0)*(1U << 10)),
    AWS_ERROR_OOM,
    AWS_ERROR_NO_SPACE,
    AWS_ERROR_UNKNOWN,
    AWS_ERROR_SHORT_BUFFER,
    AWS_ERROR_OVERFLOW_DETECTED,
    AWS_ERROR_UNSUPPORTED_OPERATION,
    AWS_ERROR_INVALID_BUFFER_SIZE,
    AWS_ERROR_INVALID_HEX_STR,
    AWS_ERROR_INVALID_BASE64_STR,
    AWS_ERROR_INVALID_INDEX,
    AWS_ERROR_THREAD_INVALID_SETTINGS,
    AWS_ERROR_THREAD_INSUFFICIENT_RESOURCE,
    AWS_ERROR_THREAD_NO_PERMISSIONS,
    AWS_ERROR_THREAD_NOT_JOINABLE,
    AWS_ERROR_THREAD_NO_SUCH_THREAD_ID,
    AWS_ERROR_THREAD_DEADLOCK_DETECTED,
    AWS_ERROR_MUTEX_NOT_INIT,
    AWS_ERROR_MUTEX_TIMEOUT,
    AWS_ERROR_MUTEX_CALLER_NOT_OWNER,
    AWS_ERROR_MUTEX_FAILED,
    AWS_ERROR_COND_VARIABLE_INIT_FAILED,
    AWS_ERROR_COND_VARIABLE_TIMED_OUT,
    AWS_ERROR_COND_VARIABLE_ERROR_UNKNOWN,
    AWS_ERROR_CLOCK_FAILURE,
    AWS_ERROR_LIST_EMPTY,
    AWS_ERROR_DEST_COPY_TOO_SMALL,
    AWS_ERROR_LIST_EXCEEDS_MAX_SIZE,
    AWS_ERROR_LIST_STATIC_MODE_CANT_SHRINK,
    AWS_ERROR_PRIORITY_QUEUE_FULL,
    AWS_ERROR_PRIORITY_QUEUE_EMPTY,
    AWS_ERROR_PRIORITY_QUEUE_BAD_NODE,
    AWS_ERROR_HASHTBL_ITEM_NOT_FOUND,
    AWS_ERROR_INVALID_DATE_STR,
    AWS_ERROR_INVALID_ARGUMENT,
    AWS_ERROR_RANDOM_GEN_FAILED,
    AWS_ERROR_MALFORMED_INPUT_STRING,
    AWS_ERROR_UNIMPLEMENTED,
    AWS_ERROR_INVALID_STATE,
    AWS_ERROR_ENVIRONMENT_GET,
    AWS_ERROR_ENVIRONMENT_SET,
    AWS_ERROR_ENVIRONMENT_UNSET,
    AWS_ERROR_STREAM_UNSEEKABLE,
    AWS_ERROR_NO_PERMISSION,
    AWS_ERROR_FILE_INVALID_PATH,
    AWS_ERROR_MAX_FDS_EXCEEDED,
    AWS_ERROR_SYS_CALL_FAILURE,
    AWS_ERROR_C_STRING_BUFFER_NOT_NULL_TERMINATED,
    AWS_ERROR_STRING_MATCH_NOT_FOUND,
    AWS_ERROR_DIVIDE_BY_ZERO,
    AWS_ERROR_INVALID_FILE_HANDLE,
    AWS_ERROR_OPERATION_INTERUPTED,
    AWS_ERROR_DIRECTORY_NOT_EMPTY,
    AWS_ERROR_PLATFORM_NOT_SUPPORTED,
    AWS_ERROR_INVALID_UTF8,
    AWS_ERROR_GET_HOME_DIRECTORY_FAILED,
    AWS_ERROR_INVALID_XML,
    AWS_ERROR_FILE_OPEN_FAILURE,
    AWS_ERROR_FILE_READ_FAILURE,
    AWS_ERROR_FILE_WRITE_FAILURE,
    AWS_ERROR_END_COMMON_RANGE = (((0) + 1) * (1U << 10) - 1)
};



static __thread int tl_last_error = 0;
static aws_error_handler_fn *s_global_handler = ((void*)0);
static void *s_global_error_context = ((void*)0);
static __thread aws_error_handler_fn *tl_thread_handler = ((void*)0);
__thread void *tl_thread_handler_context = ((void*)0);
void aws_raise_error_private(int err) {
    tl_last_error = err;
    if (tl_thread_handler) {
        tl_thread_handler(tl_last_error, tl_thread_handler_context);
    } else if (s_global_handler) {
        s_global_handler(tl_last_error, s_global_error_context);
    }
}

static inline int aws_add_u64_checked(uint64_t a, uint64_t b, uint64_t *r);
static inline int aws_add_u32_checked(uint32_t a, uint32_t b, uint32_t *r);

static inline int aws_add_u64_checked(uint64_t a, uint64_t b, uint64_t *r) {
    if ((b > 0) && (a > ((18446744073709551615UL) - b)))
        return aws_raise_error(AWS_ERROR_OVERFLOW_DETECTED);
    *r = a + b;
    return (0);
}
static inline int aws_add_u32_checked(uint32_t a, uint32_t b, uint32_t *r) {
    if ((b > 0) && (a > ((4294967295U) - b)))
        return aws_raise_error(AWS_ERROR_OVERFLOW_DETECTED);
    *r = a + b;
    return (0);
}
enum { AWS_ARRAY_LIST_DEBUG_FILL = 0xDD };

enum
  {
    MSG_OOB = 0x01,
    MSG_PEEK = 0x02,
    MSG_DONTROUTE = 0x04,
    MSG_CTRUNC = 0x08,
    MSG_PROXY = 0x10,
    MSG_TRUNC = 0x20,
    MSG_DONTWAIT = 0x40,
    MSG_EOR = 0x80,
    MSG_WAITALL = 0x100,
    MSG_FIN = 0x200,
    MSG_SYN = 0x400,
    MSG_CONFIRM = 0x800,
    MSG_RST = 0x1000,
    MSG_ERRQUEUE = 0x2000,
    MSG_NOSIGNAL = 0x4000,
    MSG_MORE = 0x8000,
    MSG_WAITFORONE = 0x10000,
    MSG_BATCH = 0x40000,
    MSG_ZEROCOPY = 0x4000000,
    MSG_FASTOPEN = 0x20000000,
    MSG_CMSG_CLOEXEC = 0x40000000
  };
enum
  {
    SCM_RIGHTS = 0x01
  };
enum
{
  SHUT_RD = 0,
  SHUT_WR,
  SHUT_RDWR
};
enum
  {
    IPPROTO_IP = 0,
    IPPROTO_ICMP = 1,
    IPPROTO_IGMP = 2,
    IPPROTO_IPIP = 4,
    IPPROTO_TCP = 6,
    IPPROTO_EGP = 8,
    IPPROTO_PUP = 12,
    IPPROTO_UDP = 17,
    IPPROTO_IDP = 22,
    IPPROTO_TP = 29,
    IPPROTO_DCCP = 33,
    IPPROTO_IPV6 = 41,
    IPPROTO_RSVP = 46,
    IPPROTO_GRE = 47,
    IPPROTO_ESP = 50,
    IPPROTO_AH = 51,
    IPPROTO_MTP = 92,
    IPPROTO_BEETPH = 94,
    IPPROTO_ENCAP = 98,
    IPPROTO_PIM = 103,
    IPPROTO_COMP = 108,
    IPPROTO_SCTP = 132,
    IPPROTO_UDPLITE = 136,
    IPPROTO_MPLS = 137,
    IPPROTO_ETHERNET = 143,
    IPPROTO_RAW = 255,
    IPPROTO_MPTCP = 262,
    IPPROTO_MAX
  };
enum
  {
    IPPROTO_HOPOPTS = 0,
    IPPROTO_ROUTING = 43,
    IPPROTO_FRAGMENT = 44,
    IPPROTO_ICMPV6 = 58,
    IPPROTO_NONE = 59,
    IPPROTO_DSTOPTS = 60,
    IPPROTO_MH = 135
  };
enum
  {
    IPPORT_ECHO = 7,
    IPPORT_DISCARD = 9,
    IPPORT_SYSTAT = 11,
    IPPORT_DAYTIME = 13,
    IPPORT_NETSTAT = 15,
    IPPORT_FTP = 21,
    IPPORT_TELNET = 23,
    IPPORT_SMTP = 25,
    IPPORT_TIMESERVER = 37,
    IPPORT_NAMESERVER = 42,
    IPPORT_WHOIS = 43,
    IPPORT_MTP = 57,
    IPPORT_TFTP = 69,
    IPPORT_RJE = 77,
    IPPORT_FINGER = 79,
    IPPORT_TTYLINK = 87,
    IPPORT_SUPDUP = 95,
    IPPORT_EXECSERVER = 512,
    IPPORT_LOGINSERVER = 513,
    IPPORT_CMDSERVER = 514,
    IPPORT_EFSSERVER = 520,
    IPPORT_BIFFUDP = 512,
    IPPORT_WHOSERVER = 513,
    IPPORT_ROUTESERVER = 520,
    IPPORT_RESERVED = 1024,
    IPPORT_USERRESERVED = 5000
  };

enum {
    AWS_COMMON_HASH_TABLE_ITER_CONTINUE = (1 << 0),
    AWS_COMMON_HASH_TABLE_ITER_DELETE = (1 << 1),
    AWS_COMMON_HASH_TABLE_ITER_ERROR = (1 << 2),
};
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc11-extensions"
#pragma clang diagnostic pop
enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
extern int __VERIFIER_nondet_int();
extern unsigned long long __VERIFIER_nondet_ulonglong();
extern unsigned int __VERIFIER_nondet_uint();
_Bool nondet_bool() {
    return __VERIFIER_nondet_int() ? 1 : 0;
}
uint32_t nondet_uint32_t() {
    return (uint32_t) __VERIFIER_nondet_uint();
}
uint64_t nondet_uint64_t() {
    return (uint64_t) __VERIFIER_nondet_ulonglong();
}
void aws_add_size_checked_harness() {
    if (nondet_bool()) {
        uint64_t a = nondet_uint64_t();
        uint64_t b = nondet_uint64_t();
        uint64_t r = nondet_uint64_t();
        int rval = aws_add_u64_checked(a, b, &r);
        if (!rval) {
            assert(r == a + b);
        } else {
            assert((b > 0) && (a > ((18446744073709551615UL) - b)));
        }
    } else {
        uint32_t a = nondet_uint32_t();
        uint32_t b = nondet_uint32_t();
        uint32_t r = nondet_uint32_t();
        if (!aws_add_u32_checked(a, b, &r)) {
            assert(r == a + b);
        } else {
            assert((b > 0) && (a > ((4294967295U) - b)));
        }
    }
}
int main() {
    // before_target methods
    // No before_target methods

    // Target method
    aws_add_size_checked_harness();

    // after_target methods
    // No after_target methods

    return 0;
}
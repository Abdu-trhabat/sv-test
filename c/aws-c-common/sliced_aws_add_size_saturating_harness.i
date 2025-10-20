
enum { AWS_CACHE_LINE = 64 };

typedef unsigned int __uint32_t;
typedef unsigned long int __uint64_t;

__extension__
__extension__



typedef __uint32_t uint32_t;
typedef __uint64_t uint64_t;




static inline uint64_t aws_add_u64_saturating(uint64_t a, uint64_t b);
static inline uint32_t aws_add_u32_saturating(uint32_t a, uint32_t b);

static inline uint64_t aws_add_u64_saturating(uint64_t a, uint64_t b) {
    if ((b > 0) && (a > ((18446744073709551615UL) - b)))
        return (18446744073709551615UL);
    return a + b;
}
static inline uint32_t aws_add_u32_saturating(uint32_t a, uint32_t b) {
    if ((b > 0) && (a > ((4294967295U) - b)))
        return (4294967295U);
    return a + b;
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
void aws_add_size_saturating_harness() {
    if (nondet_bool()) {
        uint64_t a = nondet_uint64_t();
        uint64_t b = nondet_uint64_t();
        uint64_t r = aws_add_u64_saturating(a, b);
        if ((b > 0) && (a > ((18446744073709551615UL) - b))) {
            assert(r == (18446744073709551615UL));
        } else {
            assert(r == a + b);
        }
    } else {
        uint32_t a = nondet_uint32_t();
        uint32_t b = nondet_uint32_t();
        uint32_t r = aws_add_u32_saturating(a, b);
        if ((b > 0) && (a > ((4294967295U) - b))) {
            assert(r == (4294967295U));
        } else {
            assert(r == a + b);
        }
    }
}
int main() {
    // before_target methods
    // No before_target methods

    // Target method
    aws_add_size_saturating_harness();

    // after_target methods
    // No after_target methods

    return 0;
}
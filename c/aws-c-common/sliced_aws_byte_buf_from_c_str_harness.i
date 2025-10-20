
enum { AWS_CACHE_LINE = 64 };
typedef long unsigned int size_t;

typedef unsigned char __uint8_t;

__extension__
__extension__


extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
                                         ;
extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));

typedef __uint8_t uint8_t;



extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ )) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


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
struct aws_byte_buf {
    size_t len;
    uint8_t *buffer;
    size_t capacity;
    struct aws_allocator *allocator;
};
_Bool aws_byte_buf_is_valid(const struct aws_byte_buf *const buf);
               struct aws_byte_buf aws_byte_buf_from_c_str(const char *c_str);
_Bool aws_byte_buf_is_valid(const struct aws_byte_buf *const buf) {
    return buf != ((void*)0) &&
           ((buf->capacity == 0 && buf->len == 0 && buf->buffer == ((void*)0)) ||
            (buf->capacity > 0 && buf->len <= buf->capacity && (((buf->capacity) == 0) || (buf->buffer))));
}
struct aws_byte_buf aws_byte_buf_from_c_str(const char *c_str) {
    struct aws_byte_buf buf;
    buf.len = (!c_str) ? 0 : strlen(c_str);
    buf.capacity = buf.len;
    buf.buffer = (buf.capacity == 0) ? ((void*)0) : (uint8_t *)c_str;
    buf.allocator = ((void*)0);
                                                  ;
    return buf;
}
enum {
    AWS_COMMON_HASH_TABLE_ITER_CONTINUE = (1 << 0),
    AWS_COMMON_HASH_TABLE_ITER_DELETE = (1 << 1),
    AWS_COMMON_HASH_TABLE_ITER_ERROR = (1 << 2),
};
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc11-extensions"
#pragma clang diagnostic pop
struct aws_byte_buf;
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
void __CPROVER_assume(int cond) {
  if (!cond) {
    exit(0);
  }
}
void assert_bytes_match(const uint8_t *const a, const uint8_t *const b, const size_t len);
const char *ensure_c_str_is_allocated(size_t max_size);
const char *ensure_c_str_is_allocated(size_t max_size) {
    size_t cap;
    __CPROVER_assume(cap > 0 && cap <= max_size);
    const char *str = malloc(cap);
    __CPROVER_assume((!(str != ((void*)0)) || (str[cap - 1] == '\0')));
    return str;
}
void assert_bytes_match(const uint8_t *const a, const uint8_t *const b, const size_t len) {
    assert(len == 0 || !a == !b);
    if (len > 0 && a != ((void*)0) && b != ((void*)0)) {
        size_t i;
        __CPROVER_assume(i < len && len < ((18446744073709551615UL) >> (8 + 1)));
        assert(a[i] == b[i]);
    }
}
void aws_byte_buf_from_c_str_harness() {
    const char *c_str = ensure_c_str_is_allocated(10);
    struct aws_byte_buf buf = aws_byte_buf_from_c_str(c_str);
    assert(aws_byte_buf_is_valid(&buf));
    assert(buf.allocator == ((void*)0));
    if (buf.buffer) {
        assert(buf.len == strlen(c_str));
        assert(buf.capacity == buf.len);
        assert_bytes_match(buf.buffer, (uint8_t *)c_str, buf.len);
    } else {
        if (c_str) {
            assert(strlen(c_str) == 0);
        }
        assert(buf.len == 0);
        assert(buf.capacity == 0);
    }
}
int main() {
    // before_target methods
    // No before_target methods

    // Target method
    aws_byte_buf_from_c_str_harness();

    // after_target methods
    // No after_target methods

    return 0;
}
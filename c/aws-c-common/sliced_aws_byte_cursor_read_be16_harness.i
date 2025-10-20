
enum { AWS_CACHE_LINE = 64 };
typedef long unsigned int size_t;

typedef unsigned char __uint8_t;
typedef unsigned short int __uint16_t;

__extension__
__extension__


extern void *malloc (size_t __size) __attribute__ ((__nothrow__ )) __attribute__ ((__malloc__))
                                         ;
extern void exit (int __status) __attribute__ ((__nothrow__ )) __attribute__ ((__noreturn__));

typedef __uint8_t uint8_t;
typedef __uint16_t uint16_t;
typedef unsigned long int uintptr_t;


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ )) __attribute__ ((__nonnull__ (1, 2)));



enum { AWS_ARRAY_LIST_DEBUG_FILL = 0xDD };
static inline uint16_t aws_ntoh16(uint16_t x);

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
extern uint16_t ntohs (uint16_t __netshort)
     __attribute__ ((__nothrow__ )) __attribute__ ((__const__));
static inline uint16_t aws_ntoh16(uint16_t x) {
    return ntohs(x);
}
struct aws_byte_cursor {
    size_t len;
    uint8_t *ptr;
};
_Bool aws_byte_cursor_is_valid(const struct aws_byte_cursor *cursor);
               struct aws_byte_cursor aws_byte_cursor_advance_nospec(struct aws_byte_cursor *const cursor, size_t len);
               _Bool aws_byte_cursor_read(
    struct aws_byte_cursor *restrict cur,
    void *restrict dest,
    const size_t len);
               _Bool aws_byte_cursor_read_be16(struct aws_byte_cursor *cur, uint16_t *var);
 size_t aws_nospec_mask(size_t index, size_t bound);
_Bool aws_byte_cursor_is_valid(const struct aws_byte_cursor *cursor) {
    return cursor != ((void*)0) &&
           ((cursor->len == 0) || (cursor->len > 0 && cursor->ptr && (((cursor->len) == 0) || (cursor->ptr))));
}
size_t aws_nospec_mask(size_t index, size_t bound) {
    __asm__ __volatile__("" : "+r"(index));
    size_t negative_mask = index | bound;
    size_t toobig_mask = bound - index - (uintptr_t)1;
    size_t combined_mask = negative_mask | toobig_mask;
    combined_mask = (~combined_mask) / ((18446744073709551615UL) - ((18446744073709551615UL) >> 1));
    combined_mask = combined_mask * (18446744073709551615UL);
    return combined_mask;
}
struct aws_byte_cursor aws_byte_cursor_advance_nospec(struct aws_byte_cursor *const cursor, size_t len) {
                                                      ;
    struct aws_byte_cursor rv;
    if (len <= cursor->len && len <= ((18446744073709551615UL) >> 1) && cursor->len <= ((18446744073709551615UL) >> 1)) {
        uintptr_t mask = aws_nospec_mask(len, cursor->len + 1);
        len = len & mask;
        cursor->ptr = (uint8_t *)((uintptr_t)cursor->ptr & mask);
        cursor->len = cursor->len & mask;
        rv.ptr = cursor->ptr;
        rv.len = len & mask;
        cursor->ptr = (cursor->ptr == ((void*)0)) ? ((void*)0) : cursor->ptr + len;
        cursor->len -= len;
    } else {
        rv.ptr = ((void*)0);
        rv.len = 0;
    }
                                                       ;
                                                    ;
    return rv;
}
_Bool aws_byte_cursor_read(struct aws_byte_cursor *restrict cur, void *restrict dest, const size_t len) {
                                                   ;
                                                    ;
    if (len == 0) {
        return 1;
    }
    struct aws_byte_cursor slice = aws_byte_cursor_advance_nospec(cur, len);
    if (slice.ptr) {
        memcpy(dest, slice.ptr, len);
                                                        ;
                                                         ;
        return 1;
    }
                                                    ;
    return 0;
}
_Bool aws_byte_cursor_read_be16(struct aws_byte_cursor *cur, uint16_t *var) {
                                                   ;
                                                     ;
    _Bool rv = aws_byte_cursor_read(cur, var, 2);
    if (__builtin_expect(!!(rv), 1)) {
        *var = aws_ntoh16(*var);
    }
                                                    ;
    return rv;
}
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
extern size_t __VERIFIER_nondet_size_t();
size_t nondet_size_t() {
    return __VERIFIER_nondet_size_t();
}
void __CPROVER_assume(int cond) {
  if (!cond) {
    exit(0);
  }
}
struct store_byte_from_buffer {
    size_t index;
    uint8_t byte;
};
void assert_bytes_match(const uint8_t *const a, const uint8_t *const b, const size_t len);
void assert_byte_from_buffer_matches(const uint8_t *const buffer, const struct store_byte_from_buffer *const b);
void save_byte_from_array(const uint8_t *const array, const size_t size, struct store_byte_from_buffer *const storage);
void ensure_byte_cursor_has_allocated_buffer_member(struct aws_byte_cursor *const cursor);
void ensure_byte_cursor_has_allocated_buffer_member(struct aws_byte_cursor *const cursor) {
    if (cursor != ((void*)0)) {
        cursor->ptr = malloc(cursor->len);
    }
}
void assert_bytes_match(const uint8_t *const a, const uint8_t *const b, const size_t len) {
    assert(len == 0 || !a == !b);
    if (len > 0 && a != ((void*)0) && b != ((void*)0)) {
        size_t i;
        __CPROVER_assume(i < len && len < ((18446744073709551615UL) >> (8 + 1)));
        assert(a[i] == b[i]);
    }
}
void assert_byte_from_buffer_matches(const uint8_t *const buffer, const struct store_byte_from_buffer *const b) {
    if (buffer && b) {
        assert(*(buffer + b->index) == b->byte);
    }
}
void save_byte_from_array(const uint8_t *const array, const size_t size, struct store_byte_from_buffer *const storage) {
    if (size > 0 && array && storage) {
        storage->index = nondet_size_t();
        __CPROVER_assume(storage->index < size);
        storage->byte = array[storage->index];
    }
}
void aws_byte_cursor_read_common_harness() {
    struct aws_byte_cursor cur;
    uint16_t *dest = malloc(sizeof(*dest));
    ensure_byte_cursor_has_allocated_buffer_member(&cur);
    __CPROVER_assume(aws_byte_cursor_is_valid(&cur));
    __CPROVER_assume(cur.len >= 2);
    __CPROVER_assume((((2) == 0) || (cur.ptr)));
    __CPROVER_assume(dest != ((void*)0));
    struct aws_byte_cursor old_cur = cur;
    struct store_byte_from_buffer old_byte_from_cur;
    save_byte_from_array(cur.ptr, cur.len, &old_byte_from_cur);
    uint16_t dest_copy;
    memcpy(&dest_copy, old_cur.ptr, 2);
    dest_copy = aws_ntoh16(dest_copy);
    if (aws_byte_cursor_read_be16(&cur, dest)) {
        assert_bytes_match((uint8_t *)&dest_copy, (uint8_t *)dest, 2);
        assert(2 <= old_cur.len && old_cur.len <= ((18446744073709551615UL) >> 1));
        assert(cur.ptr == old_cur.ptr + 2);
        assert(cur.len == old_cur.len - 2);
    } else {
        assert(cur.len == old_cur.len);
        if (cur.len != 0) {
            assert_byte_from_buffer_matches(cur.ptr, &old_byte_from_cur);
        }
    }
    assert(aws_byte_cursor_is_valid(&cur));
}

void aws_byte_cursor_read_be16_harness() {
    aws_byte_cursor_read_common_harness();
}
int main() {
    // before_target methods
    // No before_target methods

    // Target method
    aws_byte_cursor_read_be16_harness();

    // after_target methods
    // No after_target methods

    return 0;
}
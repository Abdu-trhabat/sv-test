/* Preprocessing compatibility for GCC-generated glibc declarations.
 * These diagnostic annotations are unsupported by Clang 18. Keep the
 * declarations and other attributes (notably noreturn and malloc) intact.
 * This header is used only to produce .i files, not during trace generation.
 */
#include <sys/cdefs.h>

#ifdef __GLIBC__
#undef __attr_access
#define __attr_access(x)
#undef __fortified_attr_access
#define __fortified_attr_access(a, o, s)
#undef __attr_access_none
#define __attr_access_none(argno)
#undef __attr_dealloc
#define __attr_dealloc(dealloc, argno)
#endif

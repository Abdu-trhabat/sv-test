<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

The programs are assumed to be written in GNU C (some of them adhere to ANSI C).
Each program consists of a single file, which is either: a .i file, which is preprocessed, or a .c file, which may be un-preprocessed.
A verifier may distinguish between preprocessed and un-preprocessed programs using the given file extensions.
Un-preprocessed programs fulfill the following requirements:
- `#include` directives only include headers from the C standard or `pthread.h`.
- No `#define` directives are used.
- All used macros are defined by the C standard or `pthread.h`.
A verifier may preprocess a .c file using `cpp -m32` or `cpp -m64`, depending on the program architecture (see below), without requiring additional macro definitions (`-D` arguments) or include paths (`-I` arguments) to be specified.
Note that witnesses should still refer to the un-preprocessed .c file (a verifier can rely on [`#line` directives](https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Line-Control.html) to achieve this).
Each program contains all code that is needed for the verification, i.e., all non-standard functions are defined.

For each category, we specify whether the programs are written for
an **ILP32 (32-bit)** or an **LP64 (64-bit)** architecture
(cf. <https://www.unix.org/whitepapers/64bit.html>).

In the following, we list a few conventions that are used in some of the verification tasks,
in order to express special information that is difficult to capture with the C language.

**`__VERIFIER_nondet_X()`:**
In order to model nondeterministic values, the following functions can be assumed to return
an arbitrary value of the indicated type:
`__VERIFIER_nondet_X()`
with `X` in {`bool`, `char`, `int`, `int128`, `float`, `double`, `loff_t`, `long`, `longlong`,
`pchar`, `pthread_t`, `sector_t`, `short`, `size_t`, `u32`,
`uchar`, `uint`, `uint128`, `ulong`, `ulonglong`, `unsigned`, `ushort`}
(no side effects, `pointer` for `void *`, etc.).
The verification tool can assume that the functions are implemented according to the following template:
```c
X __VERIFIER_nondet_X() { X val; return val; }
```

**`__VERIFIER_nondet_memory(void *, size_t)`:**
This function initializes the given memory block with arbitrary values.
The first argument must be a valid pointer to the start of a memory block of the given size.
The second argument specifies the size of the memory to initialize and must match the size of the memory block that the first argument points to.
The dereference of any pointer value set through this method results in undefined behavior.
This means that pointer values must be explicitly set through different means before they can be dereferenced.
The verification tool can assume that `__VERIFIER_nondet_memory` is implemented as follows:
```c
void __VERIFIER_nondet_memory(void *mem, size_t size) {
    unsigned char *p = mem;
    for (size_t i = 0; i < size; i++) {
        p[i] = __VERIFIER_nondet_uchar();
    }
}
```
Example uses of `__VERIFIER_nondet_memory`:
```c
struct structType s;
__VERIFIER_nondet_memory(&s, sizeof(s));

int * values = malloc(sizeof(int) * 20);
__VERIFIER_nondet_memory(values, sizeof(int) * 20);
```

**`__VERIFIER_atomic_*()`:**
These functions are deprecated, but still used in existing tasks.
Please consider using standard C features from `stdatomic.h` and `pthread.h` to model atomicity (e.g., atomic types, atomic loads / stores, mutexes, ...).
For modeling an atomic execution of a sequence of statements in a multi-threaded run-time environment,
those statements can be placed between two function calls `__VERIFIER_atomic_begin()` and `__VERIFIER_atomic_end()`
or those statements can be placed in a function whose name starts with `__VERIFIER_atomic_`.
The verifiers are instructed to assume that the execution between those calls is not interrupted.
The two calls need to occur within the same control-flow block; nesting or interleaving of those function calls is not allowed.

**`malloc()`, `free()`:**
We assume that the functions `malloc` and `alloca` always return
a valid pointer, i.e., the memory allocation never fails,
and function `free` always deallocates the memory and
makes the pointer invalid for further dereferences.


# TODO: README
follows the GNU C standard, many programs even adhere to ANSI C

### Programs

#### C Programs

Each C program consists of a single file, which is either: a `.i` file, which is preprocessed, or a `.c` file, which may be un-preprocessed.
Un-preprocessed programs fulfill the following requirements:
1. `#include` directives only include headers from the C standard or `pthread.h`.
2. No `#define` directives are used.
3. All used macros are defined by the C standard or `pthread.h`.

Each program contains all code that is needed for the verification, i.e., all non-standard functions are defined.

### Behavioral Specifications

There are several 'default' specifications that many people use:
  - [unreach-call](c/properties/unreach-call.prp):
    A certain function call must not be reachable in the program.
  - [valid-memsafety, valid-deref, valid-free, valid-memtrack](c/properties/valid-memsafety.prp):
    A certain memory safety property must hold in the program.
    "memsafety" is the conjunction the other three properties.
  - [valid-memcleanup](c/properties/valid-memcleanup.prp):
    All allocated memory must be deallocated before the program terminates (note that this is stronger then avoiding memory leaks).
  - [no-overflow](c/properties/no-overflow.prp):
    A certain kind of undefined behavior (overflows of signed ints) must not be present in the program.
  - [termination](c/properties/termination.prp):
    The program must terminate on all execution paths.

The above specifications are used, e.g., by SV-COMP, and the [competition reports](https://doi.org/10.1007/978-3-030-45237-7_21)
explains those specifications.

### Test Specifications

The following are some 'default' specifications that many people use for test-case generation:
  - [coverage-branches](c/properties/coverage-branches.prp):
    The generated test suite should cover all branches of the program.
  - [coverage-error-call](c/properties/coverage-error-call.prp):
    The generated test suite should contain (at least) one test case that covers the call of a certain function.

The above test specifications are used, e.g., by Test-Comp, and the [competition reports](https://doi.org/10.1007/978-3-030-45234-6_25)
define those specifications.

### Parameters

The parameters of a verification task are needed to make additional information
about the verification task available to the verification run.
The most prominent parameter is the machine model;
currently, there are verification tasks for the ILP32 (32-bit) and the LP64 (64-bit) architecture
(cf. https://www.unix.org/whitepapers/64bit.html).

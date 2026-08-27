<!--
This file is part of the SV-Benchmarks collection of verification tasks:
https://github.com/sosy-lab/sv-benchmarks

SPDX-FileCopyrightText: 2011-2026 The SV-Benchmarks Community

SPDX-License-Identifier: Apache-2.0
-->

## Standard
The programs adhere to ISO C or GNU C.

All programs in a directory adhere to the same standard, as specified by the `Makefile` in the directory.

## Architecture
Each program specifies its architecture, ILP32 (32-bit) or [LP64] (64-bit), in the corresponding task definition (in the `data_model` field).

[LP64]: https://www.unix.org/whitepapers/64bit.html

All programs in a directory use the same architecture, as specified by the `Makefile` in the directory.

## Preprocessing
Each program consists of a single file, which is either: a `.i` file, which is preprocessed, or a `.c` file, which may be un-preprocessed.
Un-preprocessed programs fulfill the following requirements:
1. `#include` directives only include headers from the C standard or `pthread.h`.
2. No `#define` directives are used.
3. All used macros are defined by the C standard or `pthread.h`.

A verifier may distinguish between preprocessed and un-preprocessed programs using the given file extensions.
A verifier may preprocess a `.c` file using `cpp -m32` or `cpp -m64`, depending on the program architecture (see above), without requiring additional macro definitions (`-D` arguments) or include paths (`-I` arguments) to be specified.
Note that witnesses should still refer to the un-preprocessed `.c` file (a verifier can rely on [`#line` directives](https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Line-Control.html) to achieve this).

## Special functions
The programs may use the non-standard functions described below.
Each program contains all code that is needed for the verification, i.e., all non-standard non-special functions are defined.

### Undefined functions
The following special functions are declared but not defined in the programs (if used).
Tools are expected to identify their calls by name and model their behavior appropriately.

#### `__VERIFIER_nondet_X()`
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

#### `__VERIFIER_nondet_memory(void *, size_t)`
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

#### `__VERIFIER_atomic_*()` _(deprecated)_
For modeling an atomic execution of a sequence of statements in a multi-threaded run-time environment,
those statements can be placed between two function calls `__VERIFIER_atomic_begin()` and `__VERIFIER_atomic_end()`
or those statements can be placed in a function whose name starts with `__VERIFIER_atomic_`.
The verifiers are instructed to assume that the execution between those calls is not interrupted.
The two calls need to occur within the same control-flow block; nesting or interleaving of those function calls is not allowed.

**NB!** Although these functions are deprecated, they are still used in existing tasks.
For new tasks, consider using standard C features from `stdatomic.h` and `pthread.h` to model atomicity (e.g., atomic types, atomic loads / stores, mutexes, ...).

### Defined functions
The following special functions are defined in the programs (if used).
Tools should not identify their calls by name (except for the reachability of `reach_error()`) or model their behavior.
These functions are only described to ensure consistency across programs.

#### `reach_error()`
This function is used for the unreach-call and coverage-error-call properties.
It is defined as follows:
```c
#include <assert.h>
void reach_error() { assert(0); }
```

#### `assume_abort_if_not(int)`
This function is often used to restrict the values returned by the `__VERIFIER_nondet_*()` functions.
It is defined as follows:
```c
extern void abort(void);
void assume_abort_if_not(int cond) {
  if(!cond) {abort();}
}
```

## Assumptions
The following non-standard assumptions are made by the programs.

#### `malloc()`, `free()`
We assume that the functions `malloc`, `calloc` and `realloc` always return
a valid pointer, i.e., the memory allocation never fails,
and function `free` always deallocates the memory and
makes the pointer invalid for further dereferences.
Moreover, we assume that the function `alloca` always returns
a valid pointer, i.e., the stack never overflows.

#### `pthread_*()`
We assume the following about `pthread.h` functions:
* `pthread_mutex_lock` always succeeds,
* `pthread_mutex_unlock` always succeeds,
* `pthread_key_create` never fails with `EAGAIN` or `ENOMEM`,
* `pthread_setspecific` never fails with `ENOMEM`.

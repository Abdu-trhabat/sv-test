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
<ol>
  <li><tt>#include</tt> directives only include headers from the C standard or <tt>pthread.h</tt>.</li>
  <li>No <tt>#define</tt> directives are used.</li>
  <li>All used macros are defined by the C standard or <tt>pthread.h</tt>.</li>
</ol>
A verifier may preprocess a .c file using <tt>cpp -m32</tt> or <tt>cpp -m64</tt>, depending on the program architecture (see below), without requiring additional macro definitions (<tt>-D</tt> arguments) or include paths (<tt>-I</tt> arguments) to be specified.
Note that witnesses should still refer to the un-preprocessed .c file (a verifier can rely on <a href="https://gcc.gnu.org/onlinedocs/gcc-14.2.0/cpp/Line-Control.html"><tt>#line</tt> directives</a> to achieve this).
Each program contains all code that is needed for the verification, i.e., all non-standard functions are defined.

Potential competition participants are invited to submit benchmark verification tasks until the specified date.
Verification tasks have to fulfill two requirements, to be eligible for the competition:
(1) the program has to be written in GNU C or ANSI C, and
(2) the program has to come with a specification given by one of the properties stated above.
Other specifications are possible, but need to be proposed and discussed.

New proposed categories will be included if at least three different tools or teams participate in the category
(i.e., not the same tool twice with a different configuration).

For each category, we specify whether the programs are written for
an <strong>ILP32 (32-bit)</strong> or an <strong>LP64 (64-bit)</strong> architecture
(cf. <a href="https://www.unix.org/whitepapers/64bit.html">https://www.unix.org/whitepapers/64bit.html</a>).

In the following, we list a few conventions that are used in some of the verification tasks,
in order to express special information that is difficult to capture with the C language.

<strong>__VERIFIER_nondet_X(): </strong>
In order to model nondeterministic values, the following functions can be assumed to return
an arbitrary value of the indicated type:
<tt>__VERIFIER_nondet_X()</tt>
with <tt>X</tt> in {<tt>bool</tt>, <tt>char</tt>, <tt>int</tt>, <tt>int128</tt>, <tt>float</tt>, <tt>double</tt>, <tt>loff_t</tt>, <tt>long</tt>, <tt>longlong</tt>,
<tt>pchar</tt>, <tt>pthread_t</tt>, <tt>sector_t</tt>, <tt>short</tt>, <tt>size_t</tt>, <tt>u32</tt>,
<tt>uchar</tt>, <tt>uint</tt>, <tt>uint128</tt>, <tt>ulong</tt>, <tt>ulonglong</tt>, <tt>unsigned</tt>, <tt>ushort</tt>}
(no side effects, <tt>pointer</tt> for <tt>void *</tt>, etc.).
The verification tool can assume that the functions are implemented according to the following template:<br />
<tt>X __VERIFIER_nondet_X() { X val; return val; }</tt>

<strong>__VERIFIER_nondet_memory(void *, size_t):</strong>
This function initializes the given memory block with arbitrary values.
The first argument must be a valid pointer to the start of a memory block of the given size.
The second argument specifies the size of the memory to initialize and must match the size of the memory block that the first argument points to.
The dereference of any pointer value set through this method results in undefined behavior.
This means that pointer values must be explicitly set through different means before they can be dereferenced.
The verification tool can assume that <tt>__VERIFIER_nondet_memory</tt> is implemented as follows:
<pre>
void __VERIFIER_nondet_memory(void *mem, size_t size) {
    unsigned char *p = mem;
    for (size_t i = 0; i < size; i++) {
        p[i] = __VERIFIER_nondet_uchar();
    }
}
</pre>
Example uses of <tt>__VERIFIER_nondet_memory</tt>:
<pre>
struct structType s;
__VERIFIER_nondet_memory(&s, sizeof(s));

int * values = malloc(sizeof(int) * 20);
__VERIFIER_nondet_memory(values, sizeof(int) * 20);
</pre>

<strong>__VERIFIER_atomic_*(): </strong>
These functions are deprecated, but still used in existing tasks.
Please consider using standard C features from <tt>stdatomic.h</tt> and <tt>pthread.h</tt> to model atomicity (e.g., atomic types, atomic loads / stores, mutexes, ...).<br>
For modeling an atomic execution of a sequence of statements in a multi-threaded run-time environment,
those statements can be placed between two function calls <tt>__VERIFIER_atomic_begin()</tt> and <tt>__VERIFIER_atomic_end()</tt>
or those statements can be placed in a function whose name starts with <tt>__VERIFIER_atomic_</tt>.
The verifiers are instructed to assume that the execution between those calls is not interrupted.
The two calls need to occur within the same control-flow block; nesting or interleaving of those function calls is not allowed.

<strong>malloc(), free(): </strong>
We assume that the functions <tt>malloc</tt> and <tt>alloca</tt> always return
a valid pointer, i.e., the memory allocation never fails,
and function <tt>free</tt> always deallocates the memory and
makes the pointer invalid for further dereferences.

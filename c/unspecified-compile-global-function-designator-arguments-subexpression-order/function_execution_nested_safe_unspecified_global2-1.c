// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2007-2023 Dirk Beyer <https://www.sosy-lab.org>
//
// SPDX-License-Identifier: Apache-2.0

//Example in "An Executable Formal Semantics of C with Applications"

#include <stdlib.h>
#include <string.h>

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "function_execution_nested_safe_unspecified_global2-1.c", 3, "reach_error"); }

char global_char;
const char* change_log[6];
int log_index = 0;

void log_change(const char* new_value) {
    if (log_index < 6) {
        change_log[log_index] = new_value;
        log_index++;
    } else {
        reach_error();
        abort();
    }
}

int a(int x, int y) {
    global_char = 'a';
    log_change("a");
    return 0;
}

int b() {
    global_char = 'b';
    log_change("b");
    return 0;
}

int c(int x) {
    global_char = 'c';
    log_change("c");
    return 0;
}

int d() {
    global_char = 'd';
    log_change("d");
    return 0;
}

void e(int x) {
    global_char = 'e';
    log_change("e");
}

void (*f())(int) {
    global_char = 'f';
    log_change("f");
    return e;
}

void check_execution_order() {
    int d_index = -1, c_index = -1, b_index = -1, a_index = -1, f_index = -1, e_index = -1;

    for (int i = 0; i < log_index; i++) {
        if (strcmp(change_log[i], "d") == 0) d_index = i;
        if (strcmp(change_log[i], "c") == 0) c_index = i;
        if (strcmp(change_log[i], "b") == 0) b_index = i;
        if (strcmp(change_log[i], "a") == 0) a_index = i;
        if (strcmp(change_log[i], "f") == 0) f_index = i;
        if (strcmp(change_log[i], "e") == 0) e_index = i;
    }

    if (d_index > c_index && c_index != -1) {
        reach_error();
        abort();
    }
    if ((b_index > a_index && b_index != -1) || (c_index > a_index && c_index != -1)) {
        reach_error();
        abort();
    }
    if ((a_index > e_index && a_index != -1) || (f_index > e_index && f_index != -1)) {
        reach_error();
        abort();
    }
}

int main() {
    // C11 ISO/IEC 9899:201x Annex J.1 Unspecified behaviour and 6.5.16 state that the order in which the operands of an assignment operator are evaluated is not specified
    f()(a(b(), c(d())));
    check_execution_order();
    return 0;
}

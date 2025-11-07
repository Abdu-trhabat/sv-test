// This file is part of the SV-Benchmarks collection of verification tasks:
// [https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks](https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks)
//
// SPDX-FileCopyrightText: 2025 Edoardo Manino
//
// SPDX-License-Identifier: MIT


#include "verifier_functions.h"

#include <math.h>

int main() /* check_tangent_bound */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(isgreaterequal(x, -1.0f));
	
	float y = log1pf(x);
	
	__VERIFIER_assert(isgreaterequal(x, y)); /* Expected result: verification successful */

    return 0;
}

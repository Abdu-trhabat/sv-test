// This file is part of the SV-Benchmarks collection of verification tasks:
// [https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks](https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks)
//
// SPDX-FileCopyrightText: 2025 Edoardo Manino
//
// SPDX-License-Identifier: MIT


#include "verifier_functions.h"

#include <math.h>

int main() /* check_greater_than_one */
{
	float x = __VERIFIER_nondet_float();
	
	__VERIFIER_assume(!isnan(x));
	
	float y = expm1f(x);
	
	__VERIFIER_assert(isgreaterequal(y, -1.0f)); /* Expected result: verification successful */

    return 0;
}

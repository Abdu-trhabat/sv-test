// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2023 Edoardo Manino
//
// SPDX-License-Identifier: MIT

#include <verifier_functions.h>

#include <math.h>

float softsign(float x)
{
	return x / (fabsf(x) + 1.0f);
}

#define SOFTSIGN_CHECK_NEXT 1e-5f

int main() /* check_non_decreasing */
{
	float x1 = __VERIFIER_nondet_float();
	float x2 = x1 + SOFTSIGN_CHECK_NEXT;
	
	__VERIFIER_assume(!isnan(x1) && !isinf(x1));
	
	float y1 = softsign(x1);
	float y2 = softsign(x2);
	
	/* rounding the denominator may cause the softsign to decrease rather than increase */
	__VERIFIER_assert(islessequal(y1, y2)); /* Expected result: verification failure */

    return 0;
}

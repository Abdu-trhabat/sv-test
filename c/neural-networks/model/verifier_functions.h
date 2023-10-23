#ifndef _VERIFICATION_FUNCTIONS_H
#define _VERIFICATION_FUNCTIONS_H

// Functions for verification (harness).
// Mainly consists of assume, reach_error, and nondets
// See: https://sv-comp.sosy-lab.org/2023/rules.php

float __VERIFIER_nondet_float();
void reach_error();

#include <stdlib.h>

#define __VERIFIER_assume(cond) if(!(cond)) abort()
#define __VERIFIER_assert(cond) if(!(cond)) reach_error()

#endif
